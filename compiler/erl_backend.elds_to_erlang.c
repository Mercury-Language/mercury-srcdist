/*
** Automatically generated from `elds_to_erlang.m'
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
INIT mercury__erl_backend__elds_to_erlang__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "erl_backend.elds_to_erlang.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "erl_backend.elds_to_erlang.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "erl_backend.elds_to_erlang.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "erl_backend.elds_to_erlang.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "erl_backend.elds_to_erlang.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "erl_backend.elds_to_erlang.c"
#line 49 "erl_backend.elds_to_erlang.c"
#include "erl_backend.elds_to_erlang.mh"

#line 52 "erl_backend.elds_to_erlang.c"
#line 53 "erl_backend.elds_to_erlang.c"
#ifndef ERL_BACKEND__ELDS_TO_ERLANG_DECL_GUARD
#define ERL_BACKEND__ELDS_TO_ERLANG_DECL_GUARD

#line 57 "erl_backend.elds_to_erlang.c"
#line 58 "erl_backend.elds_to_erlang.c"

#endif
#line 61 "erl_backend.elds_to_erlang.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
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


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_9 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_10 {
	MR_String f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_11 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_erl_backend__elds_to_erlang__type_ctor_info_indent_0,
	mercury_data_erl_backend__elds_to_erlang__type_ctor_info_string_or_atom_0;
MR_decl_label8(erl_backend__elds_to_erlang__digit_then_e_4_0, 48,2,8,7,6,13,11,1)
MR_decl_label10(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0, 3,4,5,2,8,9,10,11,12,13)
MR_decl_label10(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0, 18,21,22,23,14,15,26,27,28,29)
MR_decl_label3(erl_backend__elds_to_erlang__indent_line_3_0, 10,3,12)
MR_decl_label8(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0, 4,5,6,7,9,10,11,20)
MR_decl_label1(erl_backend__elds_to_erlang__nl_indent_line_3_0, 2)
MR_decl_label10(erl_backend__elds_to_erlang__output_atom_3_0, 3,5,7,11,12,13,14,15,16,17)
MR_decl_label10(erl_backend__elds_to_erlang__output_atom_3_0, 18,19,20,21,22,23,24,25,26,27)
MR_decl_label10(erl_backend__elds_to_erlang__output_atom_3_0, 28,29,30,31,32,33,34,35,36,37)
MR_decl_label5(erl_backend__elds_to_erlang__output_atom_3_0, 10,9,2,40,42)
MR_decl_label1(erl_backend__elds_to_erlang__output_block_expr_6_0, 15)
MR_decl_label7(erl_backend__elds_to_erlang__output_case_6_0, 2,3,4,5,6,7,8)
MR_decl_label7(erl_backend__elds_to_erlang__output_catch_6_0, 2,3,4,5,6,7,8)
MR_decl_label5(erl_backend__elds_to_erlang__output_clause_6_0, 2,4,5,6,7)
MR_decl_label10(erl_backend__elds_to_erlang__output_defn_4_0, 4,14,16,17,18,19,20,82,5,23)
MR_decl_label1(erl_backend__elds_to_erlang__output_defn_4_0, 85)
MR_decl_label1(erl_backend__elds_to_erlang__output_do_no_edit_comment_3_0, 2)
MR_decl_label6(erl_backend__elds_to_erlang__output_elds_4_0, 2,3,4,6,7,9)
MR_decl_label10(erl_backend__elds_to_erlang__output_elds_binop_3_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label9(erl_backend__elds_to_erlang__output_elds_binop_3_0, 13,14,15,16,17,18,19,20,21)
MR_decl_label2(erl_backend__elds_to_erlang__output_env_var_directive_3_0, 2,4)
MR_decl_label10(erl_backend__elds_to_erlang__output_erl_file_5_0, 2,3,4,5,6,7,8,10,12,14)
MR_decl_label10(erl_backend__elds_to_erlang__output_erl_file_5_0, 15,16,17,18,20,22,23,25,26,27)
MR_decl_label10(erl_backend__elds_to_erlang__output_erl_file_5_0, 28,24,31,32,33,29,34,36,37,39)
MR_decl_label8(erl_backend__elds_to_erlang__output_erl_file_5_0, 54,41,42,40,44,45,47,49)
MR_decl_label10(erl_backend__elds_to_erlang__output_export_ann_6_0, 2,5,7,10,11,12,13,14,15,4)
MR_decl_label1(erl_backend__elds_to_erlang__output_exported_foreign_decl_code_3_0, 13)
MR_decl_label10(erl_backend__elds_to_erlang__output_expr_6_0, 196,6,7,8,5,3,13,14,12,17)
MR_decl_label10(erl_backend__elds_to_erlang__output_expr_6_0, 20,21,19,25,27,29,30,23,34,35)
MR_decl_label10(erl_backend__elds_to_erlang__output_expr_6_0, 36,37,38,40,33,44,43,48,47,51)
MR_decl_label10(erl_backend__elds_to_erlang__output_expr_6_0, 53,50,59,60,58,62,56,65,64,69)
MR_decl_label10(erl_backend__elds_to_erlang__output_expr_6_0, 70,68,73,74,75,116,77,78,79,76)
MR_decl_label10(erl_backend__elds_to_erlang__output_expr_6_0, 84,85,86,87,82,90,91,92,93,88)
MR_decl_label4(erl_backend__elds_to_erlang__output_expr_6_0, 94,72,96,97)
MR_decl_label10(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0, 27,4,7,8,9,10,13,14,15,29)
MR_decl_label8(erl_backend__elds_to_erlang__output_float_3_0, 2,4,6,7,8,9,10,3)
MR_decl_label10(erl_backend__elds_to_erlang__output_foreign_body_code_3_0, 2,4,5,6,7,8,9,10,11,12)
MR_decl_label3(erl_backend__elds_to_erlang__output_foreign_body_code_3_0, 13,14,15)
MR_decl_label10(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0, 2,4,5,6,7,8,9,10,11,12)
MR_decl_label3(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0, 13,14,15)
MR_decl_label8(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0, 3,2,5,6,7,8,9,10)
MR_decl_label8(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0, 2,3,4,6,7,8,9,10)
MR_decl_label7(erl_backend__elds_to_erlang__output_hrl_file_5_0, 2,14,15,16,17,24,26)
MR_decl_label3(erl_backend__elds_to_erlang__output_include_header_ann_4_0, 2,3,5)
MR_decl_label3(erl_backend__elds_to_erlang__output_init_fn_call_4_0, 2,3,4)
MR_decl_label10(erl_backend__elds_to_erlang__output_pred_proc_id_4_0, 2,3,4,5,7,13,14,16,12,17)
MR_decl_label10(erl_backend__elds_to_erlang__output_pred_proc_id_4_0, 18,19,24,28,29,20,21,34,30,39)
MR_decl_label10(erl_backend__elds_to_erlang__output_pred_proc_id_4_0, 40,41,42,43,44,45,10,47,8,50)
MR_decl_label5(erl_backend__elds_to_erlang__output_pred_proc_id_4_0, 51,54,55,52,56)
MR_decl_label8(erl_backend__elds_to_erlang__output_rtti_defn_4_0, 2,3,4,6,7,8,9,10)
MR_decl_label8(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0, 22,5,4,7,8,9,10,11)
MR_decl_label10(erl_backend__elds_to_erlang__output_rtti_id_4_0, 2,6,7,4,16,19,20,15,26,23)
MR_decl_label10(erl_backend__elds_to_erlang__output_rtti_id_4_0, 22,31,32,3,35,34,36,37,38,39)
MR_decl_label7(erl_backend__elds_to_erlang__output_rtti_id_4_0, 45,46,51,53,54,55,48)
MR_decl_label10(erl_backend__elds_to_erlang__output_term_6_0, 3,6,9,11,7,15,16,17,18,19)
MR_decl_label10(erl_backend__elds_to_erlang__output_term_6_0, 20,21,22,23,24,25,26,27,28,29)
MR_decl_label10(erl_backend__elds_to_erlang__output_term_6_0, 30,31,32,33,34,35,36,37,38,39)
MR_decl_label10(erl_backend__elds_to_erlang__output_term_6_0, 40,41,42,43,44,45,14,47,13,5)
MR_decl_label10(erl_backend__elds_to_erlang__output_term_6_0, 53,57,56,60,64,66,63,69,72,71)
MR_decl_label5(erl_backend__elds_to_erlang__output_term_6_0, 75,76,345,74,79)
MR_decl_label6(erl_backend__elds_to_erlang__output_toplevel_clause_5_0, 2,4,5,6,7,8)
MR_decl_label10(erl_backend__elds_to_erlang__output_tuple_6_0, 8,2,3,19,21,22,23,24,11,12)
MR_decl_label6(erl_backend__elds_to_erlang__output_tuple_6_0, 32,34,26,27,38,40)
MR_decl_label6(erl_backend__elds_to_erlang__output_var_4_0, 2,3,4,5,6,8)
MR_decl_label1(erl_backend__elds_to_erlang__output_var_string_3_0, 3)
MR_decl_label3(erl_backend__elds_to_erlang__output_var_string_2_3_0, 4,2,7)
MR_decl_label10(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0, 3,4,5,6,7,2,11,12,13,14)
MR_decl_label6(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0, 9,18,19,20,21,16)
MR_decl_label6(erl_backend__elds_to_erlang__reset_file_directive_2_0, 2,3,4,6,7,8)
MR_decl_label10(erl_backend__elds_to_erlang__write_with_escaping_2_4_0, 2,7,3,15,16,17,18,19,20,21)
MR_decl_label10(erl_backend__elds_to_erlang__write_with_escaping_2_4_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label10(erl_backend__elds_to_erlang__write_with_escaping_2_4_0, 32,33,34,35,36,37,38,39,40,41)
MR_decl_label7(erl_backend__elds_to_erlang__write_with_escaping_2_4_0, 42,43,44,45,13,48,49)
MR_decl_label1(fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0, 4)
MR_decl_label3(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0, 3,4,5)
MR_decl_label1(fn__erl_backend__elds_to_erlang__erlang_module_name_to_str_1_0, 2)
MR_decl_label6(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0, 3,2,4,5,6,7)
MR_decl_label9(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0, 2,5,7,8,9,10,4,12,3)
MR_def_extern_entry(erl_backend__elds_to_erlang__output_elds_4_0)
MR_decl_static(erl_backend__elds_to_erlang__write_with_escaping_4_0)
MR_decl_static(erl_backend__elds_to_erlang__reset_file_directive_2_0)
MR_decl_static(erl_backend__elds_to_erlang__output_exprs_6_0)
MR_decl_static(erl_backend__elds_to_erlang__digit_then_e_4_0)
MR_decl_static(erl_backend__elds_to_erlang__output_float_3_0)
MR_decl_static(erl_backend__elds_to_erlang__space_2_0)
MR_decl_static(erl_backend__elds_to_erlang__output_var_string_3_0)
MR_decl_static(erl_backend__elds_to_erlang__output_var_4_0)
MR_decl_static(erl_backend__elds_to_erlang__output_atom_3_0)
MR_decl_static(erl_backend__elds_to_erlang__indent_line_3_0)
MR_decl_static(erl_backend__elds_to_erlang__nl_indent_line_3_0)
MR_decl_static(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0)
MR_decl_static(fn__erl_backend__elds_to_erlang__erlang_module_name_to_str_1_0)
MR_decl_static(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0)
MR_decl_static(erl_backend__elds_to_erlang__output_pred_proc_id_4_0)
MR_decl_static(erl_backend__elds_to_erlang__output_rtti_id_4_0)
MR_decl_static(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0)
MR_decl_static(erl_backend__elds_to_erlang__output_elds_binop_3_0)
MR_decl_static(erl_backend__elds_to_erlang__output_clause_6_0)
MR_decl_static(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0)
MR_decl_static(erl_backend__elds_to_erlang__output_block_expr_6_0)
MR_decl_static(erl_backend__elds_to_erlang__output_expr_6_0)
MR_decl_static(erl_backend__elds_to_erlang__output_catch_6_0)
MR_decl_static(erl_backend__elds_to_erlang__output_term_6_0)
MR_decl_static(erl_backend__elds_to_erlang__output_tuple_6_0)
MR_decl_static(erl_backend__elds_to_erlang__output_toplevel_clause_5_0)
MR_def_extern_entry(erl_backend__elds_to_erlang__output_defn_4_0)
MR_decl_static(erl_backend__elds_to_erlang__output_do_no_edit_comment_3_0)
MR_decl_static(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0)
MR_decl_static(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0)
MR_decl_static(fn__erl_backend__elds_to_erlang__main_wrapper_code_0_0)
MR_decl_static(fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0)
MR_decl_static(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0)
MR_decl_static(erl_backend__elds_to_erlang__output_erl_file_5_0)
MR_decl_static(erl_backend__elds_to_erlang__output_export_ann_6_0)
MR_decl_static(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0)
MR_decl_static(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0)
MR_decl_static(fn__erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_0)
MR_decl_static(erl_backend__elds_to_erlang__output_env_var_directive_3_0)
MR_decl_static(erl_backend__elds_to_erlang__output_include_header_ann_4_0)
MR_decl_static(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0)
MR_decl_static(erl_backend__elds_to_erlang__output_foreign_body_code_3_0)
MR_decl_static(erl_backend__elds_to_erlang__output_init_fn_call_4_0)
MR_decl_static(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0)
MR_decl_static(erl_backend__elds_to_erlang__output_rtti_defn_4_0)
MR_decl_static(erl_backend__elds_to_erlang__output_case_6_0)
MR_decl_static(erl_backend__elds_to_erlang__output_var_string_2_3_0)
MR_decl_static(erl_backend__elds_to_erlang__write_with_escaping_2_4_0)
MR_decl_static(erl_backend__elds_to_erlang__output_hrl_file_5_0)
MR_decl_static(erl_backend__elds_to_erlang__output_exported_foreign_decl_code_3_0)
MR_decl_static(__Unify___erl_backend__elds_to_erlang__indent_0_0)
MR_decl_static(__Compare___erl_backend__elds_to_erlang__indent_0_0)
MR_decl_static(__Unify___erl_backend__elds_to_erlang__string_or_atom_0_0)
MR_decl_static(__Compare___erl_backend__elds_to_erlang__string_or_atom_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_elds_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_elds_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_elds_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(erl_backend__elds, elds),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_elds_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(erl_backend__elds, elds),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(erl_backend__elds, elds_foreign_export_defn),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__write_with_escaping_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds_to_erlang__type_ctor_info_string_or_atom_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__reset_file_directive_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_atom_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_term_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_defn_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_8;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_10;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_env_var_directive_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_include_header_ann_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_foreign_body_code_3_0_1;
static const struct mercury_type_1 mercury_common_1[14] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__write_with_escaping_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(erl_backend__elds_to_erlang, string_or_atom),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__reset_file_directive_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(erl_backend__elds_to_erlang, string_or_atom),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_atom_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(erl_backend__elds_to_erlang, string_or_atom),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_term_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(erl_backend__elds_to_erlang, string_or_atom),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_defn_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(erl_backend__elds_to_erlang, string_or_atom),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_8,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(erl_backend__elds, elds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_9,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(erl_backend__elds, elds_foreign_export_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_10,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(erl_backend__elds, elds_rtti_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_env_var_directive_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(erl_backend__elds_to_erlang, string_or_atom),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_include_header_ann_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(erl_backend__elds_to_erlang, string_or_atom),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(erl_backend__elds_to_erlang, string_or_atom),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_foreign_body_code_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(erl_backend__elds_to_erlang, string_or_atom),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_2 mercury_common_2[8] =
{
{
MR_COMMON(1,1),
MR_ENTRY_AP(erl_backend__elds_to_erlang__write_with_escaping_2_4_0),
1,
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(erl_backend__elds_to_erlang__write_with_escaping_2_4_0),
1,
1
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(erl_backend__elds_to_erlang__write_with_escaping_2_4_0),
1,
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(erl_backend__elds_to_erlang__write_with_escaping_2_4_0),
1,
0
},
{
MR_COMMON(1,10),
MR_ENTRY_AP(erl_backend__elds_to_erlang__write_with_escaping_2_4_0),
1,
0
},
{
MR_COMMON(1,11),
MR_ENTRY_AP(erl_backend__elds_to_erlang__write_with_escaping_2_4_0),
1,
0
},
{
MR_COMMON(1,12),
MR_ENTRY_AP(erl_backend__elds_to_erlang__write_with_escaping_2_4_0),
1,
0
},
{
MR_COMMON(1,13),
MR_ENTRY_AP(erl_backend__elds_to_erlang__write_with_escaping_2_4_0),
1,
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_exprs_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_clause_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_term_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_expr_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_expr_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_expr_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_tuple_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_tuple_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_toplevel_clause_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_foreign_export_defn_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_rtti_defn_4_0_1;
static const struct mercury_type_4 mercury_common_4[12] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_exprs_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_expr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_clause_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_term),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_expr_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_case),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_expr_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_case),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_expr_6_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_case),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_tuple_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_expr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_tuple_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_expr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_toplevel_clause_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_term),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(erl_backend__elds, elds_defn),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(erl_backend__elds, elds_rtti_defn),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_foreign_export_defn_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_term),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_rtti_defn_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(erl_backend__elds, elds_term),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_var_string_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_var_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_7;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_hrl_file_5_0_1;
static const struct mercury_type_5 mercury_common_5[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_var_string_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_var_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__erl_backend__elds_to_erlang__output_hrl_file_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_6 mercury_common_6[8] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(erl_backend__elds_to_erlang__output_var_string_2_3_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(erl_backend__elds_to_erlang__output_var_string_2_3_0),
0
},
{
MR_COMMON(11,0),
MR_ENTRY_AP(fn__erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(erl_backend__elds_to_erlang__output_env_var_directive_3_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(erl_backend__elds_to_erlang__output_foreign_body_code_3_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(erl_backend__elds_to_erlang__output_exported_foreign_decl_code_3_0),
0
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_string_const("{}", 2)
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
4,
MR_TAG_COMMON(0,7,0)
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_TAG_COMMON(3,8,0)
},
};

static const struct mercury_type_10 mercury_common_10[5] =
{
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("%\n", 2),
MR_TAG_COMMON(1,10,0)
},
{
MR_string_const("% Do not edit.\n", 15),
MR_TAG_COMMON(1,10,1)
},
{
MR_string_const(".\n", 2),
MR_TAG_COMMON(1,10,2)
},
{
MR_string_const(", 1).\n", 6),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0_1;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(erl_backend__elds, elds_defn),
MR_COMMON(3,2)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds_to_erlang__type_ctor_info_indent_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds_to_erlang__indent_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds_to_erlang__indent_0_0)),
	"erl_backend.elds_to_erlang",
	"indent",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0 = {
	"in_string",
	0
};

static const MR_EnumFunctorDesc mercury_data_erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1 = {
	"in_atom",
	1
};

const MR_EnumFunctorDescPtr mercury_data_erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0[] = {
	&mercury_data_erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0,
	&mercury_data_erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1
};

const MR_EnumFunctorDescPtr mercury_data_erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0[] = {
	&mercury_data_erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1,
	&mercury_data_erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0
};

const MR_Integer mercury_data_erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds_to_erlang__type_ctor_info_string_or_atom_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___erl_backend__elds_to_erlang__string_or_atom_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___erl_backend__elds_to_erlang__string_or_atom_0_0)),
	"erl_backend.elds_to_erlang",
	"string_or_atom",
	{ (void *)mercury_data_erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0 },
	{ (void *)mercury_data_erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0 },
	2,
	4,
	mercury_data_erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0
};


static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_hrl_file_5_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_exported_foreign_decl_code",
3,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
1293,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_rtti_defn_4_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_term",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
518,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_foreign_export_defn_4_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_term",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
518,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_foreign_body_code_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"write_with_escaping_2",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
1204,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"write_with_escaping_2",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
1204,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_include_header_ann_4_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"write_with_escaping_2",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
1204,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_env_var_directive_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"write_with_escaping_2",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
1204,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_10 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_rtti_defn",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
168,
"81"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_9 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_foreign_export_defn",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
166,
"79"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_8 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_defn",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
165,
"77"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_7 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_foreign_body_code",
3,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
149,
"63"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_6 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_env_var_directive",
3,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
143,
"59"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_5 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_foreign_decl_code",
3,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
122,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_4 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_include_header_ann",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
119,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_3 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_rtti_export_ann",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
109,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_2 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_foreign_export_ann",
5,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
107,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_erl_file_5_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_export_ann",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
106,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_init_fn_call",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
438,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0_1 = {
{
MR_FUNCTION,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"elds_get_env_var_names_from_defn",
2,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
366,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_defn_4_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"write_with_escaping_2",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
1204,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_toplevel_clause_5_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_term",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
518,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_tuple_6_0_2 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_expr",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
548,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_tuple_6_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_expr",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
548,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_term_6_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"write_with_escaping_2",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
1204,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_expr_6_0_3 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_case",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
635,
"117"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_expr_6_0_2 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_case",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
700,
"194"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_expr_6_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_case",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
620,
"90"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_clause_6_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_term",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
518,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_atom_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"write_with_escaping_2",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
1204,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_var_4_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_var_string_2",
3,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
867,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_var_string_3_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_var_string_2",
3,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
867,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_exprs_6_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_expr",
6,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
548,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__reset_file_directive_2_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"write_with_escaping_2",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
1204,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__write_with_escaping_4_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"write_with_escaping_2",
4,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
1204,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_elds_4_0_2 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_hrl_file",
5,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
85,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__erl_backend__elds_to_erlang__output_elds_4_0_1 = {
{
MR_PREDICATE,
"erl_backend.elds_to_erlang",
"erl_backend.elds_to_erlang",
"output_erl_file",
5,
0
},
"erl_backend.elds_to_erlang",
"elds_to_erlang.m",
81,
"14"
};


MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(parse_tree__file_names__module_name_to_file_name_7_0);
MR_decl_entry(libs__file_util__output_to_file_5_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(parse_tree__module_cmds__update_interface_4_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module0)
	MR_init_entry1(erl_backend__elds_to_erlang__output_elds_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_elds_4_0);
	MR_init_label6(erl_backend__elds_to_erlang__output_elds_4_0,2,3,4,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_elds'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__elds_to_erlang__output_elds_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		erl_backend__elds_to_erlang__output_elds_4_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_elds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(".erl", 4);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		erl_backend__elds_to_erlang__output_elds_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_elds_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(".hrl", 4);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		erl_backend__elds_to_erlang__output_elds_4_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_elds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_erl_file_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(libs__file_util__output_to_file_5_0,
		erl_backend__elds_to_erlang__output_elds_4_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_elds_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const(".tmp", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_elds_4_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_elds_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_hrl_file_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(libs__file_util__output_to_file_5_0,
		erl_backend__elds_to_erlang__output_elds_4_0_i9);
MR_def_label(erl_backend__elds_to_erlang__output_elds_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__module_cmds__update_interface_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(string__foldl_4_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module1)
	MR_init_entry1(erl_backend__elds_to_erlang__write_with_escaping_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__write_with_escaping_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_with_escaping'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__write_with_escaping_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__write_with_escaping_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(string__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__output_stream_name_3_0);
MR_decl_entry(io__get_output_line_number_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module2)
	MR_init_entry1(erl_backend__elds_to_erlang__reset_file_directive_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__reset_file_directive_2_0);
	MR_init_label6(erl_backend__elds_to_erlang__reset_file_directive_2_0,2,3,4,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_file_directive'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__reset_file_directive_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__output_stream_name_3_0,
		erl_backend__elds_to_erlang__reset_file_directive_2_0_i2);
MR_def_label(erl_backend__elds_to_erlang__reset_file_directive_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__get_output_line_number_3_0,
		erl_backend__elds_to_erlang__reset_file_directive_2_0_i3);
MR_def_label(erl_backend__elds_to_erlang__reset_file_directive_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-file(\"", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__reset_file_directive_2_0_i4);
MR_def_label(erl_backend__elds_to_erlang__reset_file_directive_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__reset_file_directive_2_0_i6);
MR_def_label(erl_backend__elds_to_erlang__reset_file_directive_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__reset_file_directive_2_0_i7);
MR_def_label(erl_backend__elds_to_erlang__reset_file_directive_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		erl_backend__elds_to_erlang__reset_file_directive_2_0_i8);
MR_def_label(erl_backend__elds_to_erlang__reset_file_directive_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").\n", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_expr_0;
MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module3)
	MR_init_entry1(erl_backend__elds_to_erlang__output_exprs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_exprs_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_exprs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_exprs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_expr_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__unsafe_index_next_4_0);
MR_decl_entry(char__is_digit_1_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module4)
	MR_init_entry1(erl_backend__elds_to_erlang__digit_then_e_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__digit_then_e_4_0);
	MR_init_label8(erl_backend__elds_to_erlang__digit_then_e_4_0,48,2,8,7,6,13,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'digit_then_e'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__digit_then_e_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(erl_backend__elds_to_erlang__digit_then_e_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__unsafe_index_next_4_0,
		erl_backend__elds_to_erlang__digit_then_e_4_0_i2);
MR_def_label(erl_backend__elds_to_erlang__digit_then_e_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__digit_then_e_4_0_i1);
	}
	if (MR_INT_EQ(MR_r3,46)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__digit_then_e_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,69)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__digit_then_e_4_0_i8);
	}
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r4;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__digit_then_e_4_0_i7);
MR_def_label(erl_backend__elds_to_erlang__digit_then_e_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,101)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__digit_then_e_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
MR_def_label(erl_backend__elds_to_erlang__digit_then_e_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__digit_then_e_4_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(erl_backend__elds_to_erlang__digit_then_e_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(char__is_digit_1_0,
		erl_backend__elds_to_erlang__digit_then_e_4_0_i13);
MR_def_label(erl_backend__elds_to_erlang__digit_then_e_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__digit_then_e_4_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__digit_then_e_4_0_i48);
MR_def_label(erl_backend__elds_to_erlang__digit_then_e_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__digit_then_e_4_0_i48);
	}
MR_def_label(erl_backend__elds_to_erlang__digit_then_e_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__from_float_1_0);
MR_decl_entry(fn__string__between_3_0);
MR_decl_entry(fn__string__length_1_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module5)
	MR_init_entry1(erl_backend__elds_to_erlang__output_float_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_float_3_0);
	MR_init_label8(erl_backend__elds_to_erlang__output_float_3_0,2,4,6,7,8,9,10,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_float'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_float_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__from_float_1_0,
		erl_backend__elds_to_erlang__output_float_3_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_float_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__digit_then_e_4_0,
		erl_backend__elds_to_erlang__output_float_3_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_float_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_float_3_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__between_3_0,
		erl_backend__elds_to_erlang__output_float_3_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_float_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_float_3_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_float_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".0", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_float_3_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_float_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__length_1_0,
		erl_backend__elds_to_erlang__output_float_3_0_i9);
MR_def_label(erl_backend__elds_to_erlang__output_float_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__between_3_0,
		erl_backend__elds_to_erlang__output_float_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_float_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_float_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module6)
	MR_init_entry1(erl_backend__elds_to_erlang__space_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__space_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'space'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__space_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module7)
	MR_init_entry1(erl_backend__elds_to_erlang__output_var_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_var_string_3_0);
	MR_init_label1(erl_backend__elds_to_erlang__output_var_string_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_var_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_var_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__output_var_string_3_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_var_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(term__var_to_int_2_0);
MR_decl_entry(fn__string__from_int_1_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module8)
	MR_init_entry1(erl_backend__elds_to_erlang__output_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_var_4_0);
	MR_init_label6(erl_backend__elds_to_erlang__output_var_4_0,2,3,4,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		erl_backend__elds_to_erlang__output_var_4_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_to_int_2_0,
		erl_backend__elds_to_erlang__output_var_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		erl_backend__elds_to_erlang__output_var_4_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_var_4_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_var_4_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__output_var_4_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_var_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__index_3_0);
MR_decl_entry(char__is_lower_1_0);
MR_decl_entry(string__is_all_alnum_or_underscore_1_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module9)
	MR_init_entry1(erl_backend__elds_to_erlang__output_atom_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_atom_3_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_atom_3_0,3,5,7,11,12,13,14,15,16,17)
	MR_init_label10(erl_backend__elds_to_erlang__output_atom_3_0,18,19,20,21,22,23,24,25,26,27)
	MR_init_label10(erl_backend__elds_to_erlang__output_atom_3_0,28,29,30,31,32,33,34,35,36,37)
	MR_init_label5(erl_backend__elds_to_erlang__output_atom_3_0,10,9,2,40,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_atom'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_atom_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(string__index_3_0,
		erl_backend__elds_to_erlang__output_atom_3_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_lower_1_0,
		erl_backend__elds_to_erlang__output_atom_3_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__is_all_alnum_or_underscore_1_0,
		erl_backend__elds_to_erlang__output_atom_3_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("if", 2)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("of", 2)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("or", 2)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("and", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("bor", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("bsl", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("bsr", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("div", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("end", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("fun", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("let", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("not", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("rem", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("try", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("xor", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("band", 4)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("bnot", 4)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("bxor", 4)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i28);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("case", 4)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("cond", 4)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("when", 4)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("after", 5)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i32);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("begin", 5)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("catch", 5)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i34);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("query", 5)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i35);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("orelse", 6)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("andalso", 7)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("receive", 7)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i9);
	}
	MR_r1 = MR_sv(1);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_atom_3_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 39;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_atom_3_0_i40);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__output_atom_3_0_i42);
MR_def_label(erl_backend__elds_to_erlang__output_atom_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 39;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module10)
	MR_init_entry1(erl_backend__elds_to_erlang__indent_line_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__indent_line_3_0);
	MR_init_label3(erl_backend__elds_to_erlang__indent_line_3_0,10,3,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'indent_line'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__indent_line_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(erl_backend__elds_to_erlang__indent_line_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__indent_line_3_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__indent_line_3_0_i3);
MR_def_label(erl_backend__elds_to_erlang__indent_line_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__indent_line_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__indent_line_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module11)
	MR_init_entry1(erl_backend__elds_to_erlang__nl_indent_line_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__nl_indent_line_3_0);
	MR_init_label1(erl_backend__elds_to_erlang__nl_indent_line_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nl_indent_line'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__nl_indent_line_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__nl_indent_line_3_0_i2);
MR_def_label(erl_backend__elds_to_erlang__nl_indent_line_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__indent_line_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__hash_1_0);
MR_decl_entry(fn__string__left_2_0);
MR_decl_entry(fn__string__right_2_0);
MR_decl_entry(fn__string__int_to_base_string_2_0);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module12)
	MR_init_entry1(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0);
	MR_init_label6(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0,3,2,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'shorten_long_atom_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__string__length_1_0,
		fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0_i3);
MR_def_label(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,200)) {
		MR_GOTO_LAB(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__hash_1_0,
		fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0_i4);
MR_def_label(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_r1 & (MR_Integer) 4294967295);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 64;
	MR_np_call_localret_ent(fn__string__left_2_0,
		fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0_i5);
MR_def_label(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 64;
	}
	MR_np_call_localret_ent(fn__string__right_2_0,
		fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0_i6);
MR_def_label(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(fn__string__int_to_base_string_2_0,
		fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0_i7);
MR_def_label(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("...", 3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("...", 3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__file_names__qualify_mercury_std_library_module_name_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module13)
	MR_init_entry1(fn__erl_backend__elds_to_erlang__erlang_module_name_to_str_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__elds_to_erlang__erlang_module_name_to_str_1_0);
	MR_init_label1(fn__erl_backend__elds_to_erlang__erlang_module_name_to_str_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erlang_module_name_to_str'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__elds_to_erlang__erlang_module_name_to_str_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__file_names__qualify_mercury_std_library_module_name_1_0,
		fn__erl_backend__elds_to_erlang__erlang_module_name_to_str_1_0_i2);
MR_def_label(fn__erl_backend__elds_to_erlang__erlang_module_name_to_str_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module14)
	MR_init_entry1(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0);
	MR_init_label10(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,3,4,5,2,8,9,10,11,12,13)
	MR_init_label10(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,18,21,22,23,14,15,26,27,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'erlang_nonspecial_proc_name'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i3);
	}
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i2);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__file_names__qualify_mercury_std_library_module_name_1_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i4);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i5);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i8);
	}
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_string_const("f", 1);
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i9);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_string_const("p", 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i9);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i10);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i11);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i12);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i13);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i18);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i14);
	}
	MR_r1 = MR_sv(6);
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__file_names__qualify_mercury_std_library_module_name_1_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i21);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i22);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_in__", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i23);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i15);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i26);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i27);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i28);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0_i29);
MR_def_label(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(parse_tree__prog_type__type_ctor_is_tuple_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module15)
	MR_init_entry1(erl_backend__elds_to_erlang__output_pred_proc_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_pred_proc_id_4_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,2,3,4,5,7,13,14,16,12,17)
	MR_init_label10(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,18,19,24,28,29,20,21,34,30,39)
	MR_init_label10(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,40,41,42,43,44,45,10,47,8,50)
	MR_init_label5(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,51,54,55,52,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_pred_proc_id'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_pred_proc_id_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_r2, 0);
	MR_sv(8) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(3) = MR_tfield(0, MR_r1, 4);
	MR_sv(5) = (((MR_Integer) MR_tfield(0, MR_r1, 10) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(6) = MR_tfield(0, MR_r1, 11);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(6), 0);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i13);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i12);
	}
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r4, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_r3, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i10);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i16);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i17);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__file_names__qualify_mercury_std_library_module_name_1_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i18);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i19);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i24);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i20);
	}
	MR_r1 = MR_sv(6);
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i21);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i28);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(8) == MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i20);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i29);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i39);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_sv(5);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i34);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i30);
	}
	MR_r1 = MR_sv(6);
	MR_sv(5) = MR_sv(7);
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i39);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_sv(7);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i39);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i40);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i41);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i42);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i43);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i44);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i45);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i51);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot make label for special pred ", 35);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i47);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("erl_backend.elds_to_erlang", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140erl_backend.elds_to_erlang.erlang_special_proc_name\'/6", 65);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i51);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i50);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i52);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i54);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 58;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i55);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__erl_backend__elds_to_erlang__shorten_long_atom_name_1_0,
		erl_backend__elds_to_erlang__output_pred_proc_id_4_0_i56);
MR_def_label(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_atom_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(fn__backend_libs__rtti__pseudo_type_info_to_string_1_0);
MR_decl_entry(fn__string__replace_all_3_0);
MR_decl_entry(backend_libs__rtti__id_to_c_identifier_2_0);
MR_decl_entry(fn__backend_libs__rtti__type_info_to_string_1_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module16)
	MR_init_entry1(erl_backend__elds_to_erlang__output_rtti_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_rtti_id_4_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_rtti_id_4_0,2,6,7,4,16,19,20,15,26,23)
	MR_init_label10(erl_backend__elds_to_erlang__output_rtti_id_4_0,22,31,32,3,35,34,36,37,38,39)
	MR_init_label7(erl_backend__elds_to_erlang__output_rtti_id_4_0,45,46,51,53,54,55,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_rtti_id'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_rtti_id_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),3)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_rtti_id_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(3);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_tempr4;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("__arity", 7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("BaseTypeclassInfo_", 18);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_rtti_id_4_0_i15);
	}
	MR_r2 = MR_tfield(2, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_rtti_id_4_0_i16);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(4) = (MR_Word) MR_string_const("type_var_", 9);
	MR_np_call_localret_ent(fn__backend_libs__rtti__pseudo_type_info_to_string_1_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i19);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(4) = (MR_Word) MR_string_const("pti_", 4);
	MR_np_call_localret_ent(fn__backend_libs__rtti__pseudo_type_info_to_string_1_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i19);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i20);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("type_ctor_info", 14);
	MR_r3 = (MR_Word) MR_string_const("tci", 3);
	MR_np_call_localret_ent(fn__string__replace_all_3_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_rtti_id_4_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_rtti_id_4_0_i23);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_rtti_id_4_0_i23);
	}
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i26);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 16);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(backend_libs__rtti__id_to_c_identifier_2_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 16);
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__rtti__id_to_c_identifier_2_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__backend_libs__rtti__type_info_to_string_1_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i31);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ti_", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i32);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("type_ctor_info", 14);
	MR_r3 = (MR_Word) MR_string_const("tci", 3);
	MR_np_call_localret_ent(fn__string__replace_all_3_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__string__length_1_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i35);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r1,200)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_rtti_id_4_0_i34);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_sv(3) = MR_sv(4);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_rtti_id_4_0_i46);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__hash_1_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i36);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_r1 & (MR_Integer) 4294967295);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 64;
	MR_np_call_localret_ent(fn__string__left_2_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i37);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 64;
	}
	MR_np_call_localret_ent(fn__string__right_2_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i38);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(fn__string__int_to_base_string_2_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i39);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("...", 3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("...", 3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i45);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_sv(3) = MR_tempr1;
	}
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i51);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_rtti_id_4_0_i48);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__file_names__qualify_mercury_std_library_module_name_1_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i53);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i54);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i55);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 58;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_rtti_id_4_0_i48);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_id_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_atom_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module17)
	MR_init_entry1(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0);
	MR_init_label3(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elds_unop_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("bnot ", 5);
	MR_proceed();
MR_def_label(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("not ", 4);
	MR_proceed();
MR_def_label(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_proceed();
MR_def_label(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("+", 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module18)
	MR_init_entry1(erl_backend__elds_to_erlang__output_elds_binop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_elds_binop_3_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_elds_binop_3_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label9(erl_backend__elds_to_erlang__output_elds_binop_3_0,13,14,15,16,17,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_elds_binop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_elds_binop_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,12)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("<", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,16)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("=/=", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,15)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("=:=", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,11)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("=<", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,14)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const(">=", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("+", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,17)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("andalso", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("band", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("bor", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("bsl", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("bsr", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("bxor", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("div", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("*", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,18)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("orelse", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_elds_binop_3_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("rem", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_elds_binop_3_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_elds_binop_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_term_0;

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module19)
	MR_init_entry1(erl_backend__elds_to_erlang__output_clause_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_clause_6_0);
	MR_init_label5(erl_backend__elds_to_erlang__output_clause_6_0,2,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_clause'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_clause_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_clause_6_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_clause_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_term_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		erl_backend__elds_to_erlang__output_clause_6_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_clause_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") -> ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_clause_6_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_clause_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_clause_6_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_clause_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_clause_6_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_clause_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_block_expr_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module20)
	MR_init_entry1(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_exprs_with_nl_6_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,27,4,7,8,9,10,13,14,15,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_exprs_with_nl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i29);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r4, 1);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_expr_6_0,
		erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i29);
	}
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i9);
MR_def_label(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_expr_6_0,
		erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i29);
	}
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i13);
MR_def_label(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i15);
MR_def_label(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0_i27);
MR_def_label(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module21)
	MR_init_entry1(erl_backend__elds_to_erlang__output_block_expr_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_block_expr_6_0);
	MR_init_label1(erl_backend__elds_to_erlang__output_block_expr_6_0,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_block_expr'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_block_expr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_block_expr_6_0_i15);
	}
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0);
MR_def_label(erl_backend__elds_to_erlang__output_block_expr_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_expr_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_case_0;

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module22)
	MR_init_entry1(erl_backend__elds_to_erlang__output_expr_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_expr_6_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_expr_6_0,196,6,7,8,5,3,13,14,12,17)
	MR_init_label10(erl_backend__elds_to_erlang__output_expr_6_0,20,21,19,25,27,29,30,23,34,35)
	MR_init_label10(erl_backend__elds_to_erlang__output_expr_6_0,36,37,38,40,33,44,43,48,47,51)
	MR_init_label10(erl_backend__elds_to_erlang__output_expr_6_0,53,50,59,60,58,62,56,65,64,69)
	MR_init_label10(erl_backend__elds_to_erlang__output_expr_6_0,70,68,73,74,75,116,77,78,79,76)
	MR_init_label10(erl_backend__elds_to_erlang__output_expr_6_0,84,85,86,87,82,90,91,92,93,88)
	MR_init_label4(erl_backend__elds_to_erlang__output_expr_6_0,94,72,96,97)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_expr'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_expr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r4, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("(begin", 6);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i94);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("erl_backend.elds_to_erlang", 26);
	MR_r2 = (MR_Word) MR_string_const("predicate \140erl_backend.elds_to_erlang.output_expr\'/6", 52);
	MR_r3 = (MR_Word) MR_string_const("empty elds_block", 16);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_body((MR_Integer) MR_r4, (MR_Integer) 0);
	MR_r1 = (MR_Word) MR_string_const("(fun", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i13);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_clause_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i94);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i17);
	}
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_term_6_0);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(erl_backend__elds_to_erlang__output_expr_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i20);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_elds_binop_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i196);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i29);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r4, 2);
	MR_r4 = MR_tfield(1, MR_r6, 0);
	MR_np_localcall_lab(erl_backend__elds_to_erlang__output_expr_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i29);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r4, 2);
	MR_r2 = MR_tfield(0, MR_r6, 0);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i29);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i30);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_exprs_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i70);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("(case", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i34);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i35);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(erl_backend__elds_to_erlang__output_expr_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i36);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i37);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("of", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i38);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_case_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(";", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i40);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i94);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i43);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r4, 2);
	MR_r4 = MR_tfield(3, MR_r4, 1);
	MR_np_localcall_lab(erl_backend__elds_to_erlang__output_expr_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i44);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("= ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i97);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,8)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i47);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i48);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,10)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i50);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r4, 1);
	MR_r1 = (MR_Word) MR_string_const("(receive", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i51);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_case_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(";", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i53);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i94);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i56);
	}
	MR_r2 = MR_tfield(3, MR_r4, 1);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i58);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("fun ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i59);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_rtti_id_4_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i60);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/0 ", 3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_rtti_id_4_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i62);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("()", 2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,9)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i64);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r4, 2);
	MR_r4 = MR_tfield(3, MR_r4, 1);
	MR_np_localcall_lab(erl_backend__elds_to_erlang__output_expr_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i65);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ! ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i97);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i68);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r4, 1);
	MR_r1 = (MR_Word) MR_string_const("throw(", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i69);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(erl_backend__elds_to_erlang__output_expr_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i70);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i72);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("(try", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i73);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i74);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_block_expr_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i75);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i77);
	}
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i76);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i78);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("of", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i79);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_case_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_case);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const(";", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i116);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i82);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i84);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("catch", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i85);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i86);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_catch_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i87);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i88);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i90);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("after", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i91);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i92);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(erl_backend__elds_to_erlang__output_expr_6_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i93);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__nl_indent_line_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i94);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("end)", 4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__erl_backend__elds_to_erlang__elds_unop_to_string_1_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i96);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_expr_6_0_i97);
MR_def_label(erl_backend__elds_to_erlang__output_expr_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_expr_6_0_i196);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module23)
	MR_init_entry1(erl_backend__elds_to_erlang__output_catch_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_catch_6_0);
	MR_init_label7(erl_backend__elds_to_erlang__output_catch_6_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_catch'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_catch_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_term_6_0,
		erl_backend__elds_to_erlang__output_catch_6_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_catch_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 58;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_catch_6_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_catch_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_term_6_0,
		erl_backend__elds_to_erlang__output_catch_6_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_catch_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("->", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_catch_6_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_catch_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_catch_6_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_catch_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_catch_6_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_catch_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_catch_6_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_sv(4), 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0);
MR_def_label(erl_backend__elds_to_erlang__output_catch_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_expr_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__char__to_int_1_0);
MR_decl_entry(char__is_alnum_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__unqualify_name_1_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module24)
	MR_init_entry1(erl_backend__elds_to_erlang__output_term_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_term_6_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_term_6_0,3,6,9,11,7,15,16,17,18,19)
	MR_init_label10(erl_backend__elds_to_erlang__output_term_6_0,20,21,22,23,24,25,26,27,28,29)
	MR_init_label10(erl_backend__elds_to_erlang__output_term_6_0,30,31,32,33,34,35,36,37,38,39)
	MR_init_label10(erl_backend__elds_to_erlang__output_term_6_0,40,41,42,43,44,45,14,47,13,5)
	MR_init_label10(erl_backend__elds_to_erlang__output_term_6_0,53,57,56,60,64,66,63,69,72,71)
	MR_init_label5(erl_backend__elds_to_erlang__output_term_6_0,75,76,345,74,79)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_term'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_term_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("_ ", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r4, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__char__to_int_1_0,
		erl_backend__elds_to_erlang__output_term_6_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(char__is_alnum_1_0,
		erl_backend__elds_to_erlang__output_term_6_0_i9);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i7);
	}
	MR_r1 = (MR_Integer) 36;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i11);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i72);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i15);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^a", 3);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i16);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^b", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i17);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^c", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i18);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^d", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i19);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^e", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i20);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^f", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i21);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^g", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i22);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\b", 2);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i23);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\t", 2);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i24);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\n", 2);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,11)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i25);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\v", 2);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,12)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i26);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\f", 2);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i27);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\r", 2);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,14)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i28);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^n", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,15)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i29);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^o", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,16)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i30);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^p", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,17)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i31);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^q", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,18)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i32);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^r", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,19)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i33);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^s", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,20)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i34);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^t", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,21)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i35);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^u", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,22)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i36);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^v", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,23)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i37);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^w", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,24)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i38);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^x", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,25)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i39);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^y", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,26)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i40);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\^z", 3);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,27)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i41);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\e", 2);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,32)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i42);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\s", 2);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i43);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\\"", 2);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i44);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\\'", 2);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i45);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\\\", 2);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,127)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i13);
	}
	MR_sv(1) = (MR_Word) MR_string_const("\\d", 2);
	MR_sv(2) = MR_r1;
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 36;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i47);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i72);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i72);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i53);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(2, MR_r4, 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i345);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i56);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		erl_backend__elds_to_erlang__output_term_6_0_i57);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i72);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i60);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i72);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i63);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r4, 1);
	MR_r1 = (MR_Word) MR_string_const("<<\"", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i64);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__output_term_6_0_i66);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\">>", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i72);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i69);
	}
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_var_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i71);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_float_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i72);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i74);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r4, 1);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i75);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__write_with_escaping_4_0,
		erl_backend__elds_to_erlang__output_term_6_0_i76);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_term_6_0_i345);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,345)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__space_2_0);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_term_6_0_i79);
	}
	MR_r4 = MR_tfield(3, MR_r4, 1);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_tuple_6_0);
MR_def_label(erl_backend__elds_to_erlang__output_term_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r4, 1);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_var_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___erl_backend__elds__elds_expr_0_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module25)
	MR_init_entry1(erl_backend__elds_to_erlang__output_tuple_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_tuple_6_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_tuple_6_0,8,2,3,19,21,22,23,24,11,12)
	MR_init_label6(erl_backend__elds_to_erlang__output_tuple_6_0,32,34,26,27,38,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_tuple'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_tuple_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i3);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i3);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		erl_backend__elds_to_erlang__output_tuple_6_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("[] ", 3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i12);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i12);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i12);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i12);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr5;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 0);
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		erl_backend__elds_to_erlang__output_tuple_6_0_i19);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i11);
	}
	MR_r1 = (MR_Integer) 91;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_tuple_6_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_expr_6_0,
		erl_backend__elds_to_erlang__output_tuple_6_0_i22);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("| ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_tuple_6_0_i23);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_expr_6_0,
		erl_backend__elds_to_erlang__output_tuple_6_0_i24);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] ", 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,9,0);
	}
	MR_np_call_localret_ent(__Unify___erl_backend__elds__elds_expr_0_0,
		erl_backend__elds_to_erlang__output_tuple_6_0_i32);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_tuple_6_0_i26);
	}
	MR_r1 = (MR_Integer) 123;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_tuple_6_0_i34);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_expr_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		erl_backend__elds_to_erlang__output_tuple_6_0_i40);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 123;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_tuple_6_0_i38);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_expr_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_expr);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		erl_backend__elds_to_erlang__output_tuple_6_0_i40);
MR_def_label(erl_backend__elds_to_erlang__output_tuple_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("} ", 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module26)
	MR_init_entry1(erl_backend__elds_to_erlang__output_toplevel_clause_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_toplevel_clause_5_0);
	MR_init_label6(erl_backend__elds_to_erlang__output_toplevel_clause_5_0,2,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_toplevel_clause'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_toplevel_clause_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_toplevel_clause_5_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_toplevel_clause_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_term_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		erl_backend__elds_to_erlang__output_toplevel_clause_5_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_toplevel_clause_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") -> ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_toplevel_clause_5_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_toplevel_clause_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_toplevel_clause_5_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_toplevel_clause_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_toplevel_clause_5_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_toplevel_clause_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_block_expr_6_0,
		erl_backend__elds_to_erlang__output_toplevel_clause_5_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_toplevel_clause_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module27)
	MR_init_entry1(erl_backend__elds_to_erlang__output_defn_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_defn_4_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_defn_4_0,4,14,16,17,18,19,20,82,5,23)
	MR_init_label1(erl_backend__elds_to_erlang__output_defn_4_0,85)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_defn'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__erl_backend__elds_to_erlang__output_defn_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_defn_4_0_i85);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	}
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_defn_4_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_defn_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_defn_4_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_defn_4_0_i5);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_defn_4_0_i5);
	}
	MR_tempr2 = MR_tfield(0, MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0), 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_defn_4_0_i5);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_defn_4_0_i5);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,8)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_defn_4_0_i5);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_defn_4_0_i5);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_defn_4_0_i5);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = ((MR_Integer) MR_tfield(0, MR_tempr1, 1) - (MR_Integer) 3);
	MR_r1 = (MR_Word) MR_string_const("-file(\"", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_defn_4_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_defn_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__output_defn_4_0_i16);
MR_def_label(erl_backend__elds_to_erlang__output_defn_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_defn_4_0_i17);
MR_def_label(erl_backend__elds_to_erlang__output_defn_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_int_3_0,
		erl_backend__elds_to_erlang__output_defn_4_0_i18);
MR_def_label(erl_backend__elds_to_erlang__output_defn_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_defn_4_0_i19);
MR_def_label(erl_backend__elds_to_erlang__output_defn_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,
		erl_backend__elds_to_erlang__output_defn_4_0_i20);
MR_def_label(erl_backend__elds_to_erlang__output_defn_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_toplevel_clause_5_0,
		erl_backend__elds_to_erlang__output_defn_4_0_i82);
MR_def_label(erl_backend__elds_to_erlang__output_defn_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__reset_file_directive_2_0);
MR_def_label(erl_backend__elds_to_erlang__output_defn_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,
		erl_backend__elds_to_erlang__output_defn_4_0_i23);
MR_def_label(erl_backend__elds_to_erlang__output_defn_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_toplevel_clause_5_0);
MR_def_label(erl_backend__elds_to_erlang__output_defn_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(library__version_1_0);
MR_decl_entry(io__write_strings_3_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module28)
	MR_init_entry1(erl_backend__elds_to_erlang__output_do_no_edit_comment_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_do_no_edit_comment_3_0);
	MR_init_label1(erl_backend__elds_to_erlang__output_do_no_edit_comment_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_do_no_edit_comment'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_do_no_edit_comment_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(library__version_1_0,
		erl_backend__elds_to_erlang__output_do_no_edit_comment_3_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_do_no_edit_comment_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,10,3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("% version ", 10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("% by the Mercury compiler,\n", 27);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\'\n", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("% Automatically generated from \140", 32);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("%\n", 2);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module29)
	MR_init_entry1(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,3,4,5,6,7,2,11,12,13,14)
	MR_init_label6(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,9,18,19,20,21,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_wrapper_init_fn_export_ann'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__main_wrapper", 21);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/0", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i9);
	}
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i11);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i12);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i13);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__required_init", 22);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/0", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i9);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i16);
	}
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i18);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i19);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i20);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__required_final", 23);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0_i21);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/0", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_pred_name_arity_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__member_2_1);
MR_decl_entry(fn__hlds__hlds_pred__status_is_exported_to_non_submodules_1_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module30)
	MR_init_entry1(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0);
	MR_init_label9(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0,2,5,7,8,9,10,4,12,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'should_add_main_wrapper'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0_i2);
MR_def_label(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0_i4);
	MR_r2 = (MR_Word) MR_string_const("main", 4);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_pred_name_arity_4_0,
		fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0_i5);
MR_def_label(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(list__member_2_1,
		fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0_i7);
MR_def_label(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0_i8);
MR_def_label(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0_i9);
MR_def_label(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_is_exported_to_non_submodules_1_0,
		fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0_i10);
MR_def_label(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_GOTO_LAB(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0_i12);
MR_def_label(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_GOTO_LAB(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0_i3);
MR_def_label(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module31)
	MR_init_entry1(fn__erl_backend__elds_to_erlang__main_wrapper_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__elds_to_erlang__main_wrapper_code_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main_wrapper_code'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__elds_to_erlang__main_wrapper_code_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n    % This function is called in place of main_2_p_0 by the shell script that\n    % we generate for this program, if linking against the standard library.\n   " " % Otherwise main_2_p_0 will be called.\n\n    mercury__main_wrapper() ->\n        mercury__startup(),\n        InitModule = list_to_atom(atom_to_list(\?MODULE) ++ \"" "_init\"),\n        try\n            InitModule:init_env_vars(),\n            InitModule:init_modules(),\n            InitModule:init_modules_required(),\n            " "main_2_p_0(),\n            InitModule:final_modules_required()\n        catch\n            {\'ML_exception\', Excp} ->\n                StackTrace = erlang:get_stackt" "race(),\n                mercury__exception:\'ML_report_uncaught_exception\'(Excp),\n                mercury__maybe_dump_stacktrace(StackTrace),\n                mer" "cury__shutdown(true)\n        end,\n        mercury__shutdown(false).\n\n    mercury__startup() ->\n        mercury__erlang_builtin:\'ML_start_global_server\'(),\n     " "   mercury__io:\'ML_io_init_state\'().\n\n    mercury__shutdown(ForceBadExit) ->\n        mercury__io:\'ML_io_finalize_state\'(),\n        \'ML_erlang_global_server\' ! {" "get_exit_status, self()},\n        receive\n            {get_exit_status_ack, ExitStatus0} ->\n                void\n        end,\n        if\n            ExitStatus0" " =:= 0 andalso ForceBadExit ->\n                ExitStatus = 1;\n            true ->\n                ExitStatus = ExitStatus0\n        end,\n        mercury__erlang" "_builtin:\'ML_stop_global_server\'(),\n        % init:stop is preferred to calling halt but there seems\n        % to be no way to choose the exit code otherwise.\n " "       case ExitStatus of\n            0 -> void;\n            _ -> halt(ExitStatus)\n        end.\n\n    mercury__maybe_dump_stacktrace(StackTrace) ->\n        case " "os:getenv(\"MERCURY_SUPPRESS_STACK_TRACE\") of\n            false ->\n                io:put_chars(\"Stack dump follows:\\n\"),\n                mercury__dump_stacktrac" "e(StackTrace);\n            _ ->\n                void\n        end.\n\n    mercury__dump_stacktrace([]) -> void;\n    mercury__dump_stacktrace([St | Sts]) ->\n       " " {Module, Function, ArityOrArgs} = St,\n        io:format(\"\\t~s:~s\", [Module, Function]),\n        if\n            is_integer(ArityOrArgs) ->\n                io:fo" "rmat(\"/~B~n\", [ArityOrArgs]);\n            true ->\n                io:format(\"~p~n\", [ArityOrArgs])\n        end,\n        % Don\'t show stack frames below main.\n  " "      case St of\n            {\?MODULE, mercury__main_wrapper, _} ->\n                void;\n            _ ->\n                mercury__dump_stacktrace(Sts)\n       " " end.\n", 2566);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_defn_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__set__union_list_1_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module32)
	MR_init_entry1(fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0);
	MR_init_label1(fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elds_get_env_var_names'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0_i4);
MR_def_label(fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__set__union_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module33)
	MR_init_entry1(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0);
	MR_init_label8(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0,4,5,6,7,9,10,11,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_output_required_init_or_final'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0_i20);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0_i4);
MR_def_label(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0_i5);
MR_def_label(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0_i6);
MR_def_label(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("() ->", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0_i7);
MR_def_label(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_init_fn_call_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0_i9);
MR_def_label(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0_i10);
MR_def_label(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0_i11);
MR_def_label(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("void.\n", 6);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(list__foldl2_6_2);
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
MR_decl_entry(set__fold_4_2);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module34)
	MR_init_entry1(erl_backend__elds_to_erlang__output_erl_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_erl_file_5_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_erl_file_5_0,2,3,4,5,6,7,8,10,12,14)
	MR_init_label10(erl_backend__elds_to_erlang__output_erl_file_5_0,15,16,17,18,20,22,23,25,26,27)
	MR_init_label10(erl_backend__elds_to_erlang__output_erl_file_5_0,28,24,31,32,33,29,34,36,37,39)
	MR_init_label8(erl_backend__elds_to_erlang__output_erl_file_5_0,54,41,42,40,44,45,47,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_erl_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_erl_file_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_sv(5) = MR_tfield(0, MR_r2, 4);
	MR_sv(6) = MR_tfield(0, MR_r2, 5);
	MR_sv(7) = MR_tfield(0, MR_r2, 6);
	MR_sv(8) = MR_tfield(0, MR_r2, 7);
	MR_sv(9) = MR_tfield(0, MR_r2, 8);
	MR_np_call_localret_ent(fn__erl_backend__elds_to_erlang__should_add_main_wrapper_1_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_do_no_edit_comment_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("-module(", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__erl_backend__elds_to_erlang__erlang_module_name_to_str_1_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("-export([", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_export_ann_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_defn);
	MR_sv(15) = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_sv(13) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(13);
	MR_r5 = MR_sv(5);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_foreign_export_defn);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(13);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,3);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i12);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_rtti_defn);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = MR_sv(13);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i15);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]).\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i16);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% -compile(export_all).\n", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i17);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i18);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_include_header_ann_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(13);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__fold_4_2,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i20);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(list__foldl_4_2,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i22);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__erl_backend__elds_to_erlang__erlang_module_name_to_str_1_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i23);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_erl_file_5_0_i25);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_erl_file_5_0_i24);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% REQUIRED_INIT ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i26);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i27);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":mercury__required_init\n", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i28);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_erl_file_5_0_i29);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% REQUIRED_FINAL ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i31);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i32);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":mercury__required_final\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i33);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__erl_backend__elds_to_erlang__elds_get_env_var_names_1_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i34);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__fold_4_2,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i36);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ENDINIT\n", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i37);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(list__foldl_4_2,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i39);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_erl_file_5_0_i41);
	}
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("mercury__required_init", 22);
	MR_GOTO_LAB(erl_backend__elds_to_erlang__output_erl_file_5_0_i40);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__erl_backend__elds_to_erlang__main_wrapper_code_0_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i42);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i54);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i44);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("mercury__required_final", 23);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_0,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i45);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_defn_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i47);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		erl_backend__elds_to_erlang__output_erl_file_5_0_i49);
MR_def_label(erl_backend__elds_to_erlang__output_erl_file_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_rtti_defn_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(13);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__procedure_is_exported_3_0);
MR_decl_entry(fn__erl_backend__elds__elds_body_arity_1_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module35)
	MR_init_entry1(erl_backend__elds_to_erlang__output_export_ann_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_export_ann_6_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_export_ann_6_0,2,5,7,10,11,12,13,14,15,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_export_ann'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_export_ann_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r3;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		erl_backend__elds_to_erlang__output_export_ann_6_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_export_ann_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__procedure_is_exported_3_0,
		erl_backend__elds_to_erlang__output_export_ann_6_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_export_ann_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_export_ann_6_0_i4);
	}
	if (MR_INT_EQ(MR_sv(5),0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_export_ann_6_0_i7);
	}
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_export_ann_6_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_export_ann_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_export_ann_6_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_export_ann_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_export_ann_6_0_i11);
MR_def_label(erl_backend__elds_to_erlang__output_export_ann_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,
		erl_backend__elds_to_erlang__output_export_ann_6_0_i12);
MR_def_label(erl_backend__elds_to_erlang__output_export_ann_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_export_ann_6_0_i13);
MR_def_label(erl_backend__elds_to_erlang__output_export_ann_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_body_arity_1_0,
		erl_backend__elds_to_erlang__output_export_ann_6_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_export_ann_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		erl_backend__elds_to_erlang__output_export_ann_6_0_i15);
MR_def_label(erl_backend__elds_to_erlang__output_export_ann_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(erl_backend__elds_to_erlang__output_export_ann_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__erl_backend__elds__elds_clause_arity_1_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module36)
	MR_init_entry1(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_foreign_export_ann_5_0);
	MR_init_label8(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0,3,2,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_foreign_export_ann'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_foreign_export_ann_5_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_foreign_export_ann_5_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_foreign_export_ann_5_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_foreign_export_ann_5_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_foreign_export_ann_5_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_foreign_export_ann_5_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__erl_backend__elds__elds_clause_arity_1_0,
		erl_backend__elds_to_erlang__output_foreign_export_ann_5_0_i9);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		erl_backend__elds_to_erlang__output_foreign_export_ann_5_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_ann_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module37)
	MR_init_entry1(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_rtti_export_ann_6_0);
	MR_init_label8(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0,22,5,4,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_rtti_export_ann'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0_i22);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_rtti_export_ann_6_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Integer) 44;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_rtti_export_ann_6_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_rtti_export_ann_6_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_rtti_export_ann_6_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_rtti_id_4_0,
		erl_backend__elds_to_erlang__output_rtti_export_ann_6_0_i9);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__output_rtti_export_ann_6_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(io__write_int_3_0,
		erl_backend__elds_to_erlang__output_rtti_export_ann_6_0_i11);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_export_ann_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module38)
	MR_init_entry1(fn__erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elds_get_env_var_names_from_defn'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module39)
	MR_init_entry1(erl_backend__elds_to_erlang__output_env_var_directive_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_env_var_directive_3_0);
	MR_init_label2(erl_backend__elds_to_erlang__output_env_var_directive_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_env_var_directive'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_env_var_directive_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% ENVVAR ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_env_var_directive_3_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_env_var_directive_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__output_env_var_directive_3_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_env_var_directive_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__file_names__module_name_to_search_file_name_6_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module40)
	MR_init_entry1(erl_backend__elds_to_erlang__output_include_header_ann_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_include_header_ann_4_0);
	MR_init_label3(erl_backend__elds_to_erlang__output_include_header_ann_4_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_include_header_ann'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_include_header_ann_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = (MR_Word) MR_string_const(".hrl", 4);
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_search_file_name_6_0,
		erl_backend__elds_to_erlang__output_include_header_ann_4_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_include_header_ann_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-include(\"", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_include_header_ann_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_include_header_ann_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__output_include_header_ann_4_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_include_header_ann_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\").\n", 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module41)
	MR_init_entry1(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_foreign_decl_code_3_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,2,4,5,6,7,8,9,10,11,12)
	MR_init_label3(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_foreign_decl_code'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("-file(\"", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i9);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__output_stream_name_3_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__get_output_line_number_3_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i11);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-file(\"", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i12);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i13);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		erl_backend__elds_to_erlang__output_foreign_decl_code_3_0_i15);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").\n", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module42)
	MR_init_entry1(erl_backend__elds_to_erlang__output_foreign_body_code_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_foreign_body_code_3_0);
	MR_init_label10(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,2,4,5,6,7,8,9,10,11,12)
	MR_init_label3(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_foreign_body_code'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_foreign_body_code_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("-file(\"", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i9);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__output_stream_name_3_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__get_output_line_number_3_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i11);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-file(\"", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i12);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(string__foldl_4_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i13);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		erl_backend__elds_to_erlang__output_foreign_body_code_3_0_i15);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_body_code_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").\n", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module43)
	MR_init_entry1(erl_backend__elds_to_erlang__output_init_fn_call_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_init_fn_call_4_0);
	MR_init_label3(erl_backend__elds_to_erlang__output_init_fn_call_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_init_fn_call'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_init_fn_call_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_init_fn_call_4_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_init_fn_call_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_init_fn_call_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_init_fn_call_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_pred_proc_id_4_0,
		erl_backend__elds_to_erlang__output_init_fn_call_4_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_init_fn_call_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(),", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module44)
	MR_init_entry1(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_foreign_export_defn_4_0);
	MR_init_label8(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0,2,3,4,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_foreign_export_defn'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_foreign_export_defn_4_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_atom_3_0,
		erl_backend__elds_to_erlang__output_foreign_export_defn_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_sv(4), 0);
	MR_sv(4) = MR_tfield(0, MR_sv(4), 1);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_export_defn_4_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_term_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		erl_backend__elds_to_erlang__output_foreign_export_defn_4_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") -> ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_foreign_export_defn_4_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_foreign_export_defn_4_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_foreign_export_defn_4_0_i9);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_block_expr_6_0,
		erl_backend__elds_to_erlang__output_foreign_export_defn_4_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_foreign_export_defn_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module45)
	MR_init_entry1(erl_backend__elds_to_erlang__output_rtti_defn_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_rtti_defn_4_0);
	MR_init_label8(erl_backend__elds_to_erlang__output_rtti_defn_4_0,2,3,4,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_rtti_defn'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_rtti_defn_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_rtti_defn_4_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_defn_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_rtti_id_4_0,
		erl_backend__elds_to_erlang__output_rtti_defn_4_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_defn_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_sv(4), 0);
	MR_sv(4) = MR_tfield(0, MR_sv(4), 1);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_rtti_defn_4_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_defn_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(erl_backend__elds_to_erlang__output_term_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(erl_backend__elds, elds_term);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		erl_backend__elds_to_erlang__output_rtti_defn_4_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_defn_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") -> ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_rtti_defn_4_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_defn_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_rtti_defn_4_0_i8);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_defn_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_rtti_defn_4_0_i9);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_defn_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_block_expr_6_0,
		erl_backend__elds_to_erlang__output_rtti_defn_4_0_i10);
MR_def_label(erl_backend__elds_to_erlang__output_rtti_defn_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module46)
	MR_init_entry1(erl_backend__elds_to_erlang__output_case_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_case_6_0);
	MR_init_label7(erl_backend__elds_to_erlang__output_case_6_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_case'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_case_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_case_6_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_case_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_case_6_0_i3);
MR_def_label(erl_backend__elds_to_erlang__output_case_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__output_term_6_0,
		erl_backend__elds_to_erlang__output_case_6_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_case_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("->", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		erl_backend__elds_to_erlang__output_case_6_0_i5);
MR_def_label(erl_backend__elds_to_erlang__output_case_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(io__nl_2_0,
		erl_backend__elds_to_erlang__output_case_6_0_i6);
MR_def_label(erl_backend__elds_to_erlang__output_case_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(erl_backend__elds_to_erlang__indent_line_3_0,
		erl_backend__elds_to_erlang__output_case_6_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_case_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_case_6_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_sv(4), 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_exprs_with_nl_6_0);
MR_def_label(erl_backend__elds_to_erlang__output_case_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_expr_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_alnum_or_underscore_1_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module47)
	MR_init_entry1(erl_backend__elds_to_erlang__output_var_string_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_var_string_2_3_0);
	MR_init_label3(erl_backend__elds_to_erlang__output_var_string_2_3_0,4,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_var_string_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_var_string_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		erl_backend__elds_to_erlang__output_var_string_2_3_0_i4);
MR_def_label(erl_backend__elds_to_erlang__output_var_string_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_var_string_2_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_char_3_0);
MR_def_label(erl_backend__elds_to_erlang__output_var_string_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__char__to_int_1_0,
		erl_backend__elds_to_erlang__output_var_string_2_3_0_i7);
MR_def_label(erl_backend__elds_to_erlang__output_var_string_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__to_int_2_0);
MR_decl_entry(string__int_to_base_string_3_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module48)
	MR_init_entry1(erl_backend__elds_to_erlang__write_with_escaping_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__write_with_escaping_2_4_0);
	MR_init_label10(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,2,7,3,15,16,17,18,19,20,21)
	MR_init_label10(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label10(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,32,33,34,35,36,37,38,39,40,41)
	MR_init_label7(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,42,43,44,45,13,48,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_with_escaping_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__write_with_escaping_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__to_int_2_0,
		erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i2);
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 32 > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i3);
	}
	if (MR_INT_EQ(MR_sv(1),92)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i3);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i7);
	}
	if (MR_INT_EQ(MR_sv(1),39)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),34)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^a", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^b", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^c", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^d", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^e", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^f", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^g", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\b", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\t", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,11)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\v", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,12)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\f", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\r", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,14)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^n", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,15)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^o", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,16)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^p", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,17)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^q", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,18)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^r", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,19)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^s", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,20)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^t", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,21)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^u", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,22)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^v", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,23)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^w", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,24)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^x", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,25)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^y", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,26)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\^z", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,27)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\e", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,32)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\s", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\\"", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\\'", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\\\", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,127)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\d", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i48);
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 92;
	MR_np_call_localret_ent(io__write_char_3_0,
		erl_backend__elds_to_erlang__write_with_escaping_2_4_0_i49);
MR_def_label(erl_backend__elds_to_erlang__write_with_escaping_2_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
MR_decl_entry(string__to_upper_2_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module49)
	MR_init_entry1(erl_backend__elds_to_erlang__output_hrl_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_hrl_file_5_0);
	MR_init_label7(erl_backend__elds_to_erlang__output_hrl_file_5_0,2,14,15,16,17,24,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_hrl_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_hrl_file_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(library__version_1_0,
		erl_backend__elds_to_erlang__output_hrl_file_5_0_i2);
MR_def_label(erl_backend__elds_to_erlang__output_hrl_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,10,3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("% version ", 10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("% by the Mercury compiler,\n", 27);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\'\n", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("% Automatically generated from \140", 32);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("%\n", 2);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		erl_backend__elds_to_erlang__output_hrl_file_5_0_i14);
MR_def_label(erl_backend__elds_to_erlang__output_hrl_file_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		erl_backend__elds_to_erlang__output_hrl_file_5_0_i15);
MR_def_label(erl_backend__elds_to_erlang__output_hrl_file_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_upper_2_0,
		erl_backend__elds_to_erlang__output_hrl_file_5_0_i16);
MR_def_label(erl_backend__elds_to_erlang__output_hrl_file_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_HRL", 4);
	MR_np_call_localret_ent(string__append_3_2,
		erl_backend__elds_to_erlang__output_hrl_file_5_0_i17);
MR_def_label(erl_backend__elds_to_erlang__output_hrl_file_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,10,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("-define(", 8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const(").\n", 3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("-ifndef(", 8);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		erl_backend__elds_to_erlang__output_hrl_file_5_0_i24);
MR_def_label(erl_backend__elds_to_erlang__output_hrl_file_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,7);
	MR_r4 = MR_tfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(list__foldl_4_2,
		erl_backend__elds_to_erlang__output_hrl_file_5_0_i26);
MR_def_label(erl_backend__elds_to_erlang__output_hrl_file_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("-endif.\n", 8);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module50)
	MR_init_entry1(erl_backend__elds_to_erlang__output_exported_foreign_decl_code_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__erl_backend__elds_to_erlang__output_exported_foreign_decl_code_3_0);
	MR_init_label1(erl_backend__elds_to_erlang__output_exported_foreign_decl_code_3_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_exported_foreign_decl_code'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(erl_backend__elds_to_erlang__output_exported_foreign_decl_code_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(erl_backend__elds_to_erlang__output_exported_foreign_decl_code_3_0_i13);
	}
	MR_np_tailcall_ent(erl_backend__elds_to_erlang__output_foreign_decl_code_3_0);
	}
MR_def_label(erl_backend__elds_to_erlang__output_exported_foreign_decl_code_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module51)
	MR_init_entry1(__Unify___erl_backend__elds_to_erlang__indent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___erl_backend__elds_to_erlang__indent_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___erl_backend__elds_to_erlang__indent_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module52)
	MR_init_entry1(__Compare___erl_backend__elds_to_erlang__indent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___erl_backend__elds_to_erlang__indent_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___erl_backend__elds_to_erlang__indent_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module53)
	MR_init_entry1(__Unify___erl_backend__elds_to_erlang__string_or_atom_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___erl_backend__elds_to_erlang__string_or_atom_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___erl_backend__elds_to_erlang__string_or_atom_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(erl_backend__elds_to_erlang_module54)
	MR_init_entry1(__Compare___erl_backend__elds_to_erlang__string_or_atom_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___erl_backend__elds_to_erlang__string_or_atom_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___erl_backend__elds_to_erlang__string_or_atom_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__erl_backend__elds_to_erlang_maybe_bunch_0(void)
{
	erl_backend__elds_to_erlang_module0();
	erl_backend__elds_to_erlang_module1();
	erl_backend__elds_to_erlang_module2();
	erl_backend__elds_to_erlang_module3();
	erl_backend__elds_to_erlang_module4();
	erl_backend__elds_to_erlang_module5();
	erl_backend__elds_to_erlang_module6();
	erl_backend__elds_to_erlang_module7();
	erl_backend__elds_to_erlang_module8();
	erl_backend__elds_to_erlang_module9();
	erl_backend__elds_to_erlang_module10();
	erl_backend__elds_to_erlang_module11();
	erl_backend__elds_to_erlang_module12();
	erl_backend__elds_to_erlang_module13();
	erl_backend__elds_to_erlang_module14();
	erl_backend__elds_to_erlang_module15();
	erl_backend__elds_to_erlang_module16();
	erl_backend__elds_to_erlang_module17();
	erl_backend__elds_to_erlang_module18();
	erl_backend__elds_to_erlang_module19();
	erl_backend__elds_to_erlang_module20();
	erl_backend__elds_to_erlang_module21();
	erl_backend__elds_to_erlang_module22();
	erl_backend__elds_to_erlang_module23();
	erl_backend__elds_to_erlang_module24();
	erl_backend__elds_to_erlang_module25();
	erl_backend__elds_to_erlang_module26();
	erl_backend__elds_to_erlang_module27();
	erl_backend__elds_to_erlang_module28();
	erl_backend__elds_to_erlang_module29();
	erl_backend__elds_to_erlang_module30();
	erl_backend__elds_to_erlang_module31();
	erl_backend__elds_to_erlang_module32();
	erl_backend__elds_to_erlang_module33();
	erl_backend__elds_to_erlang_module34();
	erl_backend__elds_to_erlang_module35();
	erl_backend__elds_to_erlang_module36();
	erl_backend__elds_to_erlang_module37();
	erl_backend__elds_to_erlang_module38();
	erl_backend__elds_to_erlang_module39();
}

static void mercury__erl_backend__elds_to_erlang_maybe_bunch_1(void)
{
	erl_backend__elds_to_erlang_module40();
	erl_backend__elds_to_erlang_module41();
	erl_backend__elds_to_erlang_module42();
	erl_backend__elds_to_erlang_module43();
	erl_backend__elds_to_erlang_module44();
	erl_backend__elds_to_erlang_module45();
	erl_backend__elds_to_erlang_module46();
	erl_backend__elds_to_erlang_module47();
	erl_backend__elds_to_erlang_module48();
	erl_backend__elds_to_erlang_module49();
	erl_backend__elds_to_erlang_module50();
	erl_backend__elds_to_erlang_module51();
	erl_backend__elds_to_erlang_module52();
	erl_backend__elds_to_erlang_module53();
	erl_backend__elds_to_erlang_module54();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__erl_backend__elds_to_erlang__init(void);
void mercury__erl_backend__elds_to_erlang__init_type_tables(void);
void mercury__erl_backend__elds_to_erlang__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__erl_backend__elds_to_erlang__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__erl_backend__elds_to_erlang__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__erl_backend__elds_to_erlang__init_threadscope_string_table(void);
#endif

void mercury__erl_backend__elds_to_erlang__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__erl_backend__elds_to_erlang_maybe_bunch_0();
	mercury__erl_backend__elds_to_erlang_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds_to_erlang__type_ctor_info_indent_0,
		erl_backend__elds_to_erlang__indent_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_erl_backend__elds_to_erlang__type_ctor_info_string_or_atom_0,
		erl_backend__elds_to_erlang__string_or_atom_0_0);
	mercury__erl_backend__elds_to_erlang__init_debugger();
}

void mercury__erl_backend__elds_to_erlang__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds_to_erlang__type_ctor_info_indent_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_erl_backend__elds_to_erlang__type_ctor_info_string_or_atom_0);
	}
}


void mercury__erl_backend__elds_to_erlang__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__erl_backend__elds_to_erlang__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__erl_backend__elds_to_erlang);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__erl_backend__elds_to_erlang__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__erl_backend__elds_to_erlang__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
