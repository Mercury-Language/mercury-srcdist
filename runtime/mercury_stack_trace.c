/*
** vim: ts=4 sw=4 expandtab
*/
/*
** Copyright (C) 1998-2009 The University of Melbourne.
** This file may only be copied under the terms of the GNU Library General
** Public License - see the file COPYING.LIB in the Mercury distribution.
*/

/*
** mercury_stack_trace.c - implements stack traces.
**
** Main authors: Tyson Dowd (trd), Zoltan Somogyi (zs).
*/

#include "mercury_imp.h"
#include "mercury_stack_trace.h"
#include "mercury_stack_layout.h"
#include "mercury_debug.h"
#include "mercury_array_macros.h"
#include "mercury_trace_base.h"
#include "mercury_tabling.h"
#include <stdio.h>

#if defined(MR_HAVE__SNPRINTF) && ! defined(MR_HAVE_SNPRINTF)
  #define snprintf	_snprintf
#endif

static  MR_StackWalkStepResult
                    MR_stack_walk_succip_layout(MR_Code *success,
                        const MR_LabelLayout **return_label_layout_ptr,
                        MR_Word **base_sp_ptr, MR_Word **base_curfr_ptr,
                        const char **problem_ptr);

#ifndef MR_HIGHLEVEL_CODE

typedef enum {
    MR_FRAME_ON_MAIN_BRANCH,
    MR_INTERNAL_FRAME_ON_SIDE_BRANCH,
    MR_TOP_FRAME_ON_SIDE_BRANCH,
    MR_TERMINAL_TOP_FRAME_ON_SIDE_BRANCH
} MR_Nondet_Frame_Category;

typedef struct {
    MR_Traverse_Nondet_Frame_Func   *func;
    void                            *func_data;
} MR_Traverse_Nondet_Frame_Func_Info;

typedef void        MR_Dump_Or_Traverse_Nondet_Frame_Func(void *user_data,
                        MR_Nondet_Frame_Category category, MR_Word *top_fr,
                        const MR_LabelLayout *layout, MR_Word *base_sp,
                        MR_Word *base_curfr, int level_number);

static MR_Dump_Or_Traverse_Nondet_Frame_Func MR_dump_nondet_stack_frame;
static MR_Dump_Or_Traverse_Nondet_Frame_Func MR_traverse_nondet_stack_frame;

static  const char  *MR_step_over_nondet_frame(
                        MR_Dump_Or_Traverse_Nondet_Frame_Func *func,
                        void *func_data, int level_number, MR_Word *fr);
static void         MR_init_nondet_branch_infos(MR_Word *base_maxfr,
                    	const MR_LabelLayout *top_layout, MR_Word *base_sp,
                        MR_Word *base_curfr);
static  MR_bool     MR_find_matching_branch(MR_Word *fr, int *branch_ptr);
static  void        MR_record_temp_redoip(MR_Word *fr);
static  MR_bool     MR_nofail_ip(MR_Code *ip);
static  MR_Code     *MR_find_nofail_temp_redoip(MR_Word *fr);
static  void        MR_erase_temp_redoip(MR_Word *fr);

#endif  /* !MR_HIGHLEVEL_CODE */

static  void        MR_dump_stack_record_init(MR_bool include_trace_data,
                        MR_bool include_contexts);
static  int         MR_dump_stack_record_frame(FILE *fp,
                        const MR_LabelLayout *label_layout,
                        MR_Word *base_sp, MR_Word *base_curfr,
                        MR_Unsigned reused_frames,
                        MR_PrintStackRecord print_stack_record,
                        MR_bool at_line_limit);
static  void        MR_dump_stack_record_flush(FILE *fp,
                        MR_bool include_trace_data,
                        MR_PrintStackRecord print_stack_record);

static  void        MR_print_proc_id_internal(FILE *fp,
                        const MR_ProcLayout *proc_layout, MR_bool spec,
                        MR_bool print_mode, MR_bool separate);

static  void        MR_maybe_print_proc_id(FILE *fp, MR_bool print_proc_id,
                        const MR_ProcLayout *proc_layout, const char *path);
static  void        MR_maybe_print_context(FILE *fp, MR_bool print_context,
                        const char *filename, int lineno);
static  void        MR_maybe_print_parent_context(FILE *fp,
                        MR_bool print_parent, MR_bool verbose,
                        const char *filename, int lineno);

static  MR_bool     MR_call_details_are_valid(const MR_ProcLayout *proc_layout,
                        MR_Word *base_sp, MR_Word *base_curfr);
static  MR_bool     MR_call_is_before_event_or_seq(
                        MR_FindFirstCallSeqOrEvent seq_or_event,
                        MR_Unsigned seq_no_or_event_no,
                        const MR_ProcLayout *proc_layout, MR_Word *base_sp,
                        MR_Word *base_curfr);

/* see comments in mercury_stack_trace.h */
MR_Code *MR_stack_trace_bottom;
MR_Word *MR_nondet_stack_trace_bottom;

void
MR_dump_stack(MR_Code *success_pointer, MR_Word *det_stack_pointer,
    MR_Word *current_frame, MR_bool include_trace_data)
{
    const MR_Internal       *label;
    const MR_LabelLayout    *label_layout;
    const char              *result;
    MR_bool                 stack_dump_available;
    char                    *env_suppress;

    env_suppress = getenv("MERCURY_SUPPRESS_STACK_TRACE");
    if (env_suppress != NULL) {
        return;
    }

#ifdef MR_STACK_TRACE
    stack_dump_available = MR_TRUE;
#else
    stack_dump_available = MR_FALSE;
#endif

    if (stack_dump_available) {
        fprintf(stderr, "Stack dump follows:\n");

        MR_do_init_modules();
        label = MR_lookup_internal_by_addr(success_pointer);
        if (label == NULL) {
            fprintf(stderr, "internal label not found\n");
        } else {
            label_layout = label->MR_internal_layout;
            result = MR_dump_stack_from_layout(stderr, label_layout,
                det_stack_pointer, current_frame, include_trace_data,
                MR_TRUE, 0, 0, &MR_dump_stack_record_print);

            if (result != NULL) {
                fprintf(stderr, "%s\n", result);
            }
        }
    } else {
        fprintf(stderr, "Stack dump not available in this grade.\n");
    }
}

const char *
MR_dump_stack_from_layout(FILE *fp, const MR_LabelLayout *label_layout,
    MR_Word *det_stack_pointer, MR_Word *current_frame,
    MR_bool include_trace_data, MR_bool include_contexts,
    MR_FrameLimit frame_limit, MR_SpecLineLimit line_limit,
    MR_PrintStackRecord print_stack_record)
{
    MR_StackWalkStepResult  result;
    const MR_ProcLayout     *proc_layout;
    const MR_LabelLayout    *cur_label_layout;
    const MR_LabelLayout    *prev_label_layout;
    const char              *problem;
    MR_Word                 *stack_trace_sp;
    MR_Word                 *stack_trace_curfr;
    MR_Word                 *old_trace_sp;
    MR_Word                 *old_trace_curfr;
    int                     frames_dumped_so_far;
    int                     lines_dumped_so_far;
    MR_Unsigned             reused_frames;

    MR_do_init_modules();
    MR_dump_stack_record_init(include_trace_data, include_contexts);

    stack_trace_sp = det_stack_pointer;
    stack_trace_curfr = current_frame;

    cur_label_layout = label_layout;

    frames_dumped_so_far = 0;
    lines_dumped_so_far = 0;
    do {
        if (frame_limit > 0 && frames_dumped_so_far >= frame_limit) {
            MR_dump_stack_record_flush(fp, include_trace_data,
                print_stack_record);
            fprintf(fp, "<more stack frames snipped>\n");
            return NULL;
        }

        if (line_limit > 0 && lines_dumped_so_far >= line_limit) {
            MR_dump_stack_record_flush(fp, include_trace_data,
                print_stack_record);
            fprintf(fp, "<more stack frames snipped>\n");
            return NULL;
        }

        proc_layout = cur_label_layout->MR_sll_entry;
        prev_label_layout = cur_label_layout;

        old_trace_sp    = stack_trace_sp;
        old_trace_curfr = stack_trace_curfr;

        result = MR_stack_walk_step(proc_layout, &cur_label_layout,
            &stack_trace_sp, &stack_trace_curfr, &reused_frames, &problem);
        if (result == MR_STEP_ERROR_BEFORE) {
            MR_dump_stack_record_flush(fp, include_trace_data,
                print_stack_record);
            return problem;
        } else if (result == MR_STEP_ERROR_AFTER) {
            (void) MR_dump_stack_record_frame(fp, prev_label_layout,
                old_trace_sp, old_trace_curfr, reused_frames,
                print_stack_record, MR_FALSE);

            MR_dump_stack_record_flush(fp, include_trace_data,
                print_stack_record);
            return problem;
        } else {
            lines_dumped_so_far += MR_dump_stack_record_frame(fp,
                prev_label_layout, old_trace_sp, old_trace_curfr,
                reused_frames, print_stack_record,
                lines_dumped_so_far == line_limit);
        }

        frames_dumped_so_far++;
    } while (cur_label_layout != NULL);

    MR_dump_stack_record_flush(fp, include_trace_data, print_stack_record);
    return NULL;
}

const MR_LabelLayout *
MR_find_nth_ancestor(const MR_LabelLayout *label_layout,
    MR_Level ancestor_level, MR_Word **stack_trace_sp,
    MR_Word **stack_trace_curfr, MR_Level *actual_level_ptr,
    const char **problem)
{
    MR_StackWalkStepResult  result;
    const MR_LabelLayout    *return_label_layout;
    MR_Unsigned             level;
    MR_Unsigned             reused_frames;

    MR_do_init_modules();
    *problem = NULL;
    level = 0;
    while (level < ancestor_level && label_layout != NULL) {
        result = MR_stack_walk_step(label_layout->MR_sll_entry,
            &return_label_layout, stack_trace_sp, stack_trace_curfr,
            &reused_frames, problem);

        if (result != MR_STEP_OK) {
            /* *problem has already been filled in */
            return NULL;
        }

        label_layout = return_label_layout;
        level += 1 + reused_frames;
    }

    if (label_layout == NULL && *problem == NULL) {
        *problem = "not that many ancestors";
    }

    *actual_level_ptr = level;
    return label_layout;
}

MR_StackWalkStepResult
MR_stack_walk_step(const MR_ProcLayout *proc_layout,
    const MR_LabelLayout **return_label_layout_ptr,
    MR_Word **stack_trace_sp_ptr, MR_Word **stack_trace_curfr_ptr,
    MR_Unsigned *reused_frames_ptr, const char **problem_ptr)
{
    MR_LongLval             location;
    MR_LongLvalType         type;
    int                     number;
    int                     determinism;
    MR_Code                 *success;
    MR_Unsigned             reused_frames;

    *return_label_layout_ptr = NULL;

    determinism = proc_layout->MR_sle_detism;
    if (determinism < 0) {
        /*
        ** This means we have reached some handwritten code that has
        ** no further information about the stack frame.
        */

        *problem_ptr = "reached procedure with no stack trace info";
        return MR_STEP_ERROR_BEFORE;
    }

    location = proc_layout->MR_sle_succip_locn;
    if (MR_DETISM_DET_STACK(determinism)) {
        type = MR_LONG_LVAL_TYPE(location);
        number = MR_LONG_LVAL_NUMBER(location);

        if (type != MR_LONG_LVAL_TYPE_STACKVAR) {
            *problem_ptr = "can only handle stackvars";
            return MR_STEP_ERROR_AFTER;
        }

        success = (MR_Code *) MR_based_stackvar(*stack_trace_sp_ptr, number);

        MR_trace_find_reused_frames(proc_layout, *stack_trace_sp_ptr,
            reused_frames);
        *reused_frames_ptr = reused_frames;

        *stack_trace_sp_ptr = *stack_trace_sp_ptr -
            proc_layout->MR_sle_stack_slots;
    } else {
        /* succip is always saved in succip_slot */
        assert(location.MR_long_lval == -1);
        /*
        ** Note that curfr always points to an ordinary procedure frame,
        ** never to a temp frame, and this property continues to hold
        ** while we traverse the nondet stack via the succfr slot.
        ** So it is safe to access the succip and succfr slots without checking
        ** what kind of frame it is.
        */

        success = MR_succip_slot(*stack_trace_curfr_ptr);
        *reused_frames_ptr = 0;
        *stack_trace_curfr_ptr = MR_succfr_slot(*stack_trace_curfr_ptr);
    }

    return MR_stack_walk_succip_layout(success, return_label_layout_ptr,
        stack_trace_sp_ptr, stack_trace_curfr_ptr, problem_ptr);
}

static MR_StackWalkStepResult
MR_stack_walk_succip_layout(MR_Code *success,
    const MR_LabelLayout **return_label_layout_ptr,
    MR_Word **stack_trace_sp_ptr, MR_Word **stack_trace_curfr_ptr,
    const char **problem_ptr)
{
    MR_Internal             *label;

    if (success == MR_stack_trace_bottom) {
        return MR_STEP_OK;
    }

#if !defined(MR_HIGHLEVEL_CODE) && defined(MR_STACK_SEGMENTS)
    if (success == MR_ENTRY(MR_pop_detstack_segment)) {
        success = (MR_Code *) MR_based_stackvar(*stack_trace_sp_ptr, 2);
        *stack_trace_sp_ptr = (MR_Word *)
            MR_based_stackvar(*stack_trace_sp_ptr, 1);
    }
#endif /* !MR_HIGHLEVEL_CODE && MR_STACK_SEGMENTS */

    label = MR_lookup_internal_by_addr(success);
    if (label == NULL) {
        *problem_ptr = "reached unknown label";
        return MR_STEP_ERROR_AFTER;
    }

    if (label->MR_internal_layout == NULL) {
        *problem_ptr = "reached label with no stack layout info";
        return MR_STEP_ERROR_AFTER;
    }

    *return_label_layout_ptr = label->MR_internal_layout;
    return MR_STEP_OK;
}

/**************************************************************************/

void
MR_dump_nondet_stack(FILE *fp, MR_Word *limit_addr, MR_FrameLimit frame_limit,
    MR_SpecLineLimit line_limit, MR_Word *base_maxfr)
{
#ifndef MR_HIGHLEVEL_CODE

    MR_dump_nondet_stack_from_layout(fp, limit_addr, frame_limit, line_limit,
        base_maxfr, NULL, NULL, NULL);

#else   /* !MR_HIGHLEVEL_CODE */

    MR_fatal_error("MR_dump_nondet_stack in high level C grade");

#endif  /* !MR_HIGHLEVEL_CODE */
}

#ifdef MR_HIGHLEVEL_CODE

void
MR_dump_nondet_stack_from_layout(FILE *fp, MR_Word *limit_addr,
    MR_FrameLimit frame_limit, MR_SpecLineLimit line_limit,
    MR_Word *base_maxfr, const MR_LabelLayout *top_layout,
    MR_Word *base_sp, MR_Word *base_curfr)
{
    MR_fatal_error("MR_dump_nondet_stack_from_layout in high level grade");
}

#else   /* !MR_HIGHLEVEL_CODE */

/*
** Detailed nondet stack dumps and accurate GC both need to know
** the values of the local variables in each nondet stack frame.
** To find out what variables are live in each frame, we must know
** through what label control will go back to that frame, so we
** can use that label's layout structure.
**
** Control can reach a frame through one of three means.
**
** - It may already be there. This is true only for the frame defined by the
**   arguments of MR_dump_nondet_stack_from_layout, and the layout structure
**   we use is also among the arguments.
**
** - It may get there by backtracking. In this case, the layout structure to
**   use is the one associated with the frame's redoip structure.
**
** - It may get there by returning from a call. In this case, the layout
**   structure to use is the one associated with the return label.
**
** We distinguish the last two cases by keeping an array of nondet stack frames
** that will be returned to from other nondet stack frames higher up, possibly
** via other procedures that live on the det stack. Procedures that live on the
** det stack may occur in the call chain of the currently active procedure, but
** they may not occur in side branches of the search tree: a model_non call may
** leave stack frames only on the nondet stack when it exits.
**
** When we find the top frame of a side branch, we don't know what the value
** of the det stack pointer sp was when execution created that nondet stack
** frame. This means that if that an ancestor of that nondet stack frame lives
** on the det stack, we cannot find the address of the stack frame of the
** ancestor. However, due that above invariant the only such ancestor a nondet
** stack frame on a side branch can have is an ancestor it shares with the
** currently executing call, and for the ancestors of the currently executing
** call we *do* know the values of sp.
**
** The MR_nondet_branch_infos array has one entry for each nondet branch; this
** entry gives the details of the next frame on the nondet stack from that
** branch. The branch_curfr field is valid for all entries and all entries in
** the array have distinct values for this field. The branch_sp field is valid
** only for the entry on the main branch; for all other entries, in contains
** NULL. The branch_layout field gives the address of the layout structure of
** the return address through which control will return to that frame. (Frames
** to which control returns via backtracking never get put into this array,
** only their ancestors do.) The branch_topfr field gives the address of the
** top frame in the branch; we print this because it makes the stack dump
** easier to interpret.
**
** The MR_nondet_branch_infos array grows when we find the tops of new side
** branches and shrinks when we find frames that created side branches.
*/

typedef struct
{
    MR_Word                 *branch_sp;
    MR_Word                 *branch_curfr;
    const MR_LabelLayout    *branch_layout;
    MR_Word                 *branch_topfr;
} MR_Nondet_Branch_Info;

static MR_Nondet_Branch_Info    *MR_nondet_branch_infos = NULL;
static int                      MR_nondet_branch_info_next = 0;
static int                      MR_nondet_branch_info_max = 0;

#define MR_INIT_NONDET_BRANCH_ARRAY_SIZE        10

void
MR_dump_nondet_stack_from_layout(FILE *fp, MR_Word *limit_addr,
    MR_FrameLimit frame_limit, MR_SpecLineLimit line_limit, MR_Word *base_maxfr,
    const MR_LabelLayout *top_layout, MR_Word *base_sp, MR_Word *base_curfr)
{
    int                     frame_size;
    int                     level_number;
    MR_bool                 print_vars;
    const char              *problem;
    int                     branch;
    const MR_LabelLayout    *label_layout;
    const MR_ProcLayout     *proc_layout;
    int                     frames_traversed_so_far;
    int                     lines_dumped_so_far;

    MR_do_init_modules();

    MR_nondet_branch_info_next = 0;
    if (top_layout != NULL && base_sp != NULL && base_curfr != NULL
        && MR_address_of_trace_browse_all_on_level != NULL)
    {
        print_vars = MR_TRUE;
        MR_init_nondet_branch_infos(base_maxfr, top_layout, base_sp,
            base_curfr);
    } else {
        print_vars = MR_FALSE;
    }

    /*
    ** The comparison operator in the condition of the while loop
    ** should be >= if you want the trace to include the bottom frame
    ** created by mercury_wrapper.c (whose redoip/redofr field can be
    ** hijacked by other code), and > if you don't want the bottom
    ** frame to be included.
    */

    frames_traversed_so_far = 0;
    lines_dumped_so_far = 0;
    level_number = 0;
    while (base_maxfr >= MR_nondet_stack_trace_bottom) {
        if (frame_limit > 0 && frames_traversed_so_far >= frame_limit) {
            fprintf(fp, "<more stack frames snipped>\n");
            return;
        }

        if (line_limit > 0 && lines_dumped_so_far >= line_limit) {
            fprintf(fp, "<more stack frames snipped>\n");
            return;
        }

        if (limit_addr != NULL && base_maxfr < limit_addr) {
            fprintf(fp, "<reached limit of dumped region>\n");
            return;
        }

        frame_size = base_maxfr - MR_prevfr_slot(base_maxfr);
        if (frame_size == MR_NONDET_TEMP_SIZE) {
            MR_print_nondetstackptr(fp, base_maxfr);
            fprintf(fp, ": temp\n");
            fprintf(fp, " redoip: ");
            MR_printlabel(fp, MR_redoip_slot(base_maxfr));
            fprintf(fp, " redofr: ");
            MR_print_nondetstackptr(fp, MR_redofr_slot(base_maxfr));
            fprintf(fp, "\n");

            if (print_vars) {
                MR_record_temp_redoip(base_maxfr);
            }

            lines_dumped_so_far += 3;
        } else if (frame_size == MR_DET_TEMP_SIZE) {
            MR_print_nondetstackptr(fp, base_maxfr);
            fprintf(fp, ": temp\n");
            fprintf(fp, " redoip: ");
            MR_printlabel(fp, MR_redoip_slot(base_maxfr));
            fprintf(fp, " redofr: ");
            MR_print_nondetstackptr(fp, MR_redofr_slot(base_maxfr));
            fprintf(fp, "\n");
            fprintf(fp, " detfr:  ");
            MR_print_detstackptr(fp, MR_tmp_detfr_slot(base_maxfr));
            fprintf(fp, "\n");

            lines_dumped_so_far += 4;
        } else {
            MR_print_nondetstackptr(fp, base_maxfr);
            fprintf(fp, ": ordinary, %d words", frame_size);
            if (print_vars && MR_find_matching_branch(base_maxfr, &branch)) {
                fprintf(fp, ", ");
                label_layout = MR_nondet_branch_infos[branch].branch_layout;
                MR_print_proc_id(fp, label_layout->MR_sll_entry);
                fprintf(fp, " <%s>", MR_label_goal_path(label_layout));
            }
            fprintf(fp, "\n");
            fprintf(fp, " redoip: ");
            MR_printlabel(fp, MR_redoip_slot(base_maxfr));
            fprintf(fp, " redofr: ");
            MR_print_nondetstackptr(fp, MR_redofr_slot(base_maxfr));
            fprintf(fp, "\n");
            fprintf(fp, " succip: ");
            MR_printlabel(fp, MR_succip_slot(base_maxfr));
            fprintf(fp, " succfr: ");
            MR_print_nondetstackptr(fp, MR_succfr_slot(base_maxfr));
            fprintf(fp, "\n");
            lines_dumped_so_far += 5;
#ifdef  MR_USE_MINIMAL_MODEL_STACK_COPY
            fprintf(fp, " detfr:  ");
            MR_print_detstackptr(fp, MR_table_detfr_slot(base_maxfr));
            fprintf(fp, "\n");
            lines_dumped_so_far += 1;
#endif
            if (print_vars && MR_find_matching_branch(base_maxfr, &branch)) {
                label_layout = MR_nondet_branch_infos[branch].branch_layout;
                proc_layout = label_layout->MR_sll_entry;
                if (MR_PROC_LAYOUT_HAS_EXEC_TRACE(proc_layout)
                    && MR_debug_slots_flag)
                {
                    fprintf(fp, " debug:  ");
                    fprintf(fp, "call event ");
                    MR_print_nondetstackptr(fp,
                        &MR_event_num_framevar(base_maxfr));
                    fprintf(fp, " => %" MR_INTEGER_LENGTH_MODIFIER "d, ",
                        MR_event_num_framevar(base_maxfr) + 1);
                    fprintf(fp, "call seq ");
                    MR_print_nondetstackptr(fp,
                        &MR_call_num_framevar(base_maxfr));
                    fprintf(fp, " => %" MR_INTEGER_LENGTH_MODIFIER "d, ",
                        MR_call_num_framevar(base_maxfr)),
                    fprintf(fp, "depth ");
                    MR_print_nondetstackptr(fp,
                        &MR_call_depth_framevar(base_maxfr));
                    fprintf(fp, " => %" MR_INTEGER_LENGTH_MODIFIER "d\n",
                        MR_call_depth_framevar(base_maxfr));

                    lines_dumped_so_far += 1;
                }
            }

            level_number++;
            if (print_vars && base_maxfr > MR_nondet_stack_trace_bottom) {
                problem = MR_step_over_nondet_frame(MR_dump_nondet_stack_frame,
                    fp, level_number, base_maxfr);
                if (problem != NULL) {
                    fprintf(fp, "%s\n", problem);
                    return;
                }
            }
        }

        base_maxfr = MR_prevfr_slot(base_maxfr);
        frames_traversed_so_far++;
    }
}

static void
MR_dump_nondet_stack_frame(void *fp, MR_Nondet_Frame_Category category,
    MR_Word *top_fr, const MR_LabelLayout *top_layout, MR_Word *base_sp,
    MR_Word *base_curfr, int level_number)
{
    FILE *dump_fp = fp;

    switch (category) {
        case MR_INTERNAL_FRAME_ON_SIDE_BRANCH:
            fprintf(dump_fp, " internal frame on nondet side branch ");
            MR_print_nondetstackptr(dump_fp, top_fr);
            fprintf(dump_fp, "\n");
            break;
        case MR_FRAME_ON_MAIN_BRANCH:
            fprintf(dump_fp, " on main nondet branch ");
            MR_print_nondetstackptr(dump_fp, top_fr);
            fprintf(dump_fp, "\n");
            break;
        case MR_TERMINAL_TOP_FRAME_ON_SIDE_BRANCH:
            fprintf(dump_fp, " terminal top frame of a nondet side branch ");
            MR_print_nondetstackptr(dump_fp, base_curfr);
            fprintf(dump_fp, "\n");
            break;
        case MR_TOP_FRAME_ON_SIDE_BRANCH:
            fprintf(dump_fp, " top frame of a nondet side branch ");
            MR_print_nondetstackptr(dump_fp, base_curfr);
            fprintf(dump_fp, "\n");
            break;
        default:
            MR_fatal_error("invalid MR_Nondet_Frame_Category");
    }

    if (category != MR_TERMINAL_TOP_FRAME_ON_SIDE_BRANCH) {
        /*
        ** The browsing code is in Mercury, so we need to disable debugger
        ** events and diagnostics inside.
        */

        MR_SavedDebugState  saved_debug_state;

        MR_turn_off_debug(&saved_debug_state, MR_TRUE);
        /* XXX we ignore the return value */
        (void) (*MR_address_of_trace_browse_all_on_level)(dump_fp, top_layout,
            base_sp, base_curfr, level_number, MR_TRUE);
        MR_turn_debug_back_on(&saved_debug_state);
    }
}

void
MR_traverse_nondet_stack_from_layout(MR_Word *base_maxfr,
    const MR_LabelLayout *top_layout, MR_Word *base_sp, MR_Word *base_curfr,
    MR_Traverse_Nondet_Frame_Func *func, void *func_data)
{
    int             frame_size;
    int             level_number;
    const char      *problem;
    int             frames_traversed_so_far;

    assert(top_layout != NULL && base_sp != NULL && base_curfr != NULL);

    MR_do_init_modules();

    MR_init_nondet_branch_infos(base_maxfr, top_layout, base_sp, base_curfr);

    /*
    ** The comparison operator in the condition of the while loop
    ** should be >= if you want the trace to include the bottom frame
    ** created by mercury_wrapper.c (whose redoip/redofr field can be
    ** hijacked by other code), and > if you don't want the bottom
    ** frame to be included.
    */

    frames_traversed_so_far = 0;
    level_number = 0;
    while (base_maxfr >= MR_nondet_stack_trace_bottom) {
        frame_size = base_maxfr - MR_prevfr_slot(base_maxfr);
        if (frame_size == MR_NONDET_TEMP_SIZE) {
            MR_record_temp_redoip(base_maxfr);
        } else if (frame_size == MR_DET_TEMP_SIZE) {
            /* do nothing */
        } else {
            level_number++;
            if (base_maxfr > MR_nondet_stack_trace_bottom) {
                MR_Traverse_Nondet_Frame_Func_Info func_info;
                func_info.func = func;
                func_info.func_data = func_data;
                problem = MR_step_over_nondet_frame(
                    MR_traverse_nondet_stack_frame, &func_info,
                    level_number, base_maxfr);
                if (problem != NULL) {
                    MR_fatal_error(problem);
                }
            }
        }

        base_maxfr = MR_prevfr_slot(base_maxfr);
        frames_traversed_so_far++;
    }
}

static void
MR_traverse_nondet_stack_frame(void *info, MR_Nondet_Frame_Category category,
    MR_Word *top_fr, const MR_LabelLayout *top_layout, MR_Word *base_sp,
    MR_Word *base_curfr, int level_number)
{
    MR_Traverse_Nondet_Frame_Func_Info *func_info;

    func_info = (MR_Traverse_Nondet_Frame_Func_Info *) info;
    if (category != MR_TERMINAL_TOP_FRAME_ON_SIDE_BRANCH) {
        func_info->func(func_info->func_data, top_layout, base_sp, base_curfr);
    }
}

static void
MR_init_nondet_branch_infos(MR_Word *base_maxfr,
	const MR_LabelLayout *top_layout, MR_Word *base_sp, MR_Word *base_curfr)
{
    const MR_LabelLayout        *label_layout;
    const MR_ProcLayout         *proc_layout;
    MR_Word                     *stack_pointer;
    MR_Word                     *current_frame;
    MR_StackWalkStepResult      result;
    const char                  *problem;
    MR_Unsigned                 reused_frames;

    label_layout = top_layout;
    stack_pointer = base_sp;
    current_frame = base_curfr;

    MR_nondet_branch_info_next = 0;

    /* Skip past any model_det frames. */
    do {
        proc_layout = label_layout->MR_sll_entry;
        if (!MR_DETISM_DET_STACK(proc_layout->MR_sle_detism)) {
            break;
        }
        result = MR_stack_walk_step(proc_layout, &label_layout,
            &stack_pointer, &current_frame, &reused_frames, &problem);
        if (result == MR_STEP_ERROR_BEFORE || result == MR_STEP_ERROR_AFTER) {
            MR_fatal_error(problem);
        }

    } while (label_layout != NULL);

    /* Double-check that we didn't skip any model_non frames. */
    assert(current_frame == base_curfr);

    if (label_layout != NULL) {
        MR_ensure_room_for_next(MR_nondet_branch_info, MR_Nondet_Branch_Info,
            MR_INIT_NONDET_BRANCH_ARRAY_SIZE);
        MR_nondet_branch_infos[0].branch_sp = stack_pointer;
        MR_nondet_branch_infos[0].branch_curfr = current_frame;
        MR_nondet_branch_infos[0].branch_layout = label_layout;
        MR_nondet_branch_infos[0].branch_topfr = base_curfr;
        MR_nondet_branch_info_next++;
    }
}

static const char *
MR_step_over_nondet_frame(MR_Dump_Or_Traverse_Nondet_Frame_Func *func,
    void *func_data, int level_number, MR_Word *fr)
{
    MR_StackWalkStepResult      result;
    MR_Determinism              determinism;
    const MR_Internal           *internal;
    int                         branch;
    int                         last;
    MR_Word                     *base_sp;
    MR_Word                     *base_curfr;
    MR_Word                     *topfr;
    const MR_LabelLayout        *label_layout;
    const MR_ProcLayout         *proc_layout;
    MR_Code                     *redoip;
    MR_Code                     *success;
    const char                  *problem;
    MR_Nondet_Frame_Category    category;
    MR_Unsigned                 reused_frames;

    if (MR_find_matching_branch(fr, &branch)) {
        base_sp = MR_nondet_branch_infos[branch].branch_sp;
        base_curfr = MR_nondet_branch_infos[branch].branch_curfr;
        label_layout = MR_nondet_branch_infos[branch].branch_layout;
        topfr = MR_nondet_branch_infos[branch].branch_topfr;
        if (base_sp == NULL) {
            category = MR_INTERNAL_FRAME_ON_SIDE_BRANCH;
        } else {
            category = MR_FRAME_ON_MAIN_BRANCH;
        }
        (*func)(func_data, category, topfr, label_layout, base_sp, base_curfr,
            level_number);
        MR_erase_temp_redoip(fr);
        proc_layout = label_layout->MR_sll_entry;

        /*
        ** Step past all other detstack-living ancestors on the main branch.
        */
        while (MR_TRUE) {
            result = MR_stack_walk_step(proc_layout, &label_layout,
                &base_sp, &base_curfr, &reused_frames, &problem);

            if (result != MR_STEP_OK) {
                return problem;
            }

            if (label_layout == NULL) {
                return NULL;
            }

            proc_layout = label_layout->MR_sll_entry;
            determinism = proc_layout->MR_sle_detism;

            if (! MR_DETISM_DET_STACK(determinism)) {
                /*
                ** We will handle this call to a model_non procedure when the
                ** sweep in MR_traverse_nondet_stack_from_layout reaches it.
                ** For now, we only put it into the table.
                */
                break;
            } else if (base_sp == NULL) {
                /*
                ** We are on a side branch, and we must have arrived at
                ** the common ancestor of the side branch and the main branch.
                */
                return NULL;
            }
        }

        last = MR_nondet_branch_info_next - 1;
        MR_assign_structure(MR_nondet_branch_infos[branch],
            MR_nondet_branch_infos[last]);
        MR_nondet_branch_info_next--;
    } else {
        redoip = MR_find_nofail_temp_redoip(fr);
        if (redoip == NULL && MR_nofail_ip(MR_redoip_slot(fr))) {
            redoip = MR_redoip_slot(fr);
        }

        if (redoip == NULL) {
            (*func)(func_data, MR_TERMINAL_TOP_FRAME_ON_SIDE_BRANCH,
                NULL, NULL, NULL, fr, level_number);
            MR_erase_temp_redoip(fr);

            success = MR_succip_slot(fr);
            base_sp = NULL;
            base_curfr = MR_succfr_slot(fr);
            topfr = fr;
            result = MR_stack_walk_succip_layout(success, &label_layout,
                &base_sp, &base_curfr, &problem);
        } else {
            internal = MR_lookup_internal_by_addr(redoip);
            if (internal == NULL || internal->MR_internal_layout == NULL) {
                return "cannot find redoip label's layout structure";
            }

            label_layout = internal->MR_internal_layout;
            (*func)(func_data, MR_TOP_FRAME_ON_SIDE_BRANCH, NULL, label_layout,
                NULL, fr, level_number);
            MR_erase_temp_redoip(fr);

            /*
            ** Passing a NULL base_sp to MR_stack_walk_step is OK because
            ** the procedure whose stack frame we are now looking at uses
            ** the nondet stack. Putting a NULL base_sp into the table
            ** is OK because all the ancestors of this procedure that are
            ** not also ancestors of the call currently being executed
            ** must also use the nondet stack. This is a consequence of the
            ** invariant that model_non calls leave the det stack
            ** unchanged.
            */

            base_sp = NULL;
            base_curfr = fr;
            proc_layout = label_layout->MR_sll_entry;
            topfr = fr;
            result = MR_stack_walk_step(proc_layout, &label_layout,
                &base_sp, &base_curfr, &reused_frames, &problem);
        }

        if (result != MR_STEP_OK) {
            return problem;
        }

        if (label_layout == NULL) {
            return NULL;
        }

        proc_layout = label_layout->MR_sll_entry;
        determinism = proc_layout->MR_sle_detism;
        if (MR_DETISM_DET_STACK(determinism)) {
            /*
            ** We must have found the common ancestor of the procedure call
            ** whose variables we just printed and the call currently being
            ** executed. While this common ancestor must include model_non
            ** code, this may be inside a commit in a procedure that lives
            ** on the det stack. If that is the case, the common ancestor
            ** must not be put into MR_nondet_branch_info.
            */

            return NULL;
        }
    }

    if (! MR_find_matching_branch(base_curfr, &branch)) {
        MR_ensure_room_for_next(MR_nondet_branch_info, MR_Nondet_Branch_Info,
            MR_INIT_NONDET_BRANCH_ARRAY_SIZE);
        last = MR_nondet_branch_info_next;
        MR_nondet_branch_infos[last].branch_layout = label_layout;
        MR_nondet_branch_infos[last].branch_sp = base_sp;
        MR_nondet_branch_infos[last].branch_curfr = base_curfr;
        MR_nondet_branch_infos[last].branch_topfr = topfr;
        MR_nondet_branch_info_next++;
    } else if (base_sp != NULL &&
        MR_nondet_branch_infos[last].branch_sp == NULL)
    {
        MR_fatal_error("common ancestor reached from non-main branch first");
    }

    return NULL;
}

static MR_bool
MR_find_matching_branch(MR_Word *fr, int *branch_ptr)
{
    int     branch;

    for (branch = 0; branch < MR_nondet_branch_info_next; branch++) {
        if (MR_nondet_branch_infos[branch].branch_curfr == fr) {
            *branch_ptr = branch;
            return MR_TRUE;
        }
    }

    return MR_FALSE;
}

/*
** The contents of a nondet stack frame which control will enter via
** backtracking is described by the layout structure of the label at which
** execution will resume inside the procedure. This need not be the label in
** the redoip slot in the procedure's ordinary stack frame; if the procedure
** created any temporary nondet stack frames, it will be the label in the
** redoip slot of the top temporary nondet stack frame created by the
** procedure.
**
** We record the contents of topmost temp frames as go past them, and erase the
** records as we go past the ordinary frames to which they refer.
*/

typedef struct
{
    MR_Word         *temp_redofr;
    MR_Code         *temp_redoip;
} MR_Temp_Redoip;

static MR_Temp_Redoip   *MR_temp_frame_infos = NULL;
static int              MR_temp_frame_info_next = 0;
static int              MR_temp_frame_info_max = 0;

#define MR_INIT_TEMP_REDOIP_ARRAY_SIZE  10

static void
MR_record_temp_redoip(MR_Word *fr)
{
    int     slot;

    for (slot = 0; slot < MR_temp_frame_info_next; slot++) {
        if (fr == MR_temp_frame_infos[slot].temp_redofr) {
            /* this is not the top temp frame for this call */
            return;
        }
    }

    MR_ensure_room_for_next(MR_temp_frame_info, MR_Temp_Redoip,
            MR_INIT_TEMP_REDOIP_ARRAY_SIZE);
    slot = MR_temp_frame_info_next;
    MR_temp_frame_infos[slot].temp_redofr = fr;
    MR_temp_frame_infos[slot].temp_redoip = MR_redoip_slot(fr);
    MR_temp_frame_info_next++;
}

/*
** Return false iff the given label effectively implements the predicate "fail"
** and true otherwise.
*/

static MR_bool
MR_nofail_ip(MR_Code *ip)
{
    if (ip == MR_ENTRY(MR_do_fail)) {
        return MR_FALSE;
    }
    if (ip == MR_ENTRY(MR_do_trace_redo_fail_shallow)) {
        return MR_FALSE;
    }
    if (ip == MR_ENTRY(MR_do_trace_redo_fail_deep)) {
        return MR_FALSE;
    }
#ifdef  MR_USE_MINIMAL_MODEL_STACK_COPY
    if (ip == MR_ENTRY(MR_MMSC_COMPLETION_ENTRY)) {
        return MR_FALSE;
    }
#endif

    return MR_TRUE;
}

static MR_Code *
MR_find_nofail_temp_redoip(MR_Word *fr)
{
    int     slot;

    for (slot = 0; slot < MR_temp_frame_info_next; slot++) {
        if (fr == MR_temp_frame_infos[slot].temp_redofr &&
            MR_nofail_ip(MR_temp_frame_infos[slot].temp_redoip))
        {
            return MR_temp_frame_infos[slot].temp_redoip;
        }
    }

    return NULL;
}

static void
MR_erase_temp_redoip(MR_Word *fr)
{
    int     slot;
    int     last;

    for (slot = 0; slot < MR_temp_frame_info_next; slot++) {
        if (fr == MR_temp_frame_infos[slot].temp_redofr) {
            last = MR_temp_frame_info_next - 1;
            MR_temp_frame_infos[slot].temp_redofr =
                MR_temp_frame_infos[last].temp_redofr;
            MR_temp_frame_infos[slot].temp_redoip =
                MR_temp_frame_infos[last].temp_redoip;
            MR_temp_frame_info_next--;
            return;
        }
    }
}

#endif  /* !MR_HIGHLEVEL_CODE */

/**************************************************************************/

static  MR_StackDumpInfo        prev_dump_info;

static  int                     current_level;
static  MR_bool                 trace_data_enabled;
static  MR_bool                 contexts_enabled;

static void
MR_dump_stack_record_init(MR_bool include_trace_data, MR_bool include_contexts)
{
    prev_dump_info.MR_sdi_proc_layout = NULL;
    current_level = 0;
    trace_data_enabled = include_trace_data;
    contexts_enabled = include_contexts;
}

static int
MR_dump_stack_record_frame(FILE *fp, const MR_LabelLayout *label_layout,
    MR_Word *base_sp, MR_Word *base_curfr, MR_Unsigned reused_frames,
    MR_PrintStackRecord print_stack_record, MR_bool at_line_limit)
{
    const MR_ProcLayout     *proc_layout;
    const char              *filename;
    int                     linenumber;
    MR_bool                 must_flush;
    int                     lines_printed;

    proc_layout = label_layout->MR_sll_entry;
    if (! MR_find_context(label_layout, &filename, &linenumber)
        || ! contexts_enabled)
    {
        filename = "";
        linenumber = 0;
    }

    /*
    ** We cannot merge two calls if they are to different procedures.
    **
    ** We cannot merge two calls even to the same procedure if we are printing
    ** trace data, since this will differ between the calls.
    **
    ** Note that it is not possible for two calls to the same procedure
    ** to differ on whether the procedure has trace layout data or not.
    */
    must_flush = (proc_layout != prev_dump_info.MR_sdi_proc_layout)
        || trace_data_enabled;

    if (must_flush) {
        if (! at_line_limit) {
            MR_dump_stack_record_flush(fp, trace_data_enabled,
                print_stack_record);
        }

        prev_dump_info.MR_sdi_proc_layout = proc_layout;
        prev_dump_info.MR_sdi_num_frames = 1;
        prev_dump_info.MR_sdi_min_level = current_level;
        prev_dump_info.MR_sdi_max_level = current_level + reused_frames;
        prev_dump_info.MR_sdi_filename = filename;
        prev_dump_info.MR_sdi_linenumber = linenumber;
        prev_dump_info.MR_sdi_context_mismatch = MR_FALSE;

        prev_dump_info.MR_sdi_base_sp = base_sp;
        prev_dump_info.MR_sdi_base_curfr = base_curfr;
        prev_dump_info.MR_sdi_goal_path = MR_label_goal_path(label_layout);

        lines_printed = 1;
    } else {
        prev_dump_info.MR_sdi_num_frames++;
        prev_dump_info.MR_sdi_max_level = current_level + reused_frames;
        if (prev_dump_info.MR_sdi_filename != filename
            || prev_dump_info.MR_sdi_linenumber != linenumber)
        {
            prev_dump_info.MR_sdi_context_mismatch = MR_TRUE;
        }

        lines_printed = 0;
    }

    current_level += 1 + reused_frames;
    return lines_printed;
}

static void
MR_dump_stack_record_flush(FILE *fp, MR_bool include_trace_data,
    MR_PrintStackRecord print_stack_record)
{
    if (prev_dump_info.MR_sdi_proc_layout != NULL) {
        print_stack_record(fp, include_trace_data, prev_dump_info);
    }
}

void
MR_dump_stack_record_print(FILE *fp, MR_bool include_trace_data,
    const MR_StackDumpInfo dump_info)
{
    MR_Level    num_levels;

    num_levels = dump_info.MR_sdi_max_level + 1 - dump_info.MR_sdi_min_level;
    fprintf(fp, "%4" MR_INTEGER_LENGTH_MODIFIER "d ",
        dump_info.MR_sdi_min_level);

    /*
    ** If we are printing trace data, we need all the horizontal room
    ** we can get, and there will not be any repeated lines, so we do not
    ** reserve space for the repeat counts.
    */
    if (! include_trace_data) {
        if (num_levels > 1) {
            if (num_levels != dump_info.MR_sdi_num_frames) {
                fprintf(fp, " %3" MR_INTEGER_LENGTH_MODIFIER "ux ",
                    num_levels);
            } else {
                fprintf(fp, " %3" MR_INTEGER_LENGTH_MODIFIER "u* ",
                    num_levels);
            }
        } else {
            fprintf(fp, "%5s ", "");
        }
    }

    MR_maybe_print_call_trace_info(fp, trace_data_enabled,
        dump_info.MR_sdi_proc_layout,
        dump_info.MR_sdi_base_sp, dump_info.MR_sdi_base_curfr);
    MR_print_proc_id(fp, dump_info.MR_sdi_proc_layout);
    if (MR_strdiff(dump_info.MR_sdi_filename, "")
        && dump_info.MR_sdi_linenumber > 0)
    {
        fprintf(fp, " (%s:%d%s)",
            dump_info.MR_sdi_filename, dump_info.MR_sdi_linenumber,
            dump_info.MR_sdi_context_mismatch ? " and others" : "");
    }

    if (trace_data_enabled) {
        if (MR_strdiff(dump_info.MR_sdi_goal_path, "")) {
            fprintf(fp, " %s", dump_info.MR_sdi_goal_path);
        } else {
            fprintf(fp, " (empty)");
        }
    }

    fprintf(fp, "\n");
}

MR_bool
MR_find_context(const MR_LabelLayout *label, const char **fileptr,
    int *lineptr)
{
    const MR_ProcLayout             *proc;
    const MR_ModuleLayout           *module;
    const MR_ModuleFileLayout       *file_layout;
    int                             i, j;

    proc = label->MR_sll_entry;
    if (! MR_PROC_LAYOUT_HAS_EXEC_TRACE(proc)) {
        return MR_FALSE;
    }

    module = proc->MR_sle_module_layout;
    for (i = 0; i < module->MR_ml_filename_count; i++) {
        file_layout = module->MR_ml_module_file_layout[i];
        for (j = 0; j < file_layout->MR_mfl_label_count; j++) {
            if (file_layout->MR_mfl_label_layout[j] == label) {
                *fileptr = file_layout->MR_mfl_filename;
                *lineptr = file_layout->MR_mfl_label_lineno[j];
                return MR_TRUE;
            }
        }
    }

    return MR_FALSE;
}

void
MR_maybe_print_call_trace_info(FILE *fp, MR_bool include_trace_data,
    const MR_ProcLayout *proc_layout, MR_Word *base_sp, MR_Word *base_curfr)
{
    if (include_trace_data) {
        MR_print_call_trace_info(fp, proc_layout, base_sp, base_curfr);
    }
}

/*
** Note that MR_print_call_trace_info is more permissive than its documentation
** in the header file.
*/

void
MR_print_call_trace_info(FILE *fp, const MR_ProcLayout *proc_layout,
    MR_Word *base_sp, MR_Word *base_curfr)
{
    MR_bool             print_details;

    if (MR_DETISM_DET_STACK(proc_layout->MR_sle_detism)) {
        if (base_sp == NULL) {
            return;
        }
    } else {
        if (base_curfr == NULL) {
            return;
        }
    }

    print_details =
        MR_call_details_are_valid(proc_layout, base_sp, base_curfr);

    if (print_details) {
        unsigned long   event_num;
        unsigned long   call_num;
        unsigned long   depth;

        if (MR_DETISM_DET_STACK(proc_layout->MR_sle_detism)) {
            event_num = MR_event_num_stackvar(base_sp) + 1;
            call_num = MR_call_num_stackvar(base_sp);
            depth = MR_call_depth_stackvar(base_sp);
        } else {
            event_num = MR_event_num_framevar(base_curfr) + 1;
            call_num = MR_call_num_framevar(base_curfr);
            depth = MR_call_depth_framevar(base_curfr);
        }

        /*
        ** The code below does has a job that is very similar to the job
        ** of the function MR_trace_event_print_internal_report in
        ** trace/mercury_trace_internal.c. Any changes here will probably
        ** require similar changes there.
        */

        if (MR_standardize_event_details) {
            char    buf[64];    /* plenty big enough */

            /* Do not print the context id, since it is not standardized. */
            event_num = MR_standardize_event_num(event_num);
            call_num = MR_standardize_call_num(call_num);
            snprintf(buf, 64, "E%lu", event_num);
            fprintf(fp, "%7s ", buf);
            snprintf(buf, 64, "C%lu", call_num);
            fprintf(fp, "%7s ", buf);
            fprintf(fp, "%4lu ", depth);
        } else {
            /*
            ** Do not print the context id, since it is the same for
            ** all the calls in the stack.
            */
            fprintf(fp, "%7lu %7lu %4lu ", event_num, call_num, depth);
        }
    } else {
        /* ensure that the remaining columns line up */
        fprintf(fp, "%21s", "");
    }

#if !defined(MR_HIGHLEVEL_CODE) && defined(MR_TABLE_DEBUG)
  #if 0
    /* reenable this code if you need to */
    if (MR_DETISM_DET_STACK(proc_layout->MR_sle_detism)) {
        MR_print_detstackptr(fp, base_sp);
    } else {
        MR_print_nondetstackptr(fp, base_curfr);
    }

    fprintf(fp, " ");
  #endif
#endif
}

void
MR_print_proc_id(FILE *fp, const MR_ProcLayout *entry)
{
    MR_print_proc_id_internal(fp, entry, MR_FALSE, MR_TRUE, MR_FALSE);
}

void
MR_print_pred_id(FILE *fp, const MR_ProcLayout *entry)
{
    MR_print_proc_id_internal(fp, entry, MR_FALSE, MR_FALSE, MR_FALSE);
}

void
MR_print_proc_spec(FILE *fp, const MR_ProcLayout *entry)
{
    MR_print_proc_id_internal(fp, entry, MR_TRUE, MR_TRUE, MR_FALSE);
}

void
MR_print_proc_separate(FILE *fp, const MR_ProcLayout *entry)
{
    MR_print_proc_id_internal(fp, entry, MR_TRUE, MR_TRUE, MR_TRUE);
}

static void
MR_print_proc_id_internal(FILE *fp, const MR_ProcLayout *entry, MR_bool spec,
    MR_bool print_mode, MR_bool separate)
{
    const MR_UserProcId *user;
    const MR_UCIProcId  *uci;

    if (! MR_PROC_LAYOUT_HAS_PROC_ID(entry)) {
        MR_fatal_error("cannot print procedure id without layout");
    }

    if (MR_PROC_LAYOUT_IS_UCI(entry)) {
        uci = &entry->MR_sle_uci;

        if (spec) {
            if (MR_streq(uci->MR_uci_pred_name, "__Unify__")) {
                fprintf(fp, "unif");
            } else if (MR_streq(uci->MR_uci_pred_name, "__Compare__")) {
                fprintf(fp, "comp");
            } else if (MR_streq(uci->MR_uci_pred_name, "__Index__")) {
                fprintf(fp, "indx");
            } else if (MR_streq(uci->MR_uci_pred_name, "__Initialise__")) {
                fprintf(fp, "init");
            } else {
                MR_fatal_error("uci procedure is not "
                    "unify, compare, index or init");
            }

            if (separate) {
                fprintf(fp, " %s %s %ld",
                    uci->MR_uci_type_module,
                    uci->MR_uci_type_name,
                    (long) uci->MR_uci_type_arity);
            } else {
                fprintf(fp, "*%s.%s/%ld",
                    uci->MR_uci_type_module,
                    uci->MR_uci_type_name,
                    (long) uci->MR_uci_type_arity);
            }
        } else {
            fprintf(fp, "%s for %s.%s/%ld",
                uci->MR_uci_pred_name,
                uci->MR_uci_type_module,
                uci->MR_uci_type_name,
                (long) uci->MR_uci_type_arity);
        }

        if (print_mode) {
            if (separate) {
                fprintf(fp, " %ld", (long) uci->MR_uci_mode);
            } else {
                fprintf(fp, "-%ld", (long) uci->MR_uci_mode);
            }
        }

        if (strcmp(uci->MR_uci_type_module,
            uci->MR_uci_def_module) != 0)
        {
            fprintf(fp, " {%s}", uci->MR_uci_def_module);
        }
    } else {
        user = &entry->MR_sle_user;

        if (user->MR_user_pred_or_func == MR_PREDICATE) {
            fprintf(fp, "pred");
        } else if (user->MR_user_pred_or_func == MR_FUNCTION) {
            fprintf(fp, "func");
        } else {
            MR_fatal_error("procedure is not pred or func");
        }

        if (separate) {
            fprintf(fp, " ");
        } else if (spec) {
            fprintf(fp, "*");
        } else {
            fprintf(fp, " ");
        }

        if (separate) {
            fprintf(fp, "%s %s %ld",
                user->MR_user_decl_module,
                user->MR_user_name,
                (long) MR_sle_user_adjusted_arity(entry));
        } else {
            fprintf(fp, "%s.%s/%ld",
                user->MR_user_decl_module,
                user->MR_user_name,
                (long) MR_sle_user_adjusted_arity(entry));
        }

        if (print_mode) {
            if (separate) {
                fprintf(fp, " %ld", (long) user->MR_user_mode);
            } else {
                fprintf(fp, "-%ld", (long) user->MR_user_mode);
            }
        }

        if (!spec && strcmp(user->MR_user_decl_module,
            user->MR_user_def_module) != 0)
        {
            fprintf(fp, " {%s}", user->MR_user_def_module);
        }
    }

    if (! spec && print_mode) {
        fprintf(fp, " (%s)", MR_detism_names[entry->MR_sle_detism]);
    }
}

void
MR_print_proc_id_trace_and_context(FILE *fp, MR_bool include_trace_data,
    MR_ContextPosition pos, MR_UserEventContext user_event_context,
    const MR_ProcLayout *proc_layout, const char *maybe_user_event_name,
    MR_Word *base_sp, MR_Word *base_curfr,
    const char *path, const char *filename, int lineno, MR_bool print_parent,
    const char *parent_filename, int parent_lineno, int indent)
{
    MR_bool             print_context;
    MR_bool             print_proc_id;

    if (maybe_user_event_name != NULL) {
        switch (user_event_context) {
            case MR_USER_EVENT_CONTEXT_NONE:
                print_context = MR_FALSE;
                print_proc_id = MR_FALSE;
                break;

            case MR_USER_EVENT_CONTEXT_FILE:
                print_context = MR_TRUE;
                print_proc_id = MR_FALSE;
                break;

            case MR_USER_EVENT_CONTEXT_PROC:
                print_context = MR_FALSE;
                print_proc_id = MR_TRUE;
                break;

            case MR_USER_EVENT_CONTEXT_FULL:
            default:
                print_context = MR_TRUE;
                print_proc_id = MR_TRUE;
                break;
        }

        print_parent = MR_FALSE;
    } else {
        print_context = MR_TRUE;
        print_proc_id = MR_TRUE;
    }

    switch (pos) {
        case MR_CONTEXT_NOWHERE:
            fprintf(fp, " ");
            MR_maybe_print_call_trace_info(fp, include_trace_data,
                proc_layout, base_sp, base_curfr);
            MR_maybe_print_proc_id(fp, print_proc_id, proc_layout, path);
            fprintf(fp, "\n");
            break;

        case MR_CONTEXT_BEFORE:
            MR_maybe_print_context(fp, print_context, filename, lineno);
            MR_maybe_print_parent_context(fp, print_parent, MR_FALSE,
                parent_filename, parent_lineno);
            fprintf(fp, " ");
            MR_maybe_print_call_trace_info(fp, include_trace_data,
                proc_layout, base_sp, base_curfr);
            MR_maybe_print_proc_id(fp, print_proc_id, proc_layout, path);
            fprintf(fp, "\n");
            break;

        case MR_CONTEXT_AFTER:
            fprintf(fp, " ");
            MR_maybe_print_call_trace_info(fp, include_trace_data,
                proc_layout, base_sp, base_curfr);
            MR_maybe_print_proc_id(fp, print_proc_id, proc_layout, path);
            MR_maybe_print_context(fp, print_context, filename, lineno);
            MR_maybe_print_parent_context(fp, print_parent, MR_FALSE,
                parent_filename, parent_lineno);
            fprintf(fp, "\n");
            break;

        case MR_CONTEXT_PREVLINE:
            MR_maybe_print_context(fp, print_context, filename, lineno);
            MR_maybe_print_parent_context(fp, print_parent, MR_TRUE,
                parent_filename, parent_lineno);
            fprintf(fp, "\n%*s ", indent, "");
            MR_maybe_print_call_trace_info(fp, include_trace_data,
                proc_layout, base_sp, base_curfr);
            MR_maybe_print_proc_id(fp, print_proc_id, proc_layout, path);
            fprintf(fp, "\n");
            break;

        case MR_CONTEXT_NEXTLINE:
            fprintf(fp, " ");
            MR_maybe_print_call_trace_info(fp, include_trace_data,
                proc_layout, base_sp, base_curfr);
            MR_maybe_print_proc_id(fp, print_proc_id, proc_layout, path);
            fprintf(fp, "\n%*s", indent, "");
            MR_maybe_print_context(fp, print_context, filename, lineno);
            MR_maybe_print_parent_context(fp, print_parent, MR_TRUE,
                parent_filename, parent_lineno);
            fprintf(fp, "\n");
            break;

        default:
            MR_fatal_error("invalid MR_ContextPosition");
    }
}

static void
MR_maybe_print_proc_id(FILE *fp, MR_bool print_proc_id,
    const MR_ProcLayout *proc_layout, const char *path)
{
    if (print_proc_id) {
        MR_print_proc_id(fp, proc_layout);
        if (strlen(path) > 0) {
            fprintf(fp, " %s", path);
        }
    }
}

static void
MR_maybe_print_context(FILE *fp, MR_bool print_context, const char *filename,
    int lineno)
{
    if (print_context && MR_strdiff(filename, "") && lineno != 0) {
        fprintf(fp, " %s:%d", filename, lineno);
    }
}

static void
MR_maybe_print_parent_context(FILE *fp, MR_bool print_parent, MR_bool verbose,
    const char *filename, int lineno)
{
    if (print_parent && MR_strdiff(filename, "") && lineno != 0) {
        if (verbose) {
            fprintf(fp, " (from %s:%d)", filename, lineno);
        } else {
            fprintf(fp, " (%s:%d)", filename, lineno);
        }
    }
}

static  MR_bool
MR_call_details_are_valid(const MR_ProcLayout *proc_layout, MR_Word *base_sp,
    MR_Word *base_curfr)
{
    if (MR_PROC_LAYOUT_HAS_EXEC_TRACE(proc_layout)) {
        MR_Integer maybe_from_full = proc_layout->MR_sle_maybe_from_full;
        if (maybe_from_full > 0) {
            /*
            ** For procedures compiled with shallow tracing, the details
            ** will be valid only if the value of MR_from_full saved in
            ** the appropriate stack slot was MR_TRUE.
            */
            if (MR_DETISM_DET_STACK(proc_layout->MR_sle_detism)) {
                return MR_based_stackvar(base_sp, maybe_from_full);
            } else {
                return MR_based_framevar(base_curfr, maybe_from_full);
            }
        } else {
            return MR_TRUE;
        }
    } else {
        return MR_FALSE;
    }
}

static MR_bool
MR_call_is_before_event_or_seq(MR_FindFirstCallSeqOrEvent seq_or_event,
    MR_Unsigned seq_no_or_event_no,
    const MR_ProcLayout *proc_layout, MR_Word *base_sp, MR_Word *base_curfr)
{
    MR_Unsigned     call_event_num;
    MR_Unsigned     call_seq_num;

    if (MR_DETISM_DET_STACK(proc_layout->MR_sle_detism)) {
        if (base_sp == NULL) {
            return MR_FALSE;
        }
    } else {
        if (base_curfr == NULL) {
            return MR_FALSE;
        }
    }

    if (MR_call_details_are_valid(proc_layout, base_sp, base_curfr)) {
        if (MR_DETISM_DET_STACK(proc_layout->MR_sle_detism)) {
            call_event_num = MR_event_num_stackvar(base_sp) + 1;
            call_seq_num = MR_call_num_stackvar(base_sp);
        } else {
            call_event_num = MR_event_num_framevar(base_curfr) + 1;
            call_seq_num = MR_call_num_framevar(base_curfr);
        }
        if (seq_or_event == MR_FIND_FIRST_CALL_BEFORE_EVENT) {
            return call_event_num <= seq_no_or_event_no;
        } else if (seq_or_event == MR_FIND_FIRST_CALL_BEFORE_SEQ) {
            return call_seq_num <= seq_no_or_event_no;
        } else {
            MR_fatal_error("Unknown MR_FindFirstCallSeqOrEvent");
        }
    } else {
        return MR_FALSE;
    }
}

int
MR_find_first_call_less_eq_seq_or_event(
    MR_FindFirstCallSeqOrEvent seq_or_event,
    MR_Unsigned seq_no_or_event_no, const MR_LabelLayout *label_layout,
    MR_Word *det_stack_pointer, MR_Word *current_frame, const char **problem)
{
    MR_StackWalkStepResult  result;
    const MR_LabelLayout    *cur_label_layout;
    MR_Word                 *stack_trace_sp;
    MR_Word                 *stack_trace_curfr;
    int                     ancestor_level;
    MR_Unsigned             reused_frames;

    MR_do_init_modules();

    stack_trace_sp = det_stack_pointer;
    stack_trace_curfr = current_frame;

    cur_label_layout = label_layout;

    ancestor_level = 0;
    while (cur_label_layout != NULL) {
        if (MR_call_is_before_event_or_seq(seq_or_event, seq_no_or_event_no,
                cur_label_layout->MR_sll_entry, stack_trace_sp,
                stack_trace_curfr))
        {
            return ancestor_level;
        }

        result = MR_stack_walk_step(cur_label_layout->MR_sll_entry,
            &cur_label_layout, &stack_trace_sp, &stack_trace_curfr,
            &reused_frames, problem);

        if (result != MR_STEP_OK) {
            return -1;
        }

        ancestor_level += 1 + reused_frames;
    } while (cur_label_layout != NULL);

    *problem = "no more stack";
    return -1;
}

/*
** The different Mercury determinisms are internally represented by integers.
** This array gives the correspondance with the internal representation and
** the names that are usually used to denote determinisms.
*/

const char * MR_detism_names[] = {
    "failure",      /* 0 */
    "",             /* 1 */
    "semidet",      /* 2 */
    "nondet",       /* 3 */
    "erroneous",    /* 4 */
    "",             /* 5 */
    "det",          /* 6 */
    "multi",        /* 7 */
    "",             /* 8 */
    "",             /* 9 */
    "cc_nondet",    /* 10 */
    "",             /* 11 */
    "",             /* 12 */
    "",             /* 13 */
    "cc_multi"      /* 14 */
};
