/*
** Automatically generated from `table_builtin.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__table_builtin__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "table_builtin.c"
#include "table_builtin.mh"

#line 27 "table_builtin.c"
#line 520 "io.int"
#include "io.mh"

#line 31 "table_builtin.c"
#line 526 "io.int"
#include "string.mh"

#line 35 "table_builtin.c"
#line 23 "bitmap.int2"
#include "bitmap.mh"

#line 39 "table_builtin.c"
#line 26 "time.int2"
#include "time.mh"

#line 43 "table_builtin.c"
#line 28 "array.int2"
#include "array.mh"

#line 47 "table_builtin.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "table_builtin.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 55 "table_builtin.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 59 "table_builtin.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 63 "table_builtin.c"
#line 22 "store.opt"
#include "store.mh"

#line 67 "table_builtin.c"
#line 4 "char.opt"
#include "char.mh"

#line 71 "table_builtin.c"
#line 3 "float.opt"
#include "float.mh"

#line 75 "table_builtin.c"
#line 3 "math.opt"
#include "math.mh"

#line 79 "table_builtin.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 83 "table_builtin.c"
#line 4 "int.opt"
#include "int.mh"

#line 87 "table_builtin.c"
#line 131 "io.opt"
#include "dir.mh"

#line 91 "table_builtin.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 95 "table_builtin.c"
#line 96 "table_builtin.c"
#ifndef TABLE_BUILTIN_DECL_GUARD
#define TABLE_BUILTIN_DECL_GUARD

#line 100 "table_builtin.c"
#line 1030 "table_builtin.m"

    #include "mercury_tabling.h"      /* for MR_copy_table_steps */
    #include "mercury_trace_base.h"   /* for MR_io_tabling_* */

#line 106 "table_builtin.c"
#line 1685 "table_builtin.m"


#include "mercury_misc.h"         /* for MR_fatal_error(); */
#include "mercury_type_info.h"    /* for MR_TypeCtorInfo_Struct; */
#include "mercury_tabling.h"      /* for MR_TrieNode, etc. */

MR_DECLARE_TYPE_CTOR_INFO_STRUCT(MR_TYPE_CTOR_INFO_NAME(io, state, 0));


#line 117 "table_builtin.c"
#line 118 "table_builtin.c"

#endif
#line 121 "table_builtin.c"


extern const MR_TypeCtorInfo_Struct
	mercury_data_table_builtin__type_ctor_info_table_step_stats_0,
	mercury_data_table_builtin__type_ctor_info_table_step_kind_0,
	mercury_data_table_builtin__type_ctor_info_table_stats_pair_0,
	mercury_data_table_builtin__type_ctor_info_table_stats_0,
	mercury_data_table_builtin__type_ctor_info_proc_table_statistics_0,
	mercury_data_table_builtin__type_ctor_info_mm_status_0,
	mercury_data_table_builtin__type_ctor_info_ml_trie_node_0,
	mercury_data_table_builtin__type_ctor_info_ml_subgoal_0,
	mercury_data_table_builtin__type_ctor_info_ml_proc_table_info_0,
	mercury_data_table_builtin__type_ctor_info_ml_generator_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_table_builtin__type_ctor_info_ml_consumer_0,
	mercury_data_table_builtin__type_ctor_info_ml_answer_list_0,
	mercury_data_table_builtin__type_ctor_info_ml_answer_block_0,
	mercury_data_table_builtin__type_ctor_info_memo_semi_status_0,
	mercury_data_table_builtin__type_ctor_info_memo_non_status_0,
	mercury_data_table_builtin__type_ctor_info_memo_non_record_0,
	mercury_data_table_builtin__type_ctor_info_memo_det_status_0,
	mercury_data_table_builtin__type_ctor_info_loop_status_0;
MR_decl_label1(table_builtin__get_all_input_step_stats_8_0, 2)
MR_decl_label1(table_builtin__get_all_output_step_stats_8_0, 2)
MR_decl_label4(table_builtin__get_tabling_stats_4_0, 2,4,3,5)
MR_decl_label1(table_builtin__table_io_has_occurred_1_0, 1)
MR_decl_label1(table_builtin__table_io_in_range_3_0, 1)
MR_decl_label1(table_builtin__table_memo_non_answer_is_not_duplicate_1_0, 1)
MR_decl_label1(table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_0, 1)
MR_decl_label1(table_builtin__table_mm_answer_is_not_duplicate_1_0, 1)
MR_decl_label1(table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_0, 1)
MR_decl_label1(table_builtin__table_mmos_answer_is_not_duplicate_1_0, 1)
MR_decl_label1(table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_0, 1)
MR_decl_label3(__Unify___table_builtin__proc_table_statistics_0_0, 2,4,1)
MR_decl_label1(__Unify___table_builtin__table_stats_0_0, 1)
MR_decl_label2(__Unify___table_builtin__table_stats_pair_0_0, 2,1)
MR_decl_label1(__Unify___table_builtin__table_step_stats_0_0, 1)
MR_decl_label2(__Compare___table_builtin__loop_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__memo_det_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__memo_non_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__memo_semi_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__mm_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__proc_table_statistics_0_0, 3,7)
MR_decl_label7(__Compare___table_builtin__table_stats_0_0, 4,5,7,12,13,15,20)
MR_decl_label2(__Compare___table_builtin__table_stats_pair_0_0, 3,7)
MR_decl_label2(__Compare___table_builtin__table_step_kind_0_0, 2,3)
MR_decl_label8(__Compare___table_builtin__table_step_stats_0_0, 3,4,6,11,12,14,19,20)
MR_decl_label8(__Compare___table_builtin__table_step_stats_0_0, 22,27,28,30,35,36,38,43)
MR_decl_label8(__Compare___table_builtin__table_step_stats_0_0, 44,46,51,52,54,59,60,62)
MR_decl_label3(__Compare___table_builtin__table_step_stats_0_0, 65,66,76)
MR_decl_static(table_builtin__get_direct_fields_14_0)
MR_decl_static(table_builtin__get_input_step_stats_21_0)
MR_decl_static(table_builtin__get_all_input_step_stats_8_0)
MR_decl_static(table_builtin__get_output_step_stats_21_0)
MR_decl_static(table_builtin__get_all_output_step_stats_8_0)
MR_decl_static(table_builtin__copy_current_stats_to_prev_3_0)
MR_decl_static(table_builtin__get_tabling_stats_4_0)
MR_def_extern_entry(table_builtin__table_loop_setup_2_0)
MR_def_extern_entry(table_builtin__table_loop_setup_shortcut_3_0)
MR_def_extern_entry(table_builtin__table_loop_mark_as_inactive_1_0)
MR_def_extern_entry(table_builtin__table_loop_mark_as_inactive_and_fail_1_0)
MR_def_extern_entry(table_builtin__table_loop_mark_as_active_and_fail_1_0)
MR_def_extern_entry(table_builtin__table_memo_det_setup_2_0)
MR_def_extern_entry(table_builtin__table_memo_det_setup_shortcut_3_0)
MR_def_extern_entry(table_builtin__table_memo_semi_setup_2_0)
MR_def_extern_entry(table_builtin__table_memo_semi_setup_shortcut_3_0)
MR_def_extern_entry(table_builtin__table_memo_non_setup_3_0)
MR_def_extern_entry(table_builtin__table_memo_mark_as_failed_1_0)
MR_def_extern_entry(table_builtin__table_memo_mark_as_succeeded_1_0)
MR_def_extern_entry(table_builtin__table_memo_mark_as_incomplete_1_0)
MR_def_extern_entry(table_builtin__table_memo_mark_as_active_and_fail_1_0)
MR_def_extern_entry(table_builtin__table_memo_mark_as_complete_and_fail_1_0)
MR_def_extern_entry(table_builtin__table_memo_create_answer_block_3_0)
MR_def_extern_entry(table_builtin__table_memo_fill_answer_block_shortcut_1_0)
MR_def_extern_entry(table_builtin__table_memo_get_answer_block_2_0)
MR_def_extern_entry(table_builtin__table_memo_get_answer_block_shortcut_1_0)
MR_def_extern_entry(table_builtin__table_memo_non_get_answer_table_2_0)
MR_def_extern_entry(table_builtin__table_memo_non_answer_is_not_duplicate_1_0)
MR_def_extern_entry(table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_0)
MR_def_extern_entry(table_builtin__table_memo_non_create_answer_block_shortcut_1_0)
MR_def_extern_entry(table_builtin__table_memo_non_return_all_shortcut_1_0)
MR_def_extern_entry(table_builtin__table_io_in_range_3_0)
MR_def_extern_entry(table_builtin__table_io_has_occurred_1_0)
MR_def_extern_entry(table_builtin__table_io_copy_io_state_2_0)
MR_def_extern_entry(table_builtin__table_io_left_bracket_unitized_goal_1_0)
MR_def_extern_entry(table_builtin__table_io_right_bracket_unitized_goal_1_0)
MR_def_extern_entry(table_builtin__table_mm_setup_3_0)
MR_def_extern_entry(table_builtin__table_mm_get_answer_table_2_0)
MR_def_extern_entry(table_builtin__table_mm_answer_is_not_duplicate_1_0)
MR_def_extern_entry(table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_0)
MR_def_extern_entry(table_builtin__table_mm_create_answer_block_3_0)
MR_def_extern_entry(table_builtin__table_mm_fill_answer_block_shortcut_1_0)
MR_def_extern_entry(table_builtin__table_mm_return_all_shortcut_1_0)
MR_def_extern_entry(table_builtin__table_mmos_save_inputs_0_0)
MR_def_extern_entry(table_builtin__table_mmos_setup_consumer_3_0)
MR_def_extern_entry(table_builtin__table_mmos_answer_is_not_duplicate_1_0)
MR_def_extern_entry(table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_0)
MR_def_extern_entry(table_builtin__table_mmos_restore_answers_1_0)
MR_def_extern_entry(table_builtin__table_mmos_pickup_inputs_1_0)
MR_def_extern_entry(table_builtin__table_mmos_create_answer_block_3_0)
MR_def_extern_entry(table_builtin__table_mmos_return_answer_2_0)
MR_def_extern_entry(table_builtin__table_mmos_completion_1_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_int_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_start_int_4_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_char_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_string_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_float_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_enum_4_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_user_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_user_fast_loose_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_poly_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_poly_fast_loose_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_typeinfo_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_typeclassinfo_3_0)
MR_def_extern_entry(table_builtin__table_save_int_answer_3_0)
MR_def_extern_entry(table_builtin__table_save_char_answer_3_0)
MR_def_extern_entry(table_builtin__table_save_string_answer_3_0)
MR_def_extern_entry(table_builtin__table_save_float_answer_3_0)
MR_def_extern_entry(table_builtin__table_save_io_state_answer_3_0)
MR_def_extern_entry(table_builtin__table_save_any_answer_3_0)
MR_def_extern_entry(table_builtin__table_restore_int_answer_3_0)
MR_def_extern_entry(table_builtin__table_restore_char_answer_3_0)
MR_def_extern_entry(table_builtin__table_restore_string_answer_3_0)
MR_def_extern_entry(table_builtin__table_restore_float_answer_3_0)
MR_def_extern_entry(table_builtin__table_restore_io_state_answer_3_0)
MR_def_extern_entry(table_builtin__table_restore_any_answer_3_0)
MR_def_extern_entry(table_builtin__table_error_1_0)
MR_def_extern_entry(table_builtin__table_report_statistics_0_0)
MR_def_extern_entry(__Unify___table_builtin__loop_status_0_0)
MR_def_extern_entry(__Compare___table_builtin__loop_status_0_0)
MR_def_extern_entry(__Unify___table_builtin__memo_det_status_0_0)
MR_def_extern_entry(__Compare___table_builtin__memo_det_status_0_0)
MR_def_extern_entry(__Unify___table_builtin__memo_non_record_0_0)
MR_def_extern_entry(__Compare___table_builtin__memo_non_record_0_0)
MR_def_extern_entry(__Unify___table_builtin__memo_non_status_0_0)
MR_def_extern_entry(__Compare___table_builtin__memo_non_status_0_0)
MR_def_extern_entry(__Unify___table_builtin__memo_semi_status_0_0)
MR_def_extern_entry(__Compare___table_builtin__memo_semi_status_0_0)
MR_def_extern_entry(__Unify___table_builtin__ml_answer_block_0_0)
MR_def_extern_entry(__Compare___table_builtin__ml_answer_block_0_0)
MR_def_extern_entry(__Unify___table_builtin__ml_answer_list_0_0)
MR_def_extern_entry(__Compare___table_builtin__ml_answer_list_0_0)
MR_def_extern_entry(__Unify___table_builtin__ml_consumer_0_0)
MR_def_extern_entry(__Compare___table_builtin__ml_consumer_0_0)
MR_def_extern_entry(__Unify___table_builtin__ml_generator_0_0)
MR_def_extern_entry(__Compare___table_builtin__ml_generator_0_0)
MR_def_extern_entry(__Unify___table_builtin__ml_proc_table_info_0_0)
MR_def_extern_entry(__Compare___table_builtin__ml_proc_table_info_0_0)
MR_def_extern_entry(__Unify___table_builtin__ml_subgoal_0_0)
MR_def_extern_entry(__Compare___table_builtin__ml_subgoal_0_0)
MR_def_extern_entry(__Unify___table_builtin__ml_trie_node_0_0)
MR_def_extern_entry(__Compare___table_builtin__ml_trie_node_0_0)
MR_def_extern_entry(__Unify___table_builtin__mm_status_0_0)
MR_def_extern_entry(__Compare___table_builtin__mm_status_0_0)
MR_def_extern_entry(__Unify___table_builtin__proc_table_statistics_0_0)
MR_def_extern_entry(__Compare___table_builtin__proc_table_statistics_0_0)
MR_def_extern_entry(__Unify___table_builtin__table_stats_0_0)
MR_def_extern_entry(__Compare___table_builtin__table_stats_0_0)
MR_def_extern_entry(__Unify___table_builtin__table_stats_pair_0_0)
MR_def_extern_entry(__Compare___table_builtin__table_stats_pair_0_0)
MR_def_extern_entry(__Unify___table_builtin__table_step_kind_0_0)
MR_def_extern_entry(__Compare___table_builtin__table_step_kind_0_0)
MR_def_extern_entry(__Unify___table_builtin__table_step_stats_0_0)
MR_def_extern_entry(__Compare___table_builtin__table_step_stats_0_0)
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_103_101_116_95_97_110_115_119_101_114_95_98_108_111_99_107_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_110_111_110_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_111_115_95_114_101_115_116_111_114_101_95_97_110_115_119_101_114_115_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_step_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_table_builtin__field_types_table_step_stats_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_table_builtin__type_ctor_info_table_step_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_table_builtin__field_names_table_step_stats_0_0[] = {
	"table_step_kind",
	"step_num_allocs",
	"step_num_inserts",
	"step_num_lookups",
	"step_num_insert_probes",
	"step_num_lookup_probes",
	"step_num_resizes",
	"step_num_resizes_old_entries",
	"step_num_resizes_new_entries"
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_step_stats_0_0 = {
	"table_step_stats",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_table_builtin__field_types_table_step_stats_0_0,
	mercury_data_table_builtin__field_names_table_step_stats_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_table_builtin__du_stag_ordered_table_step_stats_0_0[] = {
	&mercury_data_table_builtin__du_functor_desc_table_step_stats_0_0

};

const MR_DuPtagLayout mercury_data_table_builtin__du_ptag_ordered_table_step_stats_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_table_builtin__du_stag_ordered_table_step_stats_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_table_builtin__du_name_ordered_table_step_stats_0[] = {
	&mercury_data_table_builtin__du_functor_desc_table_step_stats_0_0
};

const MR_Integer mercury_data_table_builtin__functor_number_map_table_step_stats_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_step_stats_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__table_step_stats_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__table_step_stats_0_0)),
	"table_builtin",
	"table_step_stats",
	{ (void *)mercury_data_table_builtin__du_name_ordered_table_step_stats_0 },
	{ (void *)mercury_data_table_builtin__du_ptag_ordered_table_step_stats_0 },
	1,
	4,
	mercury_data_table_builtin__functor_number_map_table_step_stats_0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_0 = {
	"table_step_dummy",
	0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_1 = {
	"table_step_int",
	1
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_2 = {
	"table_step_char",
	2
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_3 = {
	"table_step_string",
	3
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_4 = {
	"table_step_float",
	4
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_5 = {
	"table_step_enum",
	5
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_6 = {
	"table_step_user",
	6
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_7 = {
	"table_step_user_fast_loose",
	7
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_8 = {
	"table_step_poly",
	8
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_9 = {
	"table_step_poly_fast_loose",
	9
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_10 = {
	"table_step_typeinfo",
	10
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_11 = {
	"table_step_typeclassinfo",
	11
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_12 = {
	"table_step_promise_implied",
	12
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_value_ordered_table_step_kind_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_0,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_1,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_2,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_3,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_4,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_5,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_6,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_7,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_8,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_9,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_10,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_11,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_12
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_name_ordered_table_step_kind_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_2,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_0,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_5,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_4,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_1,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_8,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_9,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_12,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_3,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_11,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_10,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_6,
	&mercury_data_table_builtin__enum_functor_desc_table_step_kind_0_7
};

const MR_Integer mercury_data_table_builtin__functor_number_map_table_step_kind_0[] = {
	1,
	4,
	0,
	8,
	3,
	2,
	11,
	12,
	5,
	6,
	10,
	9,
	7 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_step_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__table_step_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__table_step_kind_0_0)),
	"table_builtin",
	"table_step_kind",
	{ (void *)mercury_data_table_builtin__enum_name_ordered_table_step_kind_0 },
	{ (void *)mercury_data_table_builtin__enum_value_ordered_table_step_kind_0 },
	13,
	4,
	mercury_data_table_builtin__functor_number_map_table_step_kind_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_stats_0;

const MR_PseudoTypeInfo mercury_data_table_builtin__field_types_table_stats_pair_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_table_builtin__type_ctor_info_table_stats_0,
	(MR_PseudoTypeInfo) &mercury_data_table_builtin__type_ctor_info_table_stats_0
};

const MR_ConstString mercury_data_table_builtin__field_names_table_stats_pair_0_0[] = {
	"overall_stats",
	"stats_since_last"
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_stats_pair_0_0 = {
	"table_stats_pair",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_table_builtin__field_types_table_stats_pair_0_0,
	mercury_data_table_builtin__field_names_table_stats_pair_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_table_builtin__du_stag_ordered_table_stats_pair_0_0[] = {
	&mercury_data_table_builtin__du_functor_desc_table_stats_pair_0_0

};

const MR_DuPtagLayout mercury_data_table_builtin__du_ptag_ordered_table_stats_pair_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_table_builtin__du_stag_ordered_table_stats_pair_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_table_builtin__du_name_ordered_table_stats_pair_0[] = {
	&mercury_data_table_builtin__du_functor_desc_table_stats_pair_0_0
};

const MR_Integer mercury_data_table_builtin__functor_number_map_table_stats_pair_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_stats_pair_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__table_stats_pair_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__table_stats_pair_0_0)),
	"table_builtin",
	"table_stats_pair",
	{ (void *)mercury_data_table_builtin__du_name_ordered_table_stats_pair_0 },
	{ (void *)mercury_data_table_builtin__du_ptag_ordered_table_stats_pair_0 },
	1,
	4,
	mercury_data_table_builtin__functor_number_map_table_stats_pair_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_step_stats_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1table_builtin__type_ctor_info_table_step_stats_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_table_builtin__type_ctor_info_table_step_stats_0
}};

const MR_PseudoTypeInfo mercury_data_table_builtin__field_types_table_stats_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1table_builtin__type_ctor_info_table_step_stats_0
};

const MR_ConstString mercury_data_table_builtin__field_names_table_stats_0_0[] = {
	"num_lookups",
	"num_lookups_not_duplicate",
	"step_statistics"
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_stats_0_0 = {
	"table_stats",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_table_builtin__field_types_table_stats_0_0,
	mercury_data_table_builtin__field_names_table_stats_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_table_builtin__du_stag_ordered_table_stats_0_0[] = {
	&mercury_data_table_builtin__du_functor_desc_table_stats_0_0

};

const MR_DuPtagLayout mercury_data_table_builtin__du_ptag_ordered_table_stats_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_table_builtin__du_stag_ordered_table_stats_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_table_builtin__du_name_ordered_table_stats_0[] = {
	&mercury_data_table_builtin__du_functor_desc_table_stats_0_0
};

const MR_Integer mercury_data_table_builtin__functor_number_map_table_stats_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_stats_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__table_stats_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__table_stats_0_0)),
	"table_builtin",
	"table_stats",
	{ (void *)mercury_data_table_builtin__du_name_ordered_table_stats_0 },
	{ (void *)mercury_data_table_builtin__du_ptag_ordered_table_stats_0 },
	1,
	4,
	mercury_data_table_builtin__functor_number_map_table_stats_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_stats_pair_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1table_builtin__type_ctor_info_table_stats_pair_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_table_builtin__type_ctor_info_table_stats_pair_0
}};

const MR_PseudoTypeInfo mercury_data_table_builtin__field_types_proc_table_statistics_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_table_builtin__type_ctor_info_table_stats_pair_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1table_builtin__type_ctor_info_table_stats_pair_0
};

const MR_ConstString mercury_data_table_builtin__field_names_proc_table_statistics_0_0[] = {
	"call_table_stats",
	"maybe_answer_table_stats"
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_proc_table_statistics_0_0 = {
	"proc_table_statistics",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_table_builtin__field_types_proc_table_statistics_0_0,
	mercury_data_table_builtin__field_names_proc_table_statistics_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_table_builtin__du_stag_ordered_proc_table_statistics_0_0[] = {
	&mercury_data_table_builtin__du_functor_desc_proc_table_statistics_0_0

};

const MR_DuPtagLayout mercury_data_table_builtin__du_ptag_ordered_proc_table_statistics_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_table_builtin__du_stag_ordered_proc_table_statistics_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_table_builtin__du_name_ordered_proc_table_statistics_0[] = {
	&mercury_data_table_builtin__du_functor_desc_proc_table_statistics_0_0
};

const MR_Integer mercury_data_table_builtin__functor_number_map_proc_table_statistics_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_proc_table_statistics_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__proc_table_statistics_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__proc_table_statistics_0_0)),
	"table_builtin",
	"proc_table_statistics",
	{ (void *)mercury_data_table_builtin__du_name_ordered_proc_table_statistics_0 },
	{ (void *)mercury_data_table_builtin__du_ptag_ordered_proc_table_statistics_0 },
	1,
	4,
	mercury_data_table_builtin__functor_number_map_proc_table_statistics_0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_mm_status_0_0 = {
	"mm_inactive",
	0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_mm_status_0_1 = {
	"mm_active",
	1
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_mm_status_0_2 = {
	"mm_complete",
	2
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_value_ordered_mm_status_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_mm_status_0_0,
	&mercury_data_table_builtin__enum_functor_desc_mm_status_0_1,
	&mercury_data_table_builtin__enum_functor_desc_mm_status_0_2
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_name_ordered_mm_status_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_mm_status_0_1,
	&mercury_data_table_builtin__enum_functor_desc_mm_status_0_2,
	&mercury_data_table_builtin__enum_functor_desc_mm_status_0_0
};

const MR_Integer mercury_data_table_builtin__functor_number_map_mm_status_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_mm_status_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__mm_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__mm_status_0_0)),
	"table_builtin",
	"mm_status",
	{ (void *)mercury_data_table_builtin__enum_name_ordered_mm_status_0 },
	{ (void *)mercury_data_table_builtin__enum_value_ordered_mm_status_0 },
	3,
	4,
	mercury_data_table_builtin__functor_number_map_mm_status_0
};

const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_ml_trie_node_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__ml_trie_node_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__ml_trie_node_0_0)),
	"table_builtin",
	"ml_trie_node",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_ml_subgoal_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_SUBGOAL,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__ml_subgoal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__ml_subgoal_0_0)),
	"table_builtin",
	"ml_subgoal",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_ml_proc_table_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__ml_proc_table_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__ml_proc_table_info_0_0)),
	"table_builtin",
	"ml_proc_table_info",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_ml_generator_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__ml_generator_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__ml_generator_0_0)),
	"table_builtin",
	"ml_generator",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_ml_consumer_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__ml_consumer_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__ml_consumer_0_0)),
	"table_builtin",
	"ml_consumer",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_ml_answer_list_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__ml_answer_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__ml_answer_list_0_0)),
	"table_builtin",
	"ml_answer_list",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_ml_answer_block_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__ml_answer_block_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__ml_answer_block_0_0)),
	"table_builtin",
	"ml_answer_block",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_0 = {
	"memo_semi_inactive",
	0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_1 = {
	"memo_semi_active",
	1
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_2 = {
	"memo_semi_succeeded",
	2
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_3 = {
	"memo_semi_failed",
	3
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_value_ordered_memo_semi_status_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_0,
	&mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_1,
	&mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_2,
	&mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_3
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_name_ordered_memo_semi_status_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_1,
	&mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_3,
	&mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_0,
	&mercury_data_table_builtin__enum_functor_desc_memo_semi_status_0_2
};

const MR_Integer mercury_data_table_builtin__functor_number_map_memo_semi_status_0[] = {
	2,
	0,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_memo_semi_status_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__memo_semi_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__memo_semi_status_0_0)),
	"table_builtin",
	"memo_semi_status",
	{ (void *)mercury_data_table_builtin__enum_name_ordered_memo_semi_status_0 },
	{ (void *)mercury_data_table_builtin__enum_value_ordered_memo_semi_status_0 },
	4,
	4,
	mercury_data_table_builtin__functor_number_map_memo_semi_status_0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_0 = {
	"memo_non_inactive",
	0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_1 = {
	"memo_non_active",
	1
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_2 = {
	"memo_non_incomplete",
	2
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_3 = {
	"memo_non_complete",
	3
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_value_ordered_memo_non_status_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_0,
	&mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_1,
	&mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_2,
	&mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_3
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_name_ordered_memo_non_status_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_1,
	&mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_3,
	&mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_0,
	&mercury_data_table_builtin__enum_functor_desc_memo_non_status_0_2
};

const MR_Integer mercury_data_table_builtin__functor_number_map_memo_non_status_0[] = {
	2,
	0,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_memo_non_status_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__memo_non_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__memo_non_status_0_0)),
	"table_builtin",
	"memo_non_status",
	{ (void *)mercury_data_table_builtin__enum_name_ordered_memo_non_status_0 },
	{ (void *)mercury_data_table_builtin__enum_value_ordered_memo_non_status_0 },
	4,
	4,
	mercury_data_table_builtin__functor_number_map_memo_non_status_0
};

const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_memo_non_record_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__memo_non_record_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__memo_non_record_0_0)),
	"table_builtin",
	"memo_non_record",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_memo_det_status_0_0 = {
	"memo_det_inactive",
	0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_memo_det_status_0_1 = {
	"memo_det_active",
	1
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_memo_det_status_0_2 = {
	"memo_det_succeeded",
	2
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_value_ordered_memo_det_status_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_memo_det_status_0_0,
	&mercury_data_table_builtin__enum_functor_desc_memo_det_status_0_1,
	&mercury_data_table_builtin__enum_functor_desc_memo_det_status_0_2
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_name_ordered_memo_det_status_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_memo_det_status_0_1,
	&mercury_data_table_builtin__enum_functor_desc_memo_det_status_0_0,
	&mercury_data_table_builtin__enum_functor_desc_memo_det_status_0_2
};

const MR_Integer mercury_data_table_builtin__functor_number_map_memo_det_status_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_memo_det_status_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__memo_det_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__memo_det_status_0_0)),
	"table_builtin",
	"memo_det_status",
	{ (void *)mercury_data_table_builtin__enum_name_ordered_memo_det_status_0 },
	{ (void *)mercury_data_table_builtin__enum_value_ordered_memo_det_status_0 },
	3,
	4,
	mercury_data_table_builtin__functor_number_map_memo_det_status_0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_loop_status_0_0 = {
	"loop_inactive",
	0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_loop_status_0_1 = {
	"loop_active",
	1
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_value_ordered_loop_status_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_loop_status_0_0,
	&mercury_data_table_builtin__enum_functor_desc_loop_status_0_1
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_name_ordered_loop_status_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_loop_status_0_1,
	&mercury_data_table_builtin__enum_functor_desc_loop_status_0_0
};

const MR_Integer mercury_data_table_builtin__functor_number_map_loop_status_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_loop_status_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__loop_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__loop_status_0_0)),
	"table_builtin",
	"loop_status",
	{ (void *)mercury_data_table_builtin__enum_name_ordered_loop_status_0 },
	{ (void *)mercury_data_table_builtin__enum_value_ordered_loop_status_0 },
	2,
	4,
	mercury_data_table_builtin__functor_number_map_loop_status_0
};


MR_BEGIN_MODULE(table_builtin_module0)
	MR_init_entry1(table_builtin__get_direct_fields_14_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_builtin__get_direct_fields_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcTableInfoPtr	Info;
	MR_Integer	AnswerTable;
	MR_Integer	Inputs;
	MR_Integer	Outputs;
	MR_Integer	CallTableLookups;
	MR_Integer	CallTableNotDupl;
	MR_Integer	PrevCallTableLookups;
	MR_Integer	PrevCallTableNotDupl;
	MR_Integer	AnswerTableLookups;
	MR_Integer	AnswerTableNotDupl;
	MR_Integer	PrevAnswerTableLookups;
	MR_Integer	PrevAnswerTableNotDupl;
#define	MR_PROC_LABEL	mercury__table_builtin__get_direct_fields_14_0
	Info = (MR_ProcTableInfoPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_direct_fields");
{
#line 247 "table_builtin.m"

    AnswerTable = ( Info->MR_pt_has_answer_table ? 1 : 0 );
    Inputs = Info->MR_pt_num_inputs;
    Outputs = Info->MR_pt_num_outputs;
    CallTableLookups = Info->MR_pt_call_table_lookups;
    PrevCallTableLookups = Info->MR_pt_prev_call_table_lookups;
    CallTableNotDupl = Info->MR_pt_call_table_not_dupl;
    PrevCallTableNotDupl = Info->MR_pt_prev_call_table_not_dupl;
    AnswerTableLookups = Info->MR_pt_answer_table_lookups;
    PrevAnswerTableLookups = Info->MR_pt_prev_answer_table_lookups;
    AnswerTableNotDupl = Info->MR_pt_answer_table_not_dupl;
    PrevAnswerTableNotDupl = Info->MR_pt_prev_answer_table_not_dupl;
;}
#line 1101 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("get_direct_fields");
	MR_r1 = AnswerTable;
	MR_r2 = Inputs;
	MR_r3 = Outputs;
	MR_r4 = CallTableLookups;
	MR_r5 = CallTableNotDupl;
	MR_r6 = PrevCallTableLookups;
	MR_r7 = PrevCallTableNotDupl;
	MR_r8 = AnswerTableLookups;
	MR_r9 = AnswerTableNotDupl;
	MR_r10 = PrevAnswerTableLookups;
	MR_r11 = PrevAnswerTableNotDupl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module1)
	MR_init_entry1(table_builtin__get_input_step_stats_21_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_builtin__get_input_step_stats_21_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcTableInfoPtr	Info;
	MR_Integer	ArgNum;
	MR_Word	Kind;
	MR_Integer	NumAllocs;
	MR_Integer	NumInserts;
	MR_Integer	NumLookups;
	MR_Integer	NumInsertProbes;
	MR_Integer	NumLookupProbes;
	MR_Integer	NumResizes;
	MR_Integer	NumResizesOld;
	MR_Integer	NumResizesNew;
	MR_Integer	PrevNumAllocs;
	MR_Integer	PrevNumInserts;
	MR_Integer	PrevNumLookups;
	MR_Integer	PrevNumInsertProbes;
	MR_Integer	PrevNumLookupProbes;
	MR_Integer	PrevNumResizes;
	MR_Integer	PrevNumResizesOld;
	MR_Integer	PrevNumResizesNew;
#define	MR_PROC_LABEL	mercury__table_builtin__get_input_step_stats_21_0
	Info = (MR_ProcTableInfoPtr) MR_r1;
	ArgNum = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_input_step_stats");
{
#line 339 "table_builtin.m"

    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;

    Kind = Info->MR_pt_input_steps[ArgNum];

    cur  = &Info->MR_pt_call_table_stats[ArgNum];
    prev = &Info->MR_pt_prev_call_table_stats[ArgNum];

    NumAllocs = cur->MR_tss_num_allocs;
    NumInserts = cur->MR_tss_num_inserts;
    NumLookups = cur->MR_tss_num_lookups;
    NumInsertProbes = cur->MR_tss_num_insert_probes;
    NumLookupProbes = cur->MR_tss_num_lookup_probes;
    NumResizes = cur->MR_tss_num_resizes;
    NumResizesOld = cur->MR_tss_num_resizes_old_entries;
    NumResizesNew = cur->MR_tss_num_resizes_new_entries;

    PrevNumAllocs = prev->MR_tss_num_allocs;
    PrevNumInserts = prev->MR_tss_num_inserts;
    PrevNumLookups = prev->MR_tss_num_lookups;
    PrevNumInsertProbes = prev->MR_tss_num_insert_probes;
    PrevNumLookupProbes = prev->MR_tss_num_lookup_probes;
    PrevNumResizes = prev->MR_tss_num_resizes;
    PrevNumResizesOld = prev->MR_tss_num_resizes_old_entries;
    PrevNumResizesNew = prev->MR_tss_num_resizes_new_entries;
;}
#line 1187 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("get_input_step_stats");
	MR_r1 = Kind;
	MR_r2 = NumAllocs;
	MR_r3 = NumInserts;
	MR_r4 = NumLookups;
	MR_r5 = NumInsertProbes;
	MR_r6 = NumLookupProbes;
	MR_r7 = NumResizes;
	MR_r8 = NumResizesOld;
	MR_r9 = NumResizesNew;
	MR_r10 = PrevNumAllocs;
	MR_r11 = PrevNumInserts;
	MR_r12 = PrevNumLookups;
	MR_r13 = PrevNumInsertProbes;
	MR_r14 = PrevNumLookupProbes;
	MR_r15 = PrevNumResizes;
	MR_r16 = PrevNumResizesOld;
	MR_r17 = PrevNumResizesNew;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module2)
	MR_init_entry1(table_builtin__get_all_input_step_stats_8_0);
	MR_init_label1(table_builtin__get_all_input_step_stats_8_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_builtin__get_all_input_step_stats_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(table_builtin__get_all_input_step_stats_8_0_i2);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(table_builtin__get_all_input_step_stats_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18;
	{
	MR_ProcTableInfoPtr	Info;
	MR_Integer	ArgNum;
	MR_Word	Kind;
	MR_Integer	NumAllocs;
	MR_Integer	NumInserts;
	MR_Integer	NumLookups;
	MR_Integer	NumInsertProbes;
	MR_Integer	NumLookupProbes;
	MR_Integer	NumResizes;
	MR_Integer	NumResizesOld;
	MR_Integer	NumResizesNew;
	MR_Integer	PrevNumAllocs;
	MR_Integer	PrevNumInserts;
	MR_Integer	PrevNumLookups;
	MR_Integer	PrevNumInsertProbes;
	MR_Integer	PrevNumLookupProbes;
	MR_Integer	PrevNumResizes;
	MR_Integer	PrevNumResizesOld;
	MR_Integer	PrevNumResizesNew;
#define	MR_PROC_LABEL	mercury__table_builtin__get_all_input_step_stats_8_0
	Info = (MR_ProcTableInfoPtr) MR_r1;
	ArgNum = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_input_step_stats");
{
#line 339 "table_builtin.m"

    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;

    Kind = Info->MR_pt_input_steps[ArgNum];

    cur  = &Info->MR_pt_call_table_stats[ArgNum];
    prev = &Info->MR_pt_prev_call_table_stats[ArgNum];

    NumAllocs = cur->MR_tss_num_allocs;
    NumInserts = cur->MR_tss_num_inserts;
    NumLookups = cur->MR_tss_num_lookups;
    NumInsertProbes = cur->MR_tss_num_insert_probes;
    NumLookupProbes = cur->MR_tss_num_lookup_probes;
    NumResizes = cur->MR_tss_num_resizes;
    NumResizesOld = cur->MR_tss_num_resizes_old_entries;
    NumResizesNew = cur->MR_tss_num_resizes_new_entries;

    PrevNumAllocs = prev->MR_tss_num_allocs;
    PrevNumInserts = prev->MR_tss_num_inserts;
    PrevNumLookups = prev->MR_tss_num_lookups;
    PrevNumInsertProbes = prev->MR_tss_num_insert_probes;
    PrevNumLookupProbes = prev->MR_tss_num_lookup_probes;
    PrevNumResizes = prev->MR_tss_num_resizes;
    PrevNumResizesOld = prev->MR_tss_num_resizes_old_entries;
    PrevNumResizesNew = prev->MR_tss_num_resizes_new_entries;
;}
#line 1290 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("get_input_step_stats");
	MR_tempr1 = Kind;
	MR_tempr2 = NumAllocs;
	MR_tempr3 = NumInserts;
	MR_tempr4 = NumLookups;
	MR_tempr5 = NumInsertProbes;
	MR_tempr6 = NumLookupProbes;
	MR_tempr7 = NumResizes;
	MR_tempr8 = NumResizesOld;
	MR_tempr9 = NumResizesNew;
	MR_tempr10 = PrevNumAllocs;
	MR_tempr11 = PrevNumInserts;
	MR_tempr12 = PrevNumLookups;
	MR_tempr13 = PrevNumInsertProbes;
	MR_tempr14 = PrevNumLookupProbes;
	MR_tempr15 = PrevNumResizes;
	MR_tempr16 = PrevNumResizesOld;
	MR_tempr17 = PrevNumResizesNew;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr18, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr18, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr18, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr18, 2) = MR_tempr3;
	MR_tfield(0, MR_tempr18, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr18, 4) = MR_tempr5;
	MR_tfield(0, MR_tempr18, 5) = MR_tempr6;
	MR_tfield(0, MR_tempr18, 6) = MR_tempr7;
	MR_tfield(0, MR_tempr18, 7) = MR_tempr8;
	MR_tfield(0, MR_tempr18, 8) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr10;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr11;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr12;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr13;
	MR_tfield(0, MR_tempr2, 5) = MR_tempr14;
	MR_tfield(0, MR_tempr2, 6) = MR_tempr15;
	MR_tfield(0, MR_tempr2, 7) = MR_tempr16;
	MR_tfield(0, MR_tempr2, 8) = MR_tempr17;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr18;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_np_localtailcall(table_builtin__get_all_input_step_stats_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module3)
	MR_init_entry1(table_builtin__get_output_step_stats_21_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_builtin__get_output_step_stats_21_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcTableInfoPtr	Info;
	MR_Integer	ArgNum;
	MR_Word	Kind;
	MR_Integer	NumAllocs;
	MR_Integer	NumInserts;
	MR_Integer	NumLookups;
	MR_Integer	NumInsertProbes;
	MR_Integer	NumLookupProbes;
	MR_Integer	NumResizes;
	MR_Integer	NumResizesOld;
	MR_Integer	NumResizesNew;
	MR_Integer	PrevNumAllocs;
	MR_Integer	PrevNumInserts;
	MR_Integer	PrevNumLookups;
	MR_Integer	PrevNumInsertProbes;
	MR_Integer	PrevNumLookupProbes;
	MR_Integer	PrevNumResizes;
	MR_Integer	PrevNumResizesOld;
	MR_Integer	PrevNumResizesNew;
#define	MR_PROC_LABEL	mercury__table_builtin__get_output_step_stats_21_0
	Info = (MR_ProcTableInfoPtr) MR_r1;
	ArgNum = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_output_step_stats");
{
#line 385 "table_builtin.m"

    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;

    Kind = Info->MR_pt_output_steps[ArgNum];

    cur  = &Info->MR_pt_answer_table_stats[ArgNum];
    prev = &Info->MR_pt_prev_answer_table_stats[ArgNum];

    NumAllocs = cur->MR_tss_num_allocs;
    NumInserts = cur->MR_tss_num_inserts;
    NumLookups = cur->MR_tss_num_lookups;
    NumInsertProbes = cur->MR_tss_num_insert_probes;
    NumLookupProbes = cur->MR_tss_num_lookup_probes;
    NumResizes = cur->MR_tss_num_resizes;
    NumResizesOld = cur->MR_tss_num_resizes_old_entries;
    NumResizesNew = cur->MR_tss_num_resizes_new_entries;

    PrevNumAllocs = prev->MR_tss_num_allocs;
    PrevNumInserts = prev->MR_tss_num_inserts;
    PrevNumLookups = prev->MR_tss_num_lookups;
    PrevNumInsertProbes = prev->MR_tss_num_insert_probes;
    PrevNumLookupProbes = prev->MR_tss_num_lookup_probes;
    PrevNumResizes = prev->MR_tss_num_resizes;
    PrevNumResizesOld = prev->MR_tss_num_resizes_old_entries;
    PrevNumResizesNew = prev->MR_tss_num_resizes_new_entries;
;}
#line 1412 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("get_output_step_stats");
	MR_r1 = Kind;
	MR_r2 = NumAllocs;
	MR_r3 = NumInserts;
	MR_r4 = NumLookups;
	MR_r5 = NumInsertProbes;
	MR_r6 = NumLookupProbes;
	MR_r7 = NumResizes;
	MR_r8 = NumResizesOld;
	MR_r9 = NumResizesNew;
	MR_r10 = PrevNumAllocs;
	MR_r11 = PrevNumInserts;
	MR_r12 = PrevNumLookups;
	MR_r13 = PrevNumInsertProbes;
	MR_r14 = PrevNumLookupProbes;
	MR_r15 = PrevNumResizes;
	MR_r16 = PrevNumResizesOld;
	MR_r17 = PrevNumResizesNew;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module4)
	MR_init_entry1(table_builtin__get_all_output_step_stats_8_0);
	MR_init_label1(table_builtin__get_all_output_step_stats_8_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_builtin__get_all_output_step_stats_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(table_builtin__get_all_output_step_stats_8_0_i2);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(table_builtin__get_all_output_step_stats_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18;
	{
	MR_ProcTableInfoPtr	Info;
	MR_Integer	ArgNum;
	MR_Word	Kind;
	MR_Integer	NumAllocs;
	MR_Integer	NumInserts;
	MR_Integer	NumLookups;
	MR_Integer	NumInsertProbes;
	MR_Integer	NumLookupProbes;
	MR_Integer	NumResizes;
	MR_Integer	NumResizesOld;
	MR_Integer	NumResizesNew;
	MR_Integer	PrevNumAllocs;
	MR_Integer	PrevNumInserts;
	MR_Integer	PrevNumLookups;
	MR_Integer	PrevNumInsertProbes;
	MR_Integer	PrevNumLookupProbes;
	MR_Integer	PrevNumResizes;
	MR_Integer	PrevNumResizesOld;
	MR_Integer	PrevNumResizesNew;
#define	MR_PROC_LABEL	mercury__table_builtin__get_all_output_step_stats_8_0
	Info = (MR_ProcTableInfoPtr) MR_r1;
	ArgNum = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_output_step_stats");
{
#line 385 "table_builtin.m"

    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;

    Kind = Info->MR_pt_output_steps[ArgNum];

    cur  = &Info->MR_pt_answer_table_stats[ArgNum];
    prev = &Info->MR_pt_prev_answer_table_stats[ArgNum];

    NumAllocs = cur->MR_tss_num_allocs;
    NumInserts = cur->MR_tss_num_inserts;
    NumLookups = cur->MR_tss_num_lookups;
    NumInsertProbes = cur->MR_tss_num_insert_probes;
    NumLookupProbes = cur->MR_tss_num_lookup_probes;
    NumResizes = cur->MR_tss_num_resizes;
    NumResizesOld = cur->MR_tss_num_resizes_old_entries;
    NumResizesNew = cur->MR_tss_num_resizes_new_entries;

    PrevNumAllocs = prev->MR_tss_num_allocs;
    PrevNumInserts = prev->MR_tss_num_inserts;
    PrevNumLookups = prev->MR_tss_num_lookups;
    PrevNumInsertProbes = prev->MR_tss_num_insert_probes;
    PrevNumLookupProbes = prev->MR_tss_num_lookup_probes;
    PrevNumResizes = prev->MR_tss_num_resizes;
    PrevNumResizesOld = prev->MR_tss_num_resizes_old_entries;
    PrevNumResizesNew = prev->MR_tss_num_resizes_new_entries;
;}
#line 1515 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("get_output_step_stats");
	MR_tempr1 = Kind;
	MR_tempr2 = NumAllocs;
	MR_tempr3 = NumInserts;
	MR_tempr4 = NumLookups;
	MR_tempr5 = NumInsertProbes;
	MR_tempr6 = NumLookupProbes;
	MR_tempr7 = NumResizes;
	MR_tempr8 = NumResizesOld;
	MR_tempr9 = NumResizesNew;
	MR_tempr10 = PrevNumAllocs;
	MR_tempr11 = PrevNumInserts;
	MR_tempr12 = PrevNumLookups;
	MR_tempr13 = PrevNumInsertProbes;
	MR_tempr14 = PrevNumLookupProbes;
	MR_tempr15 = PrevNumResizes;
	MR_tempr16 = PrevNumResizesOld;
	MR_tempr17 = PrevNumResizesNew;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr18, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr18, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr18, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr18, 2) = MR_tempr3;
	MR_tfield(0, MR_tempr18, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr18, 4) = MR_tempr5;
	MR_tfield(0, MR_tempr18, 5) = MR_tempr6;
	MR_tfield(0, MR_tempr18, 6) = MR_tempr7;
	MR_tfield(0, MR_tempr18, 7) = MR_tempr8;
	MR_tfield(0, MR_tempr18, 8) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr10;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr11;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr12;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr13;
	MR_tfield(0, MR_tempr2, 5) = MR_tempr14;
	MR_tfield(0, MR_tempr2, 6) = MR_tempr15;
	MR_tfield(0, MR_tempr2, 7) = MR_tempr16;
	MR_tfield(0, MR_tempr2, 8) = MR_tempr17;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr18;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_np_localtailcall(table_builtin__get_all_output_step_stats_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module5)
	MR_init_entry1(table_builtin__copy_current_stats_to_prev_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_builtin__copy_current_stats_to_prev_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcTableInfoPtr	Info;
#define	MR_PROC_LABEL	mercury__table_builtin__copy_current_stats_to_prev_3_0
	Info = (MR_ProcTableInfoPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("copy_current_stats_to_prev");
{
#line 419 "table_builtin.m"

    int i;
    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;

    Info->MR_pt_prev_call_table_lookups = Info->MR_pt_call_table_lookups;
    Info->MR_pt_prev_call_table_not_dupl = Info->MR_pt_call_table_not_dupl;
    Info->MR_pt_prev_answer_table_lookups = Info->MR_pt_answer_table_lookups;
    Info->MR_pt_prev_answer_table_not_dupl = Info->MR_pt_answer_table_not_dupl;

    for (i = 0; i < Info->MR_pt_num_inputs; i++) {
        cur  = &Info->MR_pt_call_table_stats[i];
        prev = &Info->MR_pt_prev_call_table_stats[i];
        MR_copy_table_step_stats(prev, cur);
    }

    if (Info->MR_pt_has_answer_table) {
        for (i = 0; i < Info->MR_pt_num_outputs; i++) {
            cur  = &Info->MR_pt_answer_table_stats[i];
            prev = &Info->MR_pt_prev_answer_table_stats[i];
            MR_copy_table_step_stats(prev, cur);
        }
    }
;}
#line 1615 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("copy_current_stats_to_prev");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module6)
	MR_init_entry1(table_builtin__get_tabling_stats_4_0);
	MR_init_label4(table_builtin__get_tabling_stats_4_0,2,4,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(table_builtin__get_tabling_stats_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	{
	MR_ProcTableInfoPtr	Info;
	MR_Integer	AnswerTable;
	MR_Integer	Inputs;
	MR_Integer	Outputs;
	MR_Integer	CallTableLookups;
	MR_Integer	CallTableNotDupl;
	MR_Integer	PrevCallTableLookups;
	MR_Integer	PrevCallTableNotDupl;
	MR_Integer	AnswerTableLookups;
	MR_Integer	AnswerTableNotDupl;
	MR_Integer	PrevAnswerTableLookups;
	MR_Integer	PrevAnswerTableNotDupl;
#define	MR_PROC_LABEL	mercury__table_builtin__get_tabling_stats_4_0
	Info = (MR_ProcTableInfoPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_direct_fields");
{
#line 247 "table_builtin.m"

    AnswerTable = ( Info->MR_pt_has_answer_table ? 1 : 0 );
    Inputs = Info->MR_pt_num_inputs;
    Outputs = Info->MR_pt_num_outputs;
    CallTableLookups = Info->MR_pt_call_table_lookups;
    PrevCallTableLookups = Info->MR_pt_prev_call_table_lookups;
    CallTableNotDupl = Info->MR_pt_call_table_not_dupl;
    PrevCallTableNotDupl = Info->MR_pt_prev_call_table_not_dupl;
    AnswerTableLookups = Info->MR_pt_answer_table_lookups;
    PrevAnswerTableLookups = Info->MR_pt_prev_answer_table_lookups;
    AnswerTableNotDupl = Info->MR_pt_answer_table_not_dupl;
    PrevAnswerTableNotDupl = Info->MR_pt_prev_answer_table_not_dupl;
;}
#line 1673 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("get_direct_fields");
	MR_tempr1 = AnswerTable;
	MR_tempr2 = Inputs;
	MR_tempr3 = Outputs;
	MR_tempr4 = CallTableLookups;
	MR_tempr5 = CallTableNotDupl;
	MR_tempr6 = PrevCallTableLookups;
	MR_tempr7 = PrevCallTableNotDupl;
	MR_tempr8 = AnswerTableLookups;
	MR_tempr9 = AnswerTableNotDupl;
	MR_tempr10 = PrevAnswerTableLookups;
	MR_tempr11 = PrevAnswerTableNotDupl;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tempr5;
	MR_sv(6) = MR_tempr6;
	MR_sv(7) = MR_tempr7;
	MR_sv(8) = MR_tempr8;
	MR_sv(9) = MR_tempr9;
	MR_sv(10) = MR_tempr10;
	MR_sv(11) = MR_tempr11;
	MR_r2 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(table_builtin__get_all_input_step_stats_8_0,
		table_builtin__get_tabling_stats_4_0_i2);
MR_def_label(table_builtin__get_tabling_stats_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r8 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	if (MR_INT_LE(MR_sv(2),0)) {
		MR_GOTO_LAB(table_builtin__get_tabling_stats_4_0_i3);
	}
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(table_builtin__get_all_output_step_stats_8_0,
		table_builtin__get_tabling_stats_4_0_i4);
MR_def_label(table_builtin__get_tabling_stats_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_tempr4;
	MR_GOTO_LAB(table_builtin__get_tabling_stats_4_0_i5);
	}
MR_def_label(table_builtin__get_tabling_stats_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r8;
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(table_builtin__get_tabling_stats_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcTableInfoPtr	Info;
#define	MR_PROC_LABEL	mercury__table_builtin__get_tabling_stats_4_0
	Info = (MR_ProcTableInfoPtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("copy_current_stats_to_prev");
{
#line 419 "table_builtin.m"

    int i;
    MR_TableStepStats   *cur;
    MR_TableStepStats   *prev;

    Info->MR_pt_prev_call_table_lookups = Info->MR_pt_call_table_lookups;
    Info->MR_pt_prev_call_table_not_dupl = Info->MR_pt_call_table_not_dupl;
    Info->MR_pt_prev_answer_table_lookups = Info->MR_pt_answer_table_lookups;
    Info->MR_pt_prev_answer_table_not_dupl = Info->MR_pt_answer_table_not_dupl;

    for (i = 0; i < Info->MR_pt_num_inputs; i++) {
        cur  = &Info->MR_pt_call_table_stats[i];
        prev = &Info->MR_pt_prev_call_table_stats[i];
        MR_copy_table_step_stats(prev, cur);
    }

    if (Info->MR_pt_has_answer_table) {
        for (i = 0; i < Info->MR_pt_num_outputs; i++) {
            cur  = &Info->MR_pt_answer_table_stats[i];
            prev = &Info->MR_pt_prev_answer_table_stats[i];
            MR_copy_table_step_stats(prev, cur);
        }
    }
;}
#line 1796 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("copy_current_stats_to_prev");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module7)
	MR_init_entry1(table_builtin__table_loop_setup_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_loop_setup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
	MR_Word	Status;
#define	MR_PROC_LABEL	mercury__table_builtin__table_loop_setup_2_0
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_loop_setup");
{
#line 489 "table_builtin.m"

    MR_tbl_loop_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);
;}
#line 1829 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_loop_setup");
	MR_r1 = Status;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module8)
	MR_init_entry1(table_builtin__table_loop_setup_shortcut_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_loop_setup_shortcut_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_TrieNode	T;
	MR_Word	Status;
#define	MR_PROC_LABEL	mercury__table_builtin__table_loop_setup_shortcut_3_0
	T0 = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_loop_setup_shortcut");
{
#line 496 "table_builtin.m"

    MR_tbl_loop_setup_shortcut(T0, T, Status);
;}
#line 1864 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_loop_setup_shortcut");
	MR_r1 = (MR_Word) T;
	MR_r2 = Status;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module9)
	MR_init_entry1(table_builtin__table_loop_mark_as_inactive_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_loop_mark_as_inactive_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_loop_mark_as_inactive_1_0
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_loop_mark_as_inactive");
{
#line 503 "table_builtin.m"

    MR_tbl_loop_mark_as_inactive(MR_TABLE_DEBUG_BOOL, T);
;}
#line 1898 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_loop_mark_as_inactive");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module10)
	MR_init_entry1(table_builtin__table_loop_mark_as_inactive_and_fail_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_loop_mark_as_inactive_and_fail_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_loop_mark_as_inactive_and_fail_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_loop_mark_as_inactive_and_fail");
{
#line 510 "table_builtin.m"

    MR_tbl_loop_mark_as_inactive_and_fail(MR_TABLE_DEBUG_BOOL, T);
;}
#line 1933 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_loop_mark_as_inactive_and_fail");
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module11)
	MR_init_entry1(table_builtin__table_loop_mark_as_active_and_fail_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_loop_mark_as_active_and_fail_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_loop_mark_as_active_and_fail_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_loop_mark_as_active_and_fail");
{
#line 517 "table_builtin.m"

    MR_tbl_loop_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, T);
;}
#line 1971 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_loop_mark_as_active_and_fail");
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module12)
	MR_init_entry1(table_builtin__table_memo_det_setup_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_det_setup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
	MR_Word	Status;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_det_setup_2_0
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_det_setup");
{
#line 682 "table_builtin.m"

    MR_tbl_memo_det_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);
;}
#line 2007 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_det_setup");
	MR_r1 = Status;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module13)
	MR_init_entry1(table_builtin__table_memo_det_setup_shortcut_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_det_setup_shortcut_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_TrieNode	T;
	MR_Word	Status;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_det_setup_shortcut_3_0
	T0 = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_det_setup_shortcut");
{
#line 689 "table_builtin.m"

    MR_tbl_memo_det_setup_shortcut(T0, T, Status);
;}
#line 2042 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_det_setup_shortcut");
	MR_r1 = (MR_Word) T;
	MR_r2 = Status;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module14)
	MR_init_entry1(table_builtin__table_memo_semi_setup_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_semi_setup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
	MR_Word	Status;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_semi_setup_2_0
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_semi_setup");
{
#line 696 "table_builtin.m"

    MR_tbl_memo_semi_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);
;}
#line 2077 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_semi_setup");
	MR_r1 = Status;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module15)
	MR_init_entry1(table_builtin__table_memo_semi_setup_shortcut_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_semi_setup_shortcut_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_TrieNode	T;
	MR_Word	Status;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_semi_setup_shortcut_3_0
	T0 = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_semi_setup_shortcut");
{
#line 703 "table_builtin.m"

    MR_tbl_memo_semi_setup_shortcut(T0, T, Status);
;}
#line 2112 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_semi_setup_shortcut");
	MR_r1 = (MR_Word) T;
	MR_r2 = Status;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module16)
	MR_init_entry1(table_builtin__table_memo_non_setup_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_non_setup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_MemoNonRecordPtr	Record;
	MR_Word	Status;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_non_setup_3_0
	T0 = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_non_setup");
{
#line 710 "table_builtin.m"

    MR_tbl_memo_non_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, Record, Status);
;}
#line 2148 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_non_setup");
	MR_r1 = (MR_Word) Record;
	MR_r2 = Status;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module17)
	MR_init_entry1(table_builtin__table_memo_mark_as_failed_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_mark_as_failed_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_mark_as_failed_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_mark_as_failed");
{
#line 717 "table_builtin.m"

    MR_tbl_memo_mark_as_failed(MR_TABLE_DEBUG_BOOL, T);
;}
#line 2185 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_mark_as_failed");
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module18)
	MR_init_entry1(table_builtin__table_memo_mark_as_succeeded_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_mark_as_succeeded_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_mark_as_succeeded_1_0
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_mark_as_succeeded");
{
#line 724 "table_builtin.m"

    MR_tbl_memo_mark_as_succeeded(MR_TABLE_DEBUG_BOOL, T);
;}
#line 2220 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_mark_as_succeeded");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module19)
	MR_init_entry1(table_builtin__table_memo_mark_as_incomplete_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_mark_as_incomplete_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_MemoNonRecordPtr	R;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_mark_as_incomplete_1_0
	R = (MR_MemoNonRecordPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_mark_as_incomplete");
{
#line 731 "table_builtin.m"

    MR_tbl_memo_mark_as_incomplete(MR_TABLE_DEBUG_BOOL, R);
;}
#line 2252 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_mark_as_incomplete");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module20)
	MR_init_entry1(table_builtin__table_memo_mark_as_active_and_fail_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_mark_as_active_and_fail_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_MemoNonRecordPtr	R;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_mark_as_active_and_fail_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	R = (MR_MemoNonRecordPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_mark_as_active_and_fail");
{
#line 738 "table_builtin.m"

    MR_tbl_memo_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, R);
;}
#line 2287 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_mark_as_active_and_fail");
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module21)
	MR_init_entry1(table_builtin__table_memo_mark_as_complete_and_fail_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_mark_as_complete_and_fail_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_MemoNonRecordPtr	R;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_mark_as_complete_and_fail_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	R = (MR_MemoNonRecordPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_mark_as_complete_and_fail");
{
#line 745 "table_builtin.m"

    MR_tbl_memo_mark_as_complete_and_fail(MR_TABLE_DEBUG_BOOL, R);
;}
#line 2325 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_mark_as_complete_and_fail");
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module22)
	MR_init_entry1(table_builtin__table_memo_create_answer_block_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_create_answer_block_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
	MR_Integer	Size;
	MR_AnswerBlock	AnswerBlock;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_create_answer_block_3_0
	T = (MR_TrieNode) MR_r1;
	Size = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_create_answer_block");
{
#line 752 "table_builtin.m"

    MR_tbl_memo_create_answer_block(MR_TABLE_DEBUG_BOOL,
        T, Size, AnswerBlock);
;}
#line 2364 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_create_answer_block");
	MR_r1 = (MR_Word) AnswerBlock;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module23)
	MR_init_entry1(table_builtin__table_memo_fill_answer_block_shortcut_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_fill_answer_block_shortcut_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_fill_answer_block_shortcut_1_0
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_fill_answer_block_shortcut");
{
#line 760 "table_builtin.m"

    MR_tbl_memo_fill_answer_block_shortcut(T);
;}
#line 2397 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_fill_answer_block_shortcut");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module24)
	MR_init_entry1(table_builtin__table_memo_get_answer_block_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_get_answer_block_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
	MR_AnswerBlock	AnswerBlock;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_get_answer_block_2_0
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_get_answer_block");
{
#line 767 "table_builtin.m"

    MR_tbl_memo_get_answer_block(MR_TABLE_DEBUG_BOOL, T, AnswerBlock);
;}
#line 2430 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_get_answer_block");
	MR_r1 = (MR_Word) AnswerBlock;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module25)
	MR_init_entry1(table_builtin__table_memo_get_answer_block_shortcut_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_get_answer_block_shortcut_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_103_101_116_95_97_110_115_119_101_114_95_98_108_111_99_107_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module26)
	MR_init_entry1(table_builtin__table_memo_non_get_answer_table_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_non_get_answer_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_MemoNonRecordPtr	R;
	MR_TrieNode	AT;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_non_get_answer_table_2_0
	R = (MR_MemoNonRecordPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_non_get_answer_table");
{
#line 781 "table_builtin.m"

    MR_tbl_memo_non_get_answer_table(MR_TABLE_DEBUG_BOOL, R, AT);
;}
#line 2482 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_non_get_answer_table");
	MR_r1 = (MR_Word) AT;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module27)
	MR_init_entry1(table_builtin__table_memo_non_answer_is_not_duplicate_1_0);
	MR_init_label1(table_builtin__table_memo_non_answer_is_not_duplicate_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_non_answer_is_not_duplicate_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_non_answer_is_not_duplicate_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_non_answer_is_not_duplicate");
{
#line 788 "table_builtin.m"

    MR_tbl_memo_non_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL,
        T, SUCCESS_INDICATOR);
;}
#line 2520 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_non_answer_is_not_duplicate");
if (!MercurySuccessIndicator) MR_GOTO_LAB(table_builtin__table_memo_non_answer_is_not_duplicate_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(table_builtin__table_memo_non_answer_is_not_duplicate_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module28)
	MR_init_entry1(table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_0);
	MR_init_label1(table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_MemoNonRecordPtr	R;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	R = (MR_MemoNonRecordPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_non_answer_is_not_duplicate_shortcut");
{
#line 796 "table_builtin.m"

    MR_tbl_memo_non_answer_is_not_duplicate_shortcut(R,
        SUCCESS_INDICATOR);
;}
#line 2565 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_non_answer_is_not_duplicate_shortcut");
if (!MercurySuccessIndicator) MR_GOTO_LAB(table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module29)
	MR_init_entry1(table_builtin__table_memo_non_create_answer_block_shortcut_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_non_create_answer_block_shortcut_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_MemoNonRecordPtr	R;
#define	MR_PROC_LABEL	mercury__table_builtin__table_memo_non_create_answer_block_shortcut_1_0
	R = (MR_MemoNonRecordPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_non_create_answer_block_shortcut");
{
#line 804 "table_builtin.m"

    MR_tbl_memo_non_create_answer_block_shortcut(R::in);
;}
#line 2605 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_non_create_answer_block_shortcut");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module30)
	MR_init_entry1(table_builtin__table_memo_non_return_all_shortcut_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_memo_non_return_all_shortcut_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_110_111_110_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module31)
	MR_init_entry1(table_builtin__table_io_in_range_3_0);
	MR_init_label1(table_builtin__table_io_in_range_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_io_in_range_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
	MR_Integer	Counter;
	MR_Integer	Start;
#define	MR_PROC_LABEL	mercury__table_builtin__table_io_in_range_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_OBTAIN_GLOBAL_LOCK("table_io_in_range");
{
#line 1038 "table_builtin.m"

    MR_tbl_io_in_range(MR_TABLE_DEBUG_BOOL, T, Counter, Start,
        SUCCESS_INDICATOR);
;}
#line 2661 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_io_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(table_builtin__table_io_in_range_3_0_i1);
	MR_r2 = (MR_Word) T;
	MR_r3 = Counter;
	MR_r4 = Start;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(table_builtin__table_io_in_range_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module32)
	MR_init_entry1(table_builtin__table_io_has_occurred_1_0);
	MR_init_label1(table_builtin__table_io_has_occurred_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_io_has_occurred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_io_has_occurred_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_io_has_occurred");
{
#line 1046 "table_builtin.m"

    MR_tbl_io_has_occurred(MR_TABLE_DEBUG_BOOL, T, SUCCESS_INDICATOR);
;}
#line 2708 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_io_has_occurred");
if (!MercurySuccessIndicator) MR_GOTO_LAB(table_builtin__table_io_has_occurred_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(table_builtin__table_io_has_occurred_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module33)
	MR_init_entry1(table_builtin__table_io_copy_io_state_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_io_copy_io_state_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module34)
	MR_init_entry1(table_builtin__table_io_left_bracket_unitized_goal_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_io_left_bracket_unitized_goal_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	TraceEnabled;
#define	MR_PROC_LABEL	mercury__table_builtin__table_io_left_bracket_unitized_goal_1_0
	MR_OBTAIN_GLOBAL_LOCK("table_io_left_bracket_unitized_goal");
{
#line 1055 "table_builtin.m"

    MR_tbl_io_left_bracket_unitized_goal(TraceEnabled);
;}
#line 2765 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_io_left_bracket_unitized_goal");
	MR_r1 = TraceEnabled;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module35)
	MR_init_entry1(table_builtin__table_io_right_bracket_unitized_goal_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_io_right_bracket_unitized_goal_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	TraceEnabled;
#define	MR_PROC_LABEL	mercury__table_builtin__table_io_right_bracket_unitized_goal_1_0
	TraceEnabled = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_io_right_bracket_unitized_goal");
{
#line 1062 "table_builtin.m"

    MR_tbl_io_right_bracket_unitized_goal(TraceEnabled);
;}
#line 2798 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_io_right_bracket_unitized_goal");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module36)
	MR_init_entry1(table_builtin__table_mm_setup_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mm_setup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
	MR_SubgoalPtr	Subgoal;
	MR_Word	Status;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mm_setup_3_0
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_mm_setup");
{
#line 1188 "table_builtin.m"

    MR_tbl_mm_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Subgoal, Status);
;}
#line 2832 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mm_setup");
	MR_r1 = (MR_Word) Subgoal;
	MR_r2 = Status;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module37)
	MR_init_entry1(table_builtin__table_mm_get_answer_table_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mm_get_answer_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_SubgoalPtr	Subgoal;
	MR_TrieNode	AnswerTable;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mm_get_answer_table_2_0
	Subgoal = (MR_SubgoalPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_mm_get_answer_table");
{
#line 1210 "table_builtin.m"

    MR_tbl_mm_get_answer_table(MR_TABLE_DEBUG_BOOL, Subgoal, AnswerTable);
;}
#line 2867 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mm_get_answer_table");
	MR_r1 = (MR_Word) AnswerTable;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module38)
	MR_init_entry1(table_builtin__table_mm_answer_is_not_duplicate_1_0);
	MR_init_label1(table_builtin__table_mm_answer_is_not_duplicate_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mm_answer_is_not_duplicate_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	TrieNode;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mm_answer_is_not_duplicate_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TrieNode = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_mm_answer_is_not_duplicate");
{
#line 1217 "table_builtin.m"

    MR_tbl_mm_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL, TrieNode,
        SUCCESS_INDICATOR);
;}
#line 2905 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mm_answer_is_not_duplicate");
if (!MercurySuccessIndicator) MR_GOTO_LAB(table_builtin__table_mm_answer_is_not_duplicate_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(table_builtin__table_mm_answer_is_not_duplicate_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module39)
	MR_init_entry1(table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_0);
	MR_init_label1(table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_SubgoalPtr	Subgoal;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Subgoal = (MR_SubgoalPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_mm_answer_is_not_duplicate_shortcut");
{
#line 1225 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention Subgoal to shut up the warning */
    MR_fatal_error("table_mm_answer_is_not_duplicate_shortcut: direct call");
;}
#line 2955 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mm_answer_is_not_duplicate_shortcut");
if (!MercurySuccessIndicator) MR_GOTO_LAB(table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module40)
	MR_init_entry1(table_builtin__table_mm_create_answer_block_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mm_create_answer_block_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_SubgoalPtr	Subgoal;
	MR_Integer	Size;
	MR_AnswerBlock	AnswerBlock;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mm_create_answer_block_3_0
	Subgoal = (MR_SubgoalPtr) MR_r1;
	Size = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_mm_create_answer_block");
{
#line 1238 "table_builtin.m"

    MR_tbl_mm_create_answer_block(MR_TABLE_DEBUG_BOOL,
        Subgoal, Size, AnswerBlock);
;}
#line 2999 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mm_create_answer_block");
	MR_r1 = (MR_Word) AnswerBlock;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module41)
	MR_init_entry1(table_builtin__table_mm_fill_answer_block_shortcut_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mm_fill_answer_block_shortcut_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_SubgoalPtr	Subgoal;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mm_fill_answer_block_shortcut_1_0
	Subgoal = (MR_SubgoalPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_mm_fill_answer_block_shortcut");
{
#line 1246 "table_builtin.m"

    MR_tbl_mm_fill_answer_block_shortcut(Subgoal);
;}
#line 3032 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mm_fill_answer_block_shortcut");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module42)
	MR_init_entry1(table_builtin__table_mm_return_all_shortcut_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mm_return_all_shortcut_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module43)
	MR_init_entry1(table_builtin__table_mmos_save_inputs_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mmos_save_inputs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__table_builtin__table_mmos_save_inputs_0_0
	MR_OBTAIN_GLOBAL_LOCK("table_mmos_save_inputs");
{
#line 1389 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    MR_fatal_error("table_mmos_save_inputs: direct call");
;}
#line 3085 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mmos_save_inputs");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module44)
	MR_init_entry1(table_builtin__table_mmos_setup_consumer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mmos_setup_consumer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
	MR_Word	GeneratorPred;
	MR_ConsumerPtr	Consumer;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mmos_setup_consumer_3_0
	T = (MR_TrieNode) MR_r1;
	GeneratorPred = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_mmos_setup_consumer");
{
#line 1401 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention T, GeneratorPred, Consumer to shut up the warning */
    MR_fatal_error("table_mmos_setup_consumer: direct call");
;}
#line 3126 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mmos_setup_consumer");
	MR_r1 = (MR_Word) Consumer;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module45)
	MR_init_entry1(table_builtin__table_mmos_answer_is_not_duplicate_1_0);
	MR_init_label1(table_builtin__table_mmos_answer_is_not_duplicate_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mmos_answer_is_not_duplicate_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mmos_answer_is_not_duplicate_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	T = (MR_TrieNode) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_mmos_answer_is_not_duplicate");
{
#line 1414 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention T to shut up the warning */
    MR_fatal_error("table_mmos_answer_is_not_duplicate: direct call");
;}
#line 3169 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mmos_answer_is_not_duplicate");
if (!MercurySuccessIndicator) MR_GOTO_LAB(table_builtin__table_mmos_answer_is_not_duplicate_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(table_builtin__table_mmos_answer_is_not_duplicate_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module46)
	MR_init_entry1(table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_0);
	MR_init_label1(table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_GeneratorPtr	G;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	G = (MR_GeneratorPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_mmos_answer_is_not_duplicate_shortcut");
{
#line 1427 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention G to shut up the warning */
    MR_fatal_error("table_mmos_answer_is_not_duplicate_shortcut: direct call");
;}
#line 3219 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mmos_answer_is_not_duplicate_shortcut");
if (!MercurySuccessIndicator) MR_GOTO_LAB(table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module47)
	MR_init_entry1(table_builtin__table_mmos_restore_answers_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mmos_restore_answers_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_111_115_95_114_101_115_116_111_114_101_95_97_110_115_119_101_114_115_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module48)
	MR_init_entry1(table_builtin__table_mmos_pickup_inputs_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mmos_pickup_inputs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_GeneratorPtr	Generator;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mmos_pickup_inputs_1_0
	MR_OBTAIN_GLOBAL_LOCK("table_mmos_pickup_inputs");
{
#line 1456 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention Generator to shut up the warning */
    MR_fatal_error("table_mmos_pickup_inputs: direct call");
;}
#line 3282 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mmos_pickup_inputs");
	MR_r1 = (MR_Word) Generator;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module49)
	MR_init_entry1(table_builtin__table_mmos_create_answer_block_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mmos_create_answer_block_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_GeneratorPtr	Generator;
	MR_Integer	BlockSize;
	MR_AnswerBlock	AnswerBlock;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mmos_create_answer_block_3_0
	Generator = (MR_GeneratorPtr) MR_r1;
	BlockSize = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_mmos_create_answer_block");
{
#line 1470 "table_builtin.m"

    /*
    MR_tbl_mmos_create_answer_block(Generator, BlockSize, AnswerBlock);
    */
;}
#line 3320 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mmos_create_answer_block");
	MR_r1 = (MR_Word) AnswerBlock;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module50)
	MR_init_entry1(table_builtin__table_mmos_return_answer_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mmos_return_answer_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_GeneratorPtr	Generator;
	MR_AnswerBlock	AnswerBlock;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mmos_return_answer_2_0
	Generator = (MR_GeneratorPtr) MR_r1;
	AnswerBlock = (MR_AnswerBlock) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_mmos_return_answer");
{
#line 1479 "table_builtin.m"

    /*
    MR_tbl_mmos_return_answer(Generator, AnswerBlock);
    */
;}
#line 3357 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mmos_return_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module51)
	MR_init_entry1(table_builtin__table_mmos_completion_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_mmos_completion_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_GeneratorPtr	Generator;
#define	MR_PROC_LABEL	mercury__table_builtin__table_mmos_completion_1_0
	Generator = (MR_GeneratorPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_mmos_completion");
{
#line 1488 "table_builtin.m"

    /*
    MR_tbl_mmos_completion(Generator);
    */
;}
#line 3391 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mmos_completion");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module52)
	MR_init_entry1(table_builtin__table_lookup_insert_int_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_int_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_Integer	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_int_3_0
	T0 = (MR_TrieNode) MR_r1;
	V = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_int");
{
#line 1700 "table_builtin.m"

    MR_tbl_lookup_insert_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 3426 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_int");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module53)
	MR_init_entry1(table_builtin__table_lookup_insert_start_int_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_start_int_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_Integer	S;
	MR_Integer	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_start_int_4_0
	T0 = (MR_TrieNode) MR_r1;
	S = MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_start_int");
{
#line 1707 "table_builtin.m"

    MR_tbl_lookup_insert_start_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE,
        T0, S, V, T);
;}
#line 3465 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_start_int");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module54)
	MR_init_entry1(table_builtin__table_lookup_insert_char_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_char_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_Char	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_char_3_0
	T0 = (MR_TrieNode) MR_r1;
	V = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_char");
{
#line 1715 "table_builtin.m"

    MR_tbl_lookup_insert_char(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 3501 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_char");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module55)
	MR_init_entry1(table_builtin__table_lookup_insert_string_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_String	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_string_3_0
	T0 = (MR_TrieNode) MR_r1;
	V = (MR_String) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_string");
{
#line 1722 "table_builtin.m"

    MR_tbl_lookup_insert_string(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 3537 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_string");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module56)
	MR_init_entry1(table_builtin__table_lookup_insert_float_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_float_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_Float	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_float_3_0
	T0 = (MR_TrieNode) MR_r1;
	V = MR_word_to_float(MR_r2);
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_float");
{
#line 1729 "table_builtin.m"

    MR_tbl_lookup_insert_float(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 3573 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_float");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module57)
	MR_init_entry1(table_builtin__table_lookup_insert_enum_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_enum_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_Integer	R;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_enum_4_0
	T0 = (MR_TrieNode) MR_r1;
	R = MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_enum");
{
#line 1736 "table_builtin.m"

    MR_tbl_lookup_insert_enum(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        R, V, T);
;}
#line 3612 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_enum");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module58)
	MR_init_entry1(table_builtin__table_lookup_insert_user_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_user_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_TrieNode	T0;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_user_3_0
	TypeInfo_for_T = MR_r1;
	T0 = (MR_TrieNode) MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_user");
{
#line 1744 "table_builtin.m"

    MR_tbl_lookup_insert_user(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);
;}
#line 3651 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_user");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module59)
	MR_init_entry1(table_builtin__table_lookup_insert_user_fast_loose_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_user_fast_loose_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_TrieNode	T0;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_user_fast_loose_3_0
	TypeInfo_for_T = MR_r1;
	T0 = (MR_TrieNode) MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_user_fast_loose");
{
#line 1752 "table_builtin.m"

    MR_tbl_lookup_insert_user_addr(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);
;}
#line 3690 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_user_fast_loose");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module60)
	MR_init_entry1(table_builtin__table_lookup_insert_poly_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_poly_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_TrieNode	T0;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_poly_3_0
	TypeInfo_for_T = MR_r1;
	T0 = (MR_TrieNode) MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_poly");
{
#line 1760 "table_builtin.m"

    MR_tbl_lookup_insert_poly(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);
;}
#line 3729 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_poly");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module61)
	MR_init_entry1(table_builtin__table_lookup_insert_poly_fast_loose_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_poly_fast_loose_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_TrieNode	T0;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_poly_fast_loose_3_0
	TypeInfo_for_T = MR_r1;
	T0 = (MR_TrieNode) MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_poly_fast_loose");
{
#line 1768 "table_builtin.m"

    MR_tbl_lookup_insert_poly_addr(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);
;}
#line 3768 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_poly_fast_loose");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module62)
	MR_init_entry1(table_builtin__table_lookup_insert_typeinfo_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_typeinfo_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_typeinfo_3_0
	T0 = (MR_TrieNode) MR_r1;
	V = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_typeinfo");
{
#line 1776 "table_builtin.m"

    MR_tbl_lookup_insert_typeinfo(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 3804 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_typeinfo");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module63)
	MR_init_entry1(table_builtin__table_lookup_insert_typeclassinfo_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_typeclassinfo_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_typeclassinfo_3_0
	T0 = (MR_TrieNode) MR_r1;
	V = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_typeclassinfo");
{
#line 1783 "table_builtin.m"

    MR_tbl_lookup_insert_typeclassinfo(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE,
        T0, V, T);
;}
#line 3841 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_typeclassinfo");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module64)
	MR_init_entry1(table_builtin__table_save_int_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_save_int_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_Integer	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_save_int_answer_3_0
	AB = (MR_AnswerBlock) MR_r1;
	Offset = MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_save_int_answer");
{
#line 1793 "table_builtin.m"

    MR_tbl_save_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3878 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_int_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module65)
	MR_init_entry1(table_builtin__table_save_char_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_save_char_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_Char	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_save_char_answer_3_0
	AB = (MR_AnswerBlock) MR_r1;
	Offset = MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_save_char_answer");
{
#line 1800 "table_builtin.m"

    MR_tbl_save_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3914 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_char_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module66)
	MR_init_entry1(table_builtin__table_save_string_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_save_string_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_String	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_save_string_answer_3_0
	AB = (MR_AnswerBlock) MR_r1;
	Offset = MR_r2;
	V = (MR_String) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_save_string_answer");
{
#line 1807 "table_builtin.m"

    MR_tbl_save_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3950 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_string_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module67)
	MR_init_entry1(table_builtin__table_save_float_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_save_float_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_Float	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_save_float_answer_3_0
	AB = (MR_AnswerBlock) MR_r1;
	Offset = MR_r2;
	V = MR_word_to_float(MR_r3);
	MR_OBTAIN_GLOBAL_LOCK("table_save_float_answer");
{
#line 1814 "table_builtin.m"

    MR_tbl_save_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3986 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_float_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module68)
	MR_init_entry1(table_builtin__table_save_io_state_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_save_io_state_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_Word	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_save_io_state_answer_3_0
	AB = (MR_AnswerBlock) MR_r1;
	Offset = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_save_io_state_answer");
{
#line 1821 "table_builtin.m"

    MR_tbl_save_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4021 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_io_state_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module69)
	MR_init_entry1(table_builtin__table_save_any_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_save_any_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_Word	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_save_any_answer_3_0
	TypeInfo_for_T = MR_r1;
	AB = (MR_AnswerBlock) MR_r2;
	Offset = MR_r3;
	V = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("table_save_any_answer");
{
#line 1828 "table_builtin.m"

    MR_tbl_save_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset,
        TypeInfo_for_T, V);
;}
#line 4060 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_any_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module70)
	MR_init_entry1(table_builtin__table_restore_int_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_restore_int_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_Integer	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_restore_int_answer_3_0
	AB = (MR_AnswerBlock) MR_r1;
	Offset = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_restore_int_answer");
{
#line 1836 "table_builtin.m"

    MR_tbl_restore_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4095 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_restore_int_answer");
	MR_r1 = V;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module71)
	MR_init_entry1(table_builtin__table_restore_char_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_restore_char_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_Char	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_restore_char_answer_3_0
	AB = (MR_AnswerBlock) MR_r1;
	Offset = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_restore_char_answer");
{
#line 1843 "table_builtin.m"

    MR_tbl_restore_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4131 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_restore_char_answer");
	MR_r1 = V;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module72)
	MR_init_entry1(table_builtin__table_restore_string_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_restore_string_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_String	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_restore_string_answer_3_0
	AB = (MR_AnswerBlock) MR_r1;
	Offset = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_restore_string_answer");
{
#line 1850 "table_builtin.m"

    MR_tbl_restore_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4167 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_restore_string_answer");
	MR_r1 = (MR_Word) V;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module73)
	MR_init_entry1(table_builtin__table_restore_float_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_restore_float_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_Float	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_restore_float_answer_3_0
	AB = (MR_AnswerBlock) MR_r1;
	Offset = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_restore_float_answer");
{
#line 1857 "table_builtin.m"

    MR_tbl_restore_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4203 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_restore_float_answer");
	MR_r1 = MR_float_to_word(V);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module74)
	MR_init_entry1(table_builtin__table_restore_io_state_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_restore_io_state_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_Word	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_restore_io_state_answer_3_0
	AB = (MR_AnswerBlock) MR_r1;
	Offset = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_restore_io_state_answer");
{
#line 1864 "table_builtin.m"

    MR_tbl_restore_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4239 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_restore_io_state_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module75)
	MR_init_entry1(table_builtin__table_restore_any_answer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_restore_any_answer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_AnswerBlock	AB;
	MR_Integer	Offset;
	MR_Word	V;
#define	MR_PROC_LABEL	mercury__table_builtin__table_restore_any_answer_3_0
	AB = (MR_AnswerBlock) MR_r1;
	Offset = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_restore_any_answer");
{
#line 1871 "table_builtin.m"

    MR_tbl_restore_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4274 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_restore_any_answer");
	MR_r1 = V;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(table_builtin_module76)
	MR_init_entry1(table_builtin__table_error_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_error_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module77)
	MR_init_entry1(table_builtin__table_report_statistics_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_report_statistics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__table_builtin__table_report_statistics_0_0
	MR_OBTAIN_GLOBAL_LOCK("table_report_statistics");
{
#line 1881 "table_builtin.m"

    MR_table_report_statistics(stderr);
;}
#line 4324 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_report_statistics");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module78)
	MR_init_entry1(__Unify___table_builtin__loop_status_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__loop_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module79)
	MR_init_entry1(__Compare___table_builtin__loop_status_0_0);
	MR_init_label2(__Compare___table_builtin__loop_status_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__loop_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__loop_status_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___table_builtin__loop_status_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__loop_status_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_builtin__loop_status_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module80)
	MR_init_entry1(__Unify___table_builtin__memo_det_status_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__memo_det_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module81)
	MR_init_entry1(__Compare___table_builtin__memo_det_status_0_0);
	MR_init_label2(__Compare___table_builtin__memo_det_status_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__memo_det_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__memo_det_status_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___table_builtin__memo_det_status_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__memo_det_status_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_builtin__memo_det_status_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(table_builtin_module82)
	MR_init_entry1(__Unify___table_builtin__memo_non_record_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__memo_non_record_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(table_builtin_module83)
	MR_init_entry1(__Compare___table_builtin__memo_non_record_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__memo_non_record_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module84)
	MR_init_entry1(__Unify___table_builtin__memo_non_status_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__memo_non_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module85)
	MR_init_entry1(__Compare___table_builtin__memo_non_status_0_0);
	MR_init_label2(__Compare___table_builtin__memo_non_status_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__memo_non_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__memo_non_status_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___table_builtin__memo_non_status_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__memo_non_status_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_builtin__memo_non_status_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module86)
	MR_init_entry1(__Unify___table_builtin__memo_semi_status_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__memo_semi_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module87)
	MR_init_entry1(__Compare___table_builtin__memo_semi_status_0_0);
	MR_init_label2(__Compare___table_builtin__memo_semi_status_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__memo_semi_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__memo_semi_status_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___table_builtin__memo_semi_status_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__memo_semi_status_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_builtin__memo_semi_status_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module88)
	MR_init_entry1(__Unify___table_builtin__ml_answer_block_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__ml_answer_block_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module89)
	MR_init_entry1(__Compare___table_builtin__ml_answer_block_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__ml_answer_block_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module90)
	MR_init_entry1(__Unify___table_builtin__ml_answer_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__ml_answer_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module91)
	MR_init_entry1(__Compare___table_builtin__ml_answer_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__ml_answer_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module92)
	MR_init_entry1(__Unify___table_builtin__ml_consumer_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__ml_consumer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module93)
	MR_init_entry1(__Compare___table_builtin__ml_consumer_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__ml_consumer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module94)
	MR_init_entry1(__Unify___table_builtin__ml_generator_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__ml_generator_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module95)
	MR_init_entry1(__Compare___table_builtin__ml_generator_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__ml_generator_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module96)
	MR_init_entry1(__Unify___table_builtin__ml_proc_table_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__ml_proc_table_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module97)
	MR_init_entry1(__Compare___table_builtin__ml_proc_table_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__ml_proc_table_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module98)
	MR_init_entry1(__Unify___table_builtin__ml_subgoal_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__ml_subgoal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module99)
	MR_init_entry1(__Compare___table_builtin__ml_subgoal_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__ml_subgoal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module100)
	MR_init_entry1(__Unify___table_builtin__ml_trie_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__ml_trie_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module101)
	MR_init_entry1(__Compare___table_builtin__ml_trie_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__ml_trie_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module102)
	MR_init_entry1(__Unify___table_builtin__mm_status_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__mm_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module103)
	MR_init_entry1(__Compare___table_builtin__mm_status_0_0);
	MR_init_label2(__Compare___table_builtin__mm_status_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__mm_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__mm_status_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___table_builtin__mm_status_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__mm_status_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_builtin__mm_status_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(table_builtin_module104)
	MR_init_entry1(__Unify___table_builtin__proc_table_statistics_0_0);
	MR_init_label3(__Unify___table_builtin__proc_table_statistics_0_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__proc_table_statistics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___table_builtin__table_stats_0_0,
		__Unify___table_builtin__proc_table_statistics_0_0_i2);
MR_def_label(__Unify___table_builtin__proc_table_statistics_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___table_builtin__proc_table_statistics_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___table_builtin__table_stats_0_0,
		__Unify___table_builtin__proc_table_statistics_0_0_i4);
MR_def_label(__Unify___table_builtin__proc_table_statistics_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___table_builtin__proc_table_statistics_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_builtin, table_stats_pair);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___table_builtin__proc_table_statistics_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(table_builtin_module105)
	MR_init_entry1(__Compare___table_builtin__proc_table_statistics_0_0);
	MR_init_label2(__Compare___table_builtin__proc_table_statistics_0_0,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__proc_table_statistics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Compare___table_builtin__table_stats_pair_0_0,
		__Compare___table_builtin__proc_table_statistics_0_0_i3);
MR_def_label(__Compare___table_builtin__proc_table_statistics_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__proc_table_statistics_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_builtin, table_stats_pair);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___table_builtin__proc_table_statistics_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(table_builtin_module106)
	MR_init_entry1(__Unify___table_builtin__table_stats_0_0);
	MR_init_label1(__Unify___table_builtin__table_stats_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__table_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_stats_0_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_builtin, table_step_stats);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___table_builtin__table_stats_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(table_builtin_module107)
	MR_init_entry1(__Compare___table_builtin__table_stats_0_0);
	MR_init_label7(__Compare___table_builtin__table_stats_0_0,4,5,7,12,13,15,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__table_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i7);
	}
MR_def_label(__Compare___table_builtin__table_stats_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i7);
MR_def_label(__Compare___table_builtin__table_stats_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_stats_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i20);
	}
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i15);
MR_def_label(__Compare___table_builtin__table_stats_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i15);
MR_def_label(__Compare___table_builtin__table_stats_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_stats_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i20);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_builtin, table_step_stats);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___table_builtin__table_stats_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module108)
	MR_init_entry1(__Unify___table_builtin__table_stats_pair_0_0);
	MR_init_label2(__Unify___table_builtin__table_stats_pair_0_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__table_stats_pair_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___table_builtin__table_stats_0_0,
		__Unify___table_builtin__table_stats_pair_0_0_i2);
MR_def_label(__Unify___table_builtin__table_stats_pair_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_stats_pair_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___table_builtin__table_stats_0_0);
MR_def_label(__Unify___table_builtin__table_stats_pair_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module109)
	MR_init_entry1(__Compare___table_builtin__table_stats_pair_0_0);
	MR_init_label2(__Compare___table_builtin__table_stats_pair_0_0,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__table_stats_pair_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Compare___table_builtin__table_stats_0_0,
		__Compare___table_builtin__table_stats_pair_0_0_i3);
MR_def_label(__Compare___table_builtin__table_stats_pair_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_pair_0_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___table_builtin__table_stats_0_0);
MR_def_label(__Compare___table_builtin__table_stats_pair_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module110)
	MR_init_entry1(__Unify___table_builtin__table_step_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__table_step_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module111)
	MR_init_entry1(__Compare___table_builtin__table_step_kind_0_0);
	MR_init_label2(__Compare___table_builtin__table_step_kind_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__table_step_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module112)
	MR_init_entry1(__Unify___table_builtin__table_step_stats_0_0);
	MR_init_label1(__Unify___table_builtin__table_step_stats_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__table_step_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 4);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 5);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 6);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 6);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 7);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 7);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 8);
	MR_r1 = MR_ctfield(0, MR_tempr3, 8);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___table_builtin__table_step_stats_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module113)
	MR_init_entry1(__Compare___table_builtin__table_step_stats_0_0);
	MR_init_label8(__Compare___table_builtin__table_step_stats_0_0,3,4,6,11,12,14,19,20)
	MR_init_label8(__Compare___table_builtin__table_step_stats_0_0,22,27,28,30,35,36,38,43)
	MR_init_label8(__Compare___table_builtin__table_step_stats_0_0,44,46,51,52,54,59,60,62)
	MR_init_label3(__Compare___table_builtin__table_step_stats_0_0,65,66,76)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__table_step_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_r1, 8);
	MR_sv(7) = MR_ctfield(0, MR_r1, 7);
	MR_sv(6) = MR_ctfield(0, MR_r1, 6);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i6);
	}
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i6);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i14);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(9))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i14);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i22);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_sv(10))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i22);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i30);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(11))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i28);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i30);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(12))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i38);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(12))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i36);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i38);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(13))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i43);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i46);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(13))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i44);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i46);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_sv(14))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i51);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i54);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_sv(14))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i52);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i54);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(7) >= (MR_Integer) MR_sv(15))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i59);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i62);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(7) != MR_sv(15))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i60);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i62);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(8) >= (MR_Integer) MR_sv(16))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i65);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(16);
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(8) != MR_sv(16))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i66);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(16);
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module114)
	MR_init_entry1(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_103_101_116_95_97_110_115_119_101_114_95_98_108_111_99_107_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_103_101_116_95_97_110_115_119_101_114_95_98_108_111_99_107_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module115)
	MR_init_entry1(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_110_111_110_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_110_111_110_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module116)
	MR_init_entry1(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module117)
	MR_init_entry1(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_111_115_95_114_101_115_116_111_114_101_95_97_110_115_119_101_114_115_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_111_115_95_114_101_115_116_111_114_101_95_97_110_115_119_101_114_115_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module118)
	MR_init_entry1(fn__f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__table_builtin__get_tabling_stats_4_0);

void
MR_get_tabling_stats(MR_ProcTableInfoPtr Mercury__argument1, MR_Word * Mercury__argument2);

void
MR_get_tabling_stats(MR_ProcTableInfoPtr Mercury__argument1, MR_Word * Mercury__argument2)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__table_builtin__get_tabling_stats_4_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcTableInfoPtr, Mercury__argument1, MR_r1);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__table_builtin__get_tabling_stats_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__table_builtin_maybe_bunch_0(void)
{
	table_builtin_module0();
	table_builtin_module1();
	table_builtin_module2();
	table_builtin_module3();
	table_builtin_module4();
	table_builtin_module5();
	table_builtin_module6();
	table_builtin_module7();
	table_builtin_module8();
	table_builtin_module9();
	table_builtin_module10();
	table_builtin_module11();
	table_builtin_module12();
	table_builtin_module13();
	table_builtin_module14();
	table_builtin_module15();
	table_builtin_module16();
	table_builtin_module17();
	table_builtin_module18();
	table_builtin_module19();
	table_builtin_module20();
	table_builtin_module21();
	table_builtin_module22();
	table_builtin_module23();
	table_builtin_module24();
	table_builtin_module25();
	table_builtin_module26();
	table_builtin_module27();
	table_builtin_module28();
	table_builtin_module29();
	table_builtin_module30();
	table_builtin_module31();
	table_builtin_module32();
	table_builtin_module33();
	table_builtin_module34();
	table_builtin_module35();
	table_builtin_module36();
	table_builtin_module37();
	table_builtin_module38();
	table_builtin_module39();
}

static void mercury__table_builtin_maybe_bunch_1(void)
{
	table_builtin_module40();
	table_builtin_module41();
	table_builtin_module42();
	table_builtin_module43();
	table_builtin_module44();
	table_builtin_module45();
	table_builtin_module46();
	table_builtin_module47();
	table_builtin_module48();
	table_builtin_module49();
	table_builtin_module50();
	table_builtin_module51();
	table_builtin_module52();
	table_builtin_module53();
	table_builtin_module54();
	table_builtin_module55();
	table_builtin_module56();
	table_builtin_module57();
	table_builtin_module58();
	table_builtin_module59();
	table_builtin_module60();
	table_builtin_module61();
	table_builtin_module62();
	table_builtin_module63();
	table_builtin_module64();
	table_builtin_module65();
	table_builtin_module66();
	table_builtin_module67();
	table_builtin_module68();
	table_builtin_module69();
	table_builtin_module70();
	table_builtin_module71();
	table_builtin_module72();
	table_builtin_module73();
	table_builtin_module74();
	table_builtin_module75();
	table_builtin_module76();
	table_builtin_module77();
	table_builtin_module78();
	table_builtin_module79();
}

static void mercury__table_builtin_maybe_bunch_2(void)
{
	table_builtin_module80();
	table_builtin_module81();
	table_builtin_module82();
	table_builtin_module83();
	table_builtin_module84();
	table_builtin_module85();
	table_builtin_module86();
	table_builtin_module87();
	table_builtin_module88();
	table_builtin_module89();
	table_builtin_module90();
	table_builtin_module91();
	table_builtin_module92();
	table_builtin_module93();
	table_builtin_module94();
	table_builtin_module95();
	table_builtin_module96();
	table_builtin_module97();
	table_builtin_module98();
	table_builtin_module99();
	table_builtin_module100();
	table_builtin_module101();
	table_builtin_module102();
	table_builtin_module103();
	table_builtin_module104();
	table_builtin_module105();
	table_builtin_module106();
	table_builtin_module107();
	table_builtin_module108();
	table_builtin_module109();
	table_builtin_module110();
	table_builtin_module111();
	table_builtin_module112();
	table_builtin_module113();
	table_builtin_module114();
	table_builtin_module115();
	table_builtin_module116();
	table_builtin_module117();
	table_builtin_module118();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__table_builtin__init(void);
void mercury__table_builtin__init_type_tables(void);
void mercury__table_builtin__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__table_builtin__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__table_builtin__init_complexity_procs(void);
#endif

void mercury__table_builtin__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__table_builtin_maybe_bunch_0();
	mercury__table_builtin_maybe_bunch_1();
	mercury__table_builtin_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_table_step_stats_0,
		table_builtin__table_step_stats_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_table_step_kind_0,
		table_builtin__table_step_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_table_stats_pair_0,
		table_builtin__table_stats_pair_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_table_stats_0,
		table_builtin__table_stats_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_proc_table_statistics_0,
		table_builtin__proc_table_statistics_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_mm_status_0,
		table_builtin__mm_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_trie_node_0,
		table_builtin__ml_trie_node_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_subgoal_0,
		table_builtin__ml_subgoal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_proc_table_info_0,
		table_builtin__ml_proc_table_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_generator_0,
		table_builtin__ml_generator_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_consumer_0,
		table_builtin__ml_consumer_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_answer_list_0,
		table_builtin__ml_answer_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_answer_block_0,
		table_builtin__ml_answer_block_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_memo_semi_status_0,
		table_builtin__memo_semi_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_memo_non_status_0,
		table_builtin__memo_non_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_memo_non_record_0,
		table_builtin__memo_non_record_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_memo_det_status_0,
		table_builtin__memo_det_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_loop_status_0,
		table_builtin__loop_status_0_0);
	mercury__table_builtin__init_debugger();
}

void mercury__table_builtin__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_table_step_stats_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_table_step_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_table_stats_pair_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_table_stats_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_proc_table_statistics_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_mm_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_trie_node_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_subgoal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_proc_table_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_generator_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_consumer_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_answer_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_answer_block_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_memo_semi_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_memo_non_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_memo_non_record_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_memo_det_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_loop_status_0);
	}
}


void mercury__table_builtin__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__table_builtin__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__table_builtin__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
