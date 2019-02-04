/*
** Automatically generated from `table_builtin.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
#line 532 "io.int"
#include "io.mh"

#line 31 "table_builtin.c"
#line 540 "io.int"
#include "string.mh"

#line 35 "table_builtin.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "table_builtin.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "table_builtin.c"
#line 31 "array.int2"
#include "array.mh"

#line 47 "table_builtin.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "table_builtin.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 55 "table_builtin.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 59 "table_builtin.c"
#line 23 "store.opt"
#include "store.mh"

#line 63 "table_builtin.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 67 "table_builtin.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "table_builtin.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "table_builtin.c"
#line 4 "char.opt"
#include "char.mh"

#line 79 "table_builtin.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 83 "table_builtin.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 87 "table_builtin.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 91 "table_builtin.c"
#line 4 "int.opt"
#include "int.mh"

#line 95 "table_builtin.c"
#line 150 "io.opt"
#include "dir.mh"

#line 99 "table_builtin.c"
#line 3 "list.opt"
#include "list.mh"

#line 103 "table_builtin.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "table_builtin.c"
#line 108 "table_builtin.c"
#ifndef TABLE_BUILTIN_DECL_GUARD
#define TABLE_BUILTIN_DECL_GUARD

#line 112 "table_builtin.c"
#line 1041 "table_builtin.m"

    #include "mercury_tabling.h"      /* for MR_copy_table_steps */
    #include "mercury_trace_base.h"   /* for MR_io_tabling_* */

#line 118 "table_builtin.c"
#line 1699 "table_builtin.m"


#include "mercury_misc.h"         /* for MR_fatal_error(); */
#include "mercury_type_info.h"    /* for MR_TypeCtorInfo_Struct; */
#include "mercury_tabling.h"      /* for MR_TrieNode, etc. */

MR_DECLARE_TYPE_CTOR_INFO_STRUCT(MR_TYPE_CTOR_INFO_NAME(io, state, 0));


#line 129 "table_builtin.c"
#line 130 "table_builtin.c"

#endif
#line 133 "table_builtin.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_table_builtin__type_ctor_info_table_value_or_addr_0,
	mercury_data_table_builtin__type_ctor_info_table_step_stats_0,
	mercury_data_table_builtin__type_ctor_info_table_step_kind_0,
	mercury_data_table_builtin__type_ctor_info_table_stats_pair_0,
	mercury_data_table_builtin__type_ctor_info_table_stats_0,
	mercury_data_table_builtin__type_ctor_info_table_is_poly_0,
	mercury_data_table_builtin__type_ctor_info_proc_table_statistics_0,
	mercury_data_table_builtin__type_ctor_info_mm_status_0,
	mercury_data_table_builtin__type_ctor_info_ml_trie_node_0,
	mercury_data_table_builtin__type_ctor_info_ml_subgoal_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_table_builtin__type_ctor_info_ml_proc_table_info_0,
	mercury_data_table_builtin__type_ctor_info_ml_generator_0,
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
MR_decl_label3(__Unify___table_builtin__proc_table_statistics_0_0, 4,8,1)
MR_decl_label2(__Unify___table_builtin__table_stats_0_0, 6,1)
MR_decl_label3(__Unify___table_builtin__table_stats_pair_0_0, 4,8,1)
MR_decl_label3(__Unify___table_builtin__table_step_kind_0_0, 6,31,1)
MR_decl_label3(__Unify___table_builtin__table_step_stats_0_0, 4,6,1)
MR_decl_label2(__Compare___table_builtin__loop_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__memo_det_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__memo_non_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__memo_semi_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__mm_status_0_0, 2,3)
MR_decl_label4(__Compare___table_builtin__proc_table_statistics_0_0, 3,2,5,21)
MR_decl_label2(__Compare___table_builtin__table_is_poly_0_0, 2,3)
MR_decl_label8(__Compare___table_builtin__table_stats_0_0, 3,2,6,7,9,14,15,17)
MR_decl_label1(__Compare___table_builtin__table_stats_0_0, 49)
MR_decl_label4(__Compare___table_builtin__table_stats_pair_0_0, 3,2,5,21)
MR_decl_label8(__Compare___table_builtin__table_step_kind_0_0, 7,20,33,46,59,72,85,98)
MR_decl_label8(__Compare___table_builtin__table_step_kind_0_0, 111,6,126,137,138,140,164,143)
MR_decl_label3(__Compare___table_builtin__table_step_kind_0_0, 165,144,148)
MR_decl_label8(__Compare___table_builtin__table_step_stats_0_0, 5,10,11,13,18,19,21,26)
MR_decl_label8(__Compare___table_builtin__table_step_stats_0_0, 27,29,34,35,37,42,43,45)
MR_decl_label8(__Compare___table_builtin__table_step_stats_0_0, 50,51,53,58,59,61,64,101)
MR_decl_label2(__Compare___table_builtin__table_step_stats_0_0, 65,76)
MR_decl_label2(__Compare___table_builtin__table_value_or_addr_0_0, 2,3)
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
MR_def_extern_entry(table_builtin__table_lookup_insert_gen_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_gen_addr_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_gen_poly_3_0)
MR_def_extern_entry(table_builtin__table_lookup_insert_gen_poly_addr_3_0)
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
MR_def_extern_entry(__Unify___table_builtin__table_is_poly_0_0)
MR_def_extern_entry(__Compare___table_builtin__table_is_poly_0_0)
MR_def_extern_entry(__Unify___table_builtin__table_stats_0_0)
MR_def_extern_entry(__Compare___table_builtin__table_stats_0_0)
MR_def_extern_entry(__Unify___table_builtin__table_stats_pair_0_0)
MR_def_extern_entry(__Compare___table_builtin__table_stats_pair_0_0)
MR_def_extern_entry(__Unify___table_builtin__table_step_kind_0_0)
MR_def_extern_entry(__Compare___table_builtin__table_step_kind_0_0)
MR_def_extern_entry(__Unify___table_builtin__table_step_stats_0_0)
MR_def_extern_entry(__Compare___table_builtin__table_step_stats_0_0)
MR_def_extern_entry(__Unify___table_builtin__table_value_or_addr_0_0)
MR_def_extern_entry(__Compare___table_builtin__table_value_or_addr_0_0)
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_103_101_116_95_97_110_115_119_101_114_95_98_108_111_99_107_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_110_111_110_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_111_115_95_114_101_115_116_111_114_101_95_97_110_115_119_101_114_115_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_value_or_addr_0_0 = {
	"table_value",
	0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_value_or_addr_0_1 = {
	"table_addr",
	1
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_value_ordered_table_value_or_addr_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_table_value_or_addr_0_0,
	&mercury_data_table_builtin__enum_functor_desc_table_value_or_addr_0_1
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_name_ordered_table_value_or_addr_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_table_value_or_addr_0_1,
	&mercury_data_table_builtin__enum_functor_desc_table_value_or_addr_0_0
};

const MR_Integer mercury_data_table_builtin__functor_number_map_table_value_or_addr_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_value_or_addr_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__table_value_or_addr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__table_value_or_addr_0_0)),
	"table_builtin",
	"table_value_or_addr",
	{ (void *)mercury_data_table_builtin__enum_name_ordered_table_value_or_addr_0 },
	{ (void *)mercury_data_table_builtin__enum_value_ordered_table_value_or_addr_0 },
	2,
	4,
	mercury_data_table_builtin__functor_number_map_table_value_or_addr_0
};
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

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_step_kind_0_0 = {
	"table_step_dummy",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_step_kind_0_1 = {
	"table_step_int",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_step_kind_0_2 = {
	"table_step_char",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_step_kind_0_3 = {
	"table_step_string",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_step_kind_0_4 = {
	"table_step_float",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_step_kind_0_5 = {
	"table_step_enum",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_is_poly_0;
extern const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_value_or_addr_0;

const MR_PseudoTypeInfo mercury_data_table_builtin__field_types_table_step_kind_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_table_builtin__type_ctor_info_table_is_poly_0,
	(MR_PseudoTypeInfo) &mercury_data_table_builtin__type_ctor_info_table_value_or_addr_0
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_step_kind_0_6 = {
	"table_step_general",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_table_builtin__field_types_table_step_kind_0_6,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_step_kind_0_7 = {
	"table_step_typeinfo",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_step_kind_0_8 = {
	"table_step_typeclassinfo",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_table_builtin__du_functor_desc_table_step_kind_0_9 = {
	"table_step_promise_implied",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_table_builtin__du_stag_ordered_table_step_kind_0_0[] = {
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_0,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_1,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_2,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_3,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_4,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_5,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_7,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_8,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_9

};

const MR_DuFunctorDescPtr mercury_data_table_builtin__du_stag_ordered_table_step_kind_0_1[] = {
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_6

};

const MR_DuPtagLayout mercury_data_table_builtin__du_ptag_ordered_table_step_kind_0[] = {
	{ 9, MR_SECTAG_LOCAL,
	mercury_data_table_builtin__du_stag_ordered_table_step_kind_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_table_builtin__du_stag_ordered_table_step_kind_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_table_builtin__du_name_ordered_table_step_kind_0[] = {
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_2,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_0,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_5,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_4,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_6,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_1,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_9,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_3,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_8,
	&mercury_data_table_builtin__du_functor_desc_table_step_kind_0_7
};

const MR_Integer mercury_data_table_builtin__functor_number_map_table_step_kind_0[] = {
	1,
	5,
	0,
	7,
	3,
	2,
	4,
	9,
	8,
	6 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_step_kind_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__table_step_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__table_step_kind_0_0)),
	"table_builtin",
	"table_step_kind",
	{ (void *)mercury_data_table_builtin__du_name_ordered_table_step_kind_0 },
	{ (void *)mercury_data_table_builtin__du_ptag_ordered_table_step_kind_0 },
	10,
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

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_is_poly_0_0 = {
	"table_is_poly",
	0
};

static const MR_EnumFunctorDesc mercury_data_table_builtin__enum_functor_desc_table_is_poly_0_1 = {
	"table_is_mono",
	1
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_value_ordered_table_is_poly_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_table_is_poly_0_0,
	&mercury_data_table_builtin__enum_functor_desc_table_is_poly_0_1
};

const MR_EnumFunctorDescPtr mercury_data_table_builtin__enum_name_ordered_table_is_poly_0[] = {
	&mercury_data_table_builtin__enum_functor_desc_table_is_poly_0_1,
	&mercury_data_table_builtin__enum_functor_desc_table_is_poly_0_0
};

const MR_Integer mercury_data_table_builtin__functor_number_map_table_is_poly_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_table_builtin__type_ctor_info_table_is_poly_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___table_builtin__table_is_poly_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___table_builtin__table_is_poly_0_0)),
	"table_builtin",
	"table_is_poly",
	{ (void *)mercury_data_table_builtin__enum_name_ordered_table_is_poly_0 },
	{ (void *)mercury_data_table_builtin__enum_value_ordered_table_is_poly_0 },
	2,
	4,
	mercury_data_table_builtin__functor_number_map_table_is_poly_0
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
#line 258 "table_builtin.m"

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
#line 1286 "table_builtin.c"
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
#line 350 "table_builtin.m"

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
#line 1372 "table_builtin.c"
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
#line 350 "table_builtin.m"

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
#line 1475 "table_builtin.c"
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
#line 396 "table_builtin.m"

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
#line 1597 "table_builtin.c"
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
#line 396 "table_builtin.m"

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
#line 1700 "table_builtin.c"
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
#line 430 "table_builtin.m"

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
#line 1800 "table_builtin.c"
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
#line 258 "table_builtin.m"

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
#line 1858 "table_builtin.c"
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
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
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_GOTO_LAB(table_builtin__get_tabling_stats_4_0_i5);
	}
MR_def_label(table_builtin__get_tabling_stats_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r8;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(table_builtin__get_tabling_stats_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcTableInfoPtr	Info;
#define	MR_PROC_LABEL	mercury__table_builtin__get_tabling_stats_4_0
	Info = (MR_ProcTableInfoPtr) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("copy_current_stats_to_prev");
{
#line 430 "table_builtin.m"

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
#line 1986 "table_builtin.c"
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
#line 500 "table_builtin.m"

    MR_tbl_loop_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);
;}
#line 2019 "table_builtin.c"
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
#line 507 "table_builtin.m"

    MR_tbl_loop_setup_shortcut(T0, T, Status);
;}
#line 2054 "table_builtin.c"
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
#line 514 "table_builtin.m"

    MR_tbl_loop_mark_as_inactive(MR_TABLE_DEBUG_BOOL, T);
;}
#line 2088 "table_builtin.c"
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
#line 521 "table_builtin.m"

    MR_tbl_loop_mark_as_inactive_and_fail(MR_TABLE_DEBUG_BOOL, T);
;}
#line 2123 "table_builtin.c"
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
#line 528 "table_builtin.m"

    MR_tbl_loop_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, T);
;}
#line 2161 "table_builtin.c"
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
#line 693 "table_builtin.m"

    MR_tbl_memo_det_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);
;}
#line 2197 "table_builtin.c"
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
#line 700 "table_builtin.m"

    MR_tbl_memo_det_setup_shortcut(T0, T, Status);
;}
#line 2232 "table_builtin.c"
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
#line 707 "table_builtin.m"

    MR_tbl_memo_semi_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);
;}
#line 2267 "table_builtin.c"
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
#line 714 "table_builtin.m"

    MR_tbl_memo_semi_setup_shortcut(T0, T, Status);
;}
#line 2302 "table_builtin.c"
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
#line 721 "table_builtin.m"

    MR_tbl_memo_non_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, Record, Status);
;}
#line 2338 "table_builtin.c"
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
#line 728 "table_builtin.m"

    MR_tbl_memo_mark_as_failed(MR_TABLE_DEBUG_BOOL, T);
;}
#line 2375 "table_builtin.c"
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
#line 735 "table_builtin.m"

    MR_tbl_memo_mark_as_succeeded(MR_TABLE_DEBUG_BOOL, T);
;}
#line 2410 "table_builtin.c"
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
#line 742 "table_builtin.m"

    MR_tbl_memo_mark_as_incomplete(MR_TABLE_DEBUG_BOOL, R);
;}
#line 2442 "table_builtin.c"
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
#line 749 "table_builtin.m"

    MR_tbl_memo_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, R);
;}
#line 2477 "table_builtin.c"
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
#line 756 "table_builtin.m"

    MR_tbl_memo_mark_as_complete_and_fail(MR_TABLE_DEBUG_BOOL, R);
;}
#line 2515 "table_builtin.c"
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
#line 763 "table_builtin.m"

    MR_tbl_memo_create_answer_block(MR_TABLE_DEBUG_BOOL,
        T, Size, AnswerBlock);
;}
#line 2554 "table_builtin.c"
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
#line 771 "table_builtin.m"

    MR_tbl_memo_fill_answer_block_shortcut(T);
;}
#line 2587 "table_builtin.c"
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
#line 778 "table_builtin.m"

    MR_tbl_memo_get_answer_block(MR_TABLE_DEBUG_BOOL, T, AnswerBlock);
;}
#line 2620 "table_builtin.c"
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
#line 792 "table_builtin.m"

    MR_tbl_memo_non_get_answer_table(MR_TABLE_DEBUG_BOOL, R, AT);
;}
#line 2672 "table_builtin.c"
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
#line 799 "table_builtin.m"

    MR_tbl_memo_non_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL,
        T, SUCCESS_INDICATOR);
;}
#line 2710 "table_builtin.c"
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
#line 807 "table_builtin.m"

    MR_tbl_memo_non_answer_is_not_duplicate_shortcut(R,
        SUCCESS_INDICATOR);
;}
#line 2755 "table_builtin.c"
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
#line 815 "table_builtin.m"

    MR_tbl_memo_non_create_answer_block_shortcut(R::in);
;}
#line 2795 "table_builtin.c"
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
#line 1049 "table_builtin.m"

    MR_tbl_io_in_range(MR_TABLE_DEBUG_BOOL, T, Counter, Start,
        SUCCESS_INDICATOR);
;}
#line 2851 "table_builtin.c"
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
#line 1057 "table_builtin.m"

    MR_tbl_io_has_occurred(MR_TABLE_DEBUG_BOOL, T, SUCCESS_INDICATOR);
;}
#line 2898 "table_builtin.c"
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
#line 1066 "table_builtin.m"

    MR_tbl_io_left_bracket_unitized_goal(TraceEnabled);
;}
#line 2955 "table_builtin.c"
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
#line 1073 "table_builtin.m"

    MR_tbl_io_right_bracket_unitized_goal(TraceEnabled);
;}
#line 2988 "table_builtin.c"
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
#line 1199 "table_builtin.m"

    MR_tbl_mm_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Subgoal, Status);
;}
#line 3022 "table_builtin.c"
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
#line 1221 "table_builtin.m"

    MR_tbl_mm_get_answer_table(MR_TABLE_DEBUG_BOOL, Subgoal, AnswerTable);
;}
#line 3057 "table_builtin.c"
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
#line 1228 "table_builtin.m"

    MR_tbl_mm_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL, TrieNode,
        SUCCESS_INDICATOR);
;}
#line 3095 "table_builtin.c"
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
#line 1236 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention Subgoal to shut up the warning */
    MR_fatal_error("table_mm_answer_is_not_duplicate_shortcut: direct call");
;}
#line 3145 "table_builtin.c"
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
#line 1249 "table_builtin.m"

    MR_tbl_mm_create_answer_block(MR_TABLE_DEBUG_BOOL,
        Subgoal, Size, AnswerBlock);
;}
#line 3189 "table_builtin.c"
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
#line 1257 "table_builtin.m"

    MR_tbl_mm_fill_answer_block_shortcut(Subgoal);
;}
#line 3222 "table_builtin.c"
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
#line 1400 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    MR_fatal_error("table_mmos_save_inputs: direct call");
;}
#line 3275 "table_builtin.c"
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
#line 1412 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention T, GeneratorPred, Consumer to shut up the warning */
    MR_fatal_error("table_mmos_setup_consumer: direct call");
;}
#line 3316 "table_builtin.c"
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
#line 1425 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention T to shut up the warning */
    MR_fatal_error("table_mmos_answer_is_not_duplicate: direct call");
;}
#line 3359 "table_builtin.c"
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
#line 1438 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention G to shut up the warning */
    MR_fatal_error("table_mmos_answer_is_not_duplicate_shortcut: direct call");
;}
#line 3409 "table_builtin.c"
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
#line 1467 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention Generator to shut up the warning */
    MR_fatal_error("table_mmos_pickup_inputs: direct call");
;}
#line 3472 "table_builtin.c"
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
#line 1481 "table_builtin.m"

    /*
    MR_tbl_mmos_create_answer_block(Generator, BlockSize, AnswerBlock);
    */
;}
#line 3510 "table_builtin.c"
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
#line 1490 "table_builtin.m"

    /*
    MR_tbl_mmos_return_answer(Generator, AnswerBlock);
    */
;}
#line 3547 "table_builtin.c"
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
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Generator = (MR_GeneratorPtr) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("table_mmos_completion");
{
#line 1499 "table_builtin.m"

    /*
    MR_tbl_mmos_completion(Generator);
    */
;}
#line 3584 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mmos_completion");
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
#line 1714 "table_builtin.m"

    MR_tbl_lookup_insert_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 3622 "table_builtin.c"
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
#line 1721 "table_builtin.m"

    MR_tbl_lookup_insert_start_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE,
        T0, S, V, T);
;}
#line 3661 "table_builtin.c"
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
#line 1729 "table_builtin.m"

    MR_tbl_lookup_insert_char(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 3697 "table_builtin.c"
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
#line 1736 "table_builtin.m"

    MR_tbl_lookup_insert_string(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 3733 "table_builtin.c"
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
#line 1743 "table_builtin.m"

    MR_tbl_lookup_insert_float(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 3769 "table_builtin.c"
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
#line 1750 "table_builtin.m"

    MR_tbl_lookup_insert_enum(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        R, V, T);
;}
#line 3808 "table_builtin.c"
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
	MR_init_entry1(table_builtin__table_lookup_insert_gen_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_gen_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_TrieNode	T0;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_gen_3_0
	TypeInfo_for_T = MR_r1;
	T0 = (MR_TrieNode) MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_gen");
{
#line 1758 "table_builtin.m"

    MR_tbl_lookup_insert_gen(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);
;}
#line 3847 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_gen");
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
	MR_init_entry1(table_builtin__table_lookup_insert_gen_addr_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_gen_addr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_TrieNode	T0;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_gen_addr_3_0
	TypeInfo_for_T = MR_r1;
	T0 = (MR_TrieNode) MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_gen_addr");
{
#line 1766 "table_builtin.m"

    MR_tbl_lookup_insert_gen_addr(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);
;}
#line 3886 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_gen_addr");
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
	MR_init_entry1(table_builtin__table_lookup_insert_gen_poly_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_gen_poly_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_TrieNode	T0;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_gen_poly_3_0
	TypeInfo_for_T = MR_r1;
	T0 = (MR_TrieNode) MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_gen_poly");
{
#line 1774 "table_builtin.m"

    MR_tbl_lookup_insert_gen_poly(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);
;}
#line 3925 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_gen_poly");
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
	MR_init_entry1(table_builtin__table_lookup_insert_gen_poly_addr_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_gen_poly_addr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_TrieNode	T0;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_gen_poly_addr_3_0
	TypeInfo_for_T = MR_r1;
	T0 = (MR_TrieNode) MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_gen_poly_addr");
{
#line 1782 "table_builtin.m"

    MR_tbl_lookup_insert_gen_poly_addr(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, TypeInfo_for_T, V, T);
;}
#line 3964 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_gen_poly_addr");
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
#line 1790 "table_builtin.m"

    MR_tbl_lookup_insert_typeinfo(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, V, T);
;}
#line 4001 "table_builtin.c"
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
#line 1798 "table_builtin.m"

    MR_tbl_lookup_insert_typeclassinfo(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, V, T);
;}
#line 4038 "table_builtin.c"
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
#line 1808 "table_builtin.m"

    MR_tbl_save_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4075 "table_builtin.c"
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
#line 1815 "table_builtin.m"

    MR_tbl_save_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4111 "table_builtin.c"
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
#line 1822 "table_builtin.m"

    MR_tbl_save_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4147 "table_builtin.c"
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
#line 1829 "table_builtin.m"

    MR_tbl_save_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4183 "table_builtin.c"
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
#line 1836 "table_builtin.m"

    MR_tbl_save_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4218 "table_builtin.c"
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
#line 1843 "table_builtin.m"

    MR_tbl_save_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset,
        TypeInfo_for_T, V);
;}
#line 4257 "table_builtin.c"
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
#line 1851 "table_builtin.m"

    MR_tbl_restore_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4292 "table_builtin.c"
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
#line 1858 "table_builtin.m"

    MR_tbl_restore_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4328 "table_builtin.c"
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
#line 1865 "table_builtin.m"

    MR_tbl_restore_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4364 "table_builtin.c"
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
#line 1872 "table_builtin.m"

    MR_tbl_restore_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4400 "table_builtin.c"
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
#line 1879 "table_builtin.m"

    MR_tbl_restore_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4436 "table_builtin.c"
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
#line 1886 "table_builtin.m"

    MR_tbl_restore_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 4471 "table_builtin.c"
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
#line 1896 "table_builtin.m"

    MR_table_report_statistics(stderr);
;}
#line 4521 "table_builtin.c"
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
	MR_init_label3(__Unify___table_builtin__proc_table_statistics_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__proc_table_statistics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___table_builtin__proc_table_statistics_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___table_builtin__table_stats_pair_0_0,
		__Unify___table_builtin__proc_table_statistics_0_0_i4);
MR_def_label(__Unify___table_builtin__proc_table_statistics_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___table_builtin__proc_table_statistics_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_builtin, table_stats_pair);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___table_builtin__proc_table_statistics_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___table_builtin__proc_table_statistics_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(table_builtin_module105)
	MR_init_entry1(__Compare___table_builtin__proc_table_statistics_0_0);
	MR_init_label4(__Compare___table_builtin__proc_table_statistics_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__proc_table_statistics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___table_builtin__proc_table_statistics_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___table_builtin__proc_table_statistics_0_0_i2);
MR_def_label(__Compare___table_builtin__proc_table_statistics_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_builtin__proc_table_statistics_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___table_builtin__table_stats_pair_0_0,
		__Compare___table_builtin__proc_table_statistics_0_0_i5);
MR_def_label(__Compare___table_builtin__proc_table_statistics_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__proc_table_statistics_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_builtin, table_stats_pair);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___table_builtin__proc_table_statistics_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module106)
	MR_init_entry1(__Unify___table_builtin__table_is_poly_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__table_is_poly_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module107)
	MR_init_entry1(__Compare___table_builtin__table_is_poly_0_0);
	MR_init_label2(__Compare___table_builtin__table_is_poly_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__table_is_poly_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_is_poly_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_is_poly_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_is_poly_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_is_poly_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(table_builtin_module108)
	MR_init_entry1(__Unify___table_builtin__table_stats_0_0);
	MR_init_label2(__Unify___table_builtin__table_stats_0_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__table_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_stats_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_stats_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_stats_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_builtin, table_step_stats);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___table_builtin__table_stats_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___table_builtin__table_stats_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(table_builtin_module109)
	MR_init_entry1(__Compare___table_builtin__table_stats_0_0);
	MR_init_label8(__Compare___table_builtin__table_stats_0_0,3,2,6,7,9,14,15,17)
	MR_init_label1(__Compare___table_builtin__table_stats_0_0,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__table_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i2);
MR_def_label(__Compare___table_builtin__table_stats_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_stats_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i9);
	}
MR_def_label(__Compare___table_builtin__table_stats_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i9);
MR_def_label(__Compare___table_builtin__table_stats_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_stats_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i49);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i17);
MR_def_label(__Compare___table_builtin__table_stats_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i17);
MR_def_label(__Compare___table_builtin__table_stats_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_stats_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_0_0_i49);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(table_builtin, table_step_stats);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___table_builtin__table_stats_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module110)
	MR_init_entry1(__Unify___table_builtin__table_stats_pair_0_0);
	MR_init_label3(__Unify___table_builtin__table_stats_pair_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__table_stats_pair_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_stats_pair_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___table_builtin__table_stats_0_0,
		__Unify___table_builtin__table_stats_pair_0_0_i4);
MR_def_label(__Unify___table_builtin__table_stats_pair_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_stats_pair_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___table_builtin__table_stats_0_0);
MR_def_label(__Unify___table_builtin__table_stats_pair_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___table_builtin__table_stats_pair_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module111)
	MR_init_entry1(__Compare___table_builtin__table_stats_pair_0_0);
	MR_init_label4(__Compare___table_builtin__table_stats_pair_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__table_stats_pair_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_pair_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___table_builtin__table_stats_pair_0_0_i2);
MR_def_label(__Compare___table_builtin__table_stats_pair_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_stats_pair_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___table_builtin__table_stats_0_0,
		__Compare___table_builtin__table_stats_pair_0_0_i5);
MR_def_label(__Compare___table_builtin__table_stats_pair_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_stats_pair_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___table_builtin__table_stats_0_0);
MR_def_label(__Compare___table_builtin__table_stats_pair_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module112)
	MR_init_entry1(__Unify___table_builtin__table_step_kind_0_0);
	MR_init_label3(__Unify___table_builtin__table_step_kind_0_0,6,31,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__table_step_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_kind_0_0_i31);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_kind_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___table_builtin__table_step_kind_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_kind_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_kind_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = MR_ctfield(1, MR_tempr4, 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___table_builtin__table_step_kind_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___table_builtin__table_step_kind_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module113)
	MR_init_entry1(__Compare___table_builtin__table_step_kind_0_0);
	MR_init_label8(__Compare___table_builtin__table_step_kind_0_0,7,20,33,46,59,72,85,98)
	MR_init_label8(__Compare___table_builtin__table_step_kind_0_0,111,6,126,137,138,140,164,143)
	MR_init_label3(__Compare___table_builtin__table_step_kind_0_0,165,144,148)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__table_step_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i165);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i6);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i59) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i72) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i98) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i111));
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i164);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i165);
	}
	MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i164);
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i164);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164));
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i164);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164));
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i164);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164));
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i164);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164));
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i164);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164));
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i144);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164));
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i144);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164));
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i144);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_tempr1),8)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i165);
	}
	MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i144);
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tag(MR_tempr1);
	if ((MR_r4 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i126);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i144) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164) MR_AND
		MR_LABEL_AP(__Compare___table_builtin__table_step_kind_0_0_i164));
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	MR_r6 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i137);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i140);
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r6)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i138);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i140);
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r4;
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i148);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i143);
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_kind_0_0_i144);
	}
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_kind_0_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module114)
	MR_init_entry1(__Unify___table_builtin__table_step_stats_0_0);
	MR_init_label3(__Unify___table_builtin__table_step_stats_0_0,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__table_step_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i6);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 8);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___table_builtin__table_step_kind_0_0,
		__Unify___table_builtin__table_step_stats_0_0_i4);
MR_def_label(__Unify___table_builtin__table_step_stats_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(10))) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(12))) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(15))) {
		MR_GOTO_LAB(__Unify___table_builtin__table_step_stats_0_0_i1);
	}
	MR_r1 = (MR_sv(8) == MR_sv(16));
	MR_decr_sp_and_return(17);
MR_def_label(__Unify___table_builtin__table_step_stats_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___table_builtin__table_step_stats_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module115)
	MR_init_entry1(__Compare___table_builtin__table_step_stats_0_0);
	MR_init_label8(__Compare___table_builtin__table_step_stats_0_0,5,10,11,13,18,19,21,26)
	MR_init_label8(__Compare___table_builtin__table_step_stats_0_0,27,29,34,35,37,42,43,45)
	MR_init_label8(__Compare___table_builtin__table_step_stats_0_0,50,51,53,58,59,61,64,101)
	MR_init_label2(__Compare___table_builtin__table_step_stats_0_0,65,76)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__table_step_stats_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i101);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr5 = MR_tempr1;
	MR_sv(1) = MR_tempr4;
	MR_tempr6 = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr5, 0);
	MR_r2 = MR_ctfield(0, MR_tempr6, 0);
	}
	MR_np_call_localret_ent(__Compare___table_builtin__table_step_kind_0_0,
		__Compare___table_builtin__table_step_stats_0_0_i5);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i13);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(9))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i13);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(2) >= (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i21);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_sv(10))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i21);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i29);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(11))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i29);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(12))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i37);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(12))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i35);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i37);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(13))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i45);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(13))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i43);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i45);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_sv(14))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i50);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i53);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_sv(14))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i51);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i53);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(7) >= (MR_Integer) MR_sv(15))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i58);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i61);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(7) != MR_sv(15))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i59);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i61);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i76);
	}
	if (((MR_Integer) MR_sv(8) >= (MR_Integer) MR_sv(16))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(8) != MR_sv(16))) {
		MR_GOTO_LAB(__Compare___table_builtin__table_step_stats_0_0_i65);
	}
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___table_builtin__table_step_stats_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module116)
	MR_init_entry1(__Unify___table_builtin__table_value_or_addr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___table_builtin__table_value_or_addr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module117)
	MR_init_entry1(__Compare___table_builtin__table_value_or_addr_0_0);
	MR_init_label2(__Compare___table_builtin__table_value_or_addr_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___table_builtin__table_value_or_addr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_value_or_addr_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_value_or_addr_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___table_builtin__table_value_or_addr_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___table_builtin__table_value_or_addr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module118)
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


MR_BEGIN_MODULE(table_builtin_module119)
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


MR_BEGIN_MODULE(table_builtin_module120)
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


MR_BEGIN_MODULE(table_builtin_module121)
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


MR_BEGIN_MODULE(table_builtin_module122)
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
	table_builtin_module119();
}

static void mercury__table_builtin_maybe_bunch_3(void)
{
	table_builtin_module120();
	table_builtin_module121();
	table_builtin_module122();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__table_builtin__init(void);
void mercury__table_builtin__init_type_tables(void);
void mercury__table_builtin__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__table_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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
	mercury__table_builtin_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_table_value_or_addr_0,
		table_builtin__table_value_or_addr_0_0);
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
		mercury_data_table_builtin__type_ctor_info_table_is_poly_0,
		table_builtin__table_is_poly_0_0);
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
		&mercury_data_table_builtin__type_ctor_info_table_value_or_addr_0);
	}
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
		&mercury_data_table_builtin__type_ctor_info_table_is_poly_0);
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

void mercury__table_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__table_builtin);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__table_builtin__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
