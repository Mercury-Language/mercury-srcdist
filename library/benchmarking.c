/*
** Automatically generated from `benchmarking.m'
** by the Mercury compiler,
** version rotd-2019-06-06
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module benchmarking.
// :- implementation.

/*
INIT mercury__benchmarking__init
ENDINIT
*/

#include "benchmarking.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"

#line 1104 "benchmarking.m"

#include "mercury_prof.h"
#include "mercury_heap_profile.h"



struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s {
  MR_Word mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6;
  MR_Box mercury__benchmarking__benchmark_nondet_5_p_0_env_0__In_7;
  MR_Integer * mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8;
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Repeats_9;
  MR_bool mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded;
  MR_Word mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21;
  jmp_buf mercury__benchmarking__benchmark_nondet_5_p_0_env_0__commit_0;
  MR_Box mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Out0_22;
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_24;
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_25;
  MR_Integer mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_26;
};


static MR_Integer MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__benchmarking__dump_trace_counts_to_4_p_0(
  MR_String FileName_1,
  MR_Integer * Result_2);

static void MR_CALL 
mercury__benchmarking__do_nothing_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Box HeadVar__1_1);

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0(
  MR_Box HeadVar__1_1);

static void MR_CALL 
mercury__benchmarking__get_user_cpu_milliseconds_1_p_0(
  MR_Integer * Time_1);

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
mercury__benchmarking__repeat_1_p_0(
  MR_Integer N_2,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
  MR_Word Pred_7,
  MR_Box InA_8,
  MR_Box * OutA_9,
  MR_Box InB_10,
  MR_Box * OutB_11,
  MR_Integer Repeats_12);

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word Func_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8);

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1(
  MR_Word Pred_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8);

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word Pred_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8);


static /* final */ const MR_Box mercury__benchmarking_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__benchmarking_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__benchmarking_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__benchmarking_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__benchmarking_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__benchmarking_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__benchmarking_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__benchmarking_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__benchmarking_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#line 261 "benchmarking.m"


#include <stdio.h>
#include <stdlib.h>
#include "mercury_prof_mem.h"
#include "mercury_heap_profile.h"
#include "mercury_wrapper.h"      // for MR_user_time_at_last_stat

#ifdef MR_MPROF_PROFILE_MEMORY

  #define MEMORY_PROFILE_SIZE   10  // Profile the top 10 entries.

  #define MAX_REPORT_LINES  10      // Display the top 10 entries.

  // local types

  typedef struct ML_memprof_float_counter
  {
    double      cells_at_period_end;
    double      words_at_period_end;
    double      cells_since_period_start;
    double      words_since_period_start;
  } ML_memprof_float_counter;

  typedef struct    ML_memprof_report_entry
  {
    const char                  *name;
    ML_memprof_float_counter    counter;
  } ML_memprof_report_entry;

  // static variables

  static ML_memprof_float_counter   ML_overall_counter;

  // local function declarations

  static    void    ML_update_counter(MR_memprof_counter *counter,
                        ML_memprof_float_counter *float_counter);

  static    int     ML_insert_into_table(const ML_memprof_report_entry
                        *new_entry, ML_memprof_report_entry *table,
                        int table_size, int next_slot);

  static    int     ML_memory_profile_top_table(MR_memprof_record *node,
                        ML_memprof_report_entry *table,
                        int size, int next_slot);

  static    int     ML_memory_profile_fill_table(MR_memprof_record *node,
                        ML_memprof_report_entry *table, int next_slot);

  static    void    ML_memory_profile_report(const ML_memprof_report_entry *,
                        int num_entries, MR_bool complete);

  static    int     ML_memory_profile_compare_final(const void *i1,
                        const void *i2);

#endif // MR_MPROF_PROFILE_MEMORY

void
ML_report_stats(void)
{
    int                 user_time_at_prev_stat;
    int                 real_time_at_prev_stat;
#if !defined(MR_HIGHLEVEL_CODE) || !defined(MR_CONSERVATIVE_GC)
    MercuryEngine       *eng;
#endif
#ifdef MR_MPROF_PROFILE_MEMORY
    int                 num_table_entries;
    ML_memprof_report_entry table[MEMORY_PROFILE_SIZE];
#endif

    // Print timing and stack usage information.

    user_time_at_prev_stat = MR_user_time_at_last_stat;
    MR_user_time_at_last_stat = MR_get_user_cpu_milliseconds();

    real_time_at_prev_stat = MR_real_time_at_last_stat;
    MR_real_time_at_last_stat = MR_get_real_milliseconds();

#if !defined(MR_HIGHLEVEL_CODE) || !defined(MR_CONSERVATIVE_GC)
    eng = MR_get_engine();
#endif

    fprintf(stderr, "[User time: +%.3fs, %.3fs,",
        (MR_user_time_at_last_stat - user_time_at_prev_stat) / 1000.0,
        (MR_user_time_at_last_stat - MR_user_time_at_start) / 1000.0
    );

    fprintf(stderr, " Real time: +%.3fs, %.3fs,",
        (MR_real_time_at_last_stat - real_time_at_prev_stat) / 1000.0,
        (MR_real_time_at_last_stat - MR_real_time_at_start) / 1000.0
    );

#ifndef MR_HIGHLEVEL_CODE
    fprintf(stderr, " D Stack: %.3fk, ND Stack: %.3fk,",
        ((char *) MR_sp - (char *)
            eng->MR_eng_context.MR_ctxt_detstack_zone->MR_zone_min) / 1024.0,
        ((char *) MR_maxfr - (char *)
            eng->MR_eng_context.MR_ctxt_nondetstack_zone->MR_zone_min) / 1024.0
    );
#endif

#ifdef MR_BOEHM_GC
    {
        char local_var;
        struct GC_stack_base base;

        if (GC_SUCCESS == GC_get_stack_base(&base)) {
            fprintf(stderr, " C Stack: %.3fk,",
                labs(&local_var - (char *)base.mem_base) / 1024.0);
        } else {
            fprintf(stderr, " Cannot locate C stack base.");
        }
    }
#endif

#ifdef MR_USE_TRAIL
    #ifdef MR_THREAD_SAFE
        fprintf(stderr, ", Trail: %.3fk,",
            ((char *) MR_trail_ptr -
            (char *) MR_CONTEXT(MR_ctxt_trail_zone)->MR_zone_min) / 1024.0
        );
    #else
        fprintf(stderr, " Trail: %.3fk,",
            ((char *) MR_trail_ptr -
            (char *) MR_trail_zone->MR_zone_min) / 1024.0
        );
   #endif // !MR_THREAD_SAFE
#endif // !MR_USE_TRAIL

    // Print heap usage information.

#ifdef MR_CONSERVATIVE_GC
  #ifdef MR_BOEHM_GC
    fprintf(stderr, "\n#GCs: %lu, ",
        (unsigned long) GC_get_gc_no());
    if (GC_mercury_calc_gc_time) {
        // Convert from unsigned long milliseconds to float seconds.
        fprintf(stderr, "total GC time: %.2fs, ",
            (float) GC_total_gc_time / (float) 1000);
    }
    fprintf(stderr, "Heap used since last GC: %.3fk, Total used: %.3fk",
        GC_get_bytes_since_gc() / 1024.0,
        GC_get_heap_size() / 1024.0
    );
  #endif
#else // !MR_CONSERVATIVE_GC
    fprintf(stderr, "\nHeap: %.3fk",
        ((char *) MR_hp - (char *) eng->MR_eng_heap_zone->MR_zone_min) / 1024.0
    );
#endif // !MR_CONSERVATIVE_GC

#ifdef  MR_MPROF_PROFILE_MEMORY

    // Update the overall counter (this needs to be done first,
    // so that the percentages come out right).
    ML_update_counter(&MR_memprof_overall, &ML_overall_counter);

    // Print out the per-procedure memory profile (top N entries).
    num_table_entries = ML_memory_profile_top_table(MR_memprof_procs.root,
        table, MEMORY_PROFILE_SIZE, 0);
    fprintf(stderr, "\nMemory profile by procedure\n");
    ML_memory_profile_report(table, num_table_entries, MR_FALSE);

    // Print out the per-type memory profile (top N entries).
    num_table_entries = ML_memory_profile_top_table(MR_memprof_types.root,
        table, MEMORY_PROFILE_SIZE, 0);
    fprintf(stderr, "\nMemory profile by type\n");
    ML_memory_profile_report(table, num_table_entries, MR_FALSE);

    // Print out the overall memory usage.
    fprintf(stderr, "Overall memory usage:"
        "+%8.8g %8.8g cells, +%8.8g %8.8g words\n",
        ML_overall_counter.cells_since_period_start,
        ML_overall_counter.cells_at_period_end,
        ML_overall_counter.words_since_period_start,
        ML_overall_counter.words_at_period_end
    );

#endif // MR_MPROF_PROFILE_MEMORY

    fprintf(stderr, "]\n");
}

#ifdef MR_MPROF_PROFILE_MEMORY

void
ML_report_full_memory_stats(void)
{
    int                     num_table_entries;
    int                     table_size;
    ML_memprof_report_entry *table;

    // Update the overall counter (this needs to be done first,
    // so that the percentages come out right).
    ML_update_counter(&MR_memprof_overall, &ML_overall_counter);

    // Allocate space for the table,
    if (MR_memprof_procs.num_entries > MR_memprof_types.num_entries) {
        table_size = MR_memprof_procs.num_entries;
    } else {
        table_size = MR_memprof_types.num_entries;
    }
    table = MR_GC_NEW_ARRAY(ML_memprof_report_entry, table_size);

    // Print the by-procedure memory profile.
    num_table_entries = ML_memory_profile_fill_table(MR_memprof_procs.root,
        table, 0);
    qsort(table, MR_memprof_procs.num_entries, sizeof(ML_memprof_report_entry),
        ML_memory_profile_compare_final);
    fprintf(stderr, "\nMemory profile by procedure\n");
    fprintf(stderr, "%14s %14s  %s\n",
        "Cells", "Words", "Procedure label");
    ML_memory_profile_report(table, num_table_entries, MR_TRUE);

    // Print the by-type memory profile.
    num_table_entries = ML_memory_profile_fill_table(MR_memprof_types.root,
        table, 0);
    qsort(table, MR_memprof_types.num_entries, sizeof(ML_memprof_report_entry),
        ML_memory_profile_compare_final);
    fprintf(stderr, "\nMemory profile by type\n");
    fprintf(stderr, "%14s %14s  %s\n",
        "Cells", "Words", "Procedure label");
    ML_memory_profile_report(table, num_table_entries, MR_TRUE);

    // Deallocate space for the table.
    MR_GC_free(table);

    // Print the overall memory usage.
    fprintf(stderr, "\nOverall memory usage: %8.8g cells, %8.8g words\n",
        ML_overall_counter.cells_at_period_end,
        ML_overall_counter.words_at_period_end
    );
}

// ML_update_counter(counter, float_counter):
//
// Copy the data for a period from `counter' into `float_counter'
// (changing the format slightly as we go), and update `counter'
// to reflect the start of a new period.

static void
ML_update_counter(MR_memprof_counter *counter,
    ML_memprof_float_counter *float_counter)
{
    MR_add_two_dwords(counter->cells_at_period_start,
        counter->cells_since_period_start);
    MR_add_two_dwords(counter->words_at_period_start,
        counter->words_since_period_start);

    MR_convert_dword_to_double(counter->cells_since_period_start,
        float_counter->cells_since_period_start);
    MR_convert_dword_to_double(counter->words_since_period_start,
        float_counter->words_since_period_start);

    // Since the 'at start' numbers have already been incremented,
    // they now refer to the start of the *next* period.
    MR_convert_dword_to_double(counter->cells_at_period_start,
        float_counter->cells_at_period_end);
    MR_convert_dword_to_double(counter->words_at_period_start,
        float_counter->words_at_period_end);

    MR_zero_dword(counter->cells_since_period_start);
    MR_zero_dword(counter->words_since_period_start);
}

// Insert an entry into the table of the top `table_size' entries.
// Entries are ranked according to their words_since_period_start.
// (This is an arbitrary choice; we might equally well choose
// to order them by cells_since_period_start. I prefer words (zs).)
// Entries that are not in the top `table_size' are discarded.

static int
ML_insert_into_table(const ML_memprof_report_entry *new_entry,
    ML_memprof_report_entry *table, int table_size, int next_slot)
{
    int slot;

    // Ignore entries whose counts are zero (allowing for rounding).
    if (new_entry->counter.words_since_period_start < 1.0) {
        return next_slot;
    }

    // Find the slot where this entry should be inserted.
    // Start at the end and work backwards until we find
    // the start of the table or until we find a table
    // entry which ranks higher that the new entry.
    slot = next_slot;
    while (slot > 0 && table[slot - 1].counter.words_since_period_start
        < new_entry->counter.words_since_period_start)
    {
        slot--;
    }

    // If this entry fits in the table, then shuffle the displaced entries
    // to the right, insert the new entry in the table, and increment next_slot
    // (unless it is already at the end of the table).
    if (slot < table_size) {
#if 0
// The following code is disabled because it causes gcc (2.7.2) internal
// errors (``fixed or forbidden register spilled'') on x86 machines when
// using gcc global register variables.
        int i;
        for (i = table_size - 1; i > slot; i--) {
            table[i] = table[i - 1];
        }
        table[slot] = *new_entry;
#else
        memmove(&table[slot + 1], &table[slot],
            (table_size - slot - 1) * sizeof(*table));
        MR_memcpy(&table[slot], new_entry, sizeof(*table));
#endif

        if (next_slot < table_size) {
            next_slot++;
        }
    }

    return next_slot;
}

// ML_memory_profile_top_table(node, table, table_size, next_slot):
//
// Insert the entries for `node' and its children into `table', which is
// big enough to hold the top `table_size' entries. `next_slot' specifies
// the number of entries currently in the table. Returns the new value
// of `next_slot'.

static int
ML_memory_profile_top_table(MR_memprof_record *node,
    ML_memprof_report_entry *table, int table_size, int next_slot)
{
    ML_memprof_report_entry new_entry;

    if (node != NULL) {
        next_slot = ML_memory_profile_top_table(node->left,
            table, table_size, next_slot);

        if (node->type_name != NULL) {
            new_entry.name = node->type_name;
        } else {
            new_entry.name = MR_lookup_entry_or_internal(node->proc);
        }
        ML_update_counter(&node->counter, &new_entry.counter);
        next_slot = ML_insert_into_table(&new_entry,
            table, table_size, next_slot);

        next_slot = ML_memory_profile_top_table(node->right,
            table, table_size, next_slot);
    }

    return next_slot;
}

// ML_memory_profile_fill_table(node, table, next_slot):
// Insert the entries for `node' and its children into `table', which the
// caller guarantees is big enough to hold them all. `next_slot' specifies
// the number of entries currently in the table. Returns the new value
// of `next_slot'.

static int
ML_memory_profile_fill_table(MR_memprof_record *node,
    ML_memprof_report_entry *table, int next_slot)
{
    if (node != NULL) {
        next_slot = ML_memory_profile_fill_table(node->left,
            table, next_slot);

        if (node->type_name != NULL) {
            table[next_slot].name = node->type_name;
        } else {
            table[next_slot].name = MR_lookup_entry_or_internal(node->proc);
        }
        ML_update_counter(&node->counter, &table[next_slot].counter);
        next_slot++;

        next_slot = ML_memory_profile_fill_table(node->right,
            table, next_slot);
    }
    return next_slot;
}

// ML_memory_profile_report(table, num_entries, complete):
//
// Print out a profiling report for the specified table.

static void
ML_memory_profile_report(const ML_memprof_report_entry *table, int num_entries,
    MR_bool complete)
{
    int     i;
    const char  *name;

    if (complete) {
        if (ML_overall_counter.cells_at_period_end < 1.0
        ||  ML_overall_counter.words_at_period_end < 1.0)
        {
            fprintf(stderr, "no allocations to report\n");
            return;
        }
    } else {
        if (ML_overall_counter.cells_since_period_start < 1.0
        ||  ML_overall_counter.words_since_period_start < 1.0)
        {
            fprintf(stderr, "no allocations to report\n");
            return;
        }
    }

    if (num_entries > MAX_REPORT_LINES && !complete) {
        num_entries = MAX_REPORT_LINES;
    }

    for (i = 0; i < num_entries; i++) {
        if (complete) {
            fprintf(stderr, "%8.8g/%4.1f%% %8.8g/%4.1f%%  %s\n",
                table[i].counter.cells_at_period_end,
                100 * table[i].counter.cells_at_period_end /
                    ML_overall_counter.cells_at_period_end,
                table[i].counter.words_at_period_end,
                100 * table[i].counter.words_at_period_end /
                    ML_overall_counter.words_at_period_end,
                table[i].name
            );
        } else {
            fprintf(stderr, "%8.8g/%4.1f%% %8.8g/%4.1f%%  %s\n",
                table[i].counter.cells_since_period_start,
                100 * table[i].counter.cells_since_period_start /
                   ML_overall_counter.cells_since_period_start,
                table[i].counter.words_since_period_start,
                100 * table[i].counter.words_since_period_start /
                   ML_overall_counter.words_since_period_start,
                table[i].name
            );
        }
    }
}

// Comparison routine used for qsort().
// Compares two ML_memprof_report_entry structures.

static int
ML_memory_profile_compare_final(const void *i1, const void *i2)
{
    const ML_memprof_report_entry *e1 = (const ML_memprof_report_entry *) i1;
    const ML_memprof_report_entry *e2 = (const ML_memprof_report_entry *) i2;

    if (e1->counter.words_at_period_end < e2->counter.words_at_period_end)
    {
        return 1;
    } else if
      (e1->counter.words_at_period_end > e2->counter.words_at_period_end)
    {
        return -1;
    } else {
        return strcmp(e1->name, e2->name);
    }
}

#endif // MR_MPROF_PROFILE_MEMORY

#line 1011 "benchmarking.m"

    volatile        MR_Word ML_benchmarking_dummy_word;




static MR_Integer MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__benchmarking__dump_trace_counts_to_4_p_0(
  MR_String FileName_1,
  MR_Integer * Result_2)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__dump_trace_counts_to_4_p_0

	MR_String FileName;
	MR_Integer Result;

	FileName =  FileName_1 ;
		{

#ifdef  MR_EXEC_TRACE
    FILE    *fp;

    if (MR_trace_count_enabled && MR_trace_func_enabled) {
        fp = fopen(FileName, "w");
        if (fp != NULL) {
            MR_trace_write_label_exec_counts(fp, MR_progname, MR_FALSE);
            Result = 0;
            (void) fclose(fp);
        } else {
            Result = 3;
        }
    } else {
        Result = 2;
    }
#else
    Result = 1;
#endif


		;}
#undef MR_PROC_LABEL
	 *Result_2  = Result;
}
  }
}

static void MR_CALL 
mercury__benchmarking__do_nothing_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Box HeadVar__1_1)
{
  mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0(HeadVar__1_1);
}

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0(
  MR_Box HeadVar__1_1)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_110_111_116_104_105_110_103_95_95_91_49_93_95_48_1_p_0

	MR_Word X;

	X = (MR_Word) HeadVar__1_1 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__benchmarking__get_user_cpu_milliseconds_1_p_0(
  MR_Integer * Time_1)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__get_user_cpu_milliseconds_1_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	 *Time_1  = Time;
}
  }
}

void MR_CALL 
mercury__benchmarking__log_threadscope_message_3_p_0(
  MR_String Message_1)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__log_threadscope_message_3_p_0

	MR_String Message;

	Message =  Message_1 ;
		{

#if MR_THREADSCOPE
    MR_threadscope_post_log_msg(Message);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__write_out_trace_counts_4_p_0(
  MR_String DumpFileName_5,
  MR_Word * MaybeErrorMsg_6)
{
  {
    MR_bool succeeded;
    MR_Integer Result_8;

{
#define MR_PROC_LABEL mercury__benchmarking__write_out_trace_counts_4_p_0

	MR_String FileName;
	MR_Integer Result;

	FileName =  DumpFileName_5 ;
		{

#ifdef  MR_EXEC_TRACE
    FILE    *fp;

    if (MR_trace_count_enabled && MR_trace_func_enabled) {
        fp = fopen(FileName, "w");
        if (fp != NULL) {
            MR_trace_write_label_exec_counts(fp, MR_progname, MR_FALSE);
            Result = 0;
            (void) fclose(fp);
        } else {
            Result = 3;
        }
    } else {
        Result = 2;
    }
#else
    Result = 1;
#endif


		;}
#undef MR_PROC_LABEL
	 Result_8  = Result;
}
    succeeded = (Result_8 == (MR_Integer) 0);
    if (succeeded)
      *MaybeErrorMsg_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      succeeded = (Result_8 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_String Var_12;
        MR_String Var_14;

        mercury__string__append_3_p_2(DumpFileName_5, (MR_String) "\': no compiled with debugging", &Var_14);
        mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", Var_14, &Var_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeErrorMsg_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
        }
      }
      else
      {
        succeeded = (Result_8 == (MR_Integer) 2);
        if (succeeded)
        {
          MR_String Var_16;
          MR_String Var_18;

          mercury__string__append_3_p_2(DumpFileName_5, (MR_String) "\': trace counting not turned on", &Var_18);
          mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", Var_18, &Var_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeErrorMsg_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
          }
        }
        else
        {
          succeeded = (Result_8 == (MR_Integer) 3);
          if (succeeded)
          {
            MR_String Var_20;
            MR_String Var_22;

            mercury__string__append_3_p_2(DumpFileName_5, (MR_String) "\': couldn\'t open file", &Var_22);
            mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", Var_22, &Var_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeErrorMsg_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
            }
          }
          else
          {
            MR_String Var_24;
            MR_String Var_26;

            mercury__string__append_3_p_2(DumpFileName_5, (MR_String) "\'", &Var_26);
            mercury__string__append_3_p_2((MR_String) "Couldn\'t dump trace counts to \140", Var_26, &Var_24);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeErrorMsg_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
mercury__benchmarking__turn_on_heap_profiling_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_heap_profiling_0_p_0


		{

    MR_prof_turn_on_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_off_heap_profiling_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_heap_profiling_0_p_0


		{

    MR_prof_turn_off_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_on_heap_profiling_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_heap_profiling_2_p_0


		{

    MR_prof_turn_on_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_off_heap_profiling_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_heap_profiling_2_p_0


		{

    MR_prof_turn_off_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_on_time_profiling_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_time_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_off_time_profiling_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_time_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_on_time_profiling_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_time_profiling_2_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_off_time_profiling_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_time_profiling_2_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_on_call_profiling_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_call_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_off_call_profiling_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_call_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_on_call_profiling_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_call_profiling_2_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_off_call_profiling_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_call_profiling_2_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_on_profiling_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_0_p_0


		{

    MR_prof_turn_on_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_off_profiling_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_0_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_0_p_0


		{

    MR_prof_turn_off_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_on_profiling_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_2_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_on_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_2_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_on_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_on_profiling_2_p_0


		{

    MR_prof_turn_on_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__turn_off_profiling_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_2_p_0


		{

#ifdef MR_MPROF_PROFILE_CALLS
    MR_prof_turn_off_call_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_2_p_0


		{

#ifdef MR_MPROF_PROFILE_TIME
    MR_prof_turn_off_time_profiling();
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__benchmarking__turn_off_profiling_2_p_0


		{

    MR_prof_turn_off_heap_profiling();


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word TypeInfo_for_T2_28;
      MR_Box conv1_Count_8;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Word X;

	X = (MR_Word) (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Out0_22 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
      mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21, &conv1_Count_8);
      *((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8) = ((MR_Integer) (conv1_Count_8));
      (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_26 = (MR_Integer) 1;
      (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_25 = (MR_Integer) ((MR_Unsigned) *((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8) + (MR_Unsigned) (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_26);
      mercury__mutvar__set_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21, ((MR_Box) ((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_25)));
      (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded)
        mercury__benchmarking__benchmark_nondet_5_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) (env_ptr_arg);

    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *);

      (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_24 = (MR_Integer) 0;
      mercury__mutvar__set_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21, ((MR_Box) ((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Var_24)));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6, (MR_Integer) 1))));
      func_0(((MR_Box) ((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6)), (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__In_7, &(env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Out0_22, mercury__benchmarking__benchmark_nondet_5_p_0_3, env_ptr);
    }
  }
}

static void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s * env_ptr = (struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__commit_0) == 0)
      {
        mercury__benchmarking__repeat_1_p_0((env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Repeats_9, mercury__benchmarking__benchmark_nondet_5_p_0_2, env_ptr);
        (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
mercury__benchmarking__benchmark_nondet_5_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word TypeInfo_for_T2_15,
  MR_Word Pred_6,
  MR_Box In_7,
  MR_Integer * Count_8,
  MR_Integer Repeats_9,
  MR_Integer * Time_10)
{
  {
    struct mercury__benchmarking__benchmark_nondet_5_p_0_env_0_s env;

    (env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Pred_6 = Pred_6;
    (env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__In_7 = In_7;
    (env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8 = Count_8;
    (env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Repeats_9 = Repeats_9;
    {
      MR_Integer StartTime_11;
      MR_Integer EndTime_12;
      MR_Integer Time0_13;
      MR_Box conv2_Count_8;
      MR_Word TypeCtorInfo_16_29;
      MR_Box conv3_Y;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	 StartTime_11  = Time;
}
      mercury__mutvar__new_mutvar_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), &(env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21);
      mercury__benchmarking__benchmark_nondet_5_p_0_4(&env);
      if (!((env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__succeeded))
      {
      }
      mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__SolutionCounter_21, &conv2_Count_8);
      *((env).mercury__benchmarking__benchmark_nondet_5_p_0_env_0__Count_8) = ((MR_Integer) (conv2_Count_8));
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	 EndTime_12  = Time;
}
      Time0_13 = (MR_Integer) ((MR_Unsigned) EndTime_12 - (MR_Unsigned) StartTime_11);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_nondet_5_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (Time0_13)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 conv3_Y  = (MR_Box) Y;
      *Time_10 = ((MR_Integer) (conv3_Y));
}
    }
  }
}

static void MR_CALL 
mercury__benchmarking__repeat_1_p_0(
  MR_Integer N_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_2 > (MR_Integer) 0);

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      cont(cont_env_ptr);
      {
        MR_Integer Var_4 = (MR_Integer) ((MR_Unsigned) N_2 - (MR_Unsigned) (MR_Integer) 1);
        MR_Integer next_value_of_N_2 = Var_4;

        // direct tailcall eliminated
        ;
        N_2 = next_value_of_N_2;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__benchmarking__benchmark_det_io_7_p_0(
  MR_Word TypeInfo_for_T1_17,
  MR_Word TypeInfo_for_T2_18,
  MR_Word TypeInfo_for_T3_19,
  MR_Word Pred_8,
  MR_Box InA_9,
  MR_Box * OutA_10,
  MR_Box InB_11,
  MR_Box * OutB_12,
  MR_Integer Repeats_13,
  MR_Integer * Time_14)
{
  {
    MR_Integer StartTime_15;
    MR_Integer EndTime_16;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_io_7_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	 StartTime_15  = Time;
}
    mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(Pred_8, InA_9, OutA_10, InB_11, OutB_12, Repeats_13);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_io_7_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	 EndTime_16  = Time;
}
    *Time_14 = (MR_Integer) ((MR_Unsigned) EndTime_16 - (MR_Unsigned) StartTime_15);
  }
}

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
  MR_Word Pred_7,
  MR_Box InA_8,
  MR_Box * OutA_9,
  MR_Box InB_10,
  MR_Box * OutB_11,
  MR_Integer Repeats_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box OutA0_13;
    MR_Box OutB0_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (Pred_7)), InA_8, &OutA0_13, InB_10, &OutB0_14);
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_105_111_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0

	MR_Word X;

	X = (MR_Word) OutA0_13 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
    succeeded = (Repeats_12 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Repeats_12 - (MR_Unsigned) (MR_Integer) 1);
      MR_Box next_value_of_InB_10 = OutB0_14;
      MR_Integer next_value_of_Repeats_12 = Var_16;

      // direct tailcall eliminated
      ;
      InB_10 = next_value_of_InB_10;
      Repeats_12 = next_value_of_Repeats_12;
      continue;
    }
    else
    {
      *OutA_9 = OutA0_13;
      *OutB_11 = OutB0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__benchmarking__benchmark_func_5_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word TypeInfo_for_T2_15,
  MR_Word Func_6,
  MR_Box In_7,
  MR_Box * Out_8,
  MR_Integer Repeats_9,
  MR_Integer * Time_10)
{
  {
    MR_Integer StartTime_11;
    MR_Integer EndTime_12;
    MR_Integer Time0_13;
    MR_Box conv0_Y;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_func_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	 StartTime_11  = Time;
}
    mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(Func_6, In_7, Out_8, Repeats_9);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_func_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	 EndTime_12  = Time;
}
    Time0_13 = (MR_Integer) ((MR_Unsigned) EndTime_12 - (MR_Unsigned) StartTime_11);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_func_5_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (Time0_13)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 conv0_Y  = (MR_Box) Y;
    *Time_10 = ((MR_Integer) (conv0_Y));
}
  }
}

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word Func_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box Out0_9;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Func_5, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    Out0_9 = func_0(((MR_Box) (Func_5)), In_6);
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_102_117_110_99_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0

	MR_Word X;

	X = (MR_Word) Out0_9 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
    succeeded = (Repeats_8 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Repeats_8 - (MR_Unsigned) (MR_Integer) 1);
      MR_Integer next_value_of_Repeats_8 = Var_11;

      // direct tailcall eliminated
      ;
      Repeats_8 = next_value_of_Repeats_8;
      continue;
    }
    else
      *Out_7 = Out0_9;
    break;
  }
}

void MR_CALL 
mercury__benchmarking__benchmark_det_5_p_1(
  MR_Word TypeInfo_for_T1_14,
  MR_Word TypeInfo_for_T2_15,
  MR_Word Pred_6,
  MR_Box In_7,
  MR_Box * Out_8,
  MR_Integer Repeats_9,
  MR_Integer * Time_10)
{
  {
    MR_Integer StartTime_11;
    MR_Integer EndTime_12;
    MR_Integer Time0_13;
    MR_Box conv0_Y;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_1

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	 StartTime_11  = Time;
}
    mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1(Pred_6, In_7, Out_8, Repeats_9);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_1

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	 EndTime_12  = Time;
}
    Time0_13 = (MR_Integer) ((MR_Unsigned) EndTime_12 - (MR_Unsigned) StartTime_11);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (Time0_13)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 conv0_Y  = (MR_Box) Y;
    *Time_10 = ((MR_Integer) (conv0_Y));
}
  }
}

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1(
  MR_Word Pred_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box Out0_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_5, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (Pred_5)), In_6, &Out0_9);
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_49_4_p_1

	MR_Word X;

	X = (MR_Word) Out0_9 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
    succeeded = (Repeats_8 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Repeats_8 - (MR_Unsigned) (MR_Integer) 1);
      MR_Integer next_value_of_Repeats_8 = Var_11;

      // direct tailcall eliminated
      ;
      Repeats_8 = next_value_of_Repeats_8;
      continue;
    }
    else
      *Out_7 = Out0_9;
    break;
  }
}

void MR_CALL 
mercury__benchmarking__benchmark_det_5_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word TypeInfo_for_T2_15,
  MR_Word Pred_6,
  MR_Box In_7,
  MR_Box * Out_8,
  MR_Integer Repeats_9,
  MR_Integer * Time_10)
{
  {
    MR_Integer StartTime_11;
    MR_Integer EndTime_12;
    MR_Integer Time0_13;
    MR_Box conv0_Y;

{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	 StartTime_11  = Time;
}
    mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(Pred_6, In_7, Out_8, Repeats_9);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_0

	MR_Integer Time;

		{

    Time = MR_get_user_cpu_milliseconds();


		;}
#undef MR_PROC_LABEL
	 EndTime_12  = Time;
}
    Time0_13 = (MR_Integer) ((MR_Unsigned) EndTime_12 - (MR_Unsigned) StartTime_11);
{
#define MR_PROC_LABEL mercury__benchmarking__benchmark_det_5_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (Time0_13)) ;
		{

    Y = X;


		;}
#undef MR_PROC_LABEL
	 conv0_Y  = (MR_Box) Y;
    *Time_10 = ((MR_Integer) (conv0_Y));
}
  }
}

static void MR_CALL 
mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0(
  MR_Word Pred_5,
  MR_Box In_6,
  MR_Box * Out_7,
  MR_Integer Repeats_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box Out0_9;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_5, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (Pred_5)), In_6, &Out0_9);
{
#define MR_PROC_LABEL mercury__benchmarking__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_101_110_99_104_109_97_114_107_95_100_101_116_95_108_111_111_112_95_95_91_49_44_32_50_93_95_48_4_p_0

	MR_Word X;

	X = (MR_Word) Out0_9 ;
		{

    ML_benchmarking_dummy_word = (MR_Word) X;


		;}
#undef MR_PROC_LABEL
}
    succeeded = (Repeats_8 > (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Repeats_8 - (MR_Unsigned) (MR_Integer) 1);
      MR_Integer next_value_of_Repeats_8 = Var_11;

      // direct tailcall eliminated
      ;
      Repeats_8 = next_value_of_Repeats_8;
      continue;
    }
    else
      *Out_7 = Out0_9;
    break;
  }
}

void MR_CALL 
mercury__benchmarking__report_memory_attribution_1_p_0(
  MR_String Label_2)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__report_memory_attribution_1_p_0

	MR_String Label;
	MR_Word Collect;

	Label =  Label_2 ;
	Collect =  (MR_Integer) 1 ;
		{

    MR_bool run_collect = (Collect) ? MR_TRUE : MR_FALSE;

#ifdef  MR_MPROF_PROFILE_MEMORY_ATTRIBUTION
    MR_report_memory_attribution(Label, run_collect);
#else
    (void) Label;
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__builtin__impure_true_0_p_0();
  }
}

void MR_CALL 
mercury__benchmarking__report_memory_attribution_3_p_0(
  MR_String Label_4)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__report_memory_attribution_3_p_0

	MR_String Label;
	MR_Word Collect;

	Label =  Label_4 ;
	Collect =  (MR_Integer) 1 ;
		{

    MR_bool run_collect = (Collect) ? MR_TRUE : MR_FALSE;

#ifdef  MR_MPROF_PROFILE_MEMORY_ATTRIBUTION
    MR_report_memory_attribution(Label, run_collect);
#else
    (void) Label;
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__report_memory_attribution_2_p_0(
  MR_String Label_3,
  MR_Word Collect_4)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__report_memory_attribution_2_p_0

	MR_String Label;
	MR_Word Collect;

	Label =  Label_3 ;
	Collect =  Collect_4 ;
		{

    MR_bool run_collect = (Collect) ? MR_TRUE : MR_FALSE;

#ifdef  MR_MPROF_PROFILE_MEMORY_ATTRIBUTION
    MR_report_memory_attribution(Label, run_collect);
#else
    (void) Label;
#endif


		;}
#undef MR_PROC_LABEL
}
    mercury__builtin__impure_true_0_p_0();
  }
}

void MR_CALL 
mercury__benchmarking__report_memory_attribution_4_p_0(
  MR_String Label_1,
  MR_Word Collect_2)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__report_memory_attribution_4_p_0

	MR_String Label;
	MR_Word Collect;

	Label =  Label_1 ;
	Collect =  Collect_2 ;
		{

    MR_bool run_collect = (Collect) ? MR_TRUE : MR_FALSE;

#ifdef  MR_MPROF_PROFILE_MEMORY_ATTRIBUTION
    MR_report_memory_attribution(Label, run_collect);
#else
    (void) Label;
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__report_full_memory_stats_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__report_full_memory_stats_0_p_0


		{

#ifdef  MR_MPROF_PROFILE_MEMORY
    ML_report_full_memory_stats();
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__benchmarking__report_stats_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__benchmarking__report_stats_0_p_0


		{

    ML_report_stats();


		;}
#undef MR_PROC_LABEL
}
  }
}

void mercury__benchmarking__init(void)
{
}

void mercury__benchmarking__init_type_tables(void)
{
}

void mercury__benchmarking__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__benchmarking__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module benchmarking.
