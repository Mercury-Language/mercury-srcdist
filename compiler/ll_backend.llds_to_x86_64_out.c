/*
** Automatically generated from `llds_to_x86_64_out.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module ll_backend.llds_to_x86_64_out. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_to_x86_64_out__init
ENDINIT
*/

#include "ll_backend.llds_to_x86_64_out.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.x86_64_instrs.mih"
#include "ll_backend.x86_64_out.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 50 "llds_to_x86_64_out.m"
static void MR_CALL 
ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_p_0(
#line 50 "llds_to_x86_64_out.m"
  MR_Word ll_backend__llds_to_x86_64_out__Stream_1,
#line 50 "llds_to_x86_64_out.m"
  MR_Word ll_backend__llds_to_x86_64_out__HeadVar__2_2);

#line 42 "llds_to_x86_64_out.m"
static void MR_CALL 
ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_p_0(
#line 42 "llds_to_x86_64_out.m"
  MR_Word ll_backend__llds_to_x86_64_out__Stream_1,
#line 42 "llds_to_x86_64_out.m"
  MR_Word ll_backend__llds_to_x86_64_out__HeadVar__2_2);


static /* final */ const MR_Box ll_backend__llds_to_x86_64_out_scalar_common_1[1][3];

static /* final */ const MR_Box ll_backend__llds_to_x86_64_out_scalar_common_2[1][4];

static /* final */ const MR_Box ll_backend__llds_to_x86_64_out_scalar_common_3[1][5];




static /* final */ const MR_Box ll_backend__llds_to_x86_64_out_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_to_x86_64_out_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&ll_backend__llds_to_x86_64_out_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_to_x86_64_out_scalar_common_3[1][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&ll_backend__llds_to_x86_64_out_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 50 "llds_to_x86_64_out.m"
static void MR_CALL 
ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_p_0(
#line 50 "llds_to_x86_64_out.m"
  MR_Word ll_backend__llds_to_x86_64_out__Stream_1,
#line 50 "llds_to_x86_64_out.m"
  MR_Word ll_backend__llds_to_x86_64_out__HeadVar__2_2)
#line 50 "llds_to_x86_64_out.m"
{
#line 53 "llds_to_x86_64_out.m"
  while (MR_TRUE)
#line 53 "llds_to_x86_64_out.m"
    {
#line 53 "llds_to_x86_64_out.m"
      /* tailcall optimized into a loop */
#line 53 "llds_to_x86_64_out.m"
      {
#line 53 "llds_to_x86_64_out.m"
        MR_bool ll_backend__llds_to_x86_64_out__succeeded;

#line 53 "llds_to_x86_64_out.m"
        if ((ll_backend__llds_to_x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 53 "llds_to_x86_64_out.m"
          {
#line 53 "llds_to_x86_64_out.m"
          }
#line 53 "llds_to_x86_64_out.m"
        else
#line 54 "llds_to_x86_64_out.m"
          {
#line 54 "llds_to_x86_64_out.m"
            MR_Word ll_backend__llds_to_x86_64_out__AsmInstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64_out__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "llds_to_x86_64_out.m"
            MR_Word ll_backend__llds_to_x86_64_out__AsmInstrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 55 "llds_to_x86_64_out.m"
            {
#line 55 "llds_to_x86_64_out.m"
              ll_backend__x86_64_out__output_x86_64_instruction_4_p_0((MR_Word) &ll_backend__llds_to_x86_64_out_scalar_common_3[0], ((MR_Box) (ll_backend__llds_to_x86_64_out__Stream_1)), ll_backend__llds_to_x86_64_out__AsmInstr_10);
            }
#line 56 "llds_to_x86_64_out.m"
            /* direct tailcall eliminated */
#line 56 "llds_to_x86_64_out.m"
            {
#line 56 "llds_to_x86_64_out.m"
              MR_Word ll_backend__llds_to_x86_64_out__HeadVar__2__tmp_copy_2 = ll_backend__llds_to_x86_64_out__AsmInstrs_11;

#line 56 "llds_to_x86_64_out.m"
              ll_backend__llds_to_x86_64_out__HeadVar__2_2 = ll_backend__llds_to_x86_64_out__HeadVar__2__tmp_copy_2;
#line 56 "llds_to_x86_64_out.m"
            }
#line 56 "llds_to_x86_64_out.m"
            continue;
#line 54 "llds_to_x86_64_out.m"
          }
#line 53 "llds_to_x86_64_out.m"
      }
#line 53 "llds_to_x86_64_out.m"
      break;
#line 53 "llds_to_x86_64_out.m"
    }
#line 50 "llds_to_x86_64_out.m"
}

#line 42 "llds_to_x86_64_out.m"
static void MR_CALL 
ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_p_0(
#line 42 "llds_to_x86_64_out.m"
  MR_Word ll_backend__llds_to_x86_64_out__Stream_1,
#line 42 "llds_to_x86_64_out.m"
  MR_Word ll_backend__llds_to_x86_64_out__HeadVar__2_2)
#line 42 "llds_to_x86_64_out.m"
{
#line 45 "llds_to_x86_64_out.m"
  while (MR_TRUE)
#line 45 "llds_to_x86_64_out.m"
    {
#line 45 "llds_to_x86_64_out.m"
      /* tailcall optimized into a loop */
#line 45 "llds_to_x86_64_out.m"
      {
#line 45 "llds_to_x86_64_out.m"
        MR_bool ll_backend__llds_to_x86_64_out__succeeded;

#line 45 "llds_to_x86_64_out.m"
        if ((ll_backend__llds_to_x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 45 "llds_to_x86_64_out.m"
          {
#line 45 "llds_to_x86_64_out.m"
          }
#line 45 "llds_to_x86_64_out.m"
        else
#line 46 "llds_to_x86_64_out.m"
          {
#line 46 "llds_to_x86_64_out.m"
            MR_Word ll_backend__llds_to_x86_64_out__AsmProc_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64_out__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "llds_to_x86_64_out.m"
            MR_Word ll_backend__llds_to_x86_64_out__AsmProcs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "llds_to_x86_64_out.m"
            MR_Word ll_backend__llds_to_x86_64_out__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64_out__AsmProc_10, (MR_Integer) 4)));
#line 47 "llds_to_x86_64_out.m"
            MR_String ll_backend__llds_to_x86_64_out__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64_out__AsmProc_10, (MR_Integer) 0)));
#line 47 "llds_to_x86_64_out.m"
            MR_Integer ll_backend__llds_to_x86_64_out__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64_out__AsmProc_10, (MR_Integer) 1)));
#line 47 "llds_to_x86_64_out.m"
            MR_Word ll_backend__llds_to_x86_64_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64_out__AsmProc_10, (MR_Integer) 2)));
#line 47 "llds_to_x86_64_out.m"
            MR_Word ll_backend__llds_to_x86_64_out__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64_out__AsmProc_10, (MR_Integer) 3)));
#line 47 "llds_to_x86_64_out.m"
            MR_Word ll_backend__llds_to_x86_64_out__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64_out__AsmProc_10, (MR_Integer) 5)));
#line 47 "llds_to_x86_64_out.m"
            MR_Word ll_backend__llds_to_x86_64_out__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64_out__AsmProc_10, (MR_Integer) 6)));
#line 47 "llds_to_x86_64_out.m"
            MR_Word ll_backend__llds_to_x86_64_out__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64_out__AsmProc_10, (MR_Integer) 7)));
#line 47 "llds_to_x86_64_out.m"
            MR_Word ll_backend__llds_to_x86_64_out__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64_out__AsmProc_10, (MR_Integer) 8)));

#line 47 "llds_to_x86_64_out.m"
            {
#line 47 "llds_to_x86_64_out.m"
              ll_backend__llds_to_x86_64_out__output_asm_instr_list_4_p_0(ll_backend__llds_to_x86_64_out__Stream_1, ll_backend__llds_to_x86_64_out__V_15_15);
            }
#line 48 "llds_to_x86_64_out.m"
            /* direct tailcall eliminated */
#line 48 "llds_to_x86_64_out.m"
            {
#line 48 "llds_to_x86_64_out.m"
              MR_Word ll_backend__llds_to_x86_64_out__HeadVar__2__tmp_copy_2 = ll_backend__llds_to_x86_64_out__AsmProcs_11;

#line 48 "llds_to_x86_64_out.m"
              ll_backend__llds_to_x86_64_out__HeadVar__2_2 = ll_backend__llds_to_x86_64_out__HeadVar__2__tmp_copy_2;
#line 48 "llds_to_x86_64_out.m"
            }
#line 48 "llds_to_x86_64_out.m"
            continue;
#line 46 "llds_to_x86_64_out.m"
          }
#line 45 "llds_to_x86_64_out.m"
      }
#line 45 "llds_to_x86_64_out.m"
      break;
#line 45 "llds_to_x86_64_out.m"
    }
#line 42 "llds_to_x86_64_out.m"
}

#line 27 "llds_to_x86_64_out.m"
void MR_CALL 
ll_backend__llds_to_x86_64_out__output_x86_64_asm_4_p_0(
#line 27 "llds_to_x86_64_out.m"
  MR_Word ll_backend__llds_to_x86_64_out__Stream_5,
#line 27 "llds_to_x86_64_out.m"
  MR_Word ll_backend__llds_to_x86_64_out__AsmProcs_6)
#line 27 "llds_to_x86_64_out.m"
{
#line 40 "llds_to_x86_64_out.m"
  {
#line 40 "llds_to_x86_64_out.m"
    MR_bool ll_backend__llds_to_x86_64_out__succeeded;

#line 40 "llds_to_x86_64_out.m"
    {
#line 40 "llds_to_x86_64_out.m"
      ll_backend__llds_to_x86_64_out__output_asm_proc_list_4_p_0(ll_backend__llds_to_x86_64_out__Stream_5, ll_backend__llds_to_x86_64_out__AsmProcs_6);
#line 40 "llds_to_x86_64_out.m"
      return;
    }
#line 40 "llds_to_x86_64_out.m"
  }
#line 27 "llds_to_x86_64_out.m"
}

void mercury__ll_backend__llds_to_x86_64_out__init(void)
{
}

void mercury__ll_backend__llds_to_x86_64_out__init_type_tables(void)
{
}

void mercury__ll_backend__llds_to_x86_64_out__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.llds_to_x86_64_out. */
