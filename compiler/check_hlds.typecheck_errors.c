/*
** Automatically generated from `typecheck_errors.m'
** by the Mercury compiler,
** version rotd-2007-09-21, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__typecheck_errors__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "check_hlds.typecheck_errors.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "check_hlds.typecheck_errors.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "check_hlds.typecheck_errors.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "check_hlds.typecheck_errors.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "check_hlds.typecheck_errors.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "check_hlds.typecheck_errors.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "check_hlds.typecheck_errors.c"
#line 52 "check_hlds.typecheck_errors.c"
#include "check_hlds.typecheck_errors.mh"

#line 55 "check_hlds.typecheck_errors.c"
#line 56 "check_hlds.typecheck_errors.c"
#ifndef CHECK_HLDS__TYPECHECK_ERRORS_DECL_GUARD
#define CHECK_HLDS__TYPECHECK_ERRORS_DECL_GUARD

#line 60 "check_hlds.typecheck_errors.c"
#line 61 "check_hlds.typecheck_errors.c"

#endif
#line 64 "check_hlds.typecheck_errors.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Integer f1[32];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Integer f1;
	MR_String f2[8];
	MR_Integer f3[4];
	MR_String f4;
	MR_Integer f5[2];
	MR_String f6;
	MR_Integer f7[4];
	MR_String f8[2];
	MR_Integer f9[3];
	MR_String f10;
	MR_Integer f11;
	MR_String f12;
	MR_Integer f13[3];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_String f1;
	MR_Integer f2;
	MR_Integer f3;
	MR_Integer f4;
	MR_Integer f5;
	MR_String f6;
	MR_Integer f7;
	MR_Integer f8;
	MR_Integer f9;
	MR_Integer f10;
	MR_Integer f11;
	MR_Integer f12;
	MR_Integer f13;
	MR_String f14;
	MR_Integer f15;
	MR_String f16;
	MR_Integer f17;
	MR_String f18;
	MR_Integer f19;
	MR_String f20;
	MR_Integer f21;
	MR_String f22;
	MR_Integer f23;
	MR_Integer f24;
	MR_Integer f25;
	MR_Integer f26;
	MR_Integer f27;
	MR_String f28;
	MR_Integer f29;
	MR_String f30;
	MR_Integer f31;
	MR_String f32;
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_stuff_0,
	mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0,
	mercury_data_check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0,
	mercury_data_check_hlds__typecheck_errors__type_ctor_info_cons_error_0,
	mercury_data_check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0,
	mercury_data_check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0;
MR_decl_label2(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__968__1_4_0, 1,3)
MR_decl_label8(check_hlds__typecheck_errors__constraints_to_pieces_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label2(check_hlds__typecheck_errors__constraints_to_pieces_4_0, 10,11)
MR_decl_label7(check_hlds__typecheck_errors__find_mismatched_args_6_0, 4,5,6,7,9,11,3)
MR_decl_label8(check_hlds__typecheck_errors__get_arg_type_stuff_3_0, 4,5,6,7,8,10,9,13)
MR_decl_label5(check_hlds__typecheck_errors__get_arg_type_stuff_3_0, 14,15,17,16,3)
MR_decl_label8(check_hlds__typecheck_errors__get_type_stuff_3_0, 4,5,6,7,8,10,9,12)
MR_decl_label3(check_hlds__typecheck_errors__get_type_stuff_3_0, 14,13,3)
MR_decl_label7(check_hlds__typecheck_errors__get_unimported_parent_3_0, 1,2,4,5,10,11,8)
MR_decl_label8(check_hlds__typecheck_errors__language_builtin_functor_components_3_0, 3,38,5,6,8,10,12,14)
MR_decl_label8(check_hlds__typecheck_errors__language_builtin_functor_components_3_0, 17,19,21,23,25,27,29,31)
MR_decl_label4(check_hlds__typecheck_errors__language_builtin_functor_components_3_0, 100,2,33,36)
MR_decl_label8(check_hlds__typecheck_errors__substitute_types_check_match_3_0, 2,3,8,9,11,7,24,4)
MR_decl_label2(check_hlds__typecheck_errors__substitute_types_check_match_3_0, 17,18)
MR_decl_label8(check_hlds__typecheck_errors__syntax_functor_components_3_0, 3,27,5,6,8,10,12,14)
MR_decl_label5(check_hlds__typecheck_errors__syntax_functor_components_3_0, 16,18,20,22,24)
MR_decl_label4(check_hlds__typecheck_errors__typecheck_find_arities_3_0, 4,5,6,3)
MR_decl_label8(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0, 10,11,14,16,17,18,19,20)
MR_decl_label8(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0, 21,13,22,23,24,25,27,28)
MR_decl_label8(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0, 29,30,31,32,33,34,35,36)
MR_decl_label3(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0, 37,38,39)
MR_decl_label6(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0, 4,5,6,7,8,3)
MR_decl_label1(fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0, 2)
MR_decl_label3(fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0, 2,3,4)
MR_decl_label8(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0, 4,5,6,7,8,9,11,13)
MR_decl_label8(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0, 15,16,18,19,21,17,23,24)
MR_decl_label8(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0, 25,26,27,28,29,30,31,10)
MR_decl_label2(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0, 33,3)
MR_decl_label2(fn__check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_0, 2,3)
MR_decl_label2(fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0, 2,6)
MR_decl_label3(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0, 3,5,2)
MR_decl_label2(fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0, 15,5)
MR_decl_label8(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0, 47,5,8,9,6,4,12,13)
MR_decl_label4(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0, 16,19,20,46)
MR_decl_label6(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0, 4,5,6,7,8,9)
MR_decl_label8(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0, 4,3,8,9,10,7,11,13)
MR_decl_label4(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0, 15,16,17,18)
MR_decl_label5(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0, 4,5,7,9,3)
MR_decl_label5(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0, 2,5,3,9,13)
MR_decl_label2(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0, 2,3)
MR_decl_label5(fn__check_hlds__typecheck_errors__make_list_term_1_0, 4,5,6,3,7)
MR_decl_label8(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0, 8,9,6,2,13,15,16,20)
MR_decl_label4(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0, 17,22,23,12)
MR_decl_label8(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0, 73,4,7,9,15,10,17,18)
MR_decl_label8(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0, 20,22,19,24,25,26,27,28)
MR_decl_label5(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0, 31,32,30,33,34)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0, 2,3,4,5,6,9,8,10)
MR_decl_label1(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0, 11)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_cons_error_2_0, 4,5,33,9,8,13,12,14)
MR_decl_label7(fn__check_hlds__typecheck_errors__report_cons_error_2_0, 7,15,16,17,18,19,20)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0, 13,14,15,16,17,10,19,20)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0, 21,22,23,24,25,26,27,29)
MR_decl_label2(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0, 30,31)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0, 10,11,12,13,14,16,19,20)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0, 21,22,23,25,15,26,31,29)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0, 33,34,35,36,37,28,38,39)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0, 40,41,42,43,44,45,47,48)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0, 10,11,12,13,14,15,16,17)
MR_decl_label5(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0, 18,19,20,21,22)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0, 2,6,3,8,9,10,11,12)
MR_decl_label3(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0, 13,14,15)
MR_decl_label1(fn__check_hlds__typecheck_errors__report_error_too_much_overloading_1_0, 2)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0, 2,3,4,5,6,11,12,15)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0, 14,17,19,8,23,24,25,26)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0, 21,29,30,31,40,35,43,45)
MR_decl_label3(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0, 49,50,46)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0, 2,5,4,7,8,3,11,10)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0, 13,14,9,17,16,19,20,15)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0, 23,22,25,26,21,30,27,35)
MR_decl_label6(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0, 34,31,37,43,41,45)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label6(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0, 10,11,12,13,14,15)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_var_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_var_4_0, 13,14,15,16,17,10,19,20)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_error_var_4_0, 21,22,23,24,25,26,27,29)
MR_decl_label2(fn__check_hlds__typecheck_errors__report_error_var_4_0, 30,31)
MR_decl_label7(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0, 2,3,10,11,12,13,14)
MR_decl_label4(fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0, 2,3,4,5)
MR_decl_label3(fn__check_hlds__typecheck_errors__report_no_clauses_3_0, 2,3,4)
MR_decl_label3(fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0, 2,3,4)
MR_decl_label8(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0, 2,3,5,6,8,10,11,12)
MR_decl_label7(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0, 4,14,17,18,19,23,15)
MR_decl_label6(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0, 2,3,4,7,8,9)
MR_decl_label1(fn__check_hlds__typecheck_errors__report_warning_too_much_overloading_1_0, 2)
MR_decl_label8(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0, 4,5,3,6,7,2,8,9)
MR_decl_label8(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0, 10,12,17,16,20,15,14,23)
MR_decl_label1(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0, 24)
MR_decl_label2(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0, 2,6)
MR_decl_label8(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0, 5,8,10,13,14,11,9,17)
MR_decl_label8(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0, 18,19,20,21,2,23,24,25)
MR_decl_label7(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0, 2,3,4,5,8,9,10)
MR_decl_label4(fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0, 2,3,4,5)
MR_decl_label8(fn__check_hlds__typecheck_errors__type_to_pieces_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(fn__check_hlds__typecheck_errors__type_to_pieces_3_0, 11,12,13,14,15)
MR_decl_label8(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0, 10,12,13,14,15)
MR_decl_label4(fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0, 8,9,10,11)
MR_decl_label3(__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0, 4,8,1)
MR_decl_label5(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0, 4,6,8,12,1)
MR_decl_label8(__Unify___check_hlds__typecheck_errors__cons_error_0_0, 6,7,9,13,15,17,19,23)
MR_decl_label2(__Unify___check_hlds__typecheck_errors__cons_error_0_0, 39,1)
MR_decl_label3(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0, 4,8,1)
MR_decl_label3(__Unify___check_hlds__typecheck_errors__type_mismatch_0_0, 4,8,1)
MR_decl_label5(__Unify___check_hlds__typecheck_errors__type_stuff_0_0, 4,6,8,12,1)
MR_decl_label4(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0, 3,2,5,21)
MR_decl_label6(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0, 3,2,5,9,13,37)
MR_decl_label8(__Compare___check_hlds__typecheck_errors__cons_error_0_0, 6,9,13,19,26,31,33,37)
MR_decl_label6(__Compare___check_hlds__typecheck_errors__cons_error_0_0, 41,48,49,54,55,57)
MR_decl_label5(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0, 3,2,5,21)
MR_decl_label6(__Compare___check_hlds__typecheck_errors__type_stuff_0_0, 3,2,5,9,13,37)
MR_decl_static(check_hlds__typecheck_errors__typecheck_find_arities_3_0)
MR_decl_static(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0)
MR_decl_static(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0)
MR_decl_static(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0)
MR_decl_static(fn__check_hlds__typecheck_errors__report_apply_instead_of_pred_0_0)
MR_decl_static(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0)
MR_decl_static(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_unknown_event_call_error_2_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_no_clauses_3_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0)
MR_decl_static(fn__check_hlds__typecheck_errors__this_file_0_0)
MR_decl_static(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_warning_too_much_overloading_1_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_error_too_much_overloading_1_0)
MR_decl_static(check_hlds__typecheck_errors__get_type_stuff_3_0)
MR_decl_static(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0)
MR_decl_static(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0)
MR_decl_static(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_error_lambda_var_6_0)
MR_decl_static(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0)
MR_decl_static(fn__check_hlds__typecheck_errors__make_list_term_1_0)
MR_decl_static(fn__check_hlds__typecheck_errors__type_to_pieces_3_0)
MR_decl_static(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0)
MR_decl_static(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0)
MR_decl_static(check_hlds__typecheck_errors__find_mismatched_args_6_0)
MR_decl_static(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0)
MR_decl_static(fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0)
MR_decl_static(fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_error_var_4_0)
MR_decl_static(fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0)
MR_decl_static(check_hlds__typecheck_errors__get_arg_type_stuff_3_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0)
MR_decl_static(check_hlds__typecheck_errors__language_builtin_functor_components_3_0)
MR_decl_static(check_hlds__typecheck_errors__syntax_functor_components_3_0)
MR_decl_static(fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0)
MR_decl_static(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0)
MR_def_extern_entry(fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0)
MR_decl_static(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0)
MR_decl_static(fn__check_hlds__typecheck_errors__context_to_error_msg_2_0)
MR_decl_static(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0)
MR_decl_static(check_hlds__typecheck_errors__substitute_types_check_match_3_0)
MR_decl_static(fn__check_hlds__typecheck_errors__report_cons_error_2_0)
MR_decl_static(check_hlds__typecheck_errors__constraints_to_pieces_4_0)
MR_decl_static(fn__check_hlds__typecheck_errors__wrap_quote_1_0)
MR_decl_static(fn__check_hlds__typecheck_errors__string_to_pieces_1_0)
MR_decl_static(fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0)
MR_decl_static(fn__check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_0)
MR_decl_static(fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0)
MR_decl_static(check_hlds__typecheck_errors__get_unimported_parent_3_0)
MR_decl_static(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0)
MR_decl_static(__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0)
MR_decl_static(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0)
MR_decl_static(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0)
MR_decl_static(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0)
MR_def_extern_entry(__Unify___check_hlds__typecheck_errors__cons_error_0_0)
MR_def_extern_entry(__Compare___check_hlds__typecheck_errors__cons_error_0_0)
MR_decl_static(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0)
MR_decl_static(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0)
MR_decl_static(__Unify___check_hlds__typecheck_errors__type_mismatch_0_0)
MR_decl_static(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0)
MR_decl_static(__Unify___check_hlds__typecheck_errors__type_stuff_0_0)
MR_decl_static(__Compare___check_hlds__typecheck_errors__type_stuff_0_0)
MR_decl_static(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_functor_arg_types__669__1_1_0)
MR_decl_static(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__946__1_2_0)
MR_decl_static(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__965__1_2_0)
MR_decl_static(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__968__1_4_0)
MR_decl_static(fn__check_hlds__typecheck_errors__IntroducedFrom__func__too_much_overloading_to_msgs__390__1_1_0)
MR_decl_static(check_hlds__typecheck_errors__IntroducedFrom__pred__type_to_pieces__1496__1_2_0)
MR_decl_static(check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__1663__1_2_0)
MR_decl_static(check_hlds__typecheck_errors__IntroducedFrom__pred__typestuff_to_typestr__1748__1_2_0)
MR_def_extern_entry(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0)
MR_decl_static(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[161] =
{
{
3,
MR_string_const("In clause for", 13)
},
{
2,
MR_string_const(":", 1)
},
{
3,
MR_string_const("or", 2)
},
{
2,
MR_string_const(",", 1)
},
{
3,
MR_string_const("error:", 6)
},
{
3,
MR_string_const("wrong number of arguments (", 27)
},
{
2,
MR_string_const(";", 1)
},
{
3,
MR_string_const("should be", 9)
},
{
2,
MR_string_const(")", 1)
},
{
3,
MR_string_const("in call to", 10)
},
{
2,
MR_string_const(".", 1)
},
{
3,
MR_string_const("error: the language construct \140apply\'", 37)
},
{
3,
MR_string_const("should be used as an expression, not as a goal.", 47)
},
{
3,
MR_string_const("with the appropriate arity, e.g.", 32)
},
{
3,
MR_string_const("where \140my_apply\' is defined", 27)
},
{
3,
MR_string_const("use", 3)
},
{
3,
MR_string_const("e.g. instead of ", 16)
},
{
3,
MR_string_const("use a forwarding function:", 26)
},
{
3,
MR_string_const("If you\'re trying to curry a higher-order function,", 50)
},
{
3,
MR_string_const("use \140call\', not \140apply\'.", 24)
},
{
3,
MR_string_const("If you\'re trying to invoke a higher-order predicate,", 52)
},
{
3,
MR_string_const("Perhaps you forgot to add", 25)
},
{
3,
MR_string_const("(the module", 11)
},
{
3,
MR_string_const("has not been imported).", 23)
},
{
3,
MR_string_const("(the possible parent module", 27)
},
{
3,
MR_string_const("(the possible parent modules", 28)
},
{
3,
MR_string_const("have not been imported).", 24)
},
{
3,
MR_string_const("error: \140->\' without \140;\'.", 24)
},
{
3,
MR_string_const("Note: the else part is not optional.", 36)
},
{
3,
MR_string_const("Every if-then must have an else.", 32)
},
{
3,
MR_string_const("error: unmatched \140else\'.", 24)
},
{
3,
MR_string_const("error: \140if\' without \140then\' or \140else\'.", 37)
},
{
3,
MR_string_const("error: \140then\' without \140if\' or \140else\'.", 37)
},
{
3,
MR_string_const("Note: the \140else\' part is not optional.", 38)
},
{
3,
MR_string_const("Every if-then must have an \140else\'.", 34)
},
{
3,
MR_string_const("marker in an inappropriate place.", 33)
},
{
3,
MR_string_const("Such markers only belong before predicate calls.", 48)
},
{
3,
MR_string_const("syntax error in existential quantification:", 43)
},
{
3,
MR_string_const("first argument of \140some\' should be a list of variables.", 55)
},
{
3,
MR_string_const("error: undefined", 16)
},
{
3,
MR_string_const("(There is a", 11)
},
{
1,
MR_string_const("*", 1)
},
{
2,
MR_string_const("*", 1)
},
{
3,
MR_string_const("with that name, however.)", 25)
},
{
3,
MR_string_const("with that name, however.", 24)
},
{
3,
MR_string_const("Error: there is no event named", 30)
},
{
3,
MR_string_const("Error:", 6)
},
{
3,
MR_string_const("in event", 8)
},
{
3,
MR_string_const("Error: no clauses for", 21)
},
{
3,
MR_string_const("Warning: no clauses for ", 24)
},
{
3,
MR_string_const("warning: highly ambiguous overloading.", 38)
},
{
3,
MR_string_const("This may cause type-checking to be very slow.", 45)
},
{
3,
MR_string_const("It may also make your code difficult to understand.", 51)
},
{
3,
MR_string_const("error: excessively ambiguous overloading.", 41)
},
{
3,
MR_string_const("This caused the type checker to exceed its limits.", 50)
},
{
3,
MR_string_const("The following symbol was overloaded", 35)
},
{
3,
MR_string_const("in the following context.", 25)
},
{
3,
MR_string_const("in the following contexts.", 26)
},
{
3,
MR_string_const("The following symbols were overloaded", 37)
},
{
3,
MR_string_const("has type", 8)
},
{
3,
MR_string_const("has overloaded type {", 21)
},
{
3,
MR_string_const("}", 1)
},
{
3,
MR_string_const("type error in unification of variable", 37)
},
{
3,
MR_string_const("and variable", 12)
},
{
3,
MR_string_const("variable", 8)
},
{
3,
MR_string_const("argument", 8)
},
{
3,
MR_string_const("constant", 8)
},
{
3,
MR_string_const("higher-order term (with arity", 29)
},
{
3,
MR_string_const("functor", 7)
},
{
1,
MR_string_const("\140", 1)
},
{
2,
MR_string_const("\'", 1)
},
{
3,
MR_string_const("has overloaded type", 19)
},
{
3,
MR_string_const("type error in unification of", 28)
},
{
3,
MR_string_const("and", 3)
},
{
1,
MR_string_const("(", 1)
},
{
3,
MR_string_const("expected type was", 17)
},
{
3,
MR_string_const("in unification of", 17)
},
{
3,
MR_string_const("and term", 8)
},
{
3,
MR_string_const("type error in argument(s) of", 28)
},
{
3,
MR_string_const("in", 2)
},
{
3,
MR_string_const("type error:", 11)
},
{
3,
MR_string_const("type of", 7)
},
{
3,
MR_string_const("does not match its expected type;", 33)
},
{
3,
MR_string_const("has overloaded actual/expected types {", 38)
},
{
3,
MR_string_const("error: the language construct", 29)
},
{
3,
MR_string_const("should be used as a goal, not as an expression.", 47)
},
{
3,
MR_string_const("If you are trying to use a goal", 31)
},
{
3,
MR_string_const("as a boolean function, you should write", 39)
},
{
3,
MR_string_const("\140if <goal> then yes else no\' instead.", 37)
},
{
3,
MR_string_const("correctly imported).", 20)
},
{
3,
MR_string_const("in a separate module, check that the module is", 46)
},
{
3,
MR_string_const("\140call\' is actually defined (if it is defined", 44)
},
{
3,
MR_string_const("you have the arity correct, and that the functor", 48)
},
{
3,
MR_string_const("the language builtin call/N, make sure that", 43)
},
{
3,
MR_string_const("as an expression and not as an application of", 45)
},
{
3,
MR_string_const("If you really are trying to use \140call\'", 38)
},
{
3,
MR_string_const("the Mercury Language Reference Manual.", 38)
},
{
3,
MR_string_const("see the \"Creating higher-order terms\" section of", 48)
},
{
3,
MR_string_const("a higher-order predicate,", 25)
},
{
3,
MR_string_const("If you\'re trying to curry", 25)
},
{
3,
MR_string_const("you should use \140apply\', not \140call\'.", 35)
},
{
3,
MR_string_const("a higher-order function,", 24)
},
{
3,
MR_string_const("If you are trying to invoke", 27)
},
{
3,
MR_string_const("error: invalid use of \140!\' state variable operator.", 50)
},
{
3,
MR_string_const("You probably meant to use \140!.\' or \140!:\'.", 39)
},
{
3,
MR_string_const("error: invalid use of field update operator", 43)
},
{
3,
MR_string_const("(\140:=\').", 7)
},
{
3,
MR_string_const("This is probably some kind of syntax error.", 43)
},
{
3,
MR_string_const("error: the list constructor is now \140[|]/2\', not \140./2\'.", 54)
},
{
3,
MR_string_const("syntax error in lambda expression (\140:-\').", 41)
},
{
3,
MR_string_const("syntax error in DCG lambda expression (\140-->\').", 46)
},
{
3,
MR_string_const("error: invalid use of field selection operator (\140^\').", 53)
},
{
3,
MR_string_const("The field name must be an atom,", 31)
},
{
3,
MR_string_const("not a variable or other term.", 29)
},
{
3,
MR_string_const("error: ", 7)
},
{
3,
MR_string_const("in use of constructor", 21)
},
{
3,
MR_string_const("error: undefined symbol", 23)
},
{
3,
MR_string_const("error: ambiguous overloading causes type ambiguity.", 51)
},
{
3,
MR_string_const("Possible type assignments include:", 34)
},
{
3,
MR_string_const("You will need to add an explicit type qualificationto resolve the type ambiguity.The way to add an explicit type qualification is to use \"with_type\".For details see the \"Explicit type qualification\" sub-sectionof the \"Data-terms\" section of the \"Syntax\" chapterof the Mercury language reference manual.", 302)
},
{
3,
MR_string_const("unsatisfiable typeclass constraint:", 35)
},
{
3,
MR_string_const("unsatisfiable typeclass constraints:", 36)
},
{
3,
MR_string_const("The foreign language code for", 29)
},
{
3,
MR_string_const("should define the variable", 26)
},
{
3,
MR_string_const("The predicate symbol", 20)
},
{
3,
MR_string_const("The possible matches are:", 25)
},
{
3,
MR_string_const("is also overloaded here.", 24)
},
{
3,
MR_string_const("The function symbol", 19)
},
{
3,
MR_string_const("the type constructor", 20)
},
{
3,
MR_string_const("the builtin type constructor", 28)
},
{
3,
MR_string_const("a \140get\' field access function", 29)
},
{
3,
MR_string_const("for the type constructor", 24)
},
{
3,
MR_string_const("a \140set\' field access function", 29)
},
{
3,
MR_string_const("the builtin operator constructor", 32)
},
{
3,
MR_string_const("There are", 9)
},
{
3,
MR_string_const("declarations for type", 21)
},
{
3,
MR_string_const("so it is treated as an abstract type", 36)
},
{
3,
MR_string_const("in all predicates and functions", 31)
},
{
3,
MR_string_const("which are not implemented", 25)
},
{
3,
MR_string_const("for those foreign types.", 24)
},
{
3,
MR_string_const("Field", 5)
},
{
3,
MR_string_const("cannot be updated because", 25)
},
{
3,
MR_string_const("the existentially quantified type", 33)
},
{
3,
MR_string_const("occurs", 6)
},
{
3,
MR_string_const("variables", 9)
},
{
3,
MR_string_const("occur", 5)
},
{
3,
MR_string_const("in the types of field", 21)
},
{
3,
MR_string_const("and some other field", 20)
},
{
3,
MR_string_const("in definition of constructor", 28)
},
{
3,
MR_string_const("Invalid use of \140new\'", 20)
},
{
3,
MR_string_const("on a constructor of type", 24)
},
{
3,
MR_string_const("which is not existentially typed.", 33)
},
{
3,
MR_string_const("(inferred)", 10)
},
{
3,
MR_string_const("(expected)", 10)
},
{
3,
MR_string_const("lambda expression has type", 26)
},
{
1,
MR_string_const("pred(", 5)
},
{
3,
MR_string_const(":- ...\':", 8)
},
{
3,
MR_string_const("pred", 4)
},
{
2,
MR_string_const("\'.", 2)
},
{
1,
MR_string_const("func(", 5)
},
{
3,
MR_string_const("func = _", 8)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_cons_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_cons_defn_0;
static const struct mercury_type_1 mercury_common_1[192] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,1),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,10),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,12),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,11),
MR_TAG_COMMON(1,1,5)
}
},
{
{
MR_TAG_COMMON(1,5,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,13),
MR_TAG_COMMON(1,1,7)
}
},
{
{
MR_TAG_COMMON(3,0,14),
MR_TAG_COMMON(1,1,8)
}
},
{
{
MR_TAG_COMMON(1,5,1),
MR_TAG_COMMON(1,1,9)
}
},
{
{
MR_TAG_COMMON(3,0,15),
MR_TAG_COMMON(1,1,10)
}
},
{
{
MR_TAG_COMMON(1,5,2),
MR_TAG_COMMON(1,1,11)
}
},
{
{
MR_TAG_COMMON(3,0,16),
MR_TAG_COMMON(1,1,12)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,1,13)
}
},
{
{
MR_TAG_COMMON(3,0,17),
MR_TAG_COMMON(1,1,14)
}
},
{
{
MR_TAG_COMMON(3,0,18),
MR_TAG_COMMON(1,1,15)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,1,16)
}
},
{
{
MR_TAG_COMMON(3,0,19),
MR_TAG_COMMON(1,1,17)
}
},
{
{
MR_TAG_COMMON(3,0,20),
MR_TAG_COMMON(1,1,18)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,1,19)
}
},
{
{
MR_TAG_COMMON(1,5,3),
MR_TAG_COMMON(1,1,20)
}
},
{
{
MR_TAG_COMMON(3,0,21),
MR_TAG_COMMON(1,1,21)
}
},
{
{
MR_TAG_COMMON(2,4,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,0),
MR_TAG_COMMON(1,1,23)
}
},
{
{
MR_TAG_COMMON(3,0,23),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,24),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,23),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,25),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,27),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,29),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,1,31)
}
},
{
{
MR_TAG_COMMON(3,0,28),
MR_TAG_COMMON(1,1,32)
}
},
{
{
MR_TAG_COMMON(2,4,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,2),
MR_TAG_COMMON(1,1,34)
}
},
{
{
MR_TAG_COMMON(3,0,30),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(0,4,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,31),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(0,4,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,32),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,34),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,1,41)
}
},
{
{
MR_TAG_COMMON(3,0,33),
MR_TAG_COMMON(1,1,42)
}
},
{
{
MR_TAG_COMMON(2,4,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,6),
MR_TAG_COMMON(1,1,44)
}
},
{
{
MR_TAG_COMMON(3,0,35),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,36),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(2,4,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,38),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,37),
MR_TAG_COMMON(1,1,49)
}
},
{
{
MR_TAG_COMMON(0,4,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,43),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,42),
MR_TAG_COMMON(1,1,52)
}
},
{
{
MR_TAG_COMMON(1,5,3),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,21),
MR_TAG_COMMON(1,1,54)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,1,55)
}
},
{
{
MR_TAG_COMMON(3,0,44),
MR_TAG_COMMON(1,1,56)
}
},
{
{
MR_TAG_COMMON(3,0,42),
MR_TAG_COMMON(1,1,57)
}
},
{
{
MR_TAG_COMMON(3,0,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,46),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_TAG_COMMON(3,0,50),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,52),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,51),
MR_TAG_COMMON(1,1,63)
}
},
{
{
MR_TAG_COMMON(2,4,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,53),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,54),
MR_TAG_COMMON(1,1,63)
}
},
{
{
MR_TAG_COMMON(2,4,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_TAG_COMMON(3,0,56),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,55),
MR_TAG_COMMON(1,1,71)
}
},
{
{
MR_TAG_COMMON(0,4,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_msg)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_msg)
}
},
{
{
MR_TAG_COMMON(3,0,57),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,55),
MR_TAG_COMMON(1,1,77)
}
},
{
{
MR_TAG_COMMON(0,4,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,58),
MR_TAG_COMMON(1,1,77)
}
},
{
{
MR_TAG_COMMON(0,4,14),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,9,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,60),
MR_TAG_COMMON(1,1,82)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
{
{
MR_TAG_COMMON(3,0,61),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,9,1),
MR_TAG_COMMON(1,1,86)
}
},
{
{
MR_TAG_COMMON(3,9,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,65),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_TAG_COMMON(3,0,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,3),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,59),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,69),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,70),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,9,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,71),
MR_TAG_COMMON(1,1,100)
}
},
{
{
MR_TAG_COMMON(1,5,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,5,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,9,3),
MR_TAG_COMMON(1,1,103)
}
},
{
{
MR_TAG_COMMON(3,0,72),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,73),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,1,106)
}
},
{
{
MR_TAG_COMMON(1,5,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,59),
MR_TAG_COMMON(1,1,98)
}
},
{
{
MR_TAG_COMMON(3,0,70),
MR_TAG_COMMON(1,1,96)
}
},
{
{
MR_TAG_COMMON(3,0,75),
MR_TAG_COMMON(1,1,98)
}
},
{
{
MR_TAG_COMMON(3,0,76),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,78),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,1,113)
}
},
{
{
MR_TAG_COMMON(3,0,1),
MR_TAG_COMMON(1,1,114)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__typecheck_errors, mismatch_info)
}
},
{
{
MR_TAG_COMMON(3,0,80),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,1,111)
}
},
{
{
MR_TAG_COMMON(3,0,3),
MR_TAG_COMMON(1,1,120)
}
},
{
{
MR_TAG_COMMON(3,0,70),
MR_TAG_COMMON(1,1,121)
}
},
{
{
MR_TAG_COMMON(3,0,70),
MR_TAG_COMMON(1,1,4)
}
},
{
{
MR_TAG_COMMON(3,0,81),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,82),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,83),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(1,5,13),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,1,127)
}
},
{
{
MR_TAG_COMMON(3,0,85),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,88),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,87),
MR_TAG_COMMON(1,1,130)
}
},
{
{
MR_TAG_COMMON(3,0,86),
MR_TAG_COMMON(1,1,131)
}
},
{
{
MR_TAG_COMMON(3,0,103),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,104),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(2,4,16),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,15),
MR_TAG_COMMON(1,1,135)
}
},
{
{
MR_TAG_COMMON(3,0,106),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,105),
MR_TAG_COMMON(1,1,137)
}
},
{
{
MR_TAG_COMMON(3,0,107),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(2,4,18),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,17),
MR_TAG_COMMON(1,1,140)
}
},
{
{
MR_TAG_COMMON(3,0,108),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(0,4,19),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,28),
MR_TAG_COMMON(1,1,31)
}
},
{
{
MR_TAG_COMMON(2,4,20),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,2),
MR_TAG_COMMON(1,1,145)
}
},
{
{
MR_TAG_COMMON(3,0,33),
MR_TAG_COMMON(1,1,41)
}
},
{
{
MR_TAG_COMMON(2,4,21),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,6),
MR_TAG_COMMON(1,1,148)
}
},
{
{
MR_TAG_COMMON(3,0,109),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(0,4,22),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,110),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(0,4,23),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,111),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,113),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,112),
MR_TAG_COMMON(1,1,155)
}
},
{
{
MR_TAG_COMMON(3,0,107),
MR_TAG_COMMON(1,1,156)
}
},
{
{
MR_TAG_COMMON(2,4,25),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,24),
MR_TAG_COMMON(1,1,158)
}
},
{
{
MR_TAG_COMMON(3,0,114),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn)
}
},
{
{
MR_TAG_COMMON(3,0,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,117),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,119),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,4,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,120),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,121),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,125),
MR_TAG_COMMON(1,1,100)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(1,1,168)
}
},
{
{
MR_TAG_COMMON(3,0,10),
MR_TAG_COMMON(1,1,169)
}
},
{
{
MR_TAG_COMMON(3,0,126),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,139),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,138),
MR_TAG_COMMON(1,1,172)
}
},
{
{
MR_TAG_COMMON(3,0,137),
MR_TAG_COMMON(1,1,173)
}
},
{
{
MR_TAG_COMMON(3,0,136),
MR_TAG_COMMON(1,1,174)
}
},
{
{
MR_TAG_COMMON(3,0,3),
MR_TAG_COMMON(1,1,175)
}
},
{
{
MR_TAG_COMMON(3,0,142),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,141),
MR_TAG_COMMON(1,1,177)
}
},
{
{
MR_TAG_COMMON(3,0,143),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,145),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,151),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_TAG_COMMON(3,0,152),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,153),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn)
}
},
{
{
MR_TAG_COMMON(3,0,154),
MR_TAG_COMMON(1,1,98)
}
},
{
{
MR_TAG_COMMON(3,0,156),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,8),
MR_TAG_COMMON(1,1,187)
}
},
{
{
MR_TAG_COMMON(3,0,157),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,0,158),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(3,0,160),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_stuff_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__type_to_pieces_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_errors__constraints_to_pieces_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_1;
static const struct mercury_type_2 mercury_common_2[16] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,70),
MR_COMMON(1,70)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_stuff),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_COMMON(1,85)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__type_to_pieces_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,92),
MR_COMMON(1,93)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__typecheck_info, args_type_assign),
MR_COMMON(1,117)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__typecheck_info, args_type_assign),
MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__typecheck_errors, actual_expected_types),
MR_COMMON(1,85)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(check_hlds__typecheck_errors, arg_type_stuff),
MR_CTOR0_ADDR(check_hlds__typecheck_errors, actual_expected_types)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck_errors__constraints_to_pieces_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,92),
MR_COMMON(1,93)
},
};

MR_decl_entry(fn__parse_tree__error_util__describe_sym_name_1_0);
MR_decl_entry(fn__check_hlds__typecheck_info__get_callee_arg_types_1_0);
MR_decl_entry(fn__check_hlds__typecheck_info__get_caller_arg_assign_1_0);
static const struct mercury_type_3 mercury_common_3[15] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__1663__1_2_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__parse_tree__error_util__describe_sym_name_1_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__1663__1_2_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(fn__check_hlds__typecheck_errors__IntroducedFrom__func__too_much_overloading_to_msgs__390__1_1_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0),
0
},
{
MR_COMMON(2,5),
MR_ENTRY_AP(fn__check_hlds__typecheck_errors__string_to_pieces_1_0),
0
},
{
MR_COMMON(2,6),
MR_ENTRY_AP(check_hlds__typecheck_errors__IntroducedFrom__pred__type_to_pieces__1496__1_2_0),
0
},
{
MR_COMMON(2,7),
MR_ENTRY_AP(fn__check_hlds__typecheck_info__get_callee_arg_types_1_0),
0
},
{
MR_COMMON(2,8),
MR_ENTRY_AP(fn__check_hlds__typecheck_info__get_caller_arg_assign_1_0),
0
},
{
MR_COMMON(2,9),
MR_ENTRY_AP(fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0),
0
},
{
MR_COMMON(2,10),
MR_ENTRY_AP(fn__check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_0),
0
},
{
MR_COMMON(2,11),
MR_ENTRY_AP(check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__1663__1_2_0),
0
},
{
MR_COMMON(15,1),
MR_ENTRY_AP(check_hlds__typecheck_errors__constraints_to_pieces_4_0),
0
},
{
MR_COMMON(2,14),
MR_ENTRY_AP(fn__check_hlds__typecheck_errors__wrap_quote_1_0),
0
},
{
MR_COMMON(2,15),
MR_ENTRY_AP(check_hlds__typecheck_errors__IntroducedFrom__pred__typestuff_to_typestr__1748__1_2_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[27] =
{
{
MR_TAG_COMMON(1,1,6)
},
{
MR_TAG_COMMON(1,1,22)
},
{
MR_TAG_COMMON(1,1,30)
},
{
MR_TAG_COMMON(1,1,33)
},
{
MR_TAG_COMMON(1,1,36)
},
{
MR_TAG_COMMON(1,1,38)
},
{
MR_TAG_COMMON(1,1,40)
},
{
MR_TAG_COMMON(1,1,43)
},
{
MR_TAG_COMMON(1,1,47)
},
{
MR_TAG_COMMON(1,1,50)
},
{
MR_TAG_COMMON(1,1,64)
},
{
MR_TAG_COMMON(1,1,67)
},
{
MR_TAG_COMMON(1,1,72)
},
{
MR_TAG_COMMON(1,1,78)
},
{
MR_TAG_COMMON(1,1,80)
},
{
MR_TAG_COMMON(1,1,133)
},
{
MR_TAG_COMMON(1,1,134)
},
{
MR_TAG_COMMON(1,1,138)
},
{
MR_TAG_COMMON(1,1,139)
},
{
MR_TAG_COMMON(1,1,142)
},
{
MR_TAG_COMMON(1,1,144)
},
{
MR_TAG_COMMON(1,1,147)
},
{
MR_TAG_COMMON(1,1,150)
},
{
MR_TAG_COMMON(1,1,152)
},
{
MR_TAG_COMMON(1,1,154)
},
{
MR_TAG_COMMON(1,1,157)
},
{
MR_TAG_COMMON(1,1,164)
},
};

static const struct mercury_type_5 mercury_common_5[17] =
{
{
MR_string_const("\140my_apply(Func, X, Y) :- apply(Func, X, Y).\'", 44)
},
{
MR_string_const("\140NewFunc = my_apply(OldFunc, X)\'", 32)
},
{
MR_string_const("\140NewFunc = apply(OldFunc, X)\'", 29)
},
{
MR_string_const("\140 = ...\'?)", 10)
},
{
MR_string_const("<any>", 5)
},
{
MR_string_const("[|]", 3)
},
{
MR_string_const("[]", 2)
},
{
MR_string_const("some", 4)
},
{
MR_string_const("{", 1)
},
{
MR_string_const("}", 1)
},
{
MR_string_const("argument", 8)
},
{
MR_string_const("Functor", 7)
},
{
MR_string_const("Argument", 8)
},
{
MR_string_const("}.", 2)
},
{
MR_string_const("list", 4)
},
{
MR_string_const("\140:- pragma foreign_type\'", 24)
},
{
MR_string_const("=", 1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_errors__find_mismatched_args_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_var_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_cons_error_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_errors__constraints_to_pieces_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const struct mercury_type_6 mercury_common_6[12] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(8,1),
MR_COMMON(1,76)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(8,1),
MR_COMMON(1,76)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(8,1),
MR_COMMON(1,76)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck_errors__find_mismatched_args_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_stuff),
MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_mismatch)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_var_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_stuff),
MR_CTOR0_ADDR(check_hlds__typecheck_errors, actual_expected_types)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(check_hlds__typecheck_errors, cons_error),
MR_COMMON(1,76)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,85),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__error_util, error_msg)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info_source),
MR_COMMON(1,85)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info_source),
MR_COMMON(1,85)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,85),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__error_util, error_msg)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck_errors__constraints_to_pieces_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,182),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_STRING_CTOR_ADDR
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
25,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const struct mercury_type_8 mercury_common_8[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol),
MR_TAG_COMMON(0,1,69)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol),
MR_COMMON(1,75)
}
},
{
{
MR_TAG_COMMON(0,5,4),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_COMMON(1,161)
}
},
};

static const struct mercury_type_9 mercury_common_9[4] =
{
{
{
9,
2
}
},
{
{
9,
-2
}
},
{
{
9,
1
}
},
{
{
9,
-1
}
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_3;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_3,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(1,118)
},
};

static const struct mercury_type_12 mercury_common_12[2] =
{
{
{
-2,
-1,
-1,
4,
-1,
-1,
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
5,
-2,
-2,
-2,
-2,
-1,
-1,
-2,
-2,
-2,
-1,
-2,
7,
-2,
-2,
-2
}
},
{
{
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-1,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-1
}
},
};

static const struct mercury_type_13 mercury_common_13[1] =
{
{
0,
{
MR_string_const("=>", 2),
MR_string_const("all", 3),
MR_string_const("\\=", 2),
MR_string_const("<=", 2),
MR_string_const("impure", 6),
MR_string_const("call", 4),
MR_string_const("<=>", 3),
MR_string_const("semipure", 8)
},
{
0,
0,
0,
0
},
MR_string_const(",", 1),
{
0,
0
},
MR_string_const("some", 4),
{
0,
0,
0,
0
},
{
MR_string_const("\\+", 2),
MR_string_const("not", 3)
},
{
0,
0,
0
},
MR_string_const(";", 1),
0,
MR_string_const("=", 1),
{
0,
0,
0
}
},
};

static const struct mercury_type_14 mercury_common_14[1] =
{
{
MR_string_const("!", 1),
0,
0,
0,
0,
MR_string_const(":=", 2),
0,
0,
0,
0,
0,
0,
0,
MR_string_const("if", 2),
0,
MR_string_const(".", 1),
0,
MR_string_const("->", 2),
0,
MR_string_const("then", 4),
0,
MR_string_const(":-", 2),
0,
0,
0,
0,
0,
MR_string_const("else", 4),
0,
MR_string_const("-->", 3),
0,
MR_string_const("^", 1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_error_util__type_ctor_info_should_module_qualify_0;
static const struct mercury_type_15 mercury_common_15[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(8,3),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign),
MR_COMMON(1,85),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_error_util, should_module_qualify),
MR_INT_CTOR_ADDR,
MR_COMMON(1,85)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_errors__field_types_type_stuff_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
};

const MR_ConstString mercury_data_check_hlds__typecheck_errors__field_names_type_stuff_0_0[] = {
	"type_stuff_base_type",
	"type_stuff_tvarset",
	"type_stuff_binding",
	"type_stuff_head_type_params"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_errors__du_functor_desc_type_stuff_0_0 = {
	"type_stuff",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_errors__field_types_type_stuff_0_0,
	mercury_data_check_hlds__typecheck_errors__field_names_type_stuff_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_stag_ordered_type_stuff_0_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_type_stuff_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_type_stuff_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_errors__du_stag_ordered_type_stuff_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_name_ordered_type_stuff_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_type_stuff_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_errors__functor_number_map_type_stuff_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_stuff_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_errors__type_stuff_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_errors__type_stuff_0_0)),
	"check_hlds.typecheck_errors",
	"type_stuff",
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_name_ordered_type_stuff_0 },
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_type_stuff_0 },
	1,
	4,
	mercury_data_check_hlds__typecheck_errors__functor_number_map_type_stuff_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_format_component_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_errors__field_types_type_mismatch_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

const MR_ConstString mercury_data_check_hlds__typecheck_errors__field_names_type_mismatch_0_0[] = {
	"actual_type_desc",
	"expected_type_desc"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0 = {
	"type_mismatch",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_errors__field_types_type_mismatch_0_0,
	mercury_data_check_hlds__typecheck_errors__field_names_type_mismatch_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_stag_ordered_type_mismatch_0_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_type_mismatch_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_errors__du_stag_ordered_type_mismatch_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_name_ordered_type_mismatch_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_type_mismatch_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_errors__functor_number_map_type_mismatch_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_errors__type_mismatch_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0)),
	"check_hlds.typecheck_errors",
	"type_mismatch",
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_name_ordered_type_mismatch_0 },
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_type_mismatch_0 },
	1,
	4,
	mercury_data_check_hlds__typecheck_errors__functor_number_map_type_mismatch_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_errors__field_types_mismatch_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0 = {
	"mismatch_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_errors__field_types_mismatch_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_stag_ordered_mismatch_info_0_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_mismatch_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_errors__du_stag_ordered_mismatch_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_name_ordered_mismatch_info_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_mismatch_info_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_errors__functor_number_map_mismatch_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0)),
	"check_hlds.typecheck_errors",
	"mismatch_info",
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_name_ordered_mismatch_info_0 },
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_mismatch_info_0 },
	1,
	4,
	mercury_data_check_hlds__typecheck_errors__functor_number_map_mismatch_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_errors__field_types_cons_error_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_0 = {
	"foreign_type_constructor",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_errors__field_types_cons_error_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_1 = {
	"abstract_imported_type",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_errors__field_types_cons_error_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_2 = {
	"invalid_field_update",
	4,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_errors__field_types_cons_error_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_errors__field_types_cons_error_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_3 = {
	"new_on_non_existential_type",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_errors__field_types_cons_error_0_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_1[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_2[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_2

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_3[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_3

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_cons_error_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_errors__du_stag_ordered_cons_error_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_name_ordered_cons_error_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_1,
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_0,
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_2,
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_cons_error_0_3
};

const MR_Integer mercury_data_check_hlds__typecheck_errors__functor_number_map_cons_error_0[] = {
	1,
	0,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_cons_error_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_errors__cons_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0)),
	"check_hlds.typecheck_errors",
	"cons_error",
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_name_ordered_cons_error_0 },
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_cons_error_0 },
	4,
	4,
	mercury_data_check_hlds__typecheck_errors__functor_number_map_cons_error_0
};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_errors__field_types_arg_type_stuff_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
};

const MR_ConstString mercury_data_check_hlds__typecheck_errors__field_names_arg_type_stuff_0_0[] = {
	"arg_type_stuff_arg_type",
	"arg_type_stuff_var_type",
	"arg_type_stuff_tvarset",
	"arg_type_stuff_head_type_params"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_errors__du_functor_desc_arg_type_stuff_0_0 = {
	"arg_type_stuff",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_errors__field_types_arg_type_stuff_0_0,
	mercury_data_check_hlds__typecheck_errors__field_names_arg_type_stuff_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_stag_ordered_arg_type_stuff_0_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_arg_type_stuff_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_arg_type_stuff_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_errors__du_stag_ordered_arg_type_stuff_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_name_ordered_arg_type_stuff_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_arg_type_stuff_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_errors__functor_number_map_arg_type_stuff_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0)),
	"check_hlds.typecheck_errors",
	"arg_type_stuff",
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_name_ordered_arg_type_stuff_0 },
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_arg_type_stuff_0 },
	1,
	4,
	mercury_data_check_hlds__typecheck_errors__functor_number_map_arg_type_stuff_0
};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_errors__field_types_actual_expected_types_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

const MR_ConstString mercury_data_check_hlds__typecheck_errors__field_names_actual_expected_types_0_0[] = {
	"actual_type",
	"expected_type"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_errors__du_functor_desc_actual_expected_types_0_0 = {
	"actual_expected_types",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_errors__field_types_actual_expected_types_0_0,
	mercury_data_check_hlds__typecheck_errors__field_names_actual_expected_types_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_stag_ordered_actual_expected_types_0_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_actual_expected_types_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_actual_expected_types_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_errors__du_stag_ordered_actual_expected_types_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_errors__du_name_ordered_actual_expected_types_0[] = {
	&mercury_data_check_hlds__typecheck_errors__du_functor_desc_actual_expected_types_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_errors__functor_number_map_actual_expected_types_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0)),
	"check_hlds.typecheck_errors",
	"actual_expected_types",
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_name_ordered_actual_expected_types_0 },
	{ (void *)mercury_data_check_hlds__typecheck_errors__du_ptag_ordered_actual_expected_types_0 },
	1,
	4,
	mercury_data_check_hlds__typecheck_errors__functor_number_map_actual_expected_types_0
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"lambda_typecheck_errors_m_1663",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1663,
"d1;c5;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"get_unimported_parent",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1586,
"d1;c5;e;?;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_2 = {
{
MR_FUNCTION,
"parse_tree.error_util",
"parse_tree.error_util",
"describe_sym_name",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1612,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"lambda_typecheck_errors_m_1663",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1663,
"d1;c5;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_1 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"lambda_typecheck_errors_m_390",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
390,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_2 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"describe_overloaded_symbol",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
420,
"d1;c14;d2;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_3 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"describe_overloaded_symbol",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
420,
"d1;c14;d2;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_4 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"describe_overloaded_symbol",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
420,
"d1;c14;d2;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_1 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"typestuff_to_typestr",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1361,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_2 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"string_to_pieces",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1509,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__type_to_pieces_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"lambda_typecheck_errors_m_1496",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1496,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_errors__find_mismatched_args_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"substitute_types_check_match",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
736,
"d2;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_1 = {
{
MR_FUNCTION,
"check_hlds.typecheck_info",
"check_hlds.typecheck_info",
"get_callee_arg_types",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
656,
"d1;c52;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_2 = {
{
MR_FUNCTION,
"check_hlds.typecheck_info",
"check_hlds.typecheck_info",
"get_caller_arg_assign",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
666,
"d1;c53;?;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_3 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"lambda_typecheck_errors_m_669",
1,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
669,
"d1;c53;?;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0_1 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"actual_expected_types_to_pieces",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1546,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_var_4_0_1 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"type_stuff_to_actual_expected",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
856,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"arg_type_stuff_to_actual_expected",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
900,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"lambda_typecheck_errors_m_1663",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1663,
"d1;c5;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"lambda_typecheck_errors_m_946",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
946,
"d1;c15;?;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_2 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"lambda_typecheck_errors_m_965",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
965,
"d1;c15;e;?;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_3 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"lambda_typecheck_errors_m_968",
4,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
968,
"d1;c15;e;?;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_4 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"report_cons_error",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1003,
"d1;c16;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"constraints_to_pieces",
4,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1257,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_error_util",
"hlds.hlds_error_util",
"describe_one_pred_name",
4,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
442,
"d1;c4;d2;c2;d1;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_2 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"context_to_error_msg",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
468,
"d1;c4;d2;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_3 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"describe_cons_type_info_source",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
459,
"d1;c4;d2;c2;d2;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_4 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"describe_cons_type_info_source",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
459,
"d1;c4;d2;c2;d2;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_5 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"context_to_error_msg",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
468,
"d1;c4;d2;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_errors__constraints_to_pieces_4_0_1 = {
{
MR_FUNCTION,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_constraint_to_string",
3,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1290,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_errors__constraints_to_pieces_4_0_2 = {
{
MR_FUNCTION,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"wrap_quote",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1293,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck_errors",
"check_hlds.typecheck_errors",
"lambda_typecheck_errors_m_1748",
2,
0
},
"check_hlds.typecheck_errors",
"typecheck_errors.m",
1748,
"d1;c7;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module0)
	MR_init_entry1(check_hlds__typecheck_errors__typecheck_find_arities_3_0);
	MR_init_label4(check_hlds__typecheck_errors__typecheck_find_arities_3_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__typecheck_find_arities_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__typecheck_find_arities_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__typecheck_errors__typecheck_find_arities_3_0_i4);
MR_def_label(check_hlds__typecheck_errors__typecheck_find_arities_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__typecheck_errors__typecheck_find_arities_3_0_i5);
MR_def_label(check_hlds__typecheck_errors__typecheck_find_arities_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(check_hlds__typecheck_errors__typecheck_find_arities_3_0,
		check_hlds__typecheck_errors__typecheck_find_arities_3_0_i6);
MR_def_label(check_hlds__typecheck_errors__typecheck_find_arities_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(check_hlds__typecheck_errors__typecheck_find_arities_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_predid_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module1)
	MR_init_entry1(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0);
	MR_init_label2(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_predid_2_0,
		fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module2)
	MR_init_entry1(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0);
	MR_init_label5(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0,4,5,7,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0,
		fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module3)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,2,6,3,8,9,10,11,12)
	MR_init_label3(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,1,2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i3);
	}
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(list__map_3_0,
		fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,0,5);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,7);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i11);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,0,9);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i12);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(1), 4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module4)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_apply_instead_of_pred_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__report_apply_instead_of_pred_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,24);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__visible_module_2_0);
MR_decl_entry(parse_tree__prog_util__match_sym_name_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(solutions__solutions_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__parse_tree__error_util__list_to_pieces_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module5)
	MR_init_entry1(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,8,9,6,2,13,15,16,20)
	MR_init_label4(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,17,22,23,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i6);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__visible_module_2_0,
		fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_util__match_sym_name_2_0,
		fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,25);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck_errors__get_unimported_parent_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_r2;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i12);
	}
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i16);
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i17);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,27);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i20);
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i23);
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,29);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i22);
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0_i23);
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module6)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,2,5,4,7,8,3,11,10)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,13,14,9,17,16,19,20,15)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,23,22,25,26,21,30,27,35)
	MR_init_label6(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,34,31,37,43,41,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_r1, 4);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i5);
	}
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i4);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),4)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i3);
	}
	MR_r1 = MR_r2;
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i7);
	}
	MR_r2 = MR_r1;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	MR_r2 = MR_tempr1;
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("->", 2)) == 0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i8);
	}
	MR_r3 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i3);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,35);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i11);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),4)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i9);
	}
	MR_r1 = MR_r2;
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i13);
	}
	MR_r2 = MR_r1;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	MR_r2 = MR_tempr1;
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("else", 4)) == 0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i14);
	}
	MR_r3 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i9);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,37);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i17);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i16);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),4)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i15);
	}
	MR_r1 = MR_r2;
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i19);
	}
	MR_r2 = MR_r1;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	MR_r2 = MR_tempr1;
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("if", 2)) == 0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i20);
	}
	MR_r3 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i15);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,39);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i23);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i22);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),4)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i21);
	}
	MR_r1 = MR_r2;
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i25);
	}
	MR_r2 = MR_r1;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i21);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	MR_r2 = MR_tempr1;
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("then", 4)) == 0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i26);
	}
	MR_r3 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i21);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,45);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i27);
	}
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("apply", 5)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i27);
	}
	if (MR_INT_LT(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i27);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_apply_instead_of_pred_0_0,
		fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i30);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i31);
	}
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("impure", 6)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i35);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i34);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("semipure", 8)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i31);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,46);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,48);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i37);
	}
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("some", 4)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i37);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,51);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,39);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i41);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_ctfield(1, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i43);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i45);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0_i45);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0);
MR_decl_entry(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_pf_sym_5_0);
MR_decl_entry(hlds__pred_table__predicate_table_get_preds_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module7)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,2,3,5,6,8,10,11,12)
	MR_init_label7(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,4,14,17,18,19,23,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_pred_call_error_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_5_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i4);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i4);
	}
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i11);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_errors__typecheck_find_arities_3_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i12);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__check_hlds__typecheck_errors__report_error_pred_num_args_3_0);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__report_error_undef_pred_2_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i17);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(3) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i18);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(3) = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i18);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pf_sym_5_0,
		fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i19);
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i15);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i15);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,53);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,41);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,40);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(1), 4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,58);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,41);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,40);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(1), 4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_pred_call_error_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module8)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_unknown_event_call_error_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_unknown_event_call_error_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,59);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,45);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module9)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0);
	MR_init_label7(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0,2,3,10,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,1,60);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,61);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,5);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0_i11);
MR_def_label(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,7);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0_i12);
MR_def_label(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,59);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,47);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__report_event_args_mismatch_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module10)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_no_clauses_3_0);
	MR_init_label3(fn__check_hlds__typecheck_errors__report_no_clauses_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_no_clauses_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__typecheck_errors__report_no_clauses_3_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_no_clauses_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,48);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,59);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_no_clauses_3_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_no_clauses_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__typecheck_errors__report_no_clauses_3_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__report_no_clauses_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module11)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0);
	MR_init_label3(fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,49);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,59);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__report_no_clauses_stub_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 25;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module12)
	MR_init_entry1(fn__check_hlds__typecheck_errors__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck_errors.m", 18);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_overloaded_symbols_2_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(fn__assoc_list__map_values_only_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module13)
	MR_init_entry1(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,4,5,3,6,7,2,8,9)
	MR_init_label8(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,10,12,17,16,20,15,14,23)
	MR_init_label1(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,62);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,65);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i2);
	}
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,66);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,68);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	}
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_overloaded_symbols_2_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,69);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_np_call_localret_ent(fn__assoc_list__map_values_only_2_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i14);
	}
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__this_file_0_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i17);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("warning_too_much_overloading_to_msgs: no contexts", 49);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,73);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_sv(1), 1);
	MR_r4 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,74);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i23);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,79);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_sv(1), 1);
	MR_r4 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,74);
	}
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i23);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,81);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_sv(1), 1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,74);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i23);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_np_call_localret_ent(list__condense_2_0,
		fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0_i24);
MR_def_label(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module14)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_warning_too_much_overloading_1_0);
	MR_init_label1(fn__check_hlds__typecheck_errors__report_warning_too_much_overloading_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_warning_too_much_overloading_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,
		fn__check_hlds__typecheck_errors__report_warning_too_much_overloading_1_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_warning_too_much_overloading_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module15)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_error_too_much_overloading_1_0);
	MR_init_label1(fn__check_hlds__typecheck_errors__report_error_too_much_overloading_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_error_too_much_overloading_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,
		fn__check_hlds__typecheck_errors__report_error_too_much_overloading_1_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_too_much_overloading_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_get_typevarset_2_0);
MR_decl_entry(check_hlds__typecheck_info__type_assign_get_var_types_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module16)
	MR_init_entry1(check_hlds__typecheck_errors__get_type_stuff_3_0);
	MR_init_label8(check_hlds__typecheck_errors__get_type_stuff_3_0,4,5,6,7,8,10,9,12)
	MR_init_label3(check_hlds__typecheck_errors__get_type_stuff_3_0,14,13,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__get_type_stuff_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__get_type_stuff_3_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(check_hlds__typecheck_errors__get_type_stuff_3_0,
		check_hlds__typecheck_errors__get_type_stuff_3_0_i4);
MR_def_label(check_hlds__typecheck_errors__get_type_stuff_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		check_hlds__typecheck_errors__get_type_stuff_3_0_i5);
MR_def_label(check_hlds__typecheck_errors__get_type_stuff_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck_errors__get_type_stuff_3_0_i6);
MR_def_label(check_hlds__typecheck_errors__get_type_stuff_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		check_hlds__typecheck_errors__get_type_stuff_3_0_i7);
MR_def_label(check_hlds__typecheck_errors__get_type_stuff_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck_errors__get_type_stuff_3_0_i8);
MR_def_label(check_hlds__typecheck_errors__get_type_stuff_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,61);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck_errors__get_type_stuff_3_0_i10);
MR_def_label(check_hlds__typecheck_errors__get_type_stuff_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__get_type_stuff_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(check_hlds__typecheck_errors__get_type_stuff_3_0_i12);
	}
MR_def_label(check_hlds__typecheck_errors__get_type_stuff_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,8,2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
MR_def_label(check_hlds__typecheck_errors__get_type_stuff_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_stuff);
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__typecheck_errors__get_type_stuff_3_0_i14);
MR_def_label(check_hlds__typecheck_errors__get_type_stuff_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__get_type_stuff_3_0_i13);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__typecheck_errors__get_type_stuff_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__typecheck_errors__get_type_stuff_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__sort_and_remove_dups_2_0);
MR_decl_entry(fn__parse_tree__error_util__component_list_to_line_pieces_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module17)
	MR_init_entry1(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0);
	MR_init_label7(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,2,3,4,5,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__typecheck_errors__get_type_stuff_3_0,
		fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_stuff);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(3,0,59);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,83);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,84);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,87);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module18)
	MR_init_entry1(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0);
	MR_init_label2(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0_i2);
	}
	MR_r3 = MR_r2;
	MR_sv(1) = (MR_Word) MR_string_const("The partial type assignment was:", 32);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_sv(1) = (MR_Word) MR_string_const("The possible partial type assignments were:", 43);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,9,2);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,88);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_out__unify_context_to_pieces_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module19)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,2,3,4,5,6,7,8,9)
	MR_init_label6(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,10,11,12,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_r1, 4);
	MR_sv(6) = MR_ctfield(0, MR_r1, 5);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_varset_2_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_out__unify_context_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,0,62);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(9), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(9), 0) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,0,63);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(11), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(11), 0) = MR_r1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,0,10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i11);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i12);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_unif_var_var_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__search_name_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module20)
	MR_init_entry1(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0);
	MR_init_label3(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__search_name_3_0,
		fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0_i2);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,0,64);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,89);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module21)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_error_lambda_var_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_error_lambda_var_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0);
MR_decl_entry(fn__hlds__hlds_out__cons_id_to_string_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module22)
	MR_init_entry1(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0);
	MR_init_label5(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0,2,5,3,9,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0,
		fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0_i3);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,0,66);
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_sv(1), 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0_i9);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(3,0,67);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,0,68);
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__context_init_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module23)
	MR_init_entry1(fn__check_hlds__typecheck_errors__make_list_term_1_0);
	MR_init_label5(fn__check_hlds__typecheck_errors__make_list_term_1_0,4,5,6,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__make_list_term_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__make_list_term_1_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__check_hlds__typecheck_errors__make_list_term_1_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__make_list_term_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__check_hlds__typecheck_errors__make_list_term_1_0,
		fn__check_hlds__typecheck_errors__make_list_term_1_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__make_list_term_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__check_hlds__typecheck_errors__make_list_term_1_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__make_list_term_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__check_hlds__typecheck_errors__make_list_term_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__check_hlds__typecheck_errors__make_list_term_1_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__make_list_term_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0);
MR_decl_entry(parse_tree__prog_io_util__unparse_type_2_0);
MR_decl_entry(term__vars_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(varset__coerce_2_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module24)
	MR_init_entry1(fn__check_hlds__typecheck_errors__type_to_pieces_3_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,2,3,4,5,6,7,8,9)
	MR_init_label5(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,11,12,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__type_to_pieces_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_2_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,91);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,90);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_np_call_localret_ent(list__map_3_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(term__vars_2_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i11);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(varset__coerce_2_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__make_list_term_1_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i12);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,5,7);
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	}
	MR_np_call_localret_ent(varset__coerce_2_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0,
		fn__check_hlds__typecheck_errors__type_to_pieces_3_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module25)
	MR_init_entry1(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,47,5,8,9,6,4,12,13)
	MR_init_label4(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,16,19,20,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i47);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i12);
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tempr4 = MR_r2;
	MR_tfield(1, MR_r1, 0) = MR_ctfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_r1, 1) = MR_r4;
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,94);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i12);
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck_errors.m", 18);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("cons_type_to_pieces: invalid cons_id", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i12);
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i46);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i16);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,95);
	}
	MR_np_localcall_lab(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i19);
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,96);
	}
	MR_np_localcall_lab(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i19);
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0_i20);
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module26)
	MR_init_entry1(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,5,8,10,13,14,11,9,17)
	MR_init_label8(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,18,19,20,21,2,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r4 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i2);
	}
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i5);
	}
	MR_tempr1 = MR_r4;
	MR_r6 = MR_tempr1;
	MR_r4 = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r5 = MR_ctfield(0, MR_tempr1, 3);
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i8);
	}
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r1;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r5 = MR_ctfield(0, MR_tempr1, 3);
	}
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i10);
	}
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i17);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r4, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,94);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i17);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("typecheck_errors.m", 18);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("cons_type_to_pieces: invalid cons_id", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i17);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i18);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,97);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,98);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,99);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i19);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i20);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i21);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__cons_type_list_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i23);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,101);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,102);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,104);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i24);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0_i25);
MR_def_label(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module27)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,10,11,12,13,14,15,16,17)
	MR_init_label5(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,18,19,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_error_functor_type_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_varset_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(7) = MR_ctfield(0, MR_r1, 4);
	MR_sv(8) = MR_ctfield(0, MR_r1, 5);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_out__unify_context_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,1,105);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(1,1,107);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(1,1,96);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i11);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i12);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i16);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i17);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i18);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i19);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i20);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i21);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_type_6_0_i22);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_type_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_map_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module28)
	MR_init_entry1(check_hlds__typecheck_errors__find_mismatched_args_6_0);
	MR_init_label7(check_hlds__typecheck_errors__find_mismatched_args_6_0,4,5,6,7,9,11,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__find_mismatched_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__find_mismatched_args_6_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(check_hlds__typecheck_errors__find_mismatched_args_6_0,
		check_hlds__typecheck_errors__find_mismatched_args_6_0_i4);
MR_def_label(check_hlds__typecheck_errors__find_mismatched_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_errors__get_type_stuff_3_0,
		check_hlds__typecheck_errors__find_mismatched_args_6_0_i5);
MR_def_label(check_hlds__typecheck_errors__find_mismatched_args_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck_errors__substitute_types_check_match_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_stuff);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_mismatch);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		check_hlds__typecheck_errors__find_mismatched_args_6_0_i6);
MR_def_label(check_hlds__typecheck_errors__find_mismatched_args_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_mismatch);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		check_hlds__typecheck_errors__find_mismatched_args_6_0_i7);
MR_def_label(check_hlds__typecheck_errors__find_mismatched_args_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__find_mismatched_args_6_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__typecheck_errors__find_mismatched_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__find_mismatched_args_6_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__typecheck_errors__find_mismatched_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__typecheck_errors__find_mismatched_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module29)
	MR_init_entry1(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,73,4,7,9,15,10,17,18)
	MR_init_label8(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,20,22,19,24,25,26,27,28)
	MR_init_label5(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,31,32,30,33,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i73);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r7 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i4);
	}
	MR_r6 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r3 = MR_r5;
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r6 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr3, 1);
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i9);
	}
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__this_file_0_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("report_mismatched_args: more than one type mismatch", 51);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(3);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i10);
	}
	MR_r6 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i10);
	}
	MR_r5 = MR_ctfield(1, MR_tempr5, 1);
	if (MR_INT_LE(MR_r5,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i10);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i15);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,5,10);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r4;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i18);
	}
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r4;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,1,108);
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i18);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,5,10);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r4;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i18);
	}
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,5,12);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r4;
	}
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__search_name_3_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i20);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i19);
	}
	MR_r4 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,0,74);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i22);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,1,109);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,1,110);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,1,111);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,99);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i24);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,1,109);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,1,110);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,1,111);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,99);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i24);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i25);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i26);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i27);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i28);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i31);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i32);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i33);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,10);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i33);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0_i34);
MR_def_label(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__hlds__hlds_out__functor_cons_id_to_string_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_0;
MR_decl_entry(list__all_same_1_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0;
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_0;
MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module30)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,10,11,12,13,14,16,19,20)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,21,22,23,25,15,26,31,29)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,33,34,35,36,37,28,38,39)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,40,41,42,43,44,45,47,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_varset_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,1,61);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__length_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_out__unify_context_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(1,1,112);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,115);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,77);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i11);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i12);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,1,116);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, args_type_assign);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,116);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(list__all_same_1_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i16);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i15);
	}
	if (MR_LTAGS_TEST(MR_sv(12),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i15);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_ctfield(1, MR_sv(12), 0);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i19);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, args_type_assign);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i20);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__typecheck_errors__find_mismatched_args_6_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i21);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(15) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_functor_arg_types__669__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__this_file_0_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i22);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r3 = (MR_Word) MR_string_const("report_error_functor_arg_types: no mismatches", 45);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i23);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(13),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i15);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__mismatched_args_to_pieces_4_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i25);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i47);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i26);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(17) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(18));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i29);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_1,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i31);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 3);
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(18));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(16);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(17);
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i33);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(16);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(17);
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i28);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i34);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i35);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(14);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i36);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i37);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i38);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__functor_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i39);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_of_functor_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i40);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i41);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i42);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i43);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i44);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i45);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i47);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0_i48);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_functor_arg_types_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module31)
	MR_init_entry1(fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0);
	MR_init_label1(fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, actual_expected_types);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,84);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__call_arg_id_to_string_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module32)
	MR_init_entry1(fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0);
	MR_init_label2(fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0,15,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0_i15);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(hlds__hlds_out__unify_context_to_pieces_3_0);
MR_def_label(fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,0,79);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__call_arg_id_to_string_3_0,
		fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_called_predid_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module33)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_error_var_4_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_var_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_var_4_0,13,14,15,16,17,10,19,20)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_var_4_0,21,22,23,24,25,26,27,29)
	MR_init_label2(fn__check_hlds__typecheck_errors__report_error_var_4_0,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_error_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_called_predid_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_errors__get_type_stuff_3_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_varset_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_stuff);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, actual_expected_types);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, actual_expected_types);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,1,119);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_var_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_var_4_0_i10);
	}
	MR_r2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,1,109);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,1,122);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,123);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i16);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i17);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i27);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,1,124);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i19);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,1,125);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i20);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(1,1,126);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i21);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,128);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i22);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i23);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i24);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i25);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i26);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i27);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i29);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i30);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_var_4_0_i31);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_var_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module34)
	MR_init_entry1(fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0);
	MR_init_label2(fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0_i2);
	}
	MR_r3 = MR_r2;
	MR_sv(1) = (MR_Word) MR_string_const("The partial type assignment was:", 32);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_sv(1) = (MR_Word) MR_string_const("The possible partial type assignments were:", 43);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,9,2);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,88);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__index0_det_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module35)
	MR_init_entry1(check_hlds__typecheck_errors__get_arg_type_stuff_3_0);
	MR_init_label8(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,4,5,6,7,8,10,9,13)
	MR_init_label5(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,14,15,17,16,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__get_arg_type_stuff_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,
		check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i4);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i5);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i6);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i7);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i8);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,61);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i10);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i9);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(list__index0_det_3_0,
		check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i13);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,8,2);
	MR_r3 = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(list__index0_det_3_0,
		check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i13);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i14);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i15);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, arg_type_stuff);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i17);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__get_arg_type_stuff_3_0_i16);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module36)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,13,14,15,16,17,10,19,20)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,21,22,23,24,25,26,27,29)
	MR_init_label2(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_error_arg_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_called_predid_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__typecheck_errors__get_arg_type_stuff_3_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_varset_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, arg_type_stuff);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, actual_expected_types);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, actual_expected_types);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,1,119);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i10);
	}
	MR_r2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,1,109);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,1,122);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,123);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i16);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i17);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i27);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,1,124);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i19);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,1,125);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i20);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(1,1,126);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__actual_expected_types_list_to_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i21);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,128);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i22);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i23);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i24);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i25);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i26);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i27);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__args_type_assign_set_msg_to_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i29);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i30);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_arg_var_3_0_i31);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_arg_var_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module37)
	MR_init_entry1(check_hlds__typecheck_errors__language_builtin_functor_components_3_0);
	MR_init_label8(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,3,38,5,6,8,10,12,14)
	MR_init_label8(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,17,19,21,23,25,27,29,31)
	MR_init_label4(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,100,2,33,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__language_builtin_functor_components_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 31);
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(13,0))[(MR_Integer) MR_r4];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0))) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i5);
	}
	MR_r4 = (MR_COMMON(12,0))[(MR_Integer) MR_r4];
	if (MR_INT_GE(MR_r4,0))
		continue;
	}
	break; } /* end while */
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r4,
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i8) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i14) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i100) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i17) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i19) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i21) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i23) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i29) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i31) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38));
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i2);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i38);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,129);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,84);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,132);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,1,0);
	}
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("call", 4)) != 0)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,89);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,90);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,91);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,92);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,93);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,94);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,95);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,96);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,97);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,98);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,99);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,100);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,101);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,102);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i36);
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__typecheck_errors__language_builtin_functor_components_3_0_i36);
MR_def_label(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module38)
	MR_init_entry1(check_hlds__typecheck_errors__syntax_functor_components_3_0);
	MR_init_label8(check_hlds__typecheck_errors__syntax_functor_components_3_0,3,27,5,6,8,10,12,14)
	MR_init_label5(check_hlds__typecheck_errors__syntax_functor_components_3_0,16,18,20,22,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__syntax_functor_components_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 31);
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(14,0))[(MR_Integer) MR_r3];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0))) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__syntax_functor_components_3_0_i5);
	}
	MR_r3 = (MR_COMMON(12,1))[(MR_Integer) MR_r3];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i8) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i10) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i14) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i16) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i18) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i20) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i22) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27) MR_AND
		MR_LABEL_AP(check_hlds__typecheck_errors__syntax_functor_components_3_0_i24));
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,136);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,141);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,39);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,143);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,146);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,149);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,151);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,37);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,153);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__syntax_functor_components_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__syntax_functor_components_3_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,159);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module39)
	MR_init_entry1(fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0);
	MR_init_label4(fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0,8,9,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__error_right_num_args_to_pieces_1_0,
		fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,0,5);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,7);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,59);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,115);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,160);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0_i11);
MR_def_label(fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__typecheck_info_get_ctors_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module40)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,2,3,4,5,6,11,12,15)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,14,17,19,8,23,24,25,26)
	MR_init_label8(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,21,29,30,31,40,35,43,45)
	MR_init_label3(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,49,50,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_called_predid_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__call_context_to_pieces_4_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(5), 0) = MR_r1;
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i8);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__946__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_r1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__this_file_0_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i11);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = (MR_Word) MR_string_const("report_error_undef_cons: arity mismatch", 39);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i12);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_errors__language_builtin_functor_components_3_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i14);
	}
	MR_r4 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i19);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__typecheck_errors__syntax_functor_components_3_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i17);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i8);
	}
	MR_r4 = MR_sv(2);
	MR_r1 = MR_r2;
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i45);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__965__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__this_file_0_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i23);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const("report_error_undef_cons: arity mismatch", 39);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i24);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_ctors_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i25);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__968__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i26);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i21);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__wrong_arity_constructor_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i43);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_mode__strip_builtin_qualifier_from_cons_id_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i29);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,0,116);
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i30);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i31);
	}
	MR_tempr2 = MR_ctfield(1, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i40);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i35);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i35);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i35);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,14);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__maybe_report_missing_import_addendum_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i40);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i43);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i43);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_r1 = (MR_Integer) 1;
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i46);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__typecheck_errors__report_cons_error_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, cons_error);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,74);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i49);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_np_call_localret_ent(list__condense_2_0,
		fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0_i50);
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_error_undef_cons_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(parse_tree__prog_type__type_unify_5_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module41)
	MR_init_entry1(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,4,5,6,7,8,9,11,13)
	MR_init_label8(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,15,16,18,19,21,17,23,24)
	MR_init_label8(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,25,26,27,28,29,30,31,10)
	MR_init_label2(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,33,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,1,61);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i11);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i10);
	}
	MR_r4 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i16);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,1,90);
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i18);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i19);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i17);
	}
	MR_r1 = MR_sv(11);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i21);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i10);
	}
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i23);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i24);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i25);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,94);
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i26);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r3 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,1,162);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i27);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i28);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i29);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i30);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i31);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i33);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,
		fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0_i33);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module42)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,2,3,4,5,6,9,8,10)
	MR_init_label1(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,163);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_varset_2_0,
		fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,61);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__keys_2_0,
		fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__ambiguity_error_possibilities_to_pieces_4_0,
		fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__too_much_overloading_to_msgs_2_0,
		fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,118);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,1,165);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0_i11);
MR_def_label(fn__check_hlds__typecheck_errors__report_ambiguity_error_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module43)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0);
	MR_init_label6(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0,2,3,4,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,84);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__map_foldl_5_1,
		fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0_i4);
	}
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,166);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,59);
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,167);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,59);
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 4);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__report_unsatisfiable_constraints_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__error_util__add_quotes_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module44)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0);
	MR_init_label4(fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_r1, 4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_predid_2_0,
		fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,122);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,123);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__add_quotes_1_0,
		fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,59);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module45)
	MR_init_entry1(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,4,3,8,9,10,7,11,13)
	MR_init_label4(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(0, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i3);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__this_file_0_0,
		fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("describe_overloaded_symbol: no context", 38);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(5) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_ctfield(0, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,170);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,0,124);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_COMMON(15,2);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
	MR_tfield(0, MR_tempr5, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr5, 3) = MR_r1;
	MR_tfield(0, MR_tempr5, 4) = (MR_Integer) 0;
	MR_tempr6 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr6, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr6, 1);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,0,124);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,0,10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,84);
	MR_r3 = MR_tempr5;
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,59);
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,171);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_COMMON(6,7);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__typecheck_errors__context_to_error_msg_2_0);
	MR_tfield(0, MR_tempr5, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr5, 3) = MR_tempr2;
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i18);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_r5;
	MR_r4 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 0);
	MR_r6 = MR_tempr1;
	MR_tempr7 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr7, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr7, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,170);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,0,127);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_COMMON(6,8);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0);
	MR_tfield(0, MR_tempr5, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr5, 3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,0,127);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,84);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info_source);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,170);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,127);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(6,9);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr4, 3) = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,0,127);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,84);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info_source);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i16);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i17);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,171);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_COMMON(6,10);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__typecheck_errors__context_to_error_msg_2_0);
	MR_tfield(0, MR_tempr5, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr5, 3) = MR_tempr2;
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0_i18);
MR_def_label(fn__check_hlds__typecheck_errors__describe_overloaded_symbol_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module46)
	MR_init_entry1(fn__check_hlds__typecheck_errors__context_to_error_msg_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__context_to_error_msg_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module47)
	MR_init_entry1(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0);
	MR_init_label6(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0_i4) MR_AND
		MR_LABEL_AP(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0_i5) MR_AND
		MR_LABEL_AP(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0_i6) MR_AND
		MR_LABEL_AP(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0_i7));
MR_def_label(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_ctfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(3,0,128);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(3,0,129);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_ctfield(2, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,131);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(3,0,130);
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_ctfield(3, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,131);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(3,0,132);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(3,0,133);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__typecheck_errors__describe_cons_type_info_source_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module48)
	MR_init_entry1(check_hlds__typecheck_errors__substitute_types_check_match_3_0);
	MR_init_label8(check_hlds__typecheck_errors__substitute_types_check_match_3_0,2,3,8,9,11,7,24,4)
	MR_init_label2(check_hlds__typecheck_errors__substitute_types_check_match_3_0,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__substitute_types_check_match_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		check_hlds__typecheck_errors__substitute_types_check_match_3_0_i2);
MR_def_label(check_hlds__typecheck_errors__substitute_types_check_match_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		check_hlds__typecheck_errors__substitute_types_check_match_3_0_i3);
MR_def_label(check_hlds__typecheck_errors__substitute_types_check_match_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,90);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__typecheck_errors__substitute_types_check_match_3_0_i8);
MR_def_label(check_hlds__typecheck_errors__substitute_types_check_match_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		check_hlds__typecheck_errors__substitute_types_check_match_3_0_i9);
MR_def_label(check_hlds__typecheck_errors__substitute_types_check_match_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__substitute_types_check_match_3_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		check_hlds__typecheck_errors__substitute_types_check_match_3_0_i11);
MR_def_label(check_hlds__typecheck_errors__substitute_types_check_match_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__substitute_types_check_match_3_0_i24);
	}
MR_def_label(check_hlds__typecheck_errors__substitute_types_check_match_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__substitute_types_check_match_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__substitute_types_check_match_3_0_i4);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__substitute_types_check_match_3_0_i4);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("<any>", 5)) != 0)) {
		MR_GOTO_LAB(check_hlds__typecheck_errors__substitute_types_check_match_3_0_i4);
	}
	}
MR_def_label(check_hlds__typecheck_errors__substitute_types_check_match_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(check_hlds__typecheck_errors__substitute_types_check_match_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		check_hlds__typecheck_errors__substitute_types_check_match_3_0_i17);
MR_def_label(check_hlds__typecheck_errors__substitute_types_check_match_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		check_hlds__typecheck_errors__substitute_types_check_match_3_0_i18);
MR_def_label(check_hlds__typecheck_errors__substitute_types_check_match_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module49)
	MR_init_entry1(fn__check_hlds__typecheck_errors__report_cons_error_2_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__report_cons_error_2_0,4,5,33,9,8,13,12,14)
	MR_init_label7(fn__check_hlds__typecheck_errors__report_cons_error_2_0,7,15,16,17,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__report_cons_error_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__check_hlds__typecheck_errors__report_cons_error_2_0_i4) MR_AND
		MR_LABEL_AP(fn__check_hlds__typecheck_errors__report_cons_error_2_0_i5) MR_AND
		MR_LABEL_AP(fn__check_hlds__typecheck_errors__report_cons_error_2_0_i33) MR_AND
		MR_LABEL_AP(fn__check_hlds__typecheck_errors__report_cons_error_2_0_i20));
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_ctfield(1, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,176);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,135);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,5,15);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,134);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr4 = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,1,178);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,0,140);
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r3 = MR_ctfield(2, MR_tempr4, 3);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_cons_error_2_0_i8);
	}
	MR_tempr3 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 3);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__this_file_0_0,
		fn__check_hlds__typecheck_errors__report_cons_error_2_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("report_invalid_field_update: no type variables", 46);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__check_hlds__typecheck_errors__report_cons_error_2_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__report_cons_error_2_0_i12);
	}
	MR_tempr1 = MR_ctfield(2, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_ctfield(2, MR_r2, 2);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__typecheck_errors__report_cons_error_2_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,1,179);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,64);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		fn__check_hlds__typecheck_errors__report_cons_error_2_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_ctfield(2, MR_r2, 2);
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		fn__check_hlds__typecheck_errors__report_cons_error_2_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,180);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,144);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		fn__check_hlds__typecheck_errors__report_cons_error_2_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,0,146);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,0,147);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,0,148);
	MR_r2 = (MR_Word) MR_string_const("\'.", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_cons_error_2_0_i16);
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_cons_error_2_0_i17);
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_cons_error_2_0_i18);
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__report_cons_error_2_0_i19);
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__check_hlds__typecheck_errors__report_cons_error_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_ctfield(3, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,181);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,0,150);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,0,149);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_r1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr3;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_0);
MR_decl_entry(hlds__hlds_data__retrieve_prog_constraint_list_2_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_0);
MR_decl_entry(fn__parse_tree__error_util__component_list_to_pieces_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module50)
	MR_init_entry1(check_hlds__typecheck_errors__constraints_to_pieces_4_0);
	MR_init_label8(check_hlds__typecheck_errors__constraints_to_pieces_4_0,2,3,4,5,6,7,8,9)
	MR_init_label2(check_hlds__typecheck_errors__constraints_to_pieces_4_0,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__constraints_to_pieces_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_0,
		check_hlds__typecheck_errors__constraints_to_pieces_4_0_i2);
MR_def_label(check_hlds__typecheck_errors__constraints_to_pieces_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(hlds__hlds_data__retrieve_prog_constraint_list_2_0,
		check_hlds__typecheck_errors__constraints_to_pieces_4_0_i3);
MR_def_label(check_hlds__typecheck_errors__constraints_to_pieces_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		check_hlds__typecheck_errors__constraints_to_pieces_4_0_i4);
MR_def_label(check_hlds__typecheck_errors__constraints_to_pieces_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck_errors__constraints_to_pieces_4_0_i5);
MR_def_label(check_hlds__typecheck_errors__constraints_to_pieces_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0,
		check_hlds__typecheck_errors__constraints_to_pieces_4_0_i6);
MR_def_label(check_hlds__typecheck_errors__constraints_to_pieces_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		check_hlds__typecheck_errors__constraints_to_pieces_4_0_i7);
MR_def_label(check_hlds__typecheck_errors__constraints_to_pieces_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__typecheck_errors__constraints_to_pieces_4_0_i8);
MR_def_label(check_hlds__typecheck_errors__constraints_to_pieces_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__typecheck_errors__constraints_to_pieces_4_0_i9);
MR_def_label(check_hlds__typecheck_errors__constraints_to_pieces_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,13);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__typecheck_errors__constraints_to_pieces_4_0_i10);
MR_def_label(check_hlds__typecheck_errors__constraints_to_pieces_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_pieces_1_0,
		check_hlds__typecheck_errors__constraints_to_pieces_4_0_i11);
MR_def_label(check_hlds__typecheck_errors__constraints_to_pieces_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module51)
	MR_init_entry1(fn__check_hlds__typecheck_errors__wrap_quote_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__wrap_quote_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module52)
	MR_init_entry1(fn__check_hlds__typecheck_errors__string_to_pieces_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__string_to_pieces_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module53)
	MR_init_entry1(fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0);
	MR_init_label4(fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__type_stuff_to_actual_expected_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module54)
	MR_init_entry1(fn__check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_0);
	MR_init_label2(fn__check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_to_pieces_3_0,
		fn__check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__arg_type_stuff_to_actual_expected_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module55)
	MR_init_entry1(fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0);
	MR_init_label3(fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,1,183);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,96);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,184);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__actual_expected_types_to_pieces_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(fn__parse_tree__modules__get_ancestors_1_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module56)
	MR_init_entry1(check_hlds__typecheck_errors__get_unimported_parent_3_0);
	MR_init_label7(check_hlds__typecheck_errors__get_unimported_parent_3_0,1,2,4,5,10,11,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__get_unimported_parent_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.typecheck_errors.get_unimported_parent/3-0", 6,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_fv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__visible_module_2_0,
		check_hlds__typecheck_errors__get_unimported_parent_3_0_i1);
MR_def_label(check_hlds__typecheck_errors__get_unimported_parent_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(3);
	MR_np_call_localret_ent(parse_tree__prog_util__match_sym_name_2_0,
		check_hlds__typecheck_errors__get_unimported_parent_3_0_i2);
MR_def_label(check_hlds__typecheck_errors__get_unimported_parent_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(3);
	MR_np_call_localret_ent(fn__parse_tree__modules__get_ancestors_1_0,
		check_hlds__typecheck_errors__get_unimported_parent_3_0_i4);
MR_def_label(check_hlds__typecheck_errors__get_unimported_parent_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__typecheck_errors__get_unimported_parent_3_0_i5);
MR_def_label(check_hlds__typecheck_errors__get_unimported_parent_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_fv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__typecheck_errors__get_unimported_parent_3_0_i8);
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(2);
	MR_np_call_localret_ent(hlds__hlds_module__visible_module_2_0,
		check_hlds__typecheck_errors__get_unimported_parent_3_0_i10);
MR_def_label(check_hlds__typecheck_errors__get_unimported_parent_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__typecheck_errors__get_unimported_parent_3_0_i11);
MR_def_label(check_hlds__typecheck_errors__get_unimported_parent_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_fv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_fv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(5);
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(check_hlds__typecheck_errors__get_unimported_parent_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(3);
	MR_redoip_slot_word(MR_maxfr) = MR_fv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(5);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module57)
	MR_init_entry1(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0);
	MR_init_label8(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,2,3,4,5,6,7,8,9)
	MR_init_label5(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,10,12,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i2);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i3);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_2_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i4);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,91);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,90);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,14);
	MR_np_call_localret_ent(list__map_3_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i5);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(term__vars_2_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i6);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i7);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i8);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i9);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i10);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i12);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(varset__coerce_2_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__make_list_term_1_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i13);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,5,7);
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i14);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	}
	MR_np_call_localret_ent(varset__coerce_2_0,
		fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0_i15);
MR_def_label(fn__check_hlds__typecheck_errors__typestuff_to_typestr_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module58)
	MR_init_entry1(__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0);
	MR_init_label3(__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0_i4);
MR_def_label(__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_errors__actual_expected_types_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module59)
	MR_init_entry1(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0);
	MR_init_label4(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0_i5);
MR_def_label(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__typecheck_errors__actual_expected_types_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module60)
	MR_init_entry1(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0);
	MR_init_label5(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0_i4);
MR_def_label(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0_i6);
MR_def_label(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0_i8);
MR_def_label(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,90);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_errors__arg_type_stuff_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module61)
	MR_init_entry1(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0);
	MR_init_label6(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0_i5);
MR_def_label(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0_i9);
MR_def_label(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0_i13);
MR_def_label(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,90);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__typecheck_errors__arg_type_stuff_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_decl_entry(__Unify___hlds__hlds_data__hlds_type_defn_0_0);
MR_decl_entry(__Unify___hlds__hlds_data__hlds_ctor_field_defn_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module62)
	MR_init_entry1(__Unify___check_hlds__typecheck_errors__cons_error_0_0);
	MR_init_label8(__Unify___check_hlds__typecheck_errors__cons_error_0_0,6,7,9,13,15,17,19,23)
	MR_init_label2(__Unify___check_hlds__typecheck_errors__cons_error_0_0,39,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__typecheck_errors__cons_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i39);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i23));
MR_def_label(__Unify___check_hlds__typecheck_errors__cons_error_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___check_hlds__typecheck_errors__cons_error_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_ctor_0_0,
		__Unify___check_hlds__typecheck_errors__cons_error_0_0_i9);
MR_def_label(__Unify___check_hlds__typecheck_errors__cons_error_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___hlds__hlds_data__hlds_type_defn_0_0);
MR_def_label(__Unify___check_hlds__typecheck_errors__cons_error_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_r1, 2);
	MR_sv(3) = MR_ctfield(2, MR_r1, 3);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 3);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___check_hlds__typecheck_errors__cons_error_0_0_i15);
MR_def_label(__Unify___check_hlds__typecheck_errors__cons_error_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___hlds__hlds_data__hlds_ctor_field_defn_0_0,
		__Unify___check_hlds__typecheck_errors__cons_error_0_0_i17);
MR_def_label(__Unify___check_hlds__typecheck_errors__cons_error_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__typecheck_errors__cons_error_0_0_i19);
MR_def_label(__Unify___check_hlds__typecheck_errors__cons_error_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,90);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__typecheck_errors__cons_error_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__cons_error_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 0);
	MR_r2 = MR_ctfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_def_label(__Unify___check_hlds__typecheck_errors__cons_error_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_errors__cons_error_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__type_ctor_0_0);
MR_decl_entry(__Compare___hlds__hlds_data__hlds_type_defn_0_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___hlds__hlds_data__hlds_ctor_field_defn_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module63)
	MR_init_entry1(__Compare___check_hlds__typecheck_errors__cons_error_0_0);
	MR_init_label8(__Compare___check_hlds__typecheck_errors__cons_error_0_0,6,9,13,19,26,31,33,37)
	MR_init_label6(__Compare___check_hlds__typecheck_errors__cons_error_0_0,41,48,49,54,55,57)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__typecheck_errors__cons_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i13) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i26) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i49));
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i9) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i54) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i48) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i48));
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i48);
	}
	MR_tempr4 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(1, MR_tempr4, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__type_ctor_0_0,
		__Compare___check_hlds__typecheck_errors__cons_error_0_0_i19);
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i57);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___hlds__hlds_data__hlds_type_defn_0_0);
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i54) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i54) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i31) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i48));
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_sv(6) = MR_ctfield(2, MR_tempr3, 1);
	MR_sv(5) = MR_ctfield(2, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(2, MR_tempr3, 3);
	MR_tempr4 = MR_r3;
	MR_sv(3) = MR_ctfield(2, MR_tempr4, 3);
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___check_hlds__typecheck_errors__cons_error_0_0_i33);
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i57);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___hlds__hlds_data__hlds_ctor_field_defn_0_0,
		__Compare___check_hlds__typecheck_errors__cons_error_0_0_i37);
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i57);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__typecheck_errors__cons_error_0_0_i41);
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i57);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,90);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	if (MR_INT_EQ(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__cons_error_0_0_i55);
	}
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 0);
	MR_r2 = MR_ctfield(3, MR_r3, 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__type_ctor_0_0);
MR_def_label(__Compare___check_hlds__typecheck_errors__cons_error_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module64)
	MR_init_entry1(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0);
	MR_init_label3(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0_i8);
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
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 1);
	MR_r3 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__typecheck_errors__mismatch_info_0_0_i4);
MR_def_label(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_mismatch);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_errors__mismatch_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module65)
	MR_init_entry1(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0);
	MR_init_label5(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__typecheck_errors__mismatch_info_0_0_i5);
MR_def_label(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__typecheck_errors__mismatch_info_0_0_i9);
MR_def_label(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, type_mismatch);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__typecheck_errors__mismatch_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module66)
	MR_init_entry1(__Unify___check_hlds__typecheck_errors__type_mismatch_0_0);
	MR_init_label3(__Unify___check_hlds__typecheck_errors__type_mismatch_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__typecheck_errors__type_mismatch_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__type_mismatch_0_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__typecheck_errors__type_mismatch_0_0_i4);
MR_def_label(__Unify___check_hlds__typecheck_errors__type_mismatch_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__type_mismatch_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__typecheck_errors__type_mismatch_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_errors__type_mismatch_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module67)
	MR_init_entry1(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0);
	MR_init_label4(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__typecheck_errors__type_mismatch_0_0_i5);
MR_def_label(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__typecheck_errors__type_mismatch_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module68)
	MR_init_entry1(__Unify___check_hlds__typecheck_errors__type_stuff_0_0);
	MR_init_label5(__Unify___check_hlds__typecheck_errors__type_stuff_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__typecheck_errors__type_stuff_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__type_stuff_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___check_hlds__typecheck_errors__type_stuff_0_0_i4);
MR_def_label(__Unify___check_hlds__typecheck_errors__type_stuff_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__type_stuff_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__typecheck_errors__type_stuff_0_0_i6);
MR_def_label(__Unify___check_hlds__typecheck_errors__type_stuff_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__type_stuff_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,90);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__typecheck_errors__type_stuff_0_0_i8);
MR_def_label(__Unify___check_hlds__typecheck_errors__type_stuff_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_errors__type_stuff_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__typecheck_errors__type_stuff_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_errors__type_stuff_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module69)
	MR_init_entry1(__Compare___check_hlds__typecheck_errors__type_stuff_0_0);
	MR_init_label6(__Compare___check_hlds__typecheck_errors__type_stuff_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__typecheck_errors__type_stuff_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__type_stuff_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__type_stuff_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_errors__type_stuff_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_errors__type_stuff_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___check_hlds__typecheck_errors__type_stuff_0_0_i5);
MR_def_label(__Compare___check_hlds__typecheck_errors__type_stuff_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__type_stuff_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__typecheck_errors__type_stuff_0_0_i9);
MR_def_label(__Compare___check_hlds__typecheck_errors__type_stuff_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__type_stuff_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,90);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__typecheck_errors__type_stuff_0_0_i13);
MR_def_label(__Compare___check_hlds__typecheck_errors__type_stuff_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_errors__type_stuff_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,90);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__typecheck_errors__type_stuff_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__is_not_empty_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module70)
	MR_init_entry1(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_functor_arg_types__669__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_functor_arg_types__669__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_errors, mismatch_info);
	MR_np_tailcall_ent(list__is_not_empty_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module71)
	MR_init_entry1(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__946__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__946__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module72)
	MR_init_entry1(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__965__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__965__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
MR_decl_entry(map__member_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module73)
	MR_init_entry1(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__968__1_4_0);
	MR_init_label2(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__968__1_4_0,1,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__968__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.typecheck_errors.IntroducedFrom__pred__report_error_undef_cons__968__1/4-0", 3,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,185);
	MR_np_call_localret_ent(map__member_3_0,
		check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__968__1_4_0_i1);
MR_def_label(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__968__1_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_fv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__968__1_4_0_i3);
MR_def_label(check_hlds__typecheck_errors__IntroducedFrom__pred__report_error_undef_cons__968__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_fv(3) == MR_fv(1))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(3);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__sort_and_remove_dups_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module74)
	MR_init_entry1(fn__check_hlds__typecheck_errors__IntroducedFrom__func__too_much_overloading_to_msgs__390__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_errors__IntroducedFrom__func__too_much_overloading_to_msgs__390__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_np_tailcall_ent(fn__list__sort_and_remove_dups_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__coerce_var_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module75)
	MR_init_entry1(check_hlds__typecheck_errors__IntroducedFrom__pred__type_to_pieces__1496__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__IntroducedFrom__pred__type_to_pieces__1496__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_tailcall_ent(term__coerce_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module76)
	MR_init_entry1(check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__1663__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__IntroducedFrom__pred__error_num_args_to_pieces__1663__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(parse_tree__prog_util__adjust_func_arity_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module77)
	MR_init_entry1(check_hlds__typecheck_errors__IntroducedFrom__pred__typestuff_to_typestr__1748__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_errors__IntroducedFrom__pred__typestuff_to_typestr__1748__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_tailcall_ent(term__coerce_var_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(fn__string__join_list_2_0);
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_errors_module78)
	MR_init_entry1(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0);
	MR_init_label8(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,10,11,14,16,17,18,19,20)
	MR_init_label8(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,21,13,22,23,24,25,27,28)
	MR_init_label8(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,29,30,31,32,33,34,35,36)
	MR_init_label3(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,37,38,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_ctfield(0, MR_r1, 4);
	MR_sv(7) = MR_ctfield(0, MR_r1, 5);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_varset_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i2);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__in_clause_for_pieces_1_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i3);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_out__unify_context_to_pieces_3_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i4);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,1,105);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i5);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i6);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i7);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i8);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i9);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,96);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i10);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i11);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i13);
	}
	MR_sv(3) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,1,186);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,0,73);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,0,155);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i14);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,188);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i16);
	}
	MR_sv(2) = MR_tempr4;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,189);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,190);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i33);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,61);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i17);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_string_const(", _", 3);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i18);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i19);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i20);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("pred(_", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i21);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,190);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i33);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,1,186);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,1,61);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i22);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,0,73);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(3,0,159);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i23);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(3,0,8);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(1,5,16);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i24);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,187);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i25);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,191);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,190);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i33);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(list__length_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i28);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_string_const(", _", 3);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i29);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i30);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(") = _", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i31);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("func(_", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i32);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,190);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i33);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i34);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_assign_set_msg_to_pieces_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i35);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i36);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i37);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i38);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0_i39);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_112_111_114_116_95_101_114_114_111_114_95_108_97_109_98_100_97_95_118_97_114_95_95_91_51_93_95_48_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_errors_module79)
	MR_init_entry1(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0);
	MR_init_label6(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0,4,5,6,7,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,96);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__argument_name_to_pieces_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0_i4);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_errors__type_of_var_to_pieces_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0_i5);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0_i6);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0_i7);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0_i8);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_99_104_101_99_107_95_101_114_114_111_114_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_115_95_111_102_95_118_97_114_115_95_116_111_95_112_105_101_99_101_115_95_95_91_51_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__typecheck_errors_maybe_bunch_0(void)
{
	check_hlds__typecheck_errors_module0();
	check_hlds__typecheck_errors_module1();
	check_hlds__typecheck_errors_module2();
	check_hlds__typecheck_errors_module3();
	check_hlds__typecheck_errors_module4();
	check_hlds__typecheck_errors_module5();
	check_hlds__typecheck_errors_module6();
	check_hlds__typecheck_errors_module7();
	check_hlds__typecheck_errors_module8();
	check_hlds__typecheck_errors_module9();
	check_hlds__typecheck_errors_module10();
	check_hlds__typecheck_errors_module11();
	check_hlds__typecheck_errors_module12();
	check_hlds__typecheck_errors_module13();
	check_hlds__typecheck_errors_module14();
	check_hlds__typecheck_errors_module15();
	check_hlds__typecheck_errors_module16();
	check_hlds__typecheck_errors_module17();
	check_hlds__typecheck_errors_module18();
	check_hlds__typecheck_errors_module19();
	check_hlds__typecheck_errors_module20();
	check_hlds__typecheck_errors_module21();
	check_hlds__typecheck_errors_module22();
	check_hlds__typecheck_errors_module23();
	check_hlds__typecheck_errors_module24();
	check_hlds__typecheck_errors_module25();
	check_hlds__typecheck_errors_module26();
	check_hlds__typecheck_errors_module27();
	check_hlds__typecheck_errors_module28();
	check_hlds__typecheck_errors_module29();
	check_hlds__typecheck_errors_module30();
	check_hlds__typecheck_errors_module31();
	check_hlds__typecheck_errors_module32();
	check_hlds__typecheck_errors_module33();
	check_hlds__typecheck_errors_module34();
	check_hlds__typecheck_errors_module35();
	check_hlds__typecheck_errors_module36();
	check_hlds__typecheck_errors_module37();
	check_hlds__typecheck_errors_module38();
	check_hlds__typecheck_errors_module39();
}

static void mercury__check_hlds__typecheck_errors_maybe_bunch_1(void)
{
	check_hlds__typecheck_errors_module40();
	check_hlds__typecheck_errors_module41();
	check_hlds__typecheck_errors_module42();
	check_hlds__typecheck_errors_module43();
	check_hlds__typecheck_errors_module44();
	check_hlds__typecheck_errors_module45();
	check_hlds__typecheck_errors_module46();
	check_hlds__typecheck_errors_module47();
	check_hlds__typecheck_errors_module48();
	check_hlds__typecheck_errors_module49();
	check_hlds__typecheck_errors_module50();
	check_hlds__typecheck_errors_module51();
	check_hlds__typecheck_errors_module52();
	check_hlds__typecheck_errors_module53();
	check_hlds__typecheck_errors_module54();
	check_hlds__typecheck_errors_module55();
	check_hlds__typecheck_errors_module56();
	check_hlds__typecheck_errors_module57();
	check_hlds__typecheck_errors_module58();
	check_hlds__typecheck_errors_module59();
	check_hlds__typecheck_errors_module60();
	check_hlds__typecheck_errors_module61();
	check_hlds__typecheck_errors_module62();
	check_hlds__typecheck_errors_module63();
	check_hlds__typecheck_errors_module64();
	check_hlds__typecheck_errors_module65();
	check_hlds__typecheck_errors_module66();
	check_hlds__typecheck_errors_module67();
	check_hlds__typecheck_errors_module68();
	check_hlds__typecheck_errors_module69();
	check_hlds__typecheck_errors_module70();
	check_hlds__typecheck_errors_module71();
	check_hlds__typecheck_errors_module72();
	check_hlds__typecheck_errors_module73();
	check_hlds__typecheck_errors_module74();
	check_hlds__typecheck_errors_module75();
	check_hlds__typecheck_errors_module76();
	check_hlds__typecheck_errors_module77();
	check_hlds__typecheck_errors_module78();
	check_hlds__typecheck_errors_module79();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__typecheck_errors__init(void);
void mercury__check_hlds__typecheck_errors__init_type_tables(void);
void mercury__check_hlds__typecheck_errors__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__typecheck_errors__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__typecheck_errors__init_complexity_procs(void);
#endif

void mercury__check_hlds__typecheck_errors__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__typecheck_errors_maybe_bunch_0();
	mercury__check_hlds__typecheck_errors_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_stuff_0,
		check_hlds__typecheck_errors__type_stuff_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0,
		check_hlds__typecheck_errors__type_mismatch_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0,
		check_hlds__typecheck_errors__mismatch_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_errors__type_ctor_info_cons_error_0,
		check_hlds__typecheck_errors__cons_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0,
		check_hlds__typecheck_errors__arg_type_stuff_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0,
		check_hlds__typecheck_errors__actual_expected_types_0_0);
	mercury__check_hlds__typecheck_errors__init_debugger();
}

void mercury__check_hlds__typecheck_errors__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_stuff_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_errors__type_ctor_info_type_mismatch_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_errors__type_ctor_info_mismatch_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_errors__type_ctor_info_cons_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_errors__type_ctor_info_arg_type_stuff_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_errors__type_ctor_info_actual_expected_types_0);
	}
}


void mercury__check_hlds__typecheck_errors__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__typecheck_errors__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__typecheck_errors);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__typecheck_errors__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
