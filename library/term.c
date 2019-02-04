/*
** Automatically generated from `term.m'
** by the Mercury compiler,
** version rotd-2012-02-09, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__term__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 250 "array.int"
#include "array.mh"

#line 28 "term.c"
#line 151 "bitmap.int"
#include "bitmap.mh"

#line 32 "term.c"
#line 70 "version_array.int"
#include "version_array.mh"

#line 36 "term.c"
#line 140 "io.int2"
#include "io.mh"

#line 40 "term.c"
#line 150 "io.int2"
#include "time.mh"

#line 44 "term.c"
#line 151 "io.int2"
#include "string.mh"

#line 48 "term.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 52 "term.c"
#line 58 "array.opt"
#include "store.mh"

#line 56 "term.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "term.c"
#line 157 "io.opt"
#include "dir.mh"

#line 64 "term.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 68 "term.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "term.c"
#line 4 "char.opt"
#include "char.mh"

#line 76 "term.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "term.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "term.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 88 "term.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 92 "term.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 96 "term.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 100 "term.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "term.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "term.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 112 "term.c"
#line 113 "term.c"
#include "term.mh"

#line 116 "term.c"
#line 117 "term.c"
#ifndef TERM_DECL_GUARD
#define TERM_DECL_GUARD

#line 121 "term.c"
#line 122 "term.c"

#endif
#line 125 "term.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_String f1;
	MR_Integer f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_term__type_ctor_info_const_0,
	mercury_data_term__type_ctor_info_context_0,
	mercury_data_term__type_ctor_info_generic_0,
	mercury_data_term__type_ctor_info_substitution_1,
	mercury_data_term__type_ctor_info_substitution_0,
	mercury_data_term__type_ctor_info_term_1,
	mercury_data_term__type_ctor_info_term_0,
	mercury_data_term__type_ctor_info_term_to_type_arg_context_0,
	mercury_data_term__type_ctor_info_term_to_type_context_0,
	mercury_data_term__type_ctor_info_term_to_type_error_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_term__type_ctor_info_term_to_type_result_2,
	mercury_data_term__type_ctor_info_term_to_type_result_1,
	mercury_data_term__type_ctor_info_var_1,
	mercury_data_term__type_ctor_info_var_0,
	mercury_data_term__type_ctor_info_var_supply_1;
MR_decl_label2(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0, 3,1)
MR_decl_label3(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0, 17,4,5)
MR_decl_label10(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0, 22,25,30,3,41,43,46,48,49,51)
MR_decl_label10(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0, 52,33,61,56,67,73,79,89,65,101)
MR_decl_label8(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0, 103,106,108,109,111,112,114,1)
MR_decl_label2(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0, 2,3)
MR_decl_label5(term__apply_rec_substitution_3_0, 22,4,3,9,6)
MR_decl_label3(term__apply_rec_substitution_to_list_3_0, 17,4,5)
MR_decl_label4(term__apply_substitution_3_0, 4,3,9,6)
MR_decl_label3(term__apply_substitution_to_list_3_0, 17,4,5)
MR_decl_label4(term__apply_variable_renaming_3_0, 4,3,8,6)
MR_decl_label3(term__apply_variable_renaming_to_list_3_0, 17,4,5)
MR_decl_label2(term__apply_variable_renaming_to_var_3_0, 4,2)
MR_decl_label4(term__apply_variable_renaming_to_vars_3_0, 27,6,4,9)
MR_decl_label2(term__contains_var_2_0, 10,23)
MR_decl_label1(term__contains_var_2_1, 2)
MR_decl_label4(term__contains_var_list_2_0, 19,6,3,1)
MR_decl_label4(term__contains_var_list_2_1, 9,6,3,2)
MR_decl_label9(term__det_term_to_type_2_0, 3,2,10,8,6,13,14,15,16)
MR_decl_label1(term__is_ground_1_0, 1)
MR_decl_label4(term__is_ground_in_bindings_2_0, 22,3,8,1)
MR_decl_label4(term__is_ground_in_bindings_list_2_0, 17,4,2,1)
MR_decl_label4(term__is_ground_list_1_0, 22,5,2,1)
MR_decl_label1(term__list_subsumes_3_0, 2)
MR_decl_label7(term__occurs_3_0, 36,19,3,9,8,13,1)
MR_decl_label4(term__occurs_list_3_0, 19,5,9,1)
MR_decl_label6(term__relabel_variable_4_0, 4,3,9,8,10,6)
MR_decl_label3(term__relabel_variables_4_0, 17,4,5)
MR_decl_label5(term__substitute_4_0, 4,3,9,8,6)
MR_decl_label2(term__substitute_corresponding_4_0, 3,2)
MR_decl_label4(term__substitute_corresponding_2_4_0, 25,3,8,1)
MR_decl_label2(term__substitute_corresponding_list_4_0, 3,2)
MR_decl_label3(term__substitute_list_4_0, 17,4,5)
MR_decl_label7(term__term_list_to_univ_list_7_0, 60,9,11,12,2,61,1)
MR_decl_label3(term__term_list_to_var_list_2_0, 31,5,1)
MR_decl_label2(term__term_to_type_2_0, 2,1)
MR_decl_label3(term__try_term_to_type_2_0, 2,5,3)
MR_decl_label10(term__try_term_to_univ_2_4_0, 5,4,11,14,16,19,21,20,8,26)
MR_decl_label1(term__try_term_to_univ_2_4_0, 3)
MR_decl_label1(term__type_to_term_2_0, 2)
MR_decl_label10(term__unify_term_4_0, 192,6,5,13,10,19,3,30,27,36)
MR_decl_label10(term__unify_term_4_0, 26,45,49,47,53,57,54,55,61,42)
MR_decl_label10(term__unify_term_4_0, 69,71,75,72,73,79,66,85,84,89)
MR_decl_label1(term__unify_term_4_0, 1)
MR_decl_label8(term__unify_term_bound_var_5_0, 57,5,2,12,11,16,22,1)
MR_decl_label10(term__unify_term_dont_bind_5_0, 244,7,8,9,5,16,13,22,26,3)
MR_decl_label10(term__unify_term_dont_bind_5_0, 37,34,43,47,33,55,53,61,59,68)
MR_decl_label10(term__unify_term_dont_bind_5_0, 72,70,76,80,77,78,84,65,92,94)
MR_decl_label9(term__unify_term_dont_bind_5_0, 98,95,96,102,89,108,107,112,1)
MR_decl_label4(term__unify_term_list_4_0, 28,3,6,1)
MR_decl_label4(term__unify_term_list_dont_bind_5_0, 28,3,6,1)
MR_decl_label3(term__univ_list_to_term_list_2_0, 17,4,5)
MR_decl_label8(term__univ_to_term_2_0, 7,8,4,12,11,14,15,16)
MR_decl_label10(term__univ_to_term_special_case_6_0, 6,9,10,12,13,3,23,26,27,28)
MR_decl_label10(term__univ_to_term_special_case_6_0, 18,34,35,31,42,41,46,45,50,49)
MR_decl_label10(term__univ_to_term_special_case_6_0, 54,55,38,62,63,58,71,74,75,76)
MR_decl_label1(term__univ_to_term_special_case_6_0, 1)
MR_decl_label3(term__var_list_to_term_list_2_0, 7,8,2)
MR_decl_label1(term__vars_2_0, 3)
MR_decl_label1(term__vars_2_3_0, 3)
MR_decl_label4(term__vars_2_list_3_0, 16,3,4,6)
MR_decl_label2(fn__term__apply_variable_renaming_to_var_2_0, 4,2)
MR_decl_label1(fn__term__get_term_context_1_0, 3)
MR_decl_label2(fn__term__term_list_to_var_list_1_0, 3,2)
MR_decl_label1(fn__term__type_to_term_1_0, 2)
MR_decl_label1(fn__term__vars_1_0, 3)
MR_decl_label1(fn__term__vars_2_2_0, 3)
MR_decl_label4(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0, 25,4,27,2)
MR_decl_label6(__Unify___term__const_0_0, 5,7,9,27,11,1)
MR_decl_label2(__Unify___term__context_0_0, 4,1)
MR_decl_label6(__Unify___term__term_1_0, 7,10,26,5,58,1)
MR_decl_label3(__Unify___term__term_to_type_arg_context_0_0, 4,8,1)
MR_decl_label8(__Unify___term__term_to_type_error_1_0, 8,7,27,5,13,15,17,1)
MR_decl_label3(__Unify___term__term_to_type_result_2_0, 16,5,1)
MR_decl_label1(__Unify___term__var_0_0, 3)
MR_decl_label1(__Unify___term__var_1_0, 4)
MR_decl_label1(__Unify___term__var_supply_1_0, 4)
MR_decl_label10(__Compare___term__const_0_0, 8,7,13,14,5,18,20,19,24,16)
MR_decl_label10(__Compare___term__const_0_0, 28,29,31,78,30,26,39,40,41,43)
MR_decl_label9(__Compare___term__const_0_0, 86,37,48,49,50,51,91,52,92)
MR_decl_label7(__Compare___term__context_0_0, 6,7,10,13,24,14,18)
MR_decl_label10(__Compare___term__term_1_0, 3,2,9,14,7,5,21,24,25,27)
MR_decl_label1(__Compare___term__term_1_0, 76)
MR_decl_label7(__Compare___term__term_to_type_arg_context_0_0, 3,2,5,10,11,13,39)
MR_decl_label10(__Compare___term__term_to_type_error_1_0, 3,2,10,11,13,7,5,19,21,25)
MR_decl_label2(__Compare___term__term_to_type_error_1_0, 29,84)
MR_decl_label5(__Compare___term__term_to_type_result_2_0, 3,2,7,5,10)
MR_decl_label2(__Compare___term__var_0_0, 2,3)
MR_decl_label3(__Compare___term__var_1_0, 4,11,5)
MR_decl_label3(__Compare___term__var_supply_1_0, 4,11,5)
MR_def_extern_entry(fn__term__get_term_context_1_0)
MR_decl_static(term__try_term_to_univ_2_4_0)
MR_decl_static(term__term_list_to_univ_list_7_0)
MR_def_extern_entry(term__try_term_to_type_2_0)
MR_def_extern_entry(fn__term__try_term_to_type_1_0)
MR_def_extern_entry(term__term_to_type_2_0)
MR_def_extern_entry(term__is_ground_1_0)
MR_def_extern_entry(term__is_ground_list_1_0)
MR_def_extern_entry(term__det_term_to_type_2_0)
MR_def_extern_entry(fn__term__det_term_to_type_1_0)
MR_def_extern_entry(term__context_init_1_0)
MR_def_extern_entry(term__type_to_term_2_0)
MR_def_extern_entry(term__univ_to_term_2_0)
MR_decl_static(term__univ_to_term_special_case_6_0)
MR_decl_static(term__univ_list_to_term_list_2_0)
MR_def_extern_entry(fn__term__type_to_term_1_0)
MR_def_extern_entry(fn__term__univ_to_term_1_0)
MR_def_extern_entry(term__vars_2_3_0)
MR_def_extern_entry(term__vars_2_list_3_0)
MR_def_extern_entry(term__vars_2_0)
MR_def_extern_entry(fn__term__vars_1_0)
MR_def_extern_entry(fn__term__vars_2_2_0)
MR_def_extern_entry(term__vars_list_2_0)
MR_def_extern_entry(fn__term__vars_list_1_0)
MR_def_extern_entry(term__contains_var_2_0)
MR_def_extern_entry(term__contains_var_2_1)
MR_def_extern_entry(term__contains_var_list_2_0)
MR_def_extern_entry(term__contains_var_list_2_1)
MR_def_extern_entry(term__apply_rec_substitution_3_0)
MR_def_extern_entry(term__apply_rec_substitution_to_list_3_0)
MR_def_extern_entry(term__occurs_3_0)
MR_def_extern_entry(term__occurs_list_3_0)
MR_def_extern_entry(term__unify_term_4_0)
MR_def_extern_entry(term__unify_term_list_4_0)
MR_def_extern_entry(fn__term__context_init_0_0)
MR_decl_static(term__unify_term_bound_var_5_0)
MR_def_extern_entry(term__unify_term_dont_bind_5_0)
MR_def_extern_entry(term__unify_term_list_dont_bind_5_0)
MR_def_extern_entry(term__list_subsumes_3_0)
MR_def_extern_entry(term__substitute_4_0)
MR_def_extern_entry(term__substitute_list_4_0)
MR_def_extern_entry(fn__term__substitute_3_0)
MR_def_extern_entry(fn__term__substitute_list_3_0)
MR_def_extern_entry(term__apply_substitution_3_0)
MR_def_extern_entry(term__apply_substitution_to_list_3_0)
MR_def_extern_entry(term__substitute_corresponding_2_4_0)
MR_def_extern_entry(term__substitute_corresponding_4_0)
MR_def_extern_entry(fn__term__substitute_corresponding_3_0)
MR_def_extern_entry(term__substitute_corresponding_list_4_0)
MR_def_extern_entry(fn__term__substitute_corresponding_list_3_0)
MR_def_extern_entry(fn__term__apply_rec_substitution_2_0)
MR_def_extern_entry(fn__term__apply_rec_substitution_to_list_2_0)
MR_def_extern_entry(fn__term__apply_substitution_2_0)
MR_def_extern_entry(fn__term__apply_substitution_to_list_2_0)
MR_def_extern_entry(term__relabel_variable_4_0)
MR_def_extern_entry(term__relabel_variables_4_0)
MR_def_extern_entry(fn__term__relabel_variable_3_0)
MR_def_extern_entry(fn__term__relabel_variables_3_0)
MR_def_extern_entry(term__apply_variable_renaming_to_var_3_0)
MR_def_extern_entry(term__apply_variable_renaming_3_0)
MR_def_extern_entry(term__apply_variable_renaming_to_list_3_0)
MR_def_extern_entry(fn__term__apply_variable_renaming_2_0)
MR_def_extern_entry(fn__term__apply_variable_renaming_to_list_2_0)
MR_def_extern_entry(fn__term__apply_variable_renaming_to_var_2_0)
MR_def_extern_entry(term__apply_variable_renaming_to_vars_3_0)
MR_def_extern_entry(fn__term__apply_variable_renaming_to_vars_2_0)
MR_def_extern_entry(term__is_ground_in_bindings_2_0)
MR_decl_static(term__is_ground_in_bindings_list_2_0)
MR_def_extern_entry(term__init_var_supply_1_0)
MR_def_extern_entry(term__init_var_supply_1_1)
MR_def_extern_entry(fn__term__init_var_supply_0_0)
MR_def_extern_entry(term__create_var_3_0)
MR_def_extern_entry(fn__term__var_id_1_0)
MR_def_extern_entry(term__var_to_int_2_0)
MR_def_extern_entry(fn__term__var_to_int_1_0)
MR_def_extern_entry(term__context_line_2_0)
MR_def_extern_entry(fn__term__context_line_1_0)
MR_def_extern_entry(term__context_file_2_0)
MR_def_extern_entry(fn__term__context_file_1_0)
MR_def_extern_entry(term__context_init_3_0)
MR_def_extern_entry(fn__term__context_init_2_0)
MR_def_extern_entry(term__term_list_to_var_list_2_0)
MR_def_extern_entry(fn__term__term_list_to_var_list_1_0)
MR_def_extern_entry(term__var_list_to_term_list_2_0)
MR_def_extern_entry(fn__term__var_list_to_term_list_1_0)
MR_def_extern_entry(term__generic_term_1_0)
MR_def_extern_entry(term__coerce_2_0)
MR_def_extern_entry(fn__term__coerce_1_0)
MR_def_extern_entry(term__coerce_var_2_0)
MR_def_extern_entry(fn__term__coerce_var_1_0)
MR_def_extern_entry(term__coerce_var_supply_2_0)
MR_def_extern_entry(fn__term__coerce_var_supply_1_0)
MR_def_extern_entry(fn__term__var_supply_max_var_1_0)
MR_def_extern_entry(fn__term__var_supply_num_allocated_1_0)
MR_def_extern_entry(__Unify___term__const_0_0)
MR_def_extern_entry(__Compare___term__const_0_0)
MR_def_extern_entry(__Unify___term__context_0_0)
MR_def_extern_entry(__Compare___term__context_0_0)
MR_def_extern_entry(__Unify___term__generic_0_0)
MR_def_extern_entry(__Compare___term__generic_0_0)
MR_def_extern_entry(__Unify___term__substitution_0_0)
MR_def_extern_entry(__Compare___term__substitution_0_0)
MR_def_extern_entry(__Unify___term__substitution_1_0)
MR_def_extern_entry(__Compare___term__substitution_1_0)
MR_def_extern_entry(__Unify___term__term_0_0)
MR_def_extern_entry(__Compare___term__term_0_0)
MR_def_extern_entry(__Unify___term__term_1_0)
MR_def_extern_entry(__Compare___term__term_1_0)
MR_def_extern_entry(__Unify___term__term_to_type_arg_context_0_0)
MR_def_extern_entry(__Compare___term__term_to_type_arg_context_0_0)
MR_def_extern_entry(__Unify___term__term_to_type_context_0_0)
MR_def_extern_entry(__Compare___term__term_to_type_context_0_0)
MR_def_extern_entry(__Unify___term__term_to_type_error_1_0)
MR_def_extern_entry(__Compare___term__term_to_type_error_1_0)
MR_def_extern_entry(__Unify___term__term_to_type_result_1_0)
MR_def_extern_entry(__Compare___term__term_to_type_result_1_0)
MR_def_extern_entry(__Unify___term__term_to_type_result_2_0)
MR_def_extern_entry(__Compare___term__term_to_type_result_2_0)
MR_def_extern_entry(__Unify___term__var_0_0)
MR_def_extern_entry(__Compare___term__var_0_0)
MR_def_extern_entry(__Unify___term__var_1_0)
MR_def_extern_entry(__Compare___term__var_1_0)
MR_def_extern_entry(__Unify___term__var_supply_1_0)
MR_def_extern_entry(__Compare___term__var_supply_1_0)
MR_def_extern_entry(fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_0)
MR_def_extern_entry(fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_0)
MR_def_extern_entry(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0)
MR_decl_static(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0)
MR_def_extern_entry(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(fn__f_116_101_114_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0)
MR_decl_static(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0)
MR_decl_static(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_string_const("", 0),
0
},
};

static const struct mercury_type_2 mercury_common_2[5] =
{
{
MR_string_const("univ", 4)
},
{
MR_string_const(":", 1)
},
{
MR_string_const("array", 5)
},
{
MR_string_const("type_info", 9)
},
{
MR_string_const("version_array", 13)
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(term, generic)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_term__field_types_const_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_const_0_0 = {
	"atom",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_const_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_term__field_types_const_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_const_0_1 = {
	"integer",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_const_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term__field_types_const_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_const_0_2 = {
	"string",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_const_0_2,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_term__field_types_const_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_const_0_3 = {
	"float",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_const_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term__field_types_const_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_const_0_4 = {
	"implementation_defined",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_const_0_4,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_const_0_0[] = {
	&mercury_data_term__du_functor_desc_const_0_0

};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_const_0_1[] = {
	&mercury_data_term__du_functor_desc_const_0_1

};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_const_0_2[] = {
	&mercury_data_term__du_functor_desc_const_0_2

};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_const_0_3[] = {
	&mercury_data_term__du_functor_desc_const_0_3,
	&mercury_data_term__du_functor_desc_const_0_4

};

const MR_DuPtagLayout mercury_data_term__du_ptag_ordered_const_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_term__du_stag_ordered_const_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term__du_stag_ordered_const_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term__du_stag_ordered_const_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_term__du_stag_ordered_const_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_term__du_name_ordered_const_0[] = {
	&mercury_data_term__du_functor_desc_const_0_0,
	&mercury_data_term__du_functor_desc_const_0_3,
	&mercury_data_term__du_functor_desc_const_0_4,
	&mercury_data_term__du_functor_desc_const_0_1,
	&mercury_data_term__du_functor_desc_const_0_2
};

const MR_Integer mercury_data_term__functor_number_map_const_0[] = {
	0,
	3,
	4,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_const_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__const_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__const_0_0)),
	"term",
	"const",
	{ (void *)mercury_data_term__du_name_ordered_const_0 },
	{ (void *)mercury_data_term__du_ptag_ordered_const_0 },
	5,
	4,
	mercury_data_term__functor_number_map_const_0
};

const MR_PseudoTypeInfo mercury_data_term__field_types_context_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_context_0_0 = {
	"context",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_context_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_context_0_0[] = {
	&mercury_data_term__du_functor_desc_context_0_0

};

const MR_DuPtagLayout mercury_data_term__du_ptag_ordered_context_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_term__du_stag_ordered_context_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_term__du_name_ordered_context_0[] = {
	&mercury_data_term__du_functor_desc_context_0_0
};

const MR_Integer mercury_data_term__functor_number_map_context_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__context_0_0)),
	"term",
	"context",
	{ (void *)mercury_data_term__du_name_ordered_context_0 },
	{ (void *)mercury_data_term__du_ptag_ordered_context_0 },
	1,
	4,
	mercury_data_term__functor_number_map_context_0
};

static const MR_EnumFunctorDesc mercury_data_term__enum_functor_desc_generic_0_0 = {
	"generic",
	0
};

const MR_EnumFunctorDescPtr mercury_data_term__enum_value_ordered_generic_0[] = {
	&mercury_data_term__enum_functor_desc_generic_0_0
};

const MR_EnumFunctorDescPtr mercury_data_term__enum_name_ordered_generic_0[] = {
	&mercury_data_term__enum_functor_desc_generic_0_0
};

const MR_Integer mercury_data_term__functor_number_map_generic_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__generic_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__generic_0_0)),
	"term",
	"generic",
	{ (void *)mercury_data_term__enum_name_ordered_generic_0 },
	{ (void *)mercury_data_term__enum_value_ordered_generic_0 },
	1,
	4,
	mercury_data_term__functor_number_map_generic_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_var_1__pseudo_1 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_term_1__pseudo_1 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_term__pti_term_1__pseudo_1
}};

const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_substitution_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__substitution_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__substitution_1_0)),
	"term",
	"substitution",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_term_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1term__type_ctor_info_generic_0,
	(MR_TypeInfo) &mercury_data_term__ti_term_1term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_substitution_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__substitution_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__substitution_0_0)),
	"term",
	"substitution",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_term__pti_term_1__pseudo_1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_const_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_term__field_types_term_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_const_0,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_term_1_0 = {
	"functor",
	3,
	2,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_term_1_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term__field_types_term_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_term_1_1 = {
	"variable",
	2,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_term_1_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_term_1_0[] = {
	&mercury_data_term__du_functor_desc_term_1_0

};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_term_1_1[] = {
	&mercury_data_term__du_functor_desc_term_1_1

};

const MR_DuPtagLayout mercury_data_term__du_ptag_ordered_term_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_term__du_stag_ordered_term_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term__du_stag_ordered_term_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_term__du_name_ordered_term_1[] = {
	&mercury_data_term__du_functor_desc_term_1_0,
	&mercury_data_term__du_functor_desc_term_1_1
};

const MR_Integer mercury_data_term__functor_number_map_term_1[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1 = {
	1,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__term_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__term_1_0)),
	"term",
	"term",
	{ (void *)mercury_data_term__du_name_ordered_term_1 },
	{ (void *)mercury_data_term__du_ptag_ordered_term_1 },
	2,
	4,
	mercury_data_term__functor_number_map_term_1
};

const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__term_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__term_0_0)),
	"term",
	"term",
	{ 0 },
	{ (void *)&mercury_data_term__ti_term_1term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term__field_types_term_to_type_arg_context_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_const_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_term_to_type_arg_context_0_0 = {
	"arg_context",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_term_to_type_arg_context_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_term_to_type_arg_context_0_0[] = {
	&mercury_data_term__du_functor_desc_term_to_type_arg_context_0_0

};

const MR_DuPtagLayout mercury_data_term__du_ptag_ordered_term_to_type_arg_context_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_term__du_stag_ordered_term_to_type_arg_context_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_term__du_name_ordered_term_to_type_arg_context_0[] = {
	&mercury_data_term__du_functor_desc_term_to_type_arg_context_0_0
};

const MR_Integer mercury_data_term__functor_number_map_term_to_type_arg_context_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_to_type_arg_context_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__term_to_type_arg_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__term_to_type_arg_context_0_0)),
	"term",
	"term_to_type_arg_context",
	{ (void *)mercury_data_term__du_name_ordered_term_to_type_arg_context_0 },
	{ (void *)mercury_data_term__du_ptag_ordered_term_to_type_arg_context_0 },
	1,
	4,
	mercury_data_term__functor_number_map_term_to_type_arg_context_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_to_type_arg_context_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_term_to_type_arg_context_0
}};

const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_to_type_context_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__term_to_type_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__term_to_type_context_0_0)),
	"term",
	"term_to_type_context",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;

const MR_PseudoTypeInfo mercury_data_term__field_types_term_to_type_error_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__pti_term_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_type_desc__type_ctor_info_type_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_term_to_type_error_1_0 = {
	"type_error",
	4,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_term_to_type_error_1_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_term__field_types_term_to_type_error_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__pti_var_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_term_to_type_error_1_1 = {
	"mode_error",
	2,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_term_to_type_error_1_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_term_to_type_error_1_0[] = {
	&mercury_data_term__du_functor_desc_term_to_type_error_1_0

};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_term_to_type_error_1_1[] = {
	&mercury_data_term__du_functor_desc_term_to_type_error_1_1

};

const MR_DuPtagLayout mercury_data_term__du_ptag_ordered_term_to_type_error_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_term__du_stag_ordered_term_to_type_error_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term__du_stag_ordered_term_to_type_error_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_term__du_name_ordered_term_to_type_error_1[] = {
	&mercury_data_term__du_functor_desc_term_to_type_error_1_1,
	&mercury_data_term__du_functor_desc_term_to_type_error_1_0
};

const MR_Integer mercury_data_term__functor_number_map_term_to_type_error_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_to_type_error_1 = {
	1,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__term_to_type_error_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__term_to_type_error_1_0)),
	"term",
	"term_to_type_error",
	{ (void *)mercury_data_term__du_name_ordered_term_to_type_error_1 },
	{ (void *)mercury_data_term__du_ptag_ordered_term_to_type_error_1 },
	2,
	4,
	mercury_data_term__functor_number_map_term_to_type_error_1
};

const MR_PseudoTypeInfo mercury_data_term__field_types_term_to_type_result_2_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_term_to_type_result_2_0 = {
	"ok",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_term_to_type_result_2_0,
	NULL,
	NULL,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_term_to_type_error_1__pseudo_2 = {
	&mercury_data_term__type_ctor_info_term_to_type_error_1,
{	(MR_PseudoTypeInfo) 2
}};

const MR_PseudoTypeInfo mercury_data_term__field_types_term_to_type_result_2_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__pti_term_to_type_error_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_term__du_functor_desc_term_to_type_result_2_1 = {
	"error",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_term__field_types_term_to_type_result_2_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_term_to_type_result_2_0[] = {
	&mercury_data_term__du_functor_desc_term_to_type_result_2_0

};

const MR_DuFunctorDescPtr mercury_data_term__du_stag_ordered_term_to_type_result_2_1[] = {
	&mercury_data_term__du_functor_desc_term_to_type_result_2_1

};

const MR_DuPtagLayout mercury_data_term__du_ptag_ordered_term_to_type_result_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_term__du_stag_ordered_term_to_type_result_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term__du_stag_ordered_term_to_type_result_2_1 }

};

const MR_DuFunctorDescPtr mercury_data_term__du_name_ordered_term_to_type_result_2[] = {
	&mercury_data_term__du_functor_desc_term_to_type_result_2_1,
	&mercury_data_term__du_functor_desc_term_to_type_result_2_0
};

const MR_Integer mercury_data_term__functor_number_map_term_to_type_result_2[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_to_type_result_2 = {
	2,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__term_to_type_result_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__term_to_type_result_2_0)),
	"term",
	"term_to_type_result",
	{ (void *)mercury_data_term__du_name_ordered_term_to_type_result_2 },
	{ (void *)mercury_data_term__du_ptag_ordered_term_to_type_result_2 },
	2,
	4,
	mercury_data_term__functor_number_map_term_to_type_result_2
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_term__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_term_to_type_result_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_to_type_result_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__term_to_type_result_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__term_to_type_result_1_0)),
	"term",
	"term_to_type_result",
	{ 0 },
	{ (void *)&mercury_data_term__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_term__notag_functor_desc_var_1 = {
	"var",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_term__functor_number_map_var_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__var_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__var_1_0)),
	"term",
	"var",
	{ (void *)&mercury_data_term__notag_functor_desc_var_1 },
	{ (void *)&mercury_data_term__notag_functor_desc_var_1 },
	1,
	4,
	mercury_data_term__functor_number_map_var_1
};

const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__var_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__var_0_0)),
	"term",
	"var",
	{ 0 },
	{ (void *)&mercury_data_term__ti_var_1term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_term__notag_functor_desc_var_supply_1 = {
	"var_supply",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_term__functor_number_map_var_supply_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_supply_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term__var_supply_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term__var_supply_1_0)),
	"term",
	"var_supply",
	{ (void *)&mercury_data_term__notag_functor_desc_var_supply_1 },
	{ (void *)&mercury_data_term__notag_functor_desc_var_supply_1 },
	1,
	4,
	mercury_data_term__functor_number_map_var_supply_1
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__[] = {
	(MR_Code *) 1,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_0))
};




MR_BEGIN_MODULE(term_module0)
	MR_init_entry1(fn__term__get_term_context_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__get_term_context_1_0);
	MR_init_label1(fn__term__get_term_context_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_term_context'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__get_term_context_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__term__get_term_context_1_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_proceed();
MR_def_label(fn__term__get_term_context_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);
MR_decl_entry(construct__find_functor_2_6_0);
MR_decl_entry(fn__construct__construct_3_0);
MR_decl_entry(require__error_1_0);
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(term_module1)
	MR_init_entry1(term__try_term_to_univ_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__try_term_to_univ_2_4_0);
	MR_init_label10(term__try_term_to_univ_2_4_0,5,4,11,14,16,19,21,20,8,26)
	MR_init_label1(term__try_term_to_univ_2_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'try_term_to_univ_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term__try_term_to_univ_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__try_term_to_univ_2_4_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(7) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__term__try_term_to_univ_2_4_0
	TypeDesc = MR_r3;
{
#line 76 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 1322 "term.c"
	MR_tempr1 = TypeCtorDesc;
	MR_tempr2 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__term__try_term_to_univ_2_4_0
	TypeCtorDesc = MR_tempr1;
{
#line 142 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 1365 "term.c"
	MR_tempr3 = (MR_Word) TypeCtorModuleName;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__term__try_term_to_univ_2_4_0
	TypeCtorDesc = MR_tempr1;
{
#line 142 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 1407 "term.c"
	MR_tempr4 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(8) = MR_r1;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,
		term__try_term_to_univ_2_4_0_i5);
MR_def_label(term__try_term_to_univ_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__try_term_to_univ_2_4_0_i4);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(term__try_term_to_univ_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(term__try_term_to_univ_2_4_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_sv(6) = MR_tfield(0, MR_sv(7), 0);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		term__try_term_to_univ_2_4_0_i11);
MR_def_label(term__try_term_to_univ_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__term__try_term_to_univ_2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_sv(2);
{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 1461 "term.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term__try_term_to_univ_2_4_0_i8);
	MR_r4 = Functors;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(construct__find_functor_2_6_0,
		term__try_term_to_univ_2_4_0_i14);
MR_def_label(term__try_term_to_univ_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__try_term_to_univ_2_4_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(5);
	}
	MR_np_call_localret_ent(term__term_list_to_univ_list_7_0,
		term__try_term_to_univ_2_4_0_i16);
MR_def_label(term__try_term_to_univ_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__try_term_to_univ_2_4_0_i8);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(term__try_term_to_univ_2_4_0_i19);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(term__try_term_to_univ_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__construct__construct_3_0,
		term__try_term_to_univ_2_4_0_i21);
MR_def_label(term__try_term_to_univ_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__try_term_to_univ_2_4_0_i20);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(term__try_term_to_univ_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_to_type: construct/3 failed", 32);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(term__try_term_to_univ_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, term_to_type_arg_context);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__reverse_2_0,
		term__try_term_to_univ_2_4_0_i26);
MR_def_label(term__try_term_to_univ_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(term__try_term_to_univ_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module2)
	MR_init_entry1(term__term_list_to_univ_list_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__term_list_to_univ_list_7_0);
	MR_init_label7(term__term_list_to_univ_list_7_0,60,9,11,12,2,61,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_list_to_univ_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term__term_list_to_univ_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__term_list_to_univ_list_7_0_i60);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(term__term_list_to_univ_list_7_0_i61);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term__term_list_to_univ_list_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(term__term_list_to_univ_list_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tempr5 = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr6 = MR_r6;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr6;
	MR_sv(6) = MR_tempr3;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr6;
	MR_sv(3) = MR_tempr5;
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(1, MR_r3, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(term__try_term_to_univ_2_4_0,
		term__term_list_to_univ_list_7_0_i9);
MR_def_label(term__term_list_to_univ_list_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(term__term_list_to_univ_list_7_0_i11);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(term__term_list_to_univ_list_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	}
	MR_np_localcall_lab(term__term_list_to_univ_list_7_0,
		term__term_list_to_univ_list_7_0_i12);
MR_def_label(term__term_list_to_univ_list_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__term_list_to_univ_list_7_0_i1);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(term__term_list_to_univ_list_7_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	}
MR_def_label(term__term_list_to_univ_list_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(term__term_list_to_univ_list_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(term__term_list_to_univ_list_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__det_univ_to_type_2_0);

MR_BEGIN_MODULE(term_module3)
	MR_init_entry1(term__try_term_to_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__try_term_to_type_2_0);
	MR_init_label3(term__try_term_to_type_2_0,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'try_term_to_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__try_term_to_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term__try_term_to_type_2_0
	TypeInfo_for_T = MR_r2;
{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 1721 "term.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(term__try_term_to_univ_2_4_0,
		term__try_term_to_type_2_0_i2);
MR_def_label(term__try_term_to_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(term__try_term_to_type_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		term__try_term_to_type_2_0_i5);
MR_def_label(term__try_term_to_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(term__try_term_to_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module4)
	MR_init_entry1(fn__term__try_term_to_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__try_term_to_type_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'try_term_to_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__try_term_to_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__try_term_to_type_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module5)
	MR_init_entry1(term__term_to_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__term_to_type_2_0);
	MR_init_label2(term__term_to_type_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_to_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__term_to_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(term__try_term_to_type_2_0,
		term__term_to_type_2_0_i2);
MR_def_label(term__term_to_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(term__term_to_type_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term__term_to_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module6)
	MR_init_entry1(term__is_ground_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__is_ground_1_0);
	MR_init_label1(term__is_ground_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_ground'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__is_ground_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__is_ground_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_tailcall_ent(term__is_ground_list_1_0);
MR_def_label(term__is_ground_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module7)
	MR_init_entry1(term__is_ground_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__is_ground_list_1_0);
	MR_init_label4(term__is_ground_list_1_0,22,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_ground_list'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__is_ground_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(term__is_ground_list_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(term__is_ground_list_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(term__is_ground_list_1_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_localcall_lab(term__is_ground_list_1_0,
		term__is_ground_list_1_0_i5);
MR_def_label(term__is_ground_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__is_ground_list_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(term__is_ground_list_1_0_i22);
MR_def_label(term__is_ground_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(term__is_ground_list_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__type_name_1_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(term_module8)
	MR_init_entry1(term__det_term_to_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__det_term_to_type_2_0);
	MR_init_label9(term__det_term_to_type_2_0,3,2,10,8,6,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_term_to_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__det_term_to_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(term__try_term_to_type_2_0,
		term__det_term_to_type_2_0_i3);
MR_def_label(term__det_term_to_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(term__det_term_to_type_2_0_i2);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_decr_sp_and_return(4);
MR_def_label(term__det_term_to_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(term__det_term_to_type_2_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(term__is_ground_list_1_0,
		term__det_term_to_type_2_0_i10);
MR_def_label(term__det_term_to_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__det_term_to_type_2_0_i6);
	}
MR_def_label(term__det_term_to_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term.det_term_to_type failed, because the term wasn\'t ground", 60);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(term__det_term_to_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term__det_term_to_type_2_0
	TypeInfo_for_T = MR_sv(3);
{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 1984 "term.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		term__det_term_to_type_2_0_i13);
MR_def_label(term__det_term_to_type_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(string__append_3_2,
		term__det_term_to_type_2_0_i14);
MR_def_label(term__det_term_to_type_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("the term wasn\'t a valid term for type \140", 39);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		term__det_term_to_type_2_0_i15);
MR_def_label(term__det_term_to_type_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("term.det_term_to_type failed, due to a type error:\n", 51);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		term__det_term_to_type_2_0_i16);
MR_def_label(term__det_term_to_type_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module9)
	MR_init_entry1(fn__term__det_term_to_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__det_term_to_type_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_term_to_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__det_term_to_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__det_term_to_type_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module10)
	MR_init_entry1(term__context_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__context_init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'context_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__context_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_1);

MR_BEGIN_MODULE(term_module11)
	MR_init_entry1(term__type_to_term_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__type_to_term_2_0);
	MR_init_label1(term__type_to_term_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_to_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__type_to_term_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		term__type_to_term_2_0_i2);
MR_def_label(term__type_to_term_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(term__univ_to_term_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__deconstruct_5_1);

MR_BEGIN_MODULE(term_module12)
	MR_init_entry1(term__univ_to_term_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__univ_to_term_2_0);
	MR_init_label8(term__univ_to_term_2_0,7,8,4,12,11,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_to_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__univ_to_term_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(0, MR_r2, 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term__univ_to_term_2_0
	TypeInfo_for_T = MR_r4;
{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 2150 "term.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,0);
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__term__univ_to_term_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r4;
{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 2171 "term.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term__univ_to_term_2_0_i4);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_1,
		term__univ_to_term_2_0_i7);
MR_def_label(term__univ_to_term_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(term__univ_list_to_term_list_2_0,
		term__univ_to_term_2_0_i8);
MR_def_label(term__univ_to_term_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(term__univ_to_term_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__term__univ_to_term_2_0
	TypeDesc = MR_r4;
{
#line 76 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 2227 "term.c"
	MR_tempr1 = TypeCtorDesc;
	MR_r4 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__term__univ_to_term_2_0
	TypeCtorDesc = MR_tempr1;
{
#line 142 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 2270 "term.c"
	MR_r3 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__term__univ_to_term_2_0
	TypeCtorDesc = MR_tempr1;
{
#line 142 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 2312 "term.c"
	MR_tempr1 = (MR_Word) TypeCtorModuleName;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(1);
	}
	MR_np_call_localret_ent(term__univ_to_term_special_case_6_0,
		term__univ_to_term_2_0_i12);
MR_def_label(term__univ_to_term_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__univ_to_term_2_0_i11);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(term__univ_to_term_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__term__univ_to_term_2_0
	TypeInfo_for_T = MR_r2;
{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 2356 "term.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		term__univ_to_term_2_0_i14);
MR_def_label(term__univ_to_term_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(string__append_3_2,
		term__univ_to_term_2_0_i15);
MR_def_label(term__univ_to_term_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("term.type_to_term: unknown type \140", 33);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		term__univ_to_term_2_0_i16);
MR_def_label(term__univ_to_term_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
MR_decl_entry(fn__univ__univ_type_1_0);
MR_decl_entry(fn__univ__univ_value_1_0);
MR_decl_entry(type_desc__has_type_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
MR_decl_entry(array__to_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_bitmap__type_ctor_info_bitmap_0;
MR_decl_entry(fn__bitmap__to_string_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(string__char_to_string_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_version_array__type_ctor_info_version_array_1;
MR_decl_entry(fn__version_array__to_list_1_0);

MR_BEGIN_MODULE(term_module13)
	MR_init_entry1(term__univ_to_term_special_case_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__univ_to_term_special_case_6_0);
	MR_init_label10(term__univ_to_term_special_case_6_0,6,9,10,12,13,3,23,26,27,28)
	MR_init_label10(term__univ_to_term_special_case_6_0,18,34,35,31,42,41,46,45,50,49)
	MR_init_label10(term__univ_to_term_special_case_6_0,54,55,38,62,63,58,71,74,75,76)
	MR_init_label1(term__univ_to_term_special_case_6_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_to_term_special_case'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term__univ_to_term_special_case_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("univ", 4)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i3);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("univ", 4)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		term__univ_to_term_special_case_6_0_i6);
MR_def_label(term__univ_to_term_special_case_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_np_call_localret_ent(fn__univ__univ_type_1_0,
		term__univ_to_term_special_case_6_0_i9);
MR_def_label(term__univ_to_term_special_case_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,
		term__univ_to_term_special_case_6_0_i10);
MR_def_label(term__univ_to_term_special_case_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		term__univ_to_term_special_case_6_0_i12);
MR_def_label(term__univ_to_term_special_case_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__type_to_term_2_0,
		term__univ_to_term_special_case_6_0_i13);
MR_def_label(term__univ_to_term_special_case_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(term__univ_to_term_special_case_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i18);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(type_desc__has_type_2_0,
		term__univ_to_term_special_case_6_0_i23);
MR_def_label(term__univ_to_term_special_case_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(array, array);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		term__univ_to_term_special_case_6_0_i26);
MR_def_label(term__univ_to_term_special_case_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		term__univ_to_term_special_case_6_0_i27);
MR_def_label(term__univ_to_term_special_case_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__type_to_term_2_0,
		term__univ_to_term_special_case_6_0_i28);
MR_def_label(term__univ_to_term_special_case_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(term__univ_to_term_special_case_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("bitmap", 6)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i31);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("bitmap", 6)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		term__univ_to_term_special_case_6_0_i34);
MR_def_label(term__univ_to_term_special_case_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bitmap__to_string_1_0,
		term__univ_to_term_special_case_6_0_i35);
MR_def_label(term__univ_to_term_special_case_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(term__univ_to_term_special_case_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i38);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i41);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		term__univ_to_term_special_case_6_0_i42);
MR_def_label(term__univ_to_term_special_case_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(term__univ_to_term_special_case_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i45);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		term__univ_to_term_special_case_6_0_i46);
MR_def_label(term__univ_to_term_special_case_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(term__univ_to_term_special_case_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("string", 6)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i49);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		term__univ_to_term_special_case_6_0_i50);
MR_def_label(term__univ_to_term_special_case_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(term__univ_to_term_special_case_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("character", 9)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		term__univ_to_term_special_case_6_0_i54);
MR_def_label(term__univ_to_term_special_case_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__char_to_string_2_0,
		term__univ_to_term_special_case_6_0_i55);
MR_def_label(term__univ_to_term_special_case_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(term__univ_to_term_special_case_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("type_desc", 9)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i58);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("type_desc", 9)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		term__univ_to_term_special_case_6_0_i62);
MR_def_label(term__univ_to_term_special_case_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,
		term__univ_to_term_special_case_6_0_i63);
MR_def_label(term__univ_to_term_special_case_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(term__univ_to_term_special_case_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("version_array", 13)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("version_array", 13)) != 0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__univ_to_term_special_case_6_0_i1);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(type_desc__has_type_2_0,
		term__univ_to_term_special_case_6_0_i71);
MR_def_label(term__univ_to_term_special_case_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		term__univ_to_term_special_case_6_0_i74);
MR_def_label(term__univ_to_term_special_case_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__version_array__to_list_1_0,
		term__univ_to_term_special_case_6_0_i75);
MR_def_label(term__univ_to_term_special_case_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__type_to_term_2_0,
		term__univ_to_term_special_case_6_0_i76);
MR_def_label(term__univ_to_term_special_case_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(term__univ_to_term_special_case_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module14)
	MR_init_entry1(term__univ_list_to_term_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__univ_list_to_term_list_2_0);
	MR_init_label3(term__univ_list_to_term_list_2_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_list_to_term_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term__univ_list_to_term_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__univ_list_to_term_list_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term__univ_list_to_term_list_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(term__univ_to_term_2_0,
		term__univ_list_to_term_list_2_0_i4);
MR_def_label(term__univ_list_to_term_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(term__univ_list_to_term_list_2_0,
		term__univ_list_to_term_list_2_0_i5);
MR_def_label(term__univ_list_to_term_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module15)
	MR_init_entry1(fn__term__type_to_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__type_to_term_1_0);
	MR_init_label1(fn__term__type_to_term_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_to_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__type_to_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		fn__term__type_to_term_1_0_i2);
MR_def_label(fn__term__type_to_term_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(term__univ_to_term_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module16)
	MR_init_entry1(fn__term__univ_to_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__univ_to_term_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_to_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__univ_to_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__univ_to_term_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module17)
	MR_init_entry1(term__vars_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__vars_2_3_0);
	MR_init_label1(term__vars_2_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'vars_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__vars_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__vars_2_3_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_tailcall_ent(term__vars_2_list_3_0);
MR_def_label(term__vars_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module18)
	MR_init_entry1(term__vars_2_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__vars_2_list_3_0);
	MR_init_label4(term__vars_2_list_3_0,16,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'vars_2_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__vars_2_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(term__vars_2_list_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__vars_2_list_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(term__vars_2_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(term__vars_2_list_3_0,
		term__vars_2_list_3_0_i4);
MR_def_label(term__vars_2_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(term__vars_2_list_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(1), 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(term__vars_2_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_sv(1), 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(term__vars_2_list_3_0_i16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module19)
	MR_init_entry1(term__vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__vars_2_0);
	MR_init_label1(term__vars_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__vars_2_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(term__vars_2_list_3_0);
MR_def_label(term__vars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module20)
	MR_init_entry1(fn__term__vars_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__vars_1_0);
	MR_init_label1(fn__term__vars_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__vars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__term__vars_1_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(term__vars_2_list_3_0);
MR_def_label(fn__term__vars_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module21)
	MR_init_entry1(fn__term__vars_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__vars_2_2_0);
	MR_init_label1(fn__term__vars_2_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'vars_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__vars_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__term__vars_2_2_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_tailcall_ent(term__vars_2_list_3_0);
MR_def_label(fn__term__vars_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module22)
	MR_init_entry1(term__vars_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__vars_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'vars_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__vars_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(term__vars_2_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module23)
	MR_init_entry1(fn__term__vars_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__vars_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'vars_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__vars_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(term__vars_2_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module24)
	MR_init_entry1(term__contains_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__contains_var_2_0);
	MR_init_label2(term__contains_var_2_0,10,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__contains_var_2_0_i23);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_tailcall_ent(term__contains_var_list_2_0);
MR_def_label(term__contains_var_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(term__contains_var_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tempr1;
	if ((MR_r3 == MR_tempr1)) {
		MR_GOTO_LAB(term__contains_var_2_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_sv(1) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module25)
	MR_init_entry1(term__contains_var_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__contains_var_2_1);
	MR_init_label1(term__contains_var_2_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains_var'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__contains_var_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__contains_var_2_1_i2);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_tailcall_ent(term__contains_var_list_2_1);
MR_def_label(term__contains_var_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module26)
	MR_init_entry1(term__contains_var_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__contains_var_list_2_0);
	MR_init_label4(term__contains_var_list_2_0,19,6,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains_var_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__contains_var_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(term__contains_var_list_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(term__contains_var_list_2_0_i1);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(term__contains_var_2_0,
		term__contains_var_list_2_0_i6);
MR_def_label(term__contains_var_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__contains_var_list_2_0_i3);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(term__contains_var_list_2_0_i19);
MR_def_label(term__contains_var_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(term__contains_var_list_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(term_module27)
	MR_init_entry1(term__contains_var_list_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__contains_var_list_2_1);
	MR_init_label4(term__contains_var_list_2_1,9,6,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains_var_list'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__contains_var_list_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred term.contains_var_list/2-1", 2);
MR_def_label(term__contains_var_list_2_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(2) = MR_tfield(1, MR_r2, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(term__contains_var_list_2_1_i3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(term__contains_var_list_2_1_i6);
	}
	MR_fv(1) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_localcall_lab(term__contains_var_list_2_1,
		term__contains_var_list_2_1_i2);
MR_def_label(term__contains_var_list_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_succeed();
MR_def_label(term__contains_var_list_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r2 = MR_fv(2);
	MR_GOTO_LAB(term__contains_var_list_2_1_i9);
MR_def_label(term__contains_var_list_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(term_module28)
	MR_init_entry1(term__apply_rec_substitution_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__apply_rec_substitution_3_0);
	MR_init_label5(term__apply_rec_substitution_3_0,22,4,3,9,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_substitution'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__apply_rec_substitution_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(term__apply_rec_substitution_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__apply_rec_substitution_3_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(term__apply_rec_substitution_to_list_3_0,
		term__apply_rec_substitution_3_0_i4);
MR_def_label(term__apply_rec_substitution_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(term__apply_rec_substitution_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tfield(1, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__apply_rec_substitution_3_0_i9);
MR_def_label(term__apply_rec_substitution_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__apply_rec_substitution_3_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(term__apply_rec_substitution_3_0_i22);
MR_def_label(term__apply_rec_substitution_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module29)
	MR_init_entry1(term__apply_rec_substitution_to_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__apply_rec_substitution_to_list_3_0);
	MR_init_label3(term__apply_rec_substitution_to_list_3_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_substitution_to_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__apply_rec_substitution_to_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__apply_rec_substitution_to_list_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term__apply_rec_substitution_to_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(term__apply_rec_substitution_3_0,
		term__apply_rec_substitution_to_list_3_0_i4);
MR_def_label(term__apply_rec_substitution_to_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(term__apply_rec_substitution_to_list_3_0,
		term__apply_rec_substitution_to_list_3_0_i5);
MR_def_label(term__apply_rec_substitution_to_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module30)
	MR_init_entry1(term__occurs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__occurs_3_0);
	MR_init_label7(term__occurs_3_0,36,19,3,9,8,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'occurs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__occurs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(term__occurs_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__occurs_3_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(term__occurs_list_3_0);
MR_def_label(term__occurs_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(term__occurs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	if ((MR_sv(3) == MR_r3)) {
		MR_GOTO_LAB(term__occurs_3_0_i9);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(term__occurs_3_0_i8);
MR_def_label(term__occurs_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(term__occurs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) == MR_sv(1))) {
		MR_GOTO_LAB(term__occurs_3_0_i19);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__occurs_3_0_i13);
MR_def_label(term__occurs_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__occurs_3_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(term__occurs_3_0_i36);
MR_def_label(term__occurs_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module31)
	MR_init_entry1(term__occurs_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__occurs_list_3_0);
	MR_init_label4(term__occurs_list_3_0,19,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'occurs_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__occurs_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(term__occurs_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(term__occurs_list_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(term__occurs_3_0,
		term__occurs_list_3_0_i5);
MR_def_label(term__occurs_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__occurs_list_3_0_i9);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(term__occurs_list_3_0_i19);
MR_def_label(term__occurs_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(term__occurs_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(term_module32)
	MR_init_entry1(term__unify_term_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__unify_term_4_0);
	MR_init_label10(term__unify_term_4_0,192,6,5,13,10,19,3,30,27,36)
	MR_init_label10(term__unify_term_4_0,26,45,49,47,53,57,54,55,61,42)
	MR_init_label10(term__unify_term_4_0,69,71,75,72,73,79,66,85,84,89)
	MR_init_label1(term__unify_term_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_term'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__unify_term_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(term__unify_term_4_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__unify_term_4_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(term__unify_term_4_0_i5);
	}
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___term__const_0_0,
		term__unify_term_4_0_i6);
MR_def_label(term__unify_term_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_4_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(term__unify_term_list_4_0);
MR_def_label(term__unify_term_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r2, 1);
	MR_r5 = MR_tfield(1, MR_r3, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__unify_term_4_0_i13);
MR_def_label(term__unify_term_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_4_0_i10);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(term__unify_term_4_0_i192);
	}
MR_def_label(term__unify_term_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(term__occurs_list_3_0,
		term__unify_term_4_0_i19);
MR_def_label(term__unify_term_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__unify_term_4_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__unify_term_4_0_i89);
MR_def_label(term__unify_term_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(term__unify_term_4_0_i26);
	}
	MR_r5 = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(4) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r5;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__unify_term_4_0_i30);
MR_def_label(term__unify_term_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_4_0_i27);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(term__unify_term_4_0_i192);
MR_def_label(term__unify_term_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(term__occurs_list_3_0,
		term__unify_term_4_0_i36);
MR_def_label(term__unify_term_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__unify_term_4_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__unify_term_4_0_i89);
MR_def_label(term__unify_term_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(4) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(7) = MR_r5;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__unify_term_4_0_i45);
MR_def_label(term__unify_term_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_4_0_i42);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__unify_term_4_0_i49);
MR_def_label(term__unify_term_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_4_0_i47);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(term__unify_term_4_0_i192);
	}
MR_def_label(term__unify_term_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(term__apply_rec_substitution_3_0,
		term__unify_term_4_0_i53);
MR_def_label(term__unify_term_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(term__unify_term_4_0_i55);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		term__unify_term_4_0_i57);
MR_def_label(term__unify_term_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_4_0_i54);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(term__unify_term_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(term__unify_term_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(term__occurs_3_0,
		term__unify_term_4_0_i61);
MR_def_label(term__unify_term_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__unify_term_4_0_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__unify_term_4_0_i89);
MR_def_label(term__unify_term_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__unify_term_4_0_i69);
MR_def_label(term__unify_term_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_4_0_i66);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(term__apply_rec_substitution_3_0,
		term__unify_term_4_0_i71);
MR_def_label(term__unify_term_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(term__unify_term_4_0_i73);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		term__unify_term_4_0_i75);
MR_def_label(term__unify_term_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_4_0_i72);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(term__unify_term_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(term__unify_term_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(term__occurs_3_0,
		term__unify_term_4_0_i79);
MR_def_label(term__unify_term_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__unify_term_4_0_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__unify_term_4_0_i89);
MR_def_label(term__unify_term_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		term__unify_term_4_0_i85);
MR_def_label(term__unify_term_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_4_0_i84);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(term__unify_term_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__unify_term_4_0_i89);
MR_def_label(term__unify_term_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(term__unify_term_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module33)
	MR_init_entry1(term__unify_term_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__unify_term_list_4_0);
	MR_init_label4(term__unify_term_list_4_0,28,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_term_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__unify_term_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(term__unify_term_list_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__unify_term_list_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(term__unify_term_list_4_0_i1);
	}
	MR_r2 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(term__unify_term_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(term__unify_term_list_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(term__unify_term_4_0,
		term__unify_term_list_4_0_i6);
MR_def_label(term__unify_term_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_list_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(term__unify_term_list_4_0_i28);
	}
MR_def_label(term__unify_term_list_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module34)
	MR_init_entry1(fn__term__context_init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__context_init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'context_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__context_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(term_module35)
	MR_init_entry1(term__unify_term_bound_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__unify_term_bound_var_5_0);
	MR_init_label8(term__unify_term_bound_var_5_0,57,5,2,12,11,16,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_term_bound_var'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term__unify_term_bound_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(term__unify_term_bound_var_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__unify_term_bound_var_5_0_i5);
MR_def_label(term__unify_term_bound_var_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_bound_var_5_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(term__unify_term_bound_var_5_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(term__unify_term_bound_var_5_0_i57);
MR_def_label(term__unify_term_bound_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(2))) {
		MR_GOTO_LAB(term__unify_term_bound_var_5_0_i12);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(term__unify_term_bound_var_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(2))) {
		MR_GOTO_LAB(term__unify_term_bound_var_5_0_i11);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(term__unify_term_bound_var_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,
		term__unify_term_bound_var_5_0_i16);
MR_def_label(term__unify_term_bound_var_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__unify_term_bound_var_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__unify_term_bound_var_5_0_i22);
MR_def_label(term__unify_term_bound_var_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(term__unify_term_bound_var_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(term_module36)
	MR_init_entry1(term__unify_term_dont_bind_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__unify_term_dont_bind_5_0);
	MR_init_label10(term__unify_term_dont_bind_5_0,244,7,8,9,5,16,13,22,26,3)
	MR_init_label10(term__unify_term_dont_bind_5_0,37,34,43,47,33,55,53,61,59,68)
	MR_init_label10(term__unify_term_dont_bind_5_0,72,70,76,80,77,78,84,65,92,94)
	MR_init_label9(term__unify_term_dont_bind_5_0,98,95,96,102,89,108,107,112,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_term_dont_bind'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__unify_term_dont_bind_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(term__unify_term_dont_bind_5_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_tfield(0, MR_r2, 1);
	MR_sv(8) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__length_2_0,
		term__unify_term_dont_bind_5_0_i7);
MR_def_label(term__unify_term_dont_bind_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__length_2_0,
		term__unify_term_dont_bind_5_0_i8);
MR_def_label(term__unify_term_dont_bind_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__const_0_0,
		term__unify_term_dont_bind_5_0_i9);
MR_def_label(term__unify_term_dont_bind_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i1);
	}
	if ((MR_sv(6) != MR_sv(3))) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(term__unify_term_list_dont_bind_5_0);
MR_def_label(term__unify_term_dont_bind_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_tempr4 = MR_r5;
	MR_sv(2) = MR_tempr4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__unify_term_dont_bind_5_0_i16);
MR_def_label(term__unify_term_dont_bind_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i13);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i244);
	}
MR_def_label(term__unify_term_dont_bind_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(term__occurs_list_3_0,
		term__unify_term_dont_bind_5_0_i22);
MR_def_label(term__unify_term_dont_bind_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,
		term__unify_term_dont_bind_5_0_i26);
MR_def_label(term__unify_term_dont_bind_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__unify_term_dont_bind_5_0_i112);
MR_def_label(term__unify_term_dont_bind_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(3) = MR_tempr3;
	MR_sv(1) = MR_r4;
	MR_tempr4 = MR_r5;
	MR_sv(2) = MR_tempr4;
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__unify_term_dont_bind_5_0_i37);
MR_def_label(term__unify_term_dont_bind_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i34);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i244);
MR_def_label(term__unify_term_dont_bind_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(term__occurs_list_3_0,
		term__unify_term_dont_bind_5_0_i43);
MR_def_label(term__unify_term_dont_bind_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,
		term__unify_term_dont_bind_5_0_i47);
MR_def_label(term__unify_term_dont_bind_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__unify_term_dont_bind_5_0_i112);
MR_def_label(term__unify_term_dont_bind_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,
		term__unify_term_dont_bind_5_0_i55);
MR_def_label(term__unify_term_dont_bind_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i53);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(term__unify_term_bound_var_5_0);
MR_def_label(term__unify_term_dont_bind_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,
		term__unify_term_dont_bind_5_0_i61);
MR_def_label(term__unify_term_dont_bind_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i59);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(term__unify_term_bound_var_5_0);
MR_def_label(term__unify_term_dont_bind_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__unify_term_dont_bind_5_0_i68);
MR_def_label(term__unify_term_dont_bind_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i65);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__unify_term_dont_bind_5_0_i72);
MR_def_label(term__unify_term_dont_bind_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i70);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i244);
	}
MR_def_label(term__unify_term_dont_bind_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(term__apply_rec_substitution_3_0,
		term__unify_term_dont_bind_5_0_i76);
MR_def_label(term__unify_term_dont_bind_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i78);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		term__unify_term_dont_bind_5_0_i80);
MR_def_label(term__unify_term_dont_bind_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i77);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(term__unify_term_dont_bind_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(term__unify_term_dont_bind_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(term__occurs_3_0,
		term__unify_term_dont_bind_5_0_i84);
MR_def_label(term__unify_term_dont_bind_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__unify_term_dont_bind_5_0_i112);
MR_def_label(term__unify_term_dont_bind_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__unify_term_dont_bind_5_0_i92);
MR_def_label(term__unify_term_dont_bind_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i89);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(term__apply_rec_substitution_3_0,
		term__unify_term_dont_bind_5_0_i94);
MR_def_label(term__unify_term_dont_bind_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i96);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		term__unify_term_dont_bind_5_0_i98);
MR_def_label(term__unify_term_dont_bind_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i95);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(term__unify_term_dont_bind_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(term__unify_term_dont_bind_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(term__occurs_3_0,
		term__unify_term_dont_bind_5_0_i102);
MR_def_label(term__unify_term_dont_bind_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__unify_term_dont_bind_5_0_i112);
MR_def_label(term__unify_term_dont_bind_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		term__unify_term_dont_bind_5_0_i108);
MR_def_label(term__unify_term_dont_bind_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_dont_bind_5_0_i107);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(term__unify_term_dont_bind_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__unify_term_dont_bind_5_0_i112);
MR_def_label(term__unify_term_dont_bind_5_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(term__unify_term_dont_bind_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module37)
	MR_init_entry1(term__unify_term_list_dont_bind_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__unify_term_list_dont_bind_5_0);
	MR_init_label4(term__unify_term_list_dont_bind_5_0,28,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_term_list_dont_bind'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__unify_term_list_dont_bind_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(term__unify_term_list_dont_bind_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__unify_term_list_dont_bind_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(term__unify_term_list_dont_bind_5_0_i1);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(term__unify_term_list_dont_bind_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(term__unify_term_list_dont_bind_5_0_i1);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(term__unify_term_dont_bind_5_0,
		term__unify_term_list_dont_bind_5_0_i6);
MR_def_label(term__unify_term_list_dont_bind_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__unify_term_list_dont_bind_5_0_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(term__unify_term_list_dont_bind_5_0_i28);
	}
MR_def_label(term__unify_term_list_dont_bind_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module38)
	MR_init_entry1(term__list_subsumes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__list_subsumes_3_0);
	MR_init_label1(term__list_subsumes_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_subsumes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__list_subsumes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(term__vars_2_list_3_0,
		term__list_subsumes_3_0_i2);
MR_def_label(term__list_subsumes_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(term__unify_term_list_dont_bind_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module39)
	MR_init_entry1(term__substitute_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__substitute_4_0);
	MR_init_label5(term__substitute_4_0,4,3,9,8,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__substitute_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__substitute_4_0_i3);
	}
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(term__substitute_list_4_0,
		term__substitute_4_0_i4);
MR_def_label(term__substitute_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(term__substitute_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	if ((MR_sv(2) == MR_r3)) {
		MR_GOTO_LAB(term__substitute_4_0_i9);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_GOTO_LAB(term__substitute_4_0_i8);
MR_def_label(term__substitute_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(term__substitute_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_sv(4))) {
		MR_GOTO_LAB(term__substitute_4_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(term__substitute_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module40)
	MR_init_entry1(term__substitute_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__substitute_list_4_0);
	MR_init_label3(term__substitute_list_4_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__substitute_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__substitute_list_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term__substitute_list_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(term__substitute_4_0,
		term__substitute_list_4_0_i4);
MR_def_label(term__substitute_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(term__substitute_list_4_0,
		term__substitute_list_4_0_i5);
MR_def_label(term__substitute_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module41)
	MR_init_entry1(fn__term__substitute_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__substitute_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__substitute_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__substitute_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module42)
	MR_init_entry1(fn__term__substitute_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__substitute_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__substitute_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__substitute_list_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module43)
	MR_init_entry1(term__apply_substitution_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__apply_substitution_3_0);
	MR_init_label4(term__apply_substitution_3_0,4,3,9,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_substitution'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__apply_substitution_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__apply_substitution_3_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(term__apply_substitution_to_list_3_0,
		term__apply_substitution_3_0_i4);
MR_def_label(term__apply_substitution_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(term__apply_substitution_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tfield(1, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__apply_substitution_3_0_i9);
MR_def_label(term__apply_substitution_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__apply_substitution_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(term__apply_substitution_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module44)
	MR_init_entry1(term__apply_substitution_to_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__apply_substitution_to_list_3_0);
	MR_init_label3(term__apply_substitution_to_list_3_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_substitution_to_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__apply_substitution_to_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__apply_substitution_to_list_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term__apply_substitution_to_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(term__apply_substitution_3_0,
		term__apply_substitution_to_list_3_0_i4);
MR_def_label(term__apply_substitution_to_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(term__apply_substitution_to_list_3_0,
		term__apply_substitution_to_list_3_0_i5);
MR_def_label(term__apply_substitution_to_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(term_module45)
	MR_init_entry1(term__substitute_corresponding_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__substitute_corresponding_2_4_0);
	MR_init_label4(term__substitute_corresponding_2_4_0,25,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute_corresponding_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__substitute_corresponding_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(term__substitute_corresponding_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__substitute_corresponding_2_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(term__substitute_corresponding_2_4_0_i1);
	}
	MR_r2 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(term__substitute_corresponding_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(term__substitute_corresponding_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_tempr6 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr6, 1);
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr4 = MR_tempr6;
	MR_r3 = MR_tempr2;
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr3, 0);
	MR_r5 = MR_tfield(1, MR_tempr4, 0);
	MR_r6 = MR_tempr5;
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		term__substitute_corresponding_2_4_0_i8);
MR_def_label(term__substitute_corresponding_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(term__substitute_corresponding_2_4_0_i25);
	}
MR_def_label(term__substitute_corresponding_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module46)
	MR_init_entry1(term__substitute_corresponding_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__substitute_corresponding_4_0);
	MR_init_label2(term__substitute_corresponding_4_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute_corresponding'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__substitute_corresponding_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(term__substitute_corresponding_2_4_0,
		term__substitute_corresponding_4_0_i3);
MR_def_label(term__substitute_corresponding_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__substitute_corresponding_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(term__apply_substitution_3_0);
	}
MR_def_label(term__substitute_corresponding_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term.substitute_corresponding: different length lists", 53);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module47)
	MR_init_entry1(fn__term__substitute_corresponding_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__substitute_corresponding_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute_corresponding'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__substitute_corresponding_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__substitute_corresponding_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module48)
	MR_init_entry1(term__substitute_corresponding_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__substitute_corresponding_list_4_0);
	MR_init_label2(term__substitute_corresponding_list_4_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute_corresponding_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__substitute_corresponding_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(term__substitute_corresponding_2_4_0,
		term__substitute_corresponding_list_4_0_i3);
MR_def_label(term__substitute_corresponding_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__substitute_corresponding_list_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(term__apply_substitution_to_list_3_0);
	}
MR_def_label(term__substitute_corresponding_list_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term.substitute_corresponding_list: different length lists", 58);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module49)
	MR_init_entry1(fn__term__substitute_corresponding_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__substitute_corresponding_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'substitute_corresponding_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__substitute_corresponding_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__substitute_corresponding_list_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module50)
	MR_init_entry1(fn__term__apply_rec_substitution_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__apply_rec_substitution_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_substitution'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__apply_rec_substitution_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__apply_rec_substitution_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module51)
	MR_init_entry1(fn__term__apply_rec_substitution_to_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__apply_rec_substitution_to_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_rec_substitution_to_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__apply_rec_substitution_to_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__apply_rec_substitution_to_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module52)
	MR_init_entry1(fn__term__apply_substitution_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__apply_substitution_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_substitution'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__apply_substitution_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__apply_substitution_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module53)
	MR_init_entry1(fn__term__apply_substitution_to_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__apply_substitution_to_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_substitution_to_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__apply_substitution_to_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__apply_substitution_to_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module54)
	MR_init_entry1(term__relabel_variable_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__relabel_variable_4_0);
	MR_init_label6(term__relabel_variable_4_0,4,3,9,8,10,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'relabel_variable'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__relabel_variable_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__relabel_variable_4_0_i3);
	}
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(term__relabel_variables_4_0,
		term__relabel_variable_4_0_i4);
MR_def_label(term__relabel_variable_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(term__relabel_variable_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	if ((MR_sv(4) == MR_r3)) {
		MR_GOTO_LAB(term__relabel_variable_4_0_i9);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_GOTO_LAB(term__relabel_variable_4_0_i8);
MR_def_label(term__relabel_variable_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_GOTO_LAB(term__relabel_variable_4_0_i10);
MR_def_label(term__relabel_variable_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(3))) {
		MR_GOTO_LAB(term__relabel_variable_4_0_i6);
	}
MR_def_label(term__relabel_variable_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(term__relabel_variable_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module55)
	MR_init_entry1(term__relabel_variables_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__relabel_variables_4_0);
	MR_init_label3(term__relabel_variables_4_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'relabel_variables'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__relabel_variables_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__relabel_variables_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term__relabel_variables_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(term__relabel_variable_4_0,
		term__relabel_variables_4_0_i4);
MR_def_label(term__relabel_variables_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(term__relabel_variables_4_0,
		term__relabel_variables_4_0_i5);
MR_def_label(term__relabel_variables_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module56)
	MR_init_entry1(fn__term__relabel_variable_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__relabel_variable_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'relabel_variable'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__relabel_variable_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__relabel_variable_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module57)
	MR_init_entry1(fn__term__relabel_variables_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__relabel_variables_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'relabel_variables'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__relabel_variables_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__relabel_variables_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module58)
	MR_init_entry1(term__apply_variable_renaming_to_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__apply_variable_renaming_to_var_3_0);
	MR_init_label2(term__apply_variable_renaming_to_var_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__apply_variable_renaming_to_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__apply_variable_renaming_to_var_3_0_i4);
MR_def_label(term__apply_variable_renaming_to_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__apply_variable_renaming_to_var_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(term__apply_variable_renaming_to_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module59)
	MR_init_entry1(term__apply_variable_renaming_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__apply_variable_renaming_3_0);
	MR_init_label4(term__apply_variable_renaming_3_0,4,3,8,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__apply_variable_renaming_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__apply_variable_renaming_3_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(term__apply_variable_renaming_to_list_3_0,
		term__apply_variable_renaming_3_0_i4);
MR_def_label(term__apply_variable_renaming_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(term__apply_variable_renaming_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(1, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__apply_variable_renaming_3_0_i8);
MR_def_label(term__apply_variable_renaming_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__apply_variable_renaming_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(term__apply_variable_renaming_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module60)
	MR_init_entry1(term__apply_variable_renaming_to_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__apply_variable_renaming_to_list_3_0);
	MR_init_label3(term__apply_variable_renaming_to_list_3_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__apply_variable_renaming_to_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__apply_variable_renaming_to_list_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term__apply_variable_renaming_to_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(term__apply_variable_renaming_3_0,
		term__apply_variable_renaming_to_list_3_0_i4);
MR_def_label(term__apply_variable_renaming_to_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(term__apply_variable_renaming_to_list_3_0,
		term__apply_variable_renaming_to_list_3_0_i5);
MR_def_label(term__apply_variable_renaming_to_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module61)
	MR_init_entry1(fn__term__apply_variable_renaming_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__apply_variable_renaming_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__apply_variable_renaming_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__apply_variable_renaming_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module62)
	MR_init_entry1(fn__term__apply_variable_renaming_to_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__apply_variable_renaming_to_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__apply_variable_renaming_to_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__apply_variable_renaming_to_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module63)
	MR_init_entry1(fn__term__apply_variable_renaming_to_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__apply_variable_renaming_to_var_2_0);
	MR_init_label2(fn__term__apply_variable_renaming_to_var_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__apply_variable_renaming_to_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__term__apply_variable_renaming_to_var_2_0_i4);
MR_def_label(fn__term__apply_variable_renaming_to_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term__apply_variable_renaming_to_var_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__term__apply_variable_renaming_to_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module64)
	MR_init_entry1(term__apply_variable_renaming_to_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__apply_variable_renaming_to_vars_3_0);
	MR_init_label4(term__apply_variable_renaming_to_vars_3_0,27,6,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__apply_variable_renaming_to_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(term__apply_variable_renaming_to_vars_3_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(term__apply_variable_renaming_to_vars_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__apply_variable_renaming_to_vars_3_0_i6);
MR_def_label(term__apply_variable_renaming_to_vars_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__apply_variable_renaming_to_vars_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_localcall_lab(term__apply_variable_renaming_to_vars_3_0,
		term__apply_variable_renaming_to_vars_3_0_i9);
MR_def_label(term__apply_variable_renaming_to_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_sv(3) = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(term__apply_variable_renaming_to_vars_3_0,
		term__apply_variable_renaming_to_vars_3_0_i9);
MR_def_label(term__apply_variable_renaming_to_vars_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module65)
	MR_init_entry1(fn__term__apply_variable_renaming_to_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__apply_variable_renaming_to_vars_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_variable_renaming_to_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__apply_variable_renaming_to_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__apply_variable_renaming_to_vars_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module66)
	MR_init_entry1(term__is_ground_in_bindings_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__is_ground_in_bindings_2_0);
	MR_init_label4(term__is_ground_in_bindings_2_0,22,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_ground_in_bindings'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__is_ground_in_bindings_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(term__is_ground_in_bindings_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(term__is_ground_in_bindings_2_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(term__is_ground_in_bindings_list_2_0);
MR_def_label(term__is_ground_in_bindings_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term__is_ground_in_bindings_2_0_i8);
MR_def_label(term__is_ground_in_bindings_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__is_ground_in_bindings_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(term__is_ground_in_bindings_2_0_i22);
MR_def_label(term__is_ground_in_bindings_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module67)
	MR_init_entry1(term__is_ground_in_bindings_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__is_ground_in_bindings_list_2_0);
	MR_init_label4(term__is_ground_in_bindings_list_2_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_ground_in_bindings_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term__is_ground_in_bindings_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(term__is_ground_in_bindings_list_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(term__is_ground_in_bindings_list_2_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(term__is_ground_in_bindings_2_0,
		term__is_ground_in_bindings_list_2_0_i4);
MR_def_label(term__is_ground_in_bindings_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__is_ground_in_bindings_list_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(term__is_ground_in_bindings_list_2_0_i17);
MR_def_label(term__is_ground_in_bindings_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(term__is_ground_in_bindings_list_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module68)
	MR_init_entry1(term__init_var_supply_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__init_var_supply_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_var_supply'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__init_var_supply_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module69)
	MR_init_entry1(term__init_var_supply_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__init_var_supply_1_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_var_supply'/1 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__init_var_supply_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module70)
	MR_init_entry1(fn__term__init_var_supply_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__init_var_supply_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_var_supply'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__init_var_supply_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module71)
	MR_init_entry1(term__create_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__create_var_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__create_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module72)
	MR_init_entry1(fn__term__var_id_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__var_id_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__var_id_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module73)
	MR_init_entry1(term__var_to_int_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__var_to_int_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_to_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__var_to_int_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module74)
	MR_init_entry1(fn__term__var_to_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__var_to_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_to_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__var_to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module75)
	MR_init_entry1(term__context_line_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__context_line_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'context_line'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__context_line_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module76)
	MR_init_entry1(fn__term__context_line_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__context_line_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'context_line'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__context_line_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module77)
	MR_init_entry1(term__context_file_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__context_file_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'context_file'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__context_file_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module78)
	MR_init_entry1(fn__term__context_file_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__context_file_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'context_file'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__context_file_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module79)
	MR_init_entry1(term__context_init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__context_init_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'context_init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__context_init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module80)
	MR_init_entry1(fn__term__context_init_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__context_init_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'context_init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__context_init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module81)
	MR_init_entry1(term__term_list_to_var_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__term_list_to_var_list_2_0);
	MR_init_label3(term__term_list_to_var_list_2_0,31,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_list_to_var_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__term_list_to_var_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term__term_list_to_var_list_2_0_i31);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term__term_list_to_var_list_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(term__term_list_to_var_list_2_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(term__term_list_to_var_list_2_0,
		term__term_list_to_var_list_2_0_i5);
MR_def_label(term__term_list_to_var_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term__term_list_to_var_list_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(term__term_list_to_var_list_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module82)
	MR_init_entry1(fn__term__term_list_to_var_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__term_list_to_var_list_1_0);
	MR_init_label2(fn__term__term_list_to_var_list_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_list_to_var_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__term_list_to_var_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(term__term_list_to_var_list_2_0,
		fn__term__term_list_to_var_list_1_0_i3);
MR_def_label(fn__term__term_list_to_var_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term__term_list_to_var_list_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__term__term_list_to_var_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term.term_list_to_var_list: not all vars", 40);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module83)
	MR_init_entry1(term__var_list_to_term_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__var_list_to_term_list_2_0);
	MR_init_label3(term__var_list_to_term_list_2_0,7,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_list_to_term_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__var_list_to_term_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(term__var_list_to_term_list_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(term__var_list_to_term_list_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break;
	} /* end while */
MR_def_label(term__var_list_to_term_list_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(term__var_list_to_term_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module84)
	MR_init_entry1(fn__term__var_list_to_term_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__var_list_to_term_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_list_to_term_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__var_list_to_term_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term__var_list_to_term_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module85)
	MR_init_entry1(term__generic_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__generic_term_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generic_term'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__generic_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module86)
	MR_init_entry1(term__coerce_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__coerce_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coerce'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__coerce_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module87)
	MR_init_entry1(fn__term__coerce_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__coerce_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coerce'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__coerce_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module88)
	MR_init_entry1(term__coerce_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__coerce_var_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coerce_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__coerce_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module89)
	MR_init_entry1(fn__term__coerce_var_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__coerce_var_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coerce_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__coerce_var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module90)
	MR_init_entry1(term__coerce_var_supply_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term__coerce_var_supply_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coerce_var_supply'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term__coerce_var_supply_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module91)
	MR_init_entry1(fn__term__coerce_var_supply_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__coerce_var_supply_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'coerce_var_supply'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__coerce_var_supply_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module92)
	MR_init_entry1(fn__term__var_supply_max_var_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__var_supply_max_var_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_supply_max_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__var_supply_max_var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module93)
	MR_init_entry1(fn__term__var_supply_num_allocated_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__var_supply_num_allocated_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_supply_num_allocated'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__var_supply_num_allocated_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module94)
	MR_init_entry1(__Unify___term__const_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__const_0_0);
	MR_init_label6(__Unify___term__const_0_0,5,7,9,27,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__const_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term__const_0_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___term__const_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___term__const_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term__const_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___term__const_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___term__const_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___term__const_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___term__const_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___term__const_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___term__const_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___term__const_0_0_i11);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___term__const_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___term__const_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term__const_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___term__const_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___term__const_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module95)
	MR_init_entry1(__Compare___term__const_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__const_0_0);
	MR_init_label10(__Compare___term__const_0_0,8,7,13,14,5,18,20,19,24,16)
	MR_init_label10(__Compare___term__const_0_0,28,29,31,78,30,26,39,40,41,43)
	MR_init_label9(__Compare___term__const_0_0,86,37,48,49,50,51,91,52,92)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__const_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i92);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i7);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term__const_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr3;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 7003 "term.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Compare___term__const_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i86);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i91);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i19);
	}
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i86);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i91);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i26);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i30);
	}
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(2), 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term__const_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 7134 "term.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Compare___term__const_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i86);
	}
MR_def_label(__Compare___term__const_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i91);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i37);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i39);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i91);
	}
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	if ((MR_word_to_float(MR_r2) >= MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i43);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r2) <= MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i78);
	}
MR_def_label(__Compare___term__const_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i48);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i50);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i51);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term__const_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 7263 "term.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i52);
	}
	}
MR_def_label(__Compare___term__const_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__const_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term__const_0_0_i86);
	}
MR_def_label(__Compare___term__const_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module96)
	MR_init_entry1(__Unify___term__context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__context_0_0);
	MR_init_label2(__Unify___term__context_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term__context_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___term__context_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term__context_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term__context_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module97)
	MR_init_entry1(__Compare___term__context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__context_0_0);
	MR_init_label7(__Compare___term__context_0_0,6,7,10,13,24,14,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term__context_0_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term__context_0_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 7385 "term.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term__context_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___term__context_0_0_i10);
	}
MR_def_label(__Compare___term__context_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term__context_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___term__context_0_0_i10);
MR_def_label(__Compare___term__context_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___term__context_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term__context_0_0_i18);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___term__context_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__context_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___term__context_0_0_i14);
	}
MR_def_label(__Compare___term__context_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__context_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___term__context_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module98)
	MR_init_entry1(__Unify___term__generic_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__generic_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__generic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module99)
	MR_init_entry1(__Compare___term__generic_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__generic_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__generic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(term_module100)
	MR_init_entry1(__Unify___term__substitution_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__substitution_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__substitution_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(term_module101)
	MR_init_entry1(__Compare___term__substitution_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__substitution_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__substitution_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module102)
	MR_init_entry1(__Unify___term__substitution_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__substitution_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__substitution_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module103)
	MR_init_entry1(__Compare___term__substitution_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__substitution_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__substitution_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module104)
	MR_init_entry1(__Unify___term__term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__term_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___term__term_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module105)
	MR_init_entry1(__Compare___term__term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__term_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___term__term_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(term_module106)
	MR_init_entry1(__Unify___term__term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__term_1_0);
	MR_init_label6(__Unify___term__term_1_0,7,10,26,5,58,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___term__term_1_0_i26);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(5) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___term__term_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___term__term_1_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___term__const_0_0,
		__Unify___term__term_1_0_i7);
MR_def_label(__Unify___term__term_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___term__term_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___term__term_1_0_i10);
MR_def_label(__Unify___term__term_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___term__term_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___term__term_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term__term_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___term__term_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tempr1;
	MR_tempr4 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_tempr4, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___term__term_1_0_i58);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	if ((MR_sv(1) != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___term__term_1_0_i1);
	}
	}
MR_def_label(__Unify___term__term_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___term__term_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(term_module107)
	MR_init_entry1(__Compare___term__term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__term_1_0);
	MR_init_label10(__Compare___term__term_1_0,3,2,9,14,7,5,21,24,25,27)
	MR_init_label1(__Compare___term__term_1_0,76)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___term__term_1_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(__Compare___term__term_1_0_i2);
MR_def_label(__Compare___term__term_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___term__term_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___term__term_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(__Compare___term__term_1_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(5);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__const_0_0,
		__Compare___term__term_1_0_i9);
MR_def_label(__Compare___term__term_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term__term_1_0_i76);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___term__term_1_0_i14);
MR_def_label(__Compare___term__term_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term__term_1_0_i76);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___term__term_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___term__term_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(__Compare___term__term_1_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___term__term_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(5);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___term__term_1_0_i24);
	}
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(__Compare___term__term_1_0_i27);
	}
MR_def_label(__Compare___term__term_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r6 != MR_r5)) {
		MR_GOTO_LAB(__Compare___term__term_1_0_i25);
	}
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Integer) 0;
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(__Compare___term__term_1_0_i27);
MR_def_label(__Compare___term__term_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Integer) 2;
	MR_sv(5) = MR_r3;
MR_def_label(__Compare___term__term_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term__term_1_0_i76);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(5);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
	}
MR_def_label(__Compare___term__term_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module108)
	MR_init_entry1(__Unify___term__term_to_type_arg_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__term_to_type_arg_context_0_0);
	MR_init_label3(__Unify___term__term_to_type_arg_context_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__term_to_type_arg_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_arg_context_0_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__const_0_0,
		__Unify___term__term_to_type_arg_context_0_0_i4);
MR_def_label(__Unify___term__term_to_type_arg_context_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_arg_context_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___term__term_to_type_arg_context_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
MR_def_label(__Unify___term__term_to_type_arg_context_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term__term_to_type_arg_context_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module109)
	MR_init_entry1(__Compare___term__term_to_type_arg_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__term_to_type_arg_context_0_0);
	MR_init_label7(__Compare___term__term_to_type_arg_context_0_0,3,2,5,10,11,13,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__term_to_type_arg_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_arg_context_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___term__term_to_type_arg_context_0_0_i2);
MR_def_label(__Compare___term__term_to_type_arg_context_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___term__term_to_type_arg_context_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__const_0_0,
		__Compare___term__term_to_type_arg_context_0_0_i5);
MR_def_label(__Compare___term__term_to_type_arg_context_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_arg_context_0_0_i39);
	}
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___term__term_to_type_arg_context_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___term__term_to_type_arg_context_0_0_i13);
MR_def_label(__Compare___term__term_to_type_arg_context_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___term__term_to_type_arg_context_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___term__term_to_type_arg_context_0_0_i13);
MR_def_label(__Compare___term__term_to_type_arg_context_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___term__term_to_type_arg_context_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_arg_context_0_0_i39);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___term__term_to_type_arg_context_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module110)
	MR_init_entry1(__Unify___term__term_to_type_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__term_to_type_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__term_to_type_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, term_to_type_arg_context);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module111)
	MR_init_entry1(__Compare___term__term_to_type_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__term_to_type_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__term_to_type_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, term_to_type_arg_context);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___type_desc__type_desc_0_0);

MR_BEGIN_MODULE(term_module112)
	MR_init_entry1(__Unify___term__term_to_type_error_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__term_to_type_error_1_0);
	MR_init_label8(__Unify___term__term_to_type_error_1_0,8,7,27,5,13,15,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__term_to_type_error_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_error_1_0_i27);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_sv(6) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_error_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_error_1_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tempr3;
	if ((MR_tempr3 == MR_sv(6))) {
		MR_GOTO_LAB(__Unify___term__term_to_type_error_1_0_i8);
	}
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_GOTO_LAB(__Unify___term__term_to_type_error_1_0_i7);
	}
MR_def_label(__Unify___term__term_to_type_error_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, term_to_type_arg_context);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___term__term_to_type_error_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___term__term_to_type_error_1_0_i1);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, term_to_type_arg_context);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___term__term_to_type_error_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term__term_to_type_error_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_error_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__term_1_0,
		__Unify___term__term_to_type_error_1_0_i13);
MR_def_label(__Unify___term__term_to_type_error_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_error_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___type_desc__type_desc_0_0,
		__Unify___term__term_to_type_error_1_0_i15);
MR_def_label(__Unify___term__term_to_type_error_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_error_1_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___term__term_to_type_error_1_0_i17);
MR_def_label(__Unify___term__term_to_type_error_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_error_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, term_to_type_arg_context);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___term__term_to_type_error_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___type_desc__type_desc_0_0);

MR_BEGIN_MODULE(term_module113)
	MR_init_entry1(__Compare___term__term_to_type_error_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__term_to_type_error_1_0);
	MR_init_label10(__Compare___term__term_to_type_error_1_0,3,2,10,11,13,7,5,19,21,25)
	MR_init_label2(__Compare___term__term_to_type_error_1_0,29,84)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__term_to_type_error_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i2);
MR_def_label(__Compare___term__term_to_type_error_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___term__term_to_type_error_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(3);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i13);
	}
MR_def_label(__Compare___term__term_to_type_error_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i11);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i13);
MR_def_label(__Compare___term__term_to_type_error_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(3) = MR_r2;
MR_def_label(__Compare___term__term_to_type_error_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i84);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, term_to_type_arg_context);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___term__term_to_type_error_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___term__term_to_type_error_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___term__term_to_type_error_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_sv(1);
	MR_sv(6) = MR_tfield(0, MR_tempr7, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr7, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr7, 3);
	MR_tempr8 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tempr8, 3);
	MR_tempr2 = MR_tfield(0, MR_tempr8, 2);
	MR_tempr3 = MR_tfield(0, MR_tempr8, 1);
	MR_tempr4 = MR_tempr7;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr8;
	MR_sv(3) = MR_tempr2;
	MR_tempr6 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	MR_r3 = MR_tfield(0, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(__Compare___term__term_1_0,
		__Compare___term__term_to_type_error_1_0_i21);
MR_def_label(__Compare___term__term_to_type_error_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i84);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___type_desc__type_desc_0_0,
		__Compare___term__term_to_type_error_1_0_i25);
MR_def_label(__Compare___term__term_to_type_error_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i84);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___term__term_to_type_error_1_0_i29);
MR_def_label(__Compare___term__term_to_type_error_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_error_1_0_i84);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, term_to_type_arg_context);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___term__term_to_type_error_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module114)
	MR_init_entry1(__Unify___term__term_to_type_result_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__term_to_type_result_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__term_to_type_result_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___term__term_to_type_result_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module115)
	MR_init_entry1(__Compare___term__term_to_type_result_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__term_to_type_result_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__term_to_type_result_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___term__term_to_type_result_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(term_module116)
	MR_init_entry1(__Unify___term__term_to_type_result_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__term_to_type_result_2_0);
	MR_init_label3(__Unify___term__term_to_type_result_2_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__term_to_type_result_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_result_2_0_i16);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_result_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_result_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___term__term_to_type_error_1_0);
	}
MR_def_label(__Unify___term__term_to_type_result_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term__term_to_type_result_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___term__term_to_type_result_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___term__term_to_type_result_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(term_module117)
	MR_init_entry1(__Compare___term__term_to_type_result_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__term_to_type_result_2_0);
	MR_init_label5(__Compare___term__term_to_type_result_2_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__term_to_type_result_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_result_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___term__term_to_type_result_2_0_i2);
MR_def_label(__Compare___term__term_to_type_result_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___term__term_to_type_result_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_result_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_result_2_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___term__term_to_type_error_1_0);
MR_def_label(__Compare___term__term_to_type_result_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term__term_to_type_result_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___term__term_to_type_result_2_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___term__term_to_type_result_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module118)
	MR_init_entry1(__Unify___term__var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__var_0_0);
	MR_init_label1(__Unify___term__var_0_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tempr2;
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___term__var_0_0_i3);
	}
	MR_r1 = (MR_tempr2 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___term__var_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module119)
	MR_init_entry1(__Compare___term__var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__var_0_0);
	MR_init_label2(__Compare___term__var_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___term__var_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___term__var_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___term__var_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___term__var_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module120)
	MR_init_entry1(__Unify___term__var_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__var_1_0);
	MR_init_label1(__Unify___term__var_1_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___term__var_1_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___term__var_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module121)
	MR_init_entry1(__Compare___term__var_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__var_1_0);
	MR_init_label3(__Compare___term__var_1_0,4,11,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___term__var_1_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(__Compare___term__var_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__var_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(2))) {
		MR_GOTO_LAB(__Compare___term__var_1_0_i5);
	}
MR_def_label(__Compare___term__var_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__var_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module122)
	MR_init_entry1(__Unify___term__var_supply_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term__var_supply_1_0);
	MR_init_label1(__Unify___term__var_supply_1_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term__var_supply_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___term__var_supply_1_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___term__var_supply_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module123)
	MR_init_entry1(__Compare___term__var_supply_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term__var_supply_1_0);
	MR_init_label3(__Compare___term__var_supply_1_0,4,11,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term__var_supply_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___term__var_supply_1_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(__Compare___term__var_supply_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__var_supply_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(2))) {
		MR_GOTO_LAB(__Compare___term__var_supply_1_0_i5);
	}
MR_def_label(__Compare___term__var_supply_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___term__var_supply_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module124)
	MR_init_entry1(fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module125)
	MR_init_entry1(fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module126)
	MR_init_entry1(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generic_term__[1]_0'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__univ__univ_1_0);
MR_decl_entry(fn__type_desc__type_of_1_0);
MR_decl_entry(fn__array__array_1_0);
MR_decl_entry(fn__bitmap__from_string_1_0);
MR_decl_entry(string__first_char_3_1);
MR_decl_entry(univ__type_to_univ_2_0);
MR_decl_entry(fn__version_array__version_array_1_0);

MR_BEGIN_MODULE(term_module127)
	MR_init_entry1(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0);
	MR_init_label10(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,22,25,30,3,41,43,46,48,49,51)
	MR_init_label10(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,52,33,61,56,67,73,79,89,65,101)
	MR_init_label8(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,103,106,108,109,111,112,114,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__term_to_univ_special_case__[6]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("univ", 4)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i3);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("univ", 4)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tempr11 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr11, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("univ", 4)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr11, 1);
	MR_r3 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr4 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr5, MR_string_const(":", 1)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr6 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tempr6;
	if (MR_LTAGS_TEST(MR_tempr6,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr7 = MR_tfield(1, MR_tempr6, 1);
	MR_r4 = MR_tempr7;
	if (MR_LTAGS_TEST(MR_tempr7,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr7, 1);
	if (MR_LTAGS_TESTR(MR_tempr5,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr5 = MR_tfield(1, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr5,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr8 = MR_tfield(1, MR_tempr7, 0);
	MR_r3 = MR_tempr8;
	if (MR_PTAG_TESTR(MR_tempr8,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r4 = MR_tfield(0, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r4 = MR_tfield(0, MR_tempr8, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr9 = MR_tfield(0, MR_tempr8, 0);
	MR_r4 = MR_tempr9;
	if (MR_PTAG_TESTR(MR_tempr9,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr10 = MR_tfield(0, MR_tempr5, 0);
	MR_r3 = MR_tempr10;
	if (MR_PTAG_TESTR(MR_tempr10,1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i22);
	}
	MR_tempr5 = MR_tfield(0, MR_tempr9, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr5, MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_tempr10, 0);
	}
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i30);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("string", 6)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_r3, 0);
	}
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i30);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i30);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i114);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i33);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr4 = MR_r5;
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(type_desc__has_type_2_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i41);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(7) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i43);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = MR_sv(6);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__try_term_to_univ_2_4_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i46);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i48);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(type_desc__has_type_2_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i49);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i51);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array__array_1_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i52);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(array, array);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i114);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("bitmap", 6)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i56);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("bitmap", 6)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__bitmap__from_string_1_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i61);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bitmap, bitmap);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i114);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i65);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i67);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i114);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i73);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i114);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("string", 6)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i79);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i114);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("character", 9)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(string__first_char_3_1,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i89);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i114);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("version_array", 13)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("version_array", 13)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr4 = MR_r5;
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("version_array", 13)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i1);
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(type_desc__has_type_2_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i101);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(7) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i103);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = MR_sv(6);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__try_term_to_univ_2_4_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i106);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i108);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(type_desc__has_type_2_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i109);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i111);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__version_array__version_array_1_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i112);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0_i114);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module128)
	MR_init_entry1(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0);
	MR_init_label2(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__type_info_to_term__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0
	TypeDesc = MR_r2;
{
#line 76 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 9534 "term.c"
	MR_tempr1 = TypeCtorDesc;
	MR_r2 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0
	TypeCtorDesc = MR_tempr1;
{
#line 142 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 9577 "term.c"
	MR_tempr2 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeCtorDesc;
	MR_String	TypeCtorModuleName;
	MR_String	TypeCtorName;
	MR_Integer	TypeCtorArity;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0
	TypeCtorDesc = MR_tempr1;
{
#line 142 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
};}
#line 9619 "term.c"
	MR_tempr3 = (MR_Word) TypeCtorName;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	}
	MR_np_call_localret_ent(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0,
		f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i2);
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr4 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_tfield(0, MR_r1, 1) = MR_tempr3;
	MR_tfield(0, MR_r1, 2) = MR_tempr4;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module129)
	MR_init_entry1(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___term__generic_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module130)
	MR_init_entry1(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___term__generic_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module131)
	MR_init_entry1(fn__f_116_101_114_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_101_114_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_101_114_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module132)
	MR_init_entry1(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_init_label2(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred__member__[T = var(V_2)]_0_1__[2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	if ((MR_r2 == MR_tempr2)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0_i3);
	}
	MR_r3 = MR_tempr1;
	MR_np_localtailcall(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	}
MR_def_label(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_module133)
	MR_init_entry1(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0);
	MR_init_label3(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__map__ho10__[1, 2, 4, 5]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(f_116_101_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,
		f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0_i4);
MR_def_label(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0,
		f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0_i5);
MR_def_label(f_116_101_114_109_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(term_module134)
	MR_init_entry1(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0);
	MR_init_label4(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,25,4,27,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__do_foldr_func__ho11__[1, 2, 4, 5]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (((MR_Integer) 0 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 287 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 9884 "term.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i4);
	MR_tempr1 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	continue;
	}
	break;
	} /* end while */
MR_def_label(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i27);
MR_def_label(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i25);
MR_def_label(fn__f_116_101_114_109_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__term_maybe_bunch_0(void)
{
	term_module0();
	term_module1();
	term_module2();
	term_module3();
	term_module4();
	term_module5();
	term_module6();
	term_module7();
	term_module8();
	term_module9();
	term_module10();
	term_module11();
	term_module12();
	term_module13();
	term_module14();
	term_module15();
	term_module16();
	term_module17();
	term_module18();
	term_module19();
	term_module20();
	term_module21();
	term_module22();
	term_module23();
	term_module24();
	term_module25();
	term_module26();
	term_module27();
	term_module28();
	term_module29();
	term_module30();
	term_module31();
	term_module32();
	term_module33();
	term_module34();
	term_module35();
	term_module36();
	term_module37();
	term_module38();
	term_module39();
}

static void mercury__term_maybe_bunch_1(void)
{
	term_module40();
	term_module41();
	term_module42();
	term_module43();
	term_module44();
	term_module45();
	term_module46();
	term_module47();
	term_module48();
	term_module49();
	term_module50();
	term_module51();
	term_module52();
	term_module53();
	term_module54();
	term_module55();
	term_module56();
	term_module57();
	term_module58();
	term_module59();
	term_module60();
	term_module61();
	term_module62();
	term_module63();
	term_module64();
	term_module65();
	term_module66();
	term_module67();
	term_module68();
	term_module69();
	term_module70();
	term_module71();
	term_module72();
	term_module73();
	term_module74();
	term_module75();
	term_module76();
	term_module77();
	term_module78();
	term_module79();
}

static void mercury__term_maybe_bunch_2(void)
{
	term_module80();
	term_module81();
	term_module82();
	term_module83();
	term_module84();
	term_module85();
	term_module86();
	term_module87();
	term_module88();
	term_module89();
	term_module90();
	term_module91();
	term_module92();
	term_module93();
	term_module94();
	term_module95();
	term_module96();
	term_module97();
	term_module98();
	term_module99();
	term_module100();
	term_module101();
	term_module102();
	term_module103();
	term_module104();
	term_module105();
	term_module106();
	term_module107();
	term_module108();
	term_module109();
	term_module110();
	term_module111();
	term_module112();
	term_module113();
	term_module114();
	term_module115();
	term_module116();
	term_module117();
	term_module118();
	term_module119();
}

static void mercury__term_maybe_bunch_3(void)
{
	term_module120();
	term_module121();
	term_module122();
	term_module123();
	term_module124();
	term_module125();
	term_module126();
	term_module127();
	term_module128();
	term_module129();
	term_module130();
	term_module131();
	term_module132();
	term_module133();
	term_module134();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__term__init(void);
void mercury__term__init_type_tables(void);
void mercury__term__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__term__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__term__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__term__init_threadscope_string_table(void);
#endif

void mercury__term__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__term_maybe_bunch_0();
	mercury__term_maybe_bunch_1();
	mercury__term_maybe_bunch_2();
	mercury__term_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_const_0,
		term__const_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_context_0,
		term__context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_generic_0,
		term__generic_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_substitution_1,
		term__substitution_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_substitution_0,
		term__substitution_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_term_1,
		term__term_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_term_0,
		term__term_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_term_to_type_arg_context_0,
		term__term_to_type_arg_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_term_to_type_context_0,
		term__term_to_type_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_term_to_type_error_1,
		term__term_to_type_error_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_term_to_type_result_2,
		term__term_to_type_result_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_term_to_type_result_1,
		term__term_to_type_result_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_var_1,
		term__var_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_var_0,
		term__var_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term__type_ctor_info_var_supply_1,
		term__var_supply_1_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__, 5) =
			MR_ENTRY_AP(fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__, 6) =
			MR_ENTRY_AP(fn__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__term__init_debugger();
}

void mercury__term__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_const_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_generic_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_substitution_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_substitution_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_term_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_term_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_term_to_type_arg_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_term_to_type_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_term_to_type_error_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_term_to_type_result_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_term_to_type_result_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_var_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_var_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term__type_ctor_info_var_supply_1);
	}
}


void mercury__term__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__term__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__term);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__term__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__term__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
