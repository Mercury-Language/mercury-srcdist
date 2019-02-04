/*
** Automatically generated from `table_builtin.m'
** by the Mercury compiler,
** version rotd-2009-09-15, configured for i686-pc-linux-gnu.
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
#line 534 "io.int"
#include "io.mh"

#line 31 "table_builtin.c"
#line 542 "io.int"
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
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 55 "table_builtin.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 59 "table_builtin.c"
#line 20 "store.opt"
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
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 91 "table_builtin.c"
#line 4 "int.opt"
#include "int.mh"

#line 95 "table_builtin.c"
#line 150 "io.opt"
#include "dir.mh"

#line 99 "table_builtin.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "table_builtin.c"
#line 104 "table_builtin.c"
#ifndef TABLE_BUILTIN_DECL_GUARD
#define TABLE_BUILTIN_DECL_GUARD

#line 108 "table_builtin.c"
#line 734 "table_builtin.m"

    #include "mercury_tabling.h"      /* for MR_copy_table_steps */
    #include "mercury_trace_base.h"   /* for MR_io_tabling_* */

#line 114 "table_builtin.c"
#line 1397 "table_builtin.m"


#include "mercury_misc.h"         /* for MR_fatal_error(); */
#include "mercury_type_info.h"    /* for MR_TypeCtorInfo_Struct; */
#include "mercury_tabling.h"      /* for MR_TrieNode, etc. */

MR_DECLARE_TYPE_CTOR_INFO_STRUCT(MR_TYPE_CTOR_INFO_NAME(io, state, 0));


#line 125 "table_builtin.c"
#line 126 "table_builtin.c"

#endif
#line 129 "table_builtin.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_table_builtin__type_ctor_info_loop_status_0,
	mercury_data_table_builtin__type_ctor_info_memo_det_status_0,
	mercury_data_table_builtin__type_ctor_info_memo_non_record_0,
	mercury_data_table_builtin__type_ctor_info_memo_non_status_0,
	mercury_data_table_builtin__type_ctor_info_memo_semi_status_0,
	mercury_data_table_builtin__type_ctor_info_ml_answer_block_0,
	mercury_data_table_builtin__type_ctor_info_ml_answer_list_0,
	mercury_data_table_builtin__type_ctor_info_ml_consumer_0,
	mercury_data_table_builtin__type_ctor_info_ml_generator_0,
	mercury_data_table_builtin__type_ctor_info_ml_proc_table_info_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_table_builtin__type_ctor_info_ml_subgoal_0,
	mercury_data_table_builtin__type_ctor_info_ml_trie_node_0,
	mercury_data_table_builtin__type_ctor_info_mm_status_0;
MR_decl_label1(table_builtin__table_io_has_occurred_1_0, 1)
MR_decl_label1(table_builtin__table_io_in_range_3_0, 1)
MR_decl_label1(table_builtin__table_memo_non_answer_is_not_duplicate_1_0, 1)
MR_decl_label1(table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_0, 1)
MR_decl_label1(table_builtin__table_mm_answer_is_not_duplicate_1_0, 1)
MR_decl_label1(table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_0, 1)
MR_decl_label1(table_builtin__table_mmos_answer_is_not_duplicate_1_0, 1)
MR_decl_label1(table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_0, 1)
MR_decl_label2(__Compare___table_builtin__loop_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__memo_det_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__memo_non_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__memo_semi_status_0_0, 2,3)
MR_decl_label2(__Compare___table_builtin__mm_status_0_0, 2,3)
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
MR_def_extern_entry(table_builtin__table_lookup_insert_foreign_enum_3_0)
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
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_103_101_116_95_97_110_115_119_101_114_95_98_108_111_99_107_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_110_111_110_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_111_115_95_114_101_115_116_111_114_101_95_97_110_115_119_101_114_115_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

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


MR_BEGIN_MODULE(table_builtin_module0)
	MR_init_entry1(table_builtin__table_loop_setup_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_loop_setup'/2 mode 0 */
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
#line 193 "table_builtin.m"

    MR_tbl_loop_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);
;}
#line 671 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module1)
	MR_init_entry1(table_builtin__table_loop_setup_shortcut_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_loop_setup_shortcut'/3 mode 0 */
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
#line 200 "table_builtin.m"

    MR_tbl_loop_setup_shortcut(T0, T, Status);
;}
#line 709 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module2)
	MR_init_entry1(table_builtin__table_loop_mark_as_inactive_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_loop_mark_as_inactive'/1 mode 0 */
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
#line 207 "table_builtin.m"

    MR_tbl_loop_mark_as_inactive(MR_TABLE_DEBUG_BOOL, T);
;}
#line 746 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_loop_mark_as_inactive");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module3)
	MR_init_entry1(table_builtin__table_loop_mark_as_inactive_and_fail_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_loop_mark_as_inactive_and_fail'/1 mode 0 */
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
#line 214 "table_builtin.m"

    MR_tbl_loop_mark_as_inactive_and_fail(MR_TABLE_DEBUG_BOOL, T);
;}
#line 784 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module4)
	MR_init_entry1(table_builtin__table_loop_mark_as_active_and_fail_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_loop_mark_as_active_and_fail'/1 mode 0 */
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
#line 221 "table_builtin.m"

    MR_tbl_loop_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, T);
;}
#line 825 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module5)
	MR_init_entry1(table_builtin__table_memo_det_setup_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_det_setup'/2 mode 0 */
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
#line 386 "table_builtin.m"

    MR_tbl_memo_det_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);
;}
#line 864 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module6)
	MR_init_entry1(table_builtin__table_memo_det_setup_shortcut_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_det_setup_shortcut'/3 mode 0 */
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
#line 393 "table_builtin.m"

    MR_tbl_memo_det_setup_shortcut(T0, T, Status);
;}
#line 902 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module7)
	MR_init_entry1(table_builtin__table_memo_semi_setup_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_semi_setup'/2 mode 0 */
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
#line 400 "table_builtin.m"

    MR_tbl_memo_semi_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);
;}
#line 940 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module8)
	MR_init_entry1(table_builtin__table_memo_semi_setup_shortcut_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_semi_setup_shortcut'/3 mode 0 */
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
#line 407 "table_builtin.m"

    MR_tbl_memo_semi_setup_shortcut(T0, T, Status);
;}
#line 978 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module9)
	MR_init_entry1(table_builtin__table_memo_non_setup_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_non_setup'/3 mode 0 */
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
#line 414 "table_builtin.m"

    MR_tbl_memo_non_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, Record, Status);
;}
#line 1017 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module10)
	MR_init_entry1(table_builtin__table_memo_mark_as_failed_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_mark_as_failed'/1 mode 0 */
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
#line 421 "table_builtin.m"

    MR_tbl_memo_mark_as_failed(MR_TABLE_DEBUG_BOOL, T);
;}
#line 1057 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module11)
	MR_init_entry1(table_builtin__table_memo_mark_as_succeeded_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_mark_as_succeeded'/1 mode 0 */
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
#line 428 "table_builtin.m"

    MR_tbl_memo_mark_as_succeeded(MR_TABLE_DEBUG_BOOL, T);
;}
#line 1095 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_mark_as_succeeded");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module12)
	MR_init_entry1(table_builtin__table_memo_mark_as_incomplete_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_mark_as_incomplete'/1 mode 0 */
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
#line 435 "table_builtin.m"

    MR_tbl_memo_mark_as_incomplete(MR_TABLE_DEBUG_BOOL, R);
;}
#line 1130 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_mark_as_incomplete");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module13)
	MR_init_entry1(table_builtin__table_memo_mark_as_active_and_fail_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_mark_as_active_and_fail'/1 mode 0 */
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
#line 442 "table_builtin.m"

    MR_tbl_memo_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, R);
;}
#line 1168 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module14)
	MR_init_entry1(table_builtin__table_memo_mark_as_complete_and_fail_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_mark_as_complete_and_fail'/1 mode 0 */
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
#line 449 "table_builtin.m"

    MR_tbl_memo_mark_as_complete_and_fail(MR_TABLE_DEBUG_BOOL, R);
;}
#line 1209 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module15)
	MR_init_entry1(table_builtin__table_memo_create_answer_block_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_create_answer_block'/3 mode 0 */
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
#line 456 "table_builtin.m"

    MR_tbl_memo_create_answer_block(MR_TABLE_DEBUG_BOOL,
        T, Size, AnswerBlock);
;}
#line 1251 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module16)
	MR_init_entry1(table_builtin__table_memo_fill_answer_block_shortcut_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_fill_answer_block_shortcut'/1 mode 0 */
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
#line 464 "table_builtin.m"

    MR_tbl_memo_fill_answer_block_shortcut(T);
;}
#line 1287 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_fill_answer_block_shortcut");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module17)
	MR_init_entry1(table_builtin__table_memo_get_answer_block_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_get_answer_block'/2 mode 0 */
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
#line 471 "table_builtin.m"

    MR_tbl_memo_get_answer_block(MR_TABLE_DEBUG_BOOL, T, AnswerBlock);
;}
#line 1323 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module18)
	MR_init_entry1(table_builtin__table_memo_get_answer_block_shortcut_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_get_answer_block_shortcut'/1 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module19)
	MR_init_entry1(table_builtin__table_memo_non_get_answer_table_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_non_get_answer_table'/2 mode 0 */
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
#line 485 "table_builtin.m"

    MR_tbl_memo_non_get_answer_table(MR_TABLE_DEBUG_BOOL, R, AT);
;}
#line 1381 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module20)
	MR_init_entry1(table_builtin__table_memo_non_answer_is_not_duplicate_1_0);
	MR_init_label1(table_builtin__table_memo_non_answer_is_not_duplicate_1_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_non_answer_is_not_duplicate'/1 mode 0 */
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
#line 492 "table_builtin.m"

    MR_tbl_memo_non_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL,
        T, SUCCESS_INDICATOR);
;}
#line 1422 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module21)
	MR_init_entry1(table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_0);
	MR_init_label1(table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_non_answer_is_not_duplicate_shortcut'/1 mode 0 */
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
#line 500 "table_builtin.m"

    MR_tbl_memo_non_answer_is_not_duplicate_shortcut(R,
        SUCCESS_INDICATOR);
;}
#line 1470 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module22)
	MR_init_entry1(table_builtin__table_memo_non_create_answer_block_shortcut_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_non_create_answer_block_shortcut'/1 mode 0 */
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
#line 508 "table_builtin.m"

    MR_tbl_memo_non_create_answer_block_shortcut(R::in);
;}
#line 1513 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_memo_non_create_answer_block_shortcut");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module23)
	MR_init_entry1(table_builtin__table_memo_non_return_all_shortcut_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_memo_non_return_all_shortcut'/1 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module24)
	MR_init_entry1(table_builtin__table_io_in_range_3_0);
	MR_init_label1(table_builtin__table_io_in_range_3_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_io_in_range'/3 mode 0 */
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
#line 742 "table_builtin.m"

    MR_tbl_io_in_range(MR_TABLE_DEBUG_BOOL, T, Counter, Start,
        SUCCESS_INDICATOR);
;}
#line 1575 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module25)
	MR_init_entry1(table_builtin__table_io_has_occurred_1_0);
	MR_init_label1(table_builtin__table_io_has_occurred_1_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_io_has_occurred'/1 mode 0 */
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
#line 750 "table_builtin.m"

    MR_tbl_io_has_occurred(MR_TABLE_DEBUG_BOOL, T, SUCCESS_INDICATOR);
;}
#line 1625 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module26)
	MR_init_entry1(table_builtin__table_io_copy_io_state_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_io_copy_io_state'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module27)
	MR_init_entry1(table_builtin__table_io_left_bracket_unitized_goal_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_io_left_bracket_unitized_goal'/1 mode 0 */
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
#line 759 "table_builtin.m"

    MR_tbl_io_left_bracket_unitized_goal(TraceEnabled);
;}
#line 1688 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module28)
	MR_init_entry1(table_builtin__table_io_right_bracket_unitized_goal_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_io_right_bracket_unitized_goal'/1 mode 0 */
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
#line 766 "table_builtin.m"

    MR_tbl_io_right_bracket_unitized_goal(TraceEnabled);
;}
#line 1724 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_io_right_bracket_unitized_goal");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module29)
	MR_init_entry1(table_builtin__table_mm_setup_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mm_setup'/3 mode 0 */
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
#line 892 "table_builtin.m"

    MR_tbl_mm_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Subgoal, Status);
;}
#line 1761 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module30)
	MR_init_entry1(table_builtin__table_mm_get_answer_table_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mm_get_answer_table'/2 mode 0 */
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
#line 914 "table_builtin.m"

    MR_tbl_mm_get_answer_table(MR_TABLE_DEBUG_BOOL, Subgoal, AnswerTable);
;}
#line 1799 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module31)
	MR_init_entry1(table_builtin__table_mm_answer_is_not_duplicate_1_0);
	MR_init_label1(table_builtin__table_mm_answer_is_not_duplicate_1_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mm_answer_is_not_duplicate'/1 mode 0 */
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
#line 921 "table_builtin.m"

    MR_tbl_mm_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL, TrieNode,
        SUCCESS_INDICATOR);
;}
#line 1840 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module32)
	MR_init_entry1(table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_0);
	MR_init_label1(table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mm_answer_is_not_duplicate_shortcut'/1 mode 0 */
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
#line 929 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention Subgoal to shut up the warning */
    MR_fatal_error("table_mm_answer_is_not_duplicate_shortcut: direct call");
;}
#line 1893 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module33)
	MR_init_entry1(table_builtin__table_mm_create_answer_block_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mm_create_answer_block'/3 mode 0 */
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
#line 942 "table_builtin.m"

    MR_tbl_mm_create_answer_block(MR_TABLE_DEBUG_BOOL,
        Subgoal, Size, AnswerBlock);
;}
#line 1940 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module34)
	MR_init_entry1(table_builtin__table_mm_fill_answer_block_shortcut_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mm_fill_answer_block_shortcut'/1 mode 0 */
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
#line 950 "table_builtin.m"

    MR_tbl_mm_fill_answer_block_shortcut(Subgoal);
;}
#line 1976 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mm_fill_answer_block_shortcut");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module35)
	MR_init_entry1(table_builtin__table_mm_return_all_shortcut_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mm_return_all_shortcut'/1 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module36)
	MR_init_entry1(table_builtin__table_mmos_save_inputs_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mmos_save_inputs'/0 mode 0 */
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
#line 1093 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    MR_fatal_error("table_mmos_save_inputs: direct call");
;}
#line 2035 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mmos_save_inputs");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module37)
	MR_init_entry1(table_builtin__table_mmos_setup_consumer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mmos_setup_consumer'/3 mode 0 */
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
#line 1105 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention T, GeneratorPred, Consumer to shut up the warning */
    MR_fatal_error("table_mmos_setup_consumer: direct call");
;}
#line 2079 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module38)
	MR_init_entry1(table_builtin__table_mmos_answer_is_not_duplicate_1_0);
	MR_init_label1(table_builtin__table_mmos_answer_is_not_duplicate_1_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mmos_answer_is_not_duplicate'/1 mode 0 */
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
#line 1118 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention T to shut up the warning */
    MR_fatal_error("table_mmos_answer_is_not_duplicate: direct call");
;}
#line 2125 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module39)
	MR_init_entry1(table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_0);
	MR_init_label1(table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mmos_answer_is_not_duplicate_shortcut'/1 mode 0 */
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
#line 1131 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention G to shut up the warning */
    MR_fatal_error("table_mmos_answer_is_not_duplicate_shortcut: direct call");
;}
#line 2178 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module40)
	MR_init_entry1(table_builtin__table_mmos_restore_answers_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mmos_restore_answers'/1 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module41)
	MR_init_entry1(table_builtin__table_mmos_pickup_inputs_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mmos_pickup_inputs'/1 mode 0 */
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
#line 1160 "table_builtin.m"

    /*
    ** The body of this predicate doesn't matter, because it will never be
    ** referred to. When the compiler creates references to this predicate,
    ** it always overrides the predicate body.
    */
    /* mention Generator to shut up the warning */
    MR_fatal_error("table_mmos_pickup_inputs: direct call");
;}
#line 2247 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module42)
	MR_init_entry1(table_builtin__table_mmos_create_answer_block_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mmos_create_answer_block'/3 mode 0 */
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
#line 1174 "table_builtin.m"

    /*
    MR_tbl_mmos_create_answer_block(Generator, BlockSize, AnswerBlock);
    */
;}
#line 2288 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module43)
	MR_init_entry1(table_builtin__table_mmos_return_answer_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mmos_return_answer'/2 mode 0 */
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
#line 1183 "table_builtin.m"

    /*
    MR_tbl_mmos_return_answer(Generator, AnswerBlock);
    */
;}
#line 2328 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_mmos_return_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module44)
	MR_init_entry1(table_builtin__table_mmos_completion_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_mmos_completion'/1 mode 0 */
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
#line 1192 "table_builtin.m"

    /*
    MR_tbl_mmos_completion(Generator);
    */
;}
#line 2368 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module45)
	MR_init_entry1(table_builtin__table_lookup_insert_int_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_int'/3 mode 0 */
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
#line 1412 "table_builtin.m"

    MR_tbl_lookup_insert_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 2409 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module46)
	MR_init_entry1(table_builtin__table_lookup_insert_start_int_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_start_int'/4 mode 0 */
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
#line 1419 "table_builtin.m"

    MR_tbl_lookup_insert_start_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE,
        T0, S, V, T);
;}
#line 2451 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module47)
	MR_init_entry1(table_builtin__table_lookup_insert_char_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_char'/3 mode 0 */
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
#line 1427 "table_builtin.m"

    MR_tbl_lookup_insert_char(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 2490 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module48)
	MR_init_entry1(table_builtin__table_lookup_insert_string_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_string'/3 mode 0 */
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
#line 1434 "table_builtin.m"

    MR_tbl_lookup_insert_string(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 2529 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module49)
	MR_init_entry1(table_builtin__table_lookup_insert_float_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_float'/3 mode 0 */
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
#line 1441 "table_builtin.m"

    MR_tbl_lookup_insert_float(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);
;}
#line 2568 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module50)
	MR_init_entry1(table_builtin__table_lookup_insert_enum_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_enum'/4 mode 0 */
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
#line 1448 "table_builtin.m"

    MR_tbl_lookup_insert_enum(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        R, V, T);
;}
#line 2610 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module51)
	MR_init_entry1(table_builtin__table_lookup_insert_foreign_enum_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_foreign_enum'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__table_builtin__table_lookup_insert_foreign_enum_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	T0;
	MR_Word	V;
	MR_TrieNode	T;
#define	MR_PROC_LABEL	mercury__table_builtin__table_lookup_insert_foreign_enum_3_0
	T0 = (MR_TrieNode) MR_r2;
	V = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_lookup_insert_foreign_enum");
{
#line 1456 "table_builtin.m"

    MR_tbl_lookup_insert_foreign_enum(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        V, T);
;}
#line 2650 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_lookup_insert_foreign_enum");
	MR_r1 = (MR_Word) T;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module52)
	MR_init_entry1(table_builtin__table_lookup_insert_gen_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_gen'/3 mode 0 */
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
#line 1464 "table_builtin.m"

    MR_tbl_lookup_insert_gen(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);
;}
#line 2692 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module53)
	MR_init_entry1(table_builtin__table_lookup_insert_gen_addr_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_gen_addr'/3 mode 0 */
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
#line 1472 "table_builtin.m"

    MR_tbl_lookup_insert_gen_addr(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);
;}
#line 2734 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module54)
	MR_init_entry1(table_builtin__table_lookup_insert_gen_poly_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_gen_poly'/3 mode 0 */
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
#line 1480 "table_builtin.m"

    MR_tbl_lookup_insert_gen_poly(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);
;}
#line 2776 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module55)
	MR_init_entry1(table_builtin__table_lookup_insert_gen_poly_addr_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_gen_poly_addr'/3 mode 0 */
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
#line 1488 "table_builtin.m"

    MR_tbl_lookup_insert_gen_poly_addr(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, TypeInfo_for_T, V, T);
;}
#line 2818 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module56)
	MR_init_entry1(table_builtin__table_lookup_insert_typeinfo_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_typeinfo'/3 mode 0 */
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
#line 1496 "table_builtin.m"

    MR_tbl_lookup_insert_typeinfo(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, V, T);
;}
#line 2858 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module57)
	MR_init_entry1(table_builtin__table_lookup_insert_typeclassinfo_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_lookup_insert_typeclassinfo'/3 mode 0 */
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
#line 1504 "table_builtin.m"

    MR_tbl_lookup_insert_typeclassinfo(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, V, T);
;}
#line 2898 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module58)
	MR_init_entry1(table_builtin__table_save_int_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_save_int_answer'/3 mode 0 */
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
#line 1514 "table_builtin.m"

    MR_tbl_save_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 2938 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_int_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module59)
	MR_init_entry1(table_builtin__table_save_char_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_save_char_answer'/3 mode 0 */
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
#line 1521 "table_builtin.m"

    MR_tbl_save_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 2977 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_char_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module60)
	MR_init_entry1(table_builtin__table_save_string_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_save_string_answer'/3 mode 0 */
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
#line 1528 "table_builtin.m"

    MR_tbl_save_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3016 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_string_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module61)
	MR_init_entry1(table_builtin__table_save_float_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_save_float_answer'/3 mode 0 */
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
#line 1535 "table_builtin.m"

    MR_tbl_save_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3055 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_float_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module62)
	MR_init_entry1(table_builtin__table_save_io_state_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_save_io_state_answer'/3 mode 0 */
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
#line 1542 "table_builtin.m"

    MR_tbl_save_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3093 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_io_state_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module63)
	MR_init_entry1(table_builtin__table_save_any_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_save_any_answer'/3 mode 0 */
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
#line 1549 "table_builtin.m"

    MR_tbl_save_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset,
        TypeInfo_for_T, V);
;}
#line 3135 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_save_any_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module64)
	MR_init_entry1(table_builtin__table_restore_int_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_restore_int_answer'/3 mode 0 */
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
#line 1557 "table_builtin.m"

    MR_tbl_restore_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3173 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module65)
	MR_init_entry1(table_builtin__table_restore_char_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_restore_char_answer'/3 mode 0 */
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
#line 1564 "table_builtin.m"

    MR_tbl_restore_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3212 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module66)
	MR_init_entry1(table_builtin__table_restore_string_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_restore_string_answer'/3 mode 0 */
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
#line 1571 "table_builtin.m"

    MR_tbl_restore_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3251 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module67)
	MR_init_entry1(table_builtin__table_restore_float_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_restore_float_answer'/3 mode 0 */
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
#line 1578 "table_builtin.m"

    MR_tbl_restore_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3290 "table_builtin.c"
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


MR_BEGIN_MODULE(table_builtin_module68)
	MR_init_entry1(table_builtin__table_restore_io_state_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_restore_io_state_answer'/3 mode 0 */
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
#line 1585 "table_builtin.m"

    MR_tbl_restore_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3329 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_restore_io_state_answer");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module69)
	MR_init_entry1(table_builtin__table_restore_any_answer_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_restore_any_answer'/3 mode 0 */
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
#line 1592 "table_builtin.m"

    MR_tbl_restore_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);
;}
#line 3367 "table_builtin.c"
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

MR_BEGIN_MODULE(table_builtin_module70)
	MR_init_entry1(table_builtin__table_error_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_error'/1 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module71)
	MR_init_entry1(table_builtin__table_report_statistics_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'table_report_statistics'/0 mode 0 */
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
#line 1602 "table_builtin.m"

    MR_table_report_statistics(stderr);
;}
#line 3423 "table_builtin.c"
	MR_RELEASE_GLOBAL_LOCK("table_report_statistics");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(table_builtin_module72)
	MR_init_entry1(__Unify___table_builtin__loop_status_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module73)
	MR_init_entry1(__Compare___table_builtin__loop_status_0_0);
	MR_init_label2(__Compare___table_builtin__loop_status_0_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module74)
	MR_init_entry1(__Unify___table_builtin__memo_det_status_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module75)
	MR_init_entry1(__Compare___table_builtin__memo_det_status_0_0);
	MR_init_label2(__Compare___table_builtin__memo_det_status_0_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_BEGIN_MODULE(table_builtin_module76)
	MR_init_entry1(__Unify___table_builtin__memo_non_record_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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

MR_BEGIN_MODULE(table_builtin_module77)
	MR_init_entry1(__Compare___table_builtin__memo_non_record_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module78)
	MR_init_entry1(__Unify___table_builtin__memo_non_status_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module79)
	MR_init_entry1(__Compare___table_builtin__memo_non_status_0_0);
	MR_init_label2(__Compare___table_builtin__memo_non_status_0_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module80)
	MR_init_entry1(__Unify___table_builtin__memo_semi_status_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module81)
	MR_init_entry1(__Compare___table_builtin__memo_semi_status_0_0);
	MR_init_label2(__Compare___table_builtin__memo_semi_status_0_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module82)
	MR_init_entry1(__Unify___table_builtin__ml_answer_block_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module83)
	MR_init_entry1(__Compare___table_builtin__ml_answer_block_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module84)
	MR_init_entry1(__Unify___table_builtin__ml_answer_list_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module85)
	MR_init_entry1(__Compare___table_builtin__ml_answer_list_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module86)
	MR_init_entry1(__Unify___table_builtin__ml_consumer_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module87)
	MR_init_entry1(__Compare___table_builtin__ml_consumer_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module88)
	MR_init_entry1(__Unify___table_builtin__ml_generator_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module89)
	MR_init_entry1(__Compare___table_builtin__ml_generator_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module90)
	MR_init_entry1(__Unify___table_builtin__ml_proc_table_info_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module91)
	MR_init_entry1(__Compare___table_builtin__ml_proc_table_info_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module92)
	MR_init_entry1(__Unify___table_builtin__ml_subgoal_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module93)
	MR_init_entry1(__Compare___table_builtin__ml_subgoal_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module94)
	MR_init_entry1(__Unify___table_builtin__ml_trie_node_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module95)
	MR_init_entry1(__Compare___table_builtin__ml_trie_node_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module96)
	MR_init_entry1(__Unify___table_builtin__mm_status_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module97)
	MR_init_entry1(__Compare___table_builtin__mm_status_0_0);
	MR_init_label2(__Compare___table_builtin__mm_status_0_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module98)
	MR_init_entry1(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_103_101_116_95_97_110_115_119_101_114_95_98_108_111_99_107_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__table_memo_get_answer_block_shortcut__[1]_0'/1 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module99)
	MR_init_entry1(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_110_111_110_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__table_memo_non_return_all_shortcut__[1]_0'/1 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module100)
	MR_init_entry1(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__table_mm_return_all_shortcut__[1]_0'/1 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module101)
	MR_init_entry1(f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_111_115_95_114_101_115_116_111_114_101_95_97_110_115_119_101_114_115_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__table_mmos_restore_answers__[1]_0'/1 mode 0 */
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


MR_BEGIN_MODULE(table_builtin_module102)
	MR_init_entry1(fn__f_116_97_98_108_101_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
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
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_loop_status_0,
		table_builtin__loop_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_memo_det_status_0,
		table_builtin__memo_det_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_memo_non_record_0,
		table_builtin__memo_non_record_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_memo_non_status_0,
		table_builtin__memo_non_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_memo_semi_status_0,
		table_builtin__memo_semi_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_answer_block_0,
		table_builtin__ml_answer_block_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_answer_list_0,
		table_builtin__ml_answer_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_consumer_0,
		table_builtin__ml_consumer_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_generator_0,
		table_builtin__ml_generator_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_proc_table_info_0,
		table_builtin__ml_proc_table_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_subgoal_0,
		table_builtin__ml_subgoal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_ml_trie_node_0,
		table_builtin__ml_trie_node_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_table_builtin__type_ctor_info_mm_status_0,
		table_builtin__mm_status_0_0);
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
		&mercury_data_table_builtin__type_ctor_info_loop_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_memo_det_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_memo_non_record_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_memo_non_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_memo_semi_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_answer_block_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_answer_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_consumer_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_generator_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_proc_table_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_subgoal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_ml_trie_node_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_table_builtin__type_ctor_info_mm_status_0);
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
