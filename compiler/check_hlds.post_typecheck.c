/*
** Automatically generated from `post_typecheck.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__post_typecheck__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 166 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 27 "check_hlds.post_typecheck.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 31 "check_hlds.post_typecheck.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 35 "check_hlds.post_typecheck.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "check_hlds.post_typecheck.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "check_hlds.post_typecheck.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "check_hlds.post_typecheck.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "check_hlds.post_typecheck.c"
#line 52 "check_hlds.post_typecheck.c"
#include "check_hlds.post_typecheck.mh"

#line 55 "check_hlds.post_typecheck.c"
#line 56 "check_hlds.post_typecheck.c"
#ifndef CHECK_HLDS__POST_TYPECHECK_DECL_GUARD
#define CHECK_HLDS__POST_TYPECHECK_DECL_GUARD

#line 60 "check_hlds.post_typecheck.c"
#line 61 "check_hlds.post_typecheck.c"

#endif
#line 64 "check_hlds.post_typecheck.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];
MR_decl_label1(check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__334__1_3_0, 2)
MR_decl_label5(check_hlds__post_typecheck__bind_type_vars_to_void_7_0, 3,6,7,8,9)
MR_decl_label8(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0, 51,3,6,8,9,10,11,12)
MR_decl_label8(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0, 17,16,20,19,34,15,23,14)
MR_decl_label2(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0, 26,4)
MR_decl_label3(check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0, 3,2,6)
MR_decl_label4(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0, 18,3,4,6)
MR_decl_label8(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0, 3,4,6,8,10,14,16,20)
MR_decl_label2(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0, 22,2)
MR_decl_label8(check_hlds__post_typecheck__check_type_of_main_3_0, 3,5,7,9,15,17,40,11)
MR_decl_label1(check_hlds__post_typecheck__check_type_of_main_3_0, 19)
MR_decl_label3(check_hlds__post_typecheck__check_var_type_bindings_6_0, 10,2,4)
MR_decl_label8(check_hlds__post_typecheck__check_var_type_bindings_2_8_0, 33,3,4,5,7,8,13,16)
MR_decl_label1(check_hlds__post_typecheck__check_var_type_bindings_2_8_0, 10)
MR_decl_label7(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0, 2,3,4,6,7,8,9)
MR_decl_label8(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0, 3,4,5,6,7,9,2,11)
MR_decl_label2(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0, 12,13)
MR_decl_label8(check_hlds__post_typecheck__find_matching_constructor_5_0, 3,5,7,9,10,12,13,15)
MR_decl_label4(check_hlds__post_typecheck__find_matching_constructor_5_0, 16,18,19,2)
MR_decl_label4(check_hlds__post_typecheck__finish_field_access_function_14_0, 4,3,7,8)
MR_decl_label8(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0, 2,4,6,8,9,10,11,12)
MR_decl_label8(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0, 13,14,15,16,17,18,19,22)
MR_decl_label8(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0, 21,25,26,27,28,31,30,5)
MR_decl_label6(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0, 35,38,41,37,43,44)
MR_decl_label7(check_hlds__post_typecheck__get_constructor_containing_field_5_0, 4,2,7,8,9,10,12)
MR_decl_label5(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0, 21,5,7,4,3)
MR_decl_label6(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0, 25,6,7,3,4,1)
MR_decl_label8(check_hlds__post_typecheck__in_interface_check_5_0, 76,56,57,30,31,32,34,36)
MR_decl_label8(check_hlds__post_typecheck__in_interface_check_5_0, 37,38,23,62,3,4,5,7)
MR_decl_label8(check_hlds__post_typecheck__in_interface_check_5_0, 9,10,11,13,6,19,21,24)
MR_decl_label8(check_hlds__post_typecheck__in_interface_check_5_0, 25,26,28,44,46,49,48,51)
MR_decl_label2(check_hlds__post_typecheck__in_interface_check_5_0, 53,54)
MR_decl_label3(check_hlds__post_typecheck__in_interface_check_list_5_0, 10,3,4)
MR_decl_label8(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0, 21,44,4,5,7,8,9,10)
MR_decl_label4(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0, 11,12,14,15)
MR_decl_label2(check_hlds__post_typecheck__make_new_var_6_0, 2,4)
MR_decl_label3(check_hlds__post_typecheck__make_new_vars_6_0, 2,3,5)
MR_decl_label8(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0, 2,8,6,10,5,12,3,16)
MR_decl_label8(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0, 18,19,20,13,14,21,22,23)
MR_decl_label8(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0, 24,25,27,29,30,32,33,34)
MR_decl_label8(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0, 38,35,39,40,41,42,43,44)
MR_decl_label8(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0, 45,46,31,47,48,49,51,52)
MR_decl_label1(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0, 54)
MR_decl_label3(check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0, 10,3,4)
MR_decl_label8(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0, 2,3,4,5,6,8,9,13)
MR_decl_label4(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0, 7,16,15,19)
MR_decl_label8(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0, 2,4,5,9,3,12,11,15)
MR_decl_label8(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0, 4,2,6,7,8,10,11,13)
MR_decl_label5(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0, 14,15,16,17,18)
MR_decl_label5(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0, 2,3,4,5,6)
MR_decl_label5(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0, 2,3,6,7,8)
MR_decl_label8(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0, 4,5,6,10,7,3,14,15)
MR_decl_label8(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0, 16,17,13,19,20,21,22,27)
MR_decl_label8(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0, 28,29,31,32,2,33,34,37)
MR_decl_label2(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0, 39,36)
MR_decl_label8(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0, 24,4,3,5,6,7,12,10)
MR_decl_label4(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0, 13,9,15,16)
MR_decl_label3(check_hlds__post_typecheck__report_assertion_interface_error_5_0, 2,18,19)
MR_decl_label6(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0, 2,3,6,16,17,24)
MR_decl_label4(check_hlds__post_typecheck__report_unbound_inst_vars_7_0, 17,4,8,9)
MR_decl_label8(check_hlds__post_typecheck__report_unresolved_type_warning_7_0, 2,3,4,9,10,15,26,34)
MR_decl_label3(check_hlds__post_typecheck__report_unresolved_type_warning_7_0, 35,36,37)
MR_decl_label8(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0, 2,3,4,8,9,18,19,22)
MR_decl_label3(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0, 23,24,25)
MR_decl_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0, 3,4,9,10,11,8,13,14)
MR_decl_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0, 16,17,5,26,30,32,33,34)
MR_decl_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0, 35,37,38,40,41,42,45,47)
MR_decl_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0, 49,21,22,58,62,64,65,66)
MR_decl_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0, 67,68,69,71,72,75,74,78)
MR_decl_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0, 80,82,55,56,90,94,96,97)
MR_decl_label6(check_hlds__post_typecheck__resolve_unify_functor_15_0, 100,87,88,106,109,104)
MR_decl_label2(check_hlds__post_typecheck__split_list_at_index_5_0, 3,2)
MR_decl_label8(check_hlds__post_typecheck__translate_get_function_13_0, 3,4,5,6,8,9,10,14)
MR_decl_label8(check_hlds__post_typecheck__translate_get_function_13_0, 16,11,7,19,20,21,23,24)
MR_decl_label1(check_hlds__post_typecheck__translate_get_function_13_0, 28)
MR_decl_label8(check_hlds__post_typecheck__translate_set_function_14_0, 3,4,5,6,7,8,9,10)
MR_decl_label8(check_hlds__post_typecheck__translate_set_function_14_0, 12,13,14,15,18,20,21,23)
MR_decl_label5(check_hlds__post_typecheck__translate_set_function_14_0, 28,26,32,22,35)
MR_decl_label4(check_hlds__post_typecheck__unify_constraint_list_5_0, 28,3,6,1)
MR_decl_label1(fn__check_hlds__post_typecheck__constraint_to_error_piece_2_0, 2)
MR_decl_label2(fn__check_hlds__post_typecheck__var_and_type_to_pieces_3_0, 2,5)
MR_decl_static(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0)
MR_def_extern_entry(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0)
MR_decl_static(check_hlds__post_typecheck__check_var_type_bindings_2_8_0)
MR_decl_static(check_hlds__post_typecheck__check_var_type_bindings_6_0)
MR_decl_static(check_hlds__post_typecheck__bind_type_vars_to_void_7_0)
MR_decl_static(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0)
MR_decl_static(check_hlds__post_typecheck__report_unresolved_type_warning_7_0)
MR_def_extern_entry(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0)
MR_decl_static(check_hlds__post_typecheck__report_unbound_inst_vars_7_0)
MR_decl_static(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0)
MR_decl_static(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0)
MR_decl_static(check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0)
MR_decl_static(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0)
MR_decl_static(check_hlds__post_typecheck__check_type_of_main_3_0)
MR_decl_static(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0)
MR_decl_static(check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0)
MR_def_extern_entry(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0)
MR_def_extern_entry(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0)
MR_decl_static(fn__check_hlds__post_typecheck__this_file_0_0)
MR_decl_static(check_hlds__post_typecheck__report_assertion_interface_error_5_0)
MR_decl_static(check_hlds__post_typecheck__in_interface_check_5_0)
MR_decl_static(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0)
MR_decl_static(check_hlds__post_typecheck__in_interface_check_list_5_0)
MR_def_extern_entry(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0)
MR_def_extern_entry(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0)
MR_decl_static(check_hlds__post_typecheck__find_matching_constructor_5_0)
MR_decl_static(check_hlds__post_typecheck__unify_constraint_list_5_0)
MR_decl_static(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0)
MR_decl_static(check_hlds__post_typecheck__split_list_at_index_5_0)
MR_decl_static(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0)
MR_decl_static(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0)
MR_decl_static(check_hlds__post_typecheck__get_constructor_containing_field_5_0)
MR_decl_static(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0)
MR_decl_static(check_hlds__post_typecheck__make_new_vars_6_0)
MR_decl_static(check_hlds__post_typecheck__translate_get_function_13_0)
MR_decl_static(check_hlds__post_typecheck__make_new_var_6_0)
MR_decl_static(check_hlds__post_typecheck__translate_set_function_14_0)
MR_decl_static(check_hlds__post_typecheck__finish_field_access_function_14_0)
MR_def_extern_entry(check_hlds__post_typecheck__resolve_unify_functor_15_0)
MR_decl_static(fn__check_hlds__post_typecheck__constraint_to_error_piece_2_0)
MR_decl_static(fn__check_hlds__post_typecheck__var_and_type_to_pieces_3_0)
MR_decl_static(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0)
MR_decl_static(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0)
MR_decl_static(check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__334__1_3_0)
MR_decl_static(fn__check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1104__1_1_0)
MR_decl_static(fn__check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1270__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_cons_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const struct mercury_type_0 mercury_common_0[45] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_TAG_COMMON(3,4,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,5,0),
MR_tbmkword(0, 0)
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_TAG_COMMON(3,5,1),
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,4,4),
MR_TAG_COMMON(1,0,12)
}
},
{
{
MR_TAG_COMMON(3,4,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,4,6),
MR_TAG_COMMON(1,0,14)
}
},
{
{
MR_TAG_COMMON(3,4,7),
MR_TAG_COMMON(1,0,15)
}
},
{
{
MR_TAG_COMMON(3,4,8),
MR_TAG_COMMON(1,0,16)
}
},
{
{
MR_TAG_COMMON(3,4,9),
MR_TAG_COMMON(1,0,17)
}
},
{
{
MR_TAG_COMMON(3,4,10),
MR_TAG_COMMON(1,0,18)
}
},
{
{
MR_TAG_COMMON(3,4,11),
MR_TAG_COMMON(1,0,19)
}
},
{
{
MR_TAG_COMMON(2,7,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_TAG_COMMON(3,4,13),
MR_TAG_COMMON(1,0,12)
}
},
{
{
MR_TAG_COMMON(3,4,12),
MR_TAG_COMMON(1,0,24)
}
},
{
{
MR_TAG_COMMON(0,7,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,4,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,0,27)
}
},
{
{
MR_TAG_COMMON(3,4,1),
MR_TAG_COMMON(1,0,28)
}
},
{
{
MR_TAG_COMMON(3,4,17),
MR_TAG_COMMON(1,0,12)
}
},
{
{
MR_TAG_COMMON(3,4,19),
MR_TAG_COMMON(1,0,12)
}
},
{
{
MR_TAG_COMMON(3,4,18),
MR_TAG_COMMON(1,0,31)
}
},
{
{
MR_TAG_COMMON(2,7,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
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
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
MR_TAG_COMMON(3,4,21),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,4,23),
MR_TAG_COMMON(1,0,12)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,0,39)
}
},
{
{
MR_TAG_COMMON(3,4,22),
MR_TAG_COMMON(1,0,40)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,0,41)
}
},
{
{
MR_TAG_COMMON(3,4,1),
MR_TAG_COMMON(1,0,42)
}
},
{
{
MR_TAG_COMMON(3,4,25),
MR_TAG_COMMON(1,0,12)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;
static const struct mercury_type_1 mercury_common_1[8] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,9),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,11),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(0,34)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_id),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__bind_type_vars_to_void_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__post_typecheck__bind_type_vars_to_void_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,6),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_COMMON(0,7)
}
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__334__1_3_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(fn__check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1104__1_1_0),
0
},
{
MR_COMMON(9,1),
MR_ENTRY_AP(fn__check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1270__1_1_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[26] =
{
{
4,
MR_string_const("In", 2)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("warning: unresolved polymorphism.", 33)
},
{
4,
MR_string_const("The unbound type", 16)
},
{
4,
MR_string_const("will be implicitly bound to the builtin type \140void\'.", 52)
},
{
4,
MR_string_const("My apologies.)", 14)
},
{
4,
MR_string_const("but I\'m afraid you\'ll have to work it out yourself.", 51)
},
{
4,
MR_string_const("(I ought to tell you which call caused the problem,", 51)
},
{
4,
MR_string_const("because the type variables listed above didn\'t get bound.", 57)
},
{
4,
MR_string_const("but I can\'t determine which version should be called,", 53)
},
{
4,
MR_string_const("to a polymorphic predicate,", 27)
},
{
4,
MR_string_const("The body of the clause contains a call", 38)
},
{
4,
MR_string_const("Error: arguments of main/2", 26)
},
{
4,
MR_string_const("must have type \140io.state\'.", 26)
},
{
4,
MR_string_const("In interface for module", 23)
},
{
4,
MR_string_const("error: exported promise refers to", 33)
},
{
4,
MR_string_const("which is defined in the implementation section of module", 56)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("Either move the promise into the implementation section", 55)
},
{
4,
MR_string_const("or move the definition into the interface.", 42)
},
{
4,
MR_string_const("constructor", 11)
},
{
4,
MR_string_const("In mode declaration for", 23)
},
{
4,
MR_string_const("error: unbound inst variable(s).", 32)
},
{
4,
MR_string_const("(Sorry, polymorphic modes are not supported.)", 45)
},
{
4,
MR_string_const("Error: abstract declaration for type", 36)
},
{
4,
MR_string_const("has no corresponding definition.", 32)
},
};

static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
10,
1
}
},
{
{
10,
-1
}
},
{
{
1,
0
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__report_unresolved_type_warning_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_preds_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__post_typecheck__report_unresolved_type_warning_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,10),
MR_COMMON(0,6),
MR_COMMON(1,3),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_preds_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn),
MR_COMMON(0,22),
MR_COMMON(0,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,6),
MR_COMMON(1,6)
}
},
};

static const struct mercury_type_7 mercury_common_7[3] =
{
{
MR_TAG_COMMON(1,0,20)
},
{
MR_TAG_COMMON(1,0,25)
},
{
MR_TAG_COMMON(1,0,32)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__report_unbound_inst_vars_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_1;
static const struct mercury_type_8 mercury_common_8[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__post_typecheck__report_unbound_inst_vars_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(0,22),
MR_COMMON(0,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(0,22),
MR_COMMON(0,22)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_COMMON(0,22),
MR_COMMON(0,22)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__find_matching_constructor_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_1;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__post_typecheck__find_matching_constructor_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__resolve_unify_functor_15_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_type_0;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__post_typecheck__resolve_unify_functor_15_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,7),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_type),
MR_COMMON(0,36),
MR_INT_CTOR_ADDR,
MR_COMMON(0,37)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__bind_type_vars_to_void_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.post_typecheck",
"check_hlds.post_typecheck",
"lambda_post_typecheck_m_334",
3,
0
},
"check_hlds.post_typecheck",
"post_typecheck.m",
334,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_1 = {
{
MR_FUNCTION,
"check_hlds.post_typecheck",
"check_hlds.post_typecheck",
"constraint_to_error_piece",
3,
0
},
"check_hlds.post_typecheck",
"post_typecheck.m",
365,
"d1;c37;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__report_unresolved_type_warning_7_0_1 = {
{
MR_FUNCTION,
"check_hlds.post_typecheck",
"check_hlds.post_typecheck",
"var_and_type_to_pieces",
4,
0
},
"check_hlds.post_typecheck",
"post_typecheck.m",
393,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__report_unbound_inst_vars_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.post_typecheck",
"check_hlds.post_typecheck",
"report_unbound_inst_var_error",
7,
0
},
"check_hlds.post_typecheck",
"post_typecheck.m",
805,
"d1;c8;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.post_typecheck",
"check_hlds.post_typecheck",
"report_unbound_inst_var_error",
7,
0
},
"check_hlds.post_typecheck",
"post_typecheck.m",
805,
"d1;c8;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_preds_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.post_typecheck",
"check_hlds.post_typecheck",
"check_for_missing_definitions_2",
4,
0
},
"check_hlds.post_typecheck",
"post_typecheck.m",
1488,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.post_typecheck",
"check_hlds.post_typecheck",
"report_unbound_inst_var_error",
7,
0
},
"check_hlds.post_typecheck",
"post_typecheck.m",
805,
"d1;c8;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_data",
"hlds.hlds_data",
"exclusive_table_add",
4,
0
},
"check_hlds.post_typecheck",
"post_typecheck.m",
549,
"d1;c6;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__find_matching_constructor_5_0_1 = {
{
MR_FUNCTION,
"check_hlds.post_typecheck",
"check_hlds.post_typecheck",
"lambda_post_typecheck_m_1104",
2,
0
},
"check_hlds.post_typecheck",
"post_typecheck.m",
1104,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_1 = {
{
MR_FUNCTION,
"check_hlds.post_typecheck",
"check_hlds.post_typecheck",
"lambda_post_typecheck_m_1270",
2,
0
},
"check_hlds.post_typecheck",
"post_typecheck.m",
1270,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__post_typecheck__resolve_unify_functor_15_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_data",
"hlds.hlds_data",
"search_hlds_constraint_list",
5,
0
},
"check_hlds.post_typecheck",
"post_typecheck.m",
985,
"d1;c18;e;?;c15;"
};

MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(check_hlds__mode_util__propagate_types_into_mode_list_4_0);
MR_decl_entry(check_hlds__inst_match__mode_list_contains_inst_var_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_argmodes_3_0);
MR_decl_entry(svmap__det_update_4_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module0)
	MR_init_entry1(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0);
	MR_init_label8(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,24,4,3,5,6,7,12,10)
	MR_init_label4(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,13,9,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i3);
	}
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i4);
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i5);
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i6);
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_types_into_mode_list_4_0,
		check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i7);
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i10);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__mode_list_contains_inst_var_3_0,
		check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i12);
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i13);
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i9);
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i24);
	}
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_argmodes_3_0,
		check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i15);
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i16);
MR_def_label(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0_i24);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module1)
	MR_init_entry1(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0);
	MR_init_label5(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0_i2);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0_i3);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0_i4);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,
		check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0_i5);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0_i6);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_vars_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(set__delete_list_3_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module2)
	MR_init_entry1(check_hlds__post_typecheck__check_var_type_bindings_2_8_0);
	MR_init_label8(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,33,3,4,5,7,8,13,16)
	MR_init_label1(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__check_var_type_bindings_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_var_type_bindings_2_8_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r6 = MR_ctfield(0, MR_sv(7), 1);
	if (MR_INT_GE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_var_type_bindings_2_8_0_i4);
	}
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		check_hlds__post_typecheck__check_var_type_bindings_2_8_0_i5);
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__post_typecheck__check_var_type_bindings_2_8_0_i7);
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__delete_list_3_0,
		check_hlds__post_typecheck__check_var_type_bindings_2_8_0_i8);
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__post_typecheck__check_var_type_bindings_2_8_0_i13);
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_var_type_bindings_2_8_0_i10);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__post_typecheck__check_var_type_bindings_2_8_0_i16);
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__post_typecheck__check_var_type_bindings_2_8_0_i33);
	}
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__post_typecheck__check_var_type_bindings_2_8_0_i33);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__post_typecheck_module3)
	MR_init_entry1(check_hlds__post_typecheck__check_var_type_bindings_6_0);
	MR_init_label3(check_hlds__post_typecheck__check_var_type_bindings_6_0,10,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__check_var_type_bindings_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1000;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__check_var_type_bindings_2_8_0,
		check_hlds__post_typecheck__check_var_type_bindings_6_0_i2);
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_var_type_bindings_6_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(check_hlds__post_typecheck__check_var_type_bindings_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(check_hlds__post_typecheck__check_var_type_bindings_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(set__fold_4_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_subst_to_vartypes_3_0);
MR_decl_entry(check_hlds__type_util__apply_subst_to_constraint_proofs_3_0);
MR_decl_entry(check_hlds__type_util__apply_subst_to_constraint_map_3_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module4)
	MR_init_entry1(check_hlds__post_typecheck__bind_type_vars_to_void_7_0);
	MR_init_label5(check_hlds__post_typecheck__bind_type_vars_to_void_7_0,3,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__bind_type_vars_to_void_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__post_typecheck__bind_type_vars_to_void_7_0_i3);
MR_def_label(check_hlds__post_typecheck__bind_type_vars_to_void_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		check_hlds__post_typecheck__bind_type_vars_to_void_7_0_i6);
MR_def_label(check_hlds__post_typecheck__bind_type_vars_to_void_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_vartypes_3_0,
		check_hlds__post_typecheck__bind_type_vars_to_void_7_0_i7);
MR_def_label(check_hlds__post_typecheck__bind_type_vars_to_void_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__type_util__apply_subst_to_constraint_proofs_3_0,
		check_hlds__post_typecheck__bind_type_vars_to_void_7_0_i8);
MR_def_label(check_hlds__post_typecheck__bind_type_vars_to_void_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__type_util__apply_subst_to_constraint_map_3_0,
		check_hlds__post_typecheck__bind_type_vars_to_void_7_0_i9);
MR_def_label(check_hlds__post_typecheck__bind_type_vars_to_void_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__parse_tree__error_util__choose_number_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__parse_tree__error_util__component_list_to_line_pieces_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module5)
	MR_init_entry1(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0);
	MR_init_label8(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,2,3,4,8,9,18,19,22)
	MR_init_label3(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_i2);
MR_def_label(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_i3);
MR_def_label(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_i4);
MR_def_label(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_string_const("constraint:", 11);
	MR_r5 = (MR_Word) MR_string_const("constraints:", 12);
	MR_np_call_localret_ent(fn__parse_tree__error_util__choose_number_3_0,
		check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_i8);
MR_def_label(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("type error: unsatisfied typeclass ", 34);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_i9);
MR_def_label(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,4);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__post_typecheck__constraint_to_error_piece_2_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_i18);
MR_def_label(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_i19);
MR_def_label(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_i22);
MR_def_label(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_i23);
MR_def_label(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_i24);
MR_def_label(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_unsatisfied_constraints_6_0_i25);
MR_def_label(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
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
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module6)
	MR_init_entry1(check_hlds__post_typecheck__report_unresolved_type_warning_7_0);
	MR_init_label8(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,2,3,4,9,10,15,26,34)
	MR_init_label3(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,35,36,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__report_unresolved_type_warning_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__post_typecheck__report_unresolved_type_warning_7_0_i2);
MR_def_label(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		check_hlds__post_typecheck__report_unresolved_type_warning_7_0_i3);
MR_def_label(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		check_hlds__post_typecheck__report_unresolved_type_warning_7_0_i4);
MR_def_label(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__post_typecheck__var_and_type_to_pieces_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__post_typecheck__report_unresolved_type_warning_7_0_i9);
MR_def_label(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		check_hlds__post_typecheck__report_unresolved_type_warning_7_0_i10);
MR_def_label(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,4,2);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_string_const("The variable with an unbound type was:", 38);
	MR_r5 = (MR_Word) MR_string_const("The variables with unbound types were:", 38);
	MR_np_call_localret_ent(fn__parse_tree__error_util__choose_number_3_0,
		check_hlds__post_typecheck__report_unresolved_type_warning_7_0_i15);
MR_def_label(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,4);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,5,1);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,4,3);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("variable", 8);
	MR_r5 = (MR_Word) MR_string_const("variables", 9);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__choose_number_3_0,
		check_hlds__post_typecheck__report_unresolved_type_warning_7_0_i26);
MR_def_label(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,13);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_unresolved_type_warning_7_0_i34);
MR_def_label(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_unresolved_type_warning_7_0_i35);
MR_def_label(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_unresolved_type_warning_7_0_i36);
MR_def_label(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_unresolved_type_warning_7_0_i37);
MR_def_label(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,21);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0);
MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module7)
	MR_init_entry1(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0);
	MR_init_label8(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,4,2,6,7,8,10,11,13)
	MR_init_label5(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,14,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i4);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i13);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i6);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvar_list_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i7);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i8);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i10);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_vartypes_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i11);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i13);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i14);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i15);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i16);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i17);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0_i18);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module8)
	MR_init_entry1(check_hlds__post_typecheck__report_unbound_inst_vars_7_0);
	MR_init_label4(check_hlds__post_typecheck__report_unbound_inst_vars_7_0,17,4,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__report_unbound_inst_vars_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__report_unbound_inst_vars_7_0_i17);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(check_hlds__post_typecheck__report_unbound_inst_vars_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__post_typecheck__report_unbound_inst_vars_7_0_i4);
MR_def_label(check_hlds__post_typecheck__report_unbound_inst_vars_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,23);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__post_typecheck__report_unbound_inst_vars_7_0_i8);
MR_def_label(check_hlds__post_typecheck__report_unbound_inst_vars_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__post_typecheck__report_unbound_inst_vars_7_0_i9);
MR_def_label(check_hlds__post_typecheck__report_unbound_inst_vars_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__modecheck_call__modes_are_indistinguishable_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_remove_procid_3_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module9)
	MR_init_entry1(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0);
	MR_init_label8(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,51,3,6,8,9,10,11,12)
	MR_init_label8(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,17,16,20,19,34,15,23,14)
	MR_init_label2(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,26,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__modecheck_call__modes_are_indistinguishable_4_0,
		check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i6);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i8);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i9);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 285;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i10);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 291;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i11);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 71;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i12);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i17);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i15);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(9),0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i20);
	}
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i19);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i34);
	}
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i14);
	}
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r3 = MR_sv(6);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(fn__check_hlds__mode_errors__report_indistinguishable_modes_error_5_0,
		check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i23);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_remove_procid_3_0,
		check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i26);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_sv(1) = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_remove_procid_3_0,
		check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i26);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0_i51);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__post_typecheck_module10)
	MR_init_entry1(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0);
	MR_init_label4(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0,18,3,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__check_for_indistinguishable_mode_9_0,
		check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0_i4);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0_i18);
	}
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0_i18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module11)
	MR_init_entry1(check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0);
	MR_init_label3(check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0,3,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0_i3);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0_i6);
MR_def_label(check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__post_typecheck_module12)
	MR_init_entry1(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0);
	MR_init_label8(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0,2,4,5,9,3,12,11,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_i2);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_i4);
	}
	MR_sv(3) = MR_sv(4);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_i3);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_i5);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,23);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_i9);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_i3);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_i12);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_i11);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0_i15);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_exported_1_0);
MR_decl_entry(parse_tree__prog_type__type_is_io_state_1_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module13)
	MR_init_entry1(check_hlds__post_typecheck__check_type_of_main_3_0);
	MR_init_label8(check_hlds__post_typecheck__check_type_of_main_3_0,3,5,7,9,15,17,40,11)
	MR_init_label1(check_hlds__post_typecheck__check_type_of_main_3_0,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__check_type_of_main_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__post_typecheck__check_type_of_main_3_0_i3);
MR_def_label(check_hlds__post_typecheck__check_type_of_main_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_type_of_main_3_0_i40);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__post_typecheck__check_type_of_main_3_0_i5);
MR_def_label(check_hlds__post_typecheck__check_type_of_main_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_type_of_main_3_0_i40);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_exported_1_0,
		check_hlds__post_typecheck__check_type_of_main_3_0_i7);
MR_def_label(check_hlds__post_typecheck__check_type_of_main_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_type_of_main_3_0_i40);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		check_hlds__post_typecheck__check_type_of_main_3_0_i9);
MR_def_label(check_hlds__post_typecheck__check_type_of_main_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_type_of_main_3_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_type_of_main_3_0_i11);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_type_of_main_3_0_i11);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_io_state_1_0,
		check_hlds__post_typecheck__check_type_of_main_3_0_i15);
MR_def_label(check_hlds__post_typecheck__check_type_of_main_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_type_of_main_3_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_io_state_1_0,
		check_hlds__post_typecheck__check_type_of_main_3_0_i17);
MR_def_label(check_hlds__post_typecheck__check_type_of_main_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_type_of_main_3_0_i11);
	}
MR_def_label(check_hlds__post_typecheck__check_type_of_main_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__post_typecheck__check_type_of_main_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		check_hlds__post_typecheck__check_type_of_main_3_0_i19);
MR_def_label(check_hlds__post_typecheck__check_type_of_main_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,26);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_unproven_body_constraints_2_0);
MR_decl_entry(list__sort_and_remove_dups_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_head_type_params_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_vartypes_2_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_constraint_proofs_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_constraint_map_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_constraint_proofs_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_constraint_map_3_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module14)
	MR_init_entry1(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0);
	MR_init_label8(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,2,8,6,10,5,12,3,16)
	MR_init_label8(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,18,19,20,13,14,21,22,23)
	MR_init_label8(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,24,25,27,29,30,32,33,34)
	MR_init_label8(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,38,35,39,40,41,42,43,44)
	MR_init_label8(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,45,46,31,47,48,49,51,52)
	MR_init_label1(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i2);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i8);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i5);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i10);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(6);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_finish_imported_pred_6_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i12);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_sv(1) = MR_sv(5);
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i54);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i14);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_unproven_body_constraints_2_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i16);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i18);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__report_unsatisfied_constraints_6_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i19);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i20);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i21);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_sv(3);
	MR_sv(3) = (MR_Integer) 0;
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i22);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_head_type_params_2_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i23);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i24);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_vartypes_2_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i25);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i27);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__init_1_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i29);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__check_var_type_bindings_6_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i30);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i32);
	}
	MR_r1 = MR_sv(4);
	MR_sv(7) = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i31);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i33);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i34);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i35);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i35);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__post_typecheck__report_unresolved_type_warning_7_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i38);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i39);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_sv(7) = MR_sv(12);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_constraint_proofs_2_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i40);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_constraint_map_2_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i41);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__bind_type_vars_to_void_7_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i42);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_vartypes_3_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i43);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i44);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_constraint_proofs_3_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i45);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_constraint_map_3_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i46);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i47);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__report_unbound_inst_vars_7_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i48);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__check_for_indistinguishable_modes_6_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i49);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i51);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_sv(1) = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_sv(3));
	MR_sv(2) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i54);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__post_typecheck__check_type_of_main_3_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i52);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_sv(1) = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_sv(3));
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0_i54);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__post_typecheck_module15)
	MR_init_entry1(check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0);
	MR_init_label3(check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_do_finish_pred_8_0,
		check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0_i4);
MR_def_label(check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
MR_decl_entry(map__foldl_4_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module16)
	MR_init_entry1(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0);
	MR_init_label5(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0,2,3,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__post_typecheck__post_typecheck_finish_preds_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__post_typecheck_do_finish_preds_8_0,
		check_hlds__post_typecheck__post_typecheck_finish_preds_7_0_i2);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_preds_7_0_i3);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,23);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		check_hlds__post_typecheck__post_typecheck_finish_preds_7_0_i6);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__post_typecheck__post_typecheck_finish_preds_7_0_i7);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_preds_7_0_i8);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_preds_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__post_typecheck_module17)
	MR_init_entry1(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0);
	MR_init_label8(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,2,3,4,5,6,8,9,13)
	MR_init_label4(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,7,16,15,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i2);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i3);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i4);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__propagate_types_into_proc_modes_7_0,
		check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i5);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i6);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i8);
	}
	MR_sv(3) = MR_sv(4);
	MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i7);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i9);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,23);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i13);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i7);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i16);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i15);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0_i19);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_ill_typed_pred_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__post_typecheck_module18)
	MR_init_entry1(fn__check_hlds__post_typecheck__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__post_typecheck__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("post_typecheck.m", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module19)
	MR_init_entry1(check_hlds__post_typecheck__report_assertion_interface_error_5_0);
	MR_init_label3(check_hlds__post_typecheck__report_assertion_interface_error_5_0,2,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__report_assertion_interface_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		check_hlds__post_typecheck__report_assertion_interface_error_5_0_i2);
MR_def_label(check_hlds__post_typecheck__report_assertion_interface_error_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,29);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,4,14);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,4,16);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,0,12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_assertion_interface_error_5_0_i18);
MR_def_label(check_hlds__post_typecheck__report_assertion_interface_error_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_assertion_interface_error_5_0_i19);
MR_def_label(check_hlds__post_typecheck__report_assertion_interface_error_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,33);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_impl_section_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module20)
	MR_init_entry1(check_hlds__post_typecheck__in_interface_check_5_0);
	MR_init_label8(check_hlds__post_typecheck__in_interface_check_5_0,76,56,57,30,31,32,34,36)
	MR_init_label8(check_hlds__post_typecheck__in_interface_check_5_0,37,38,23,62,3,4,5,7)
	MR_init_label8(check_hlds__post_typecheck__in_interface_check_5_0,9,10,11,13,6,19,21,24)
	MR_init_label8(check_hlds__post_typecheck__in_interface_check_5_0,25,26,28,44,46,49,48,51)
	MR_init_label2(check_hlds__post_typecheck__in_interface_check_5_0,53,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__in_interface_check_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r3, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i56) MR_AND
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i30) MR_AND
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i23) MR_AND
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i62));
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i57);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0);
	}
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 5);
	MR_sv(5) = MR_r4;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i31);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i32);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_impl_section_1_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i34);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_5_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i36);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i37);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i38);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__post_typecheck__report_assertion_interface_error_5_0);
	}
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r5, 0),
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i19) MR_AND
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i21) MR_AND
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i53) MR_AND
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i28) MR_AND
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i44) MR_AND
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i24) MR_AND
		MR_LABEL_AP(check_hlds__post_typecheck__in_interface_check_5_0_i46));
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	MR_sv(5) = MR_r4;
	MR_r2 = MR_ctfield(3, MR_r5, 2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i4);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i5);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_impl_section_1_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i7);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_5_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i9);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i10);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i11);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i13);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__post_typecheck__report_assertion_interface_error_5_0);
	}
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__post_typecheck__in_interface_check_list_5_0);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__post_typecheck__in_interface_check_list_5_0);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(check_hlds__post_typecheck__in_interface_check_5_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i25);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__post_typecheck__in_interface_check_5_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i26);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_5_0_i76);
	}
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_5_0_i76);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r5, 2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_5_0_i76);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r5, 1);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_5_0_i48);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 5);
	MR_r3 = MR_ctfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(check_hlds__post_typecheck__in_interface_check_5_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i49);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__post_typecheck__in_interface_check_list_5_0);
	}
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_localcall_lab(check_hlds__post_typecheck__in_interface_check_5_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i51);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_5_0_i76);
	}
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__post_typecheck__this_file_0_0,
		check_hlds__post_typecheck__in_interface_check_5_0_i54);
MR_def_label(check_hlds__post_typecheck__in_interface_check_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("in_interface_check: assertion contains switch.", 46);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_status_2_0);
MR_decl_entry(fn__hlds__hlds_out__cons_id_to_string_1_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module21)
	MR_init_entry1(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0);
	MR_init_label8(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,21,44,4,5,7,8,9,10)
	MR_init_label4(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,11,12,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i44);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i21);
	}
	MR_r1 = MR_r6;
	MR_proceed();
	}
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(2, MR_r3, 8);
	MR_r4 = MR_r6;
	MR_np_tailcall_ent(check_hlds__post_typecheck__in_interface_check_5_0);
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_ctfield(1, MR_r3, 0);
	MR_sv(5) = MR_r6;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i4);
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_vartypes_2_0,
		check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i5);
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i7);
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i8);
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i9);
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i10);
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_status_2_0,
		check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i11);
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_impl_section_1_0,
		check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i12);
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i14);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0_i15);
MR_def_label(check_hlds__post_typecheck__in_interface_check_unify_rhs_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,4,20);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__post_typecheck__report_assertion_interface_error_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__post_typecheck_module22)
	MR_init_entry1(check_hlds__post_typecheck__in_interface_check_list_5_0);
	MR_init_label3(check_hlds__post_typecheck__in_interface_check_list_5_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__in_interface_check_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__post_typecheck__in_interface_check_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_list_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__post_typecheck__in_interface_check_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r3, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(check_hlds__post_typecheck__in_interface_check_5_0,
		check_hlds__post_typecheck__in_interface_check_list_5_0_i4);
MR_def_label(check_hlds__post_typecheck__in_interface_check_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__post_typecheck__in_interface_check_list_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_clauses__clauses_info_clauses_only_2_0);
MR_decl_entry(hlds__assertion__normalise_goal_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_assertion_table_2_0);
MR_decl_entry(hlds__hlds_data__assertion_table_add_assertion_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_assertion_table_3_0);
MR_decl_entry(hlds__assertion__assert_id_goal_3_0);
MR_decl_entry(hlds__assertion__record_preds_used_in_4_0);
MR_decl_entry(hlds__goal_util__predids_from_goal_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_exclusive_table_2_0);
MR_decl_entry(hlds__hlds_data__exclusive_table_add_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_exclusive_table_0;
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(hlds__hlds_module__module_info_set_exclusive_table_3_0);
MR_decl_entry(hlds__hlds_module__module_info_remove_predid_3_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module23)
	MR_init_entry1(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0);
	MR_init_label8(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,4,5,6,10,7,3,14,15)
	MR_init_label8(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,16,17,13,19,20,21,22,27)
	MR_init_label8(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,28,29,31,32,2,33,34,37)
	MR_init_label2(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,39,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__post_typecheck__post_typecheck_finish_promise_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i4);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i5);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_clauses_only_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i6);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i7);
	}
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	}
	MR_np_call_localret_ent(hlds__assertion__normalise_goal_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i10);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i2);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("post_typecheck.m", 16);
	MR_r2 = (MR_Word) MR_string_const("promise_ex_goal: not a single clause", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i2);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i13);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_assertion_table_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i14);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__assertion_table_add_assertion_4_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i15);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_assertion_table_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i16);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__assertion__assert_id_goal_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i17);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__assertion__record_preds_used_in_4_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i32);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i19);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i20);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_clauses_only_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i21);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i22);
	}
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	}
	MR_np_call_localret_ent(hlds__assertion__normalise_goal_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i27);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("post_typecheck.m", 16);
	MR_r2 = (MR_Word) MR_string_const("promise_ex_goal: not a single clause", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i27);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__goal_util__predids_from_goal_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i28);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_exclusive_table_2_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i29);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_data__exclusive_table_add_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, exclusive_table);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i31);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_exclusive_table_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i32);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_remove_predid_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i33);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i34);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_exported_1_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i37);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i36);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__post_typecheck__in_interface_check_5_0,
		check_hlds__post_typecheck__post_typecheck_finish_promise_6_0_i39);
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__post_typecheck__post_typecheck_finish_promise_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(hlds__pred_table__resolve_pred_overloading_7_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module24)
	MR_init_entry1(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0);
	MR_init_label8(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,3,4,5,6,7,9,2,11)
	MR_init_label2(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0_i3);
MR_def_label(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0_i4);
MR_def_label(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0_i5);
MR_def_label(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0_i6);
MR_def_label(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_vartypes_2_0,
		check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0_i7);
MR_def_label(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0_i9);
MR_def_label(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__pred_table__resolve_pred_overloading_7_0);
	}
MR_def_label(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0_i11);
MR_def_label(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0_i12);
MR_def_label(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0_i13);
MR_def_label(check_hlds__post_typecheck__finally_resolve_pred_overloading_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_cons_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(hlds__hlds_data__get_type_defn_tvarset_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_kind_map_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(parse_tree__prog_type__arg_type_list_subsumes_6_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module25)
	MR_init_entry1(check_hlds__post_typecheck__find_matching_constructor_5_0);
	MR_init_label8(check_hlds__post_typecheck__find_matching_constructor_5_0,3,5,7,9,10,12,13,15)
	MR_init_label4(check_hlds__post_typecheck__find_matching_constructor_5_0,16,18,19,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__find_matching_constructor_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__post_typecheck__find_matching_constructor_5_0_i2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__post_typecheck__find_matching_constructor_5_0_i3);
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__find_matching_constructor_5_0_i2);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_cons_table_2_0,
		check_hlds__post_typecheck__find_matching_constructor_5_0_i5);
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,35);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__post_typecheck__find_matching_constructor_5_0_i7);
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__find_matching_constructor_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__post_typecheck__find_matching_constructor_5_0_i9);
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_ctor_0_0,
		check_hlds__post_typecheck__find_matching_constructor_5_0_i10);
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__post_typecheck__find_matching_constructor_5_0_i12);
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__post_typecheck__find_matching_constructor_5_0_i13);
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tvarset_2_0,
		check_hlds__post_typecheck__find_matching_constructor_5_0_i15);
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_kind_map_2_0,
		check_hlds__post_typecheck__find_matching_constructor_5_0_i16);
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__post_typecheck__find_matching_constructor_5_0_i18);
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__arg_type_list_subsumes_6_0,
		check_hlds__post_typecheck__find_matching_constructor_5_0_i19);
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__post_typecheck__find_matching_constructor_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_unify_list_5_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module26)
	MR_init_entry1(check_hlds__post_typecheck__unify_constraint_list_5_0);
	MR_init_label4(check_hlds__post_typecheck__unify_constraint_list_5_0,28,3,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__unify_constraint_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__post_typecheck__unify_constraint_list_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__unify_constraint_list_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__unify_constraint_list_5_0_i1);
	}
	MR_r2 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__post_typecheck__unify_constraint_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__unify_constraint_list_5_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_r2 = MR_ctfield(0, MR_ctfield(1, MR_r2, 0), 1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_list_5_0,
		check_hlds__post_typecheck__unify_constraint_list_5_0_i6);
MR_def_label(check_hlds__post_typecheck__unify_constraint_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__unify_constraint_list_5_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__post_typecheck__unify_constraint_list_5_0_i28);
	}
MR_def_label(check_hlds__post_typecheck__unify_constraint_list_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__get_type_and_cons_defn_5_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_tparams_2_0);
MR_decl_entry(varset__new_vars_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_typevarset_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0);
MR_decl_entry(hlds__hlds_data__lookup_hlds_constraint_list_5_0);
MR_decl_entry(parse_tree__prog_type__constraint_list_get_tvars_2_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_0);
MR_decl_entry(parse_tree__prog_type__type_list_to_var_list_2_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module27)
	MR_init_entry1(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0);
	MR_init_label8(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,2,4,6,8,9,10,11,12)
	MR_init_label8(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,13,14,15,16,17,18,19,22)
	MR_init_label8(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,21,25,26,27,28,31,30,5)
	MR_init_label6(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,35,38,41,37,43,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(8) = MR_r5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_type_and_cons_defn_5_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i2);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i4);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i6);
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i35);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i8);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i9);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i10);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_typevarset_3_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i11);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i12);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i13);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i14);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_constraint_map_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i15);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i16);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__lookup_hlds_constraint_list_5_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i17);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__constraint_list_get_tvars_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i18);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i19);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__unify_constraint_list_5_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i22);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i21);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i25);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("post_typecheck.m", 16);
	MR_r2 = (MR_Word) MR_string_const("constraint_list_subsumes_det: failed", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i25);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i26);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i27);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i28);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_to_var_list_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i31);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i30);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i35);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("post_typecheck.m", 16);
	MR_r2 = (MR_Word) MR_string_const("existq_tvar bound to non-var", 28);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i5);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i35);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i38);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i41);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i44);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("post_typecheck.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_cons_id_arg_types_adding_existq_tvars: type_to_ctor_and_args failed", 71);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i43);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0,
		check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0_i44);
MR_def_label(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__split_list_4_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module28)
	MR_init_entry1(check_hlds__post_typecheck__split_list_at_index_5_0);
	MR_init_label2(check_hlds__post_typecheck__split_list_at_index_5_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__split_list_at_index_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_call_localret_ent(list__split_list_4_0,
		check_hlds__post_typecheck__split_list_at_index_5_0_i3);
MR_def_label(check_hlds__post_typecheck__split_list_at_index_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__split_list_at_index_5_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__split_list_at_index_5_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__post_typecheck__split_list_at_index_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("post_typecheck.m", 16);
	MR_r2 = (MR_Word) MR_string_const("split_list_at_index", 19);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__unqualify_name_1_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module29)
	MR_init_entry1(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0);
	MR_init_label6(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0,25,6,7,3,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0_i4);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		check_hlds__post_typecheck__get_constructor_containing_field_3_4_0_i6);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		check_hlds__post_typecheck__get_constructor_containing_field_3_4_0_i7);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0_i3);
	}
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0_i25);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__post_typecheck_module30)
	MR_init_entry1(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0);
	MR_init_label5(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0,21,5,7,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__get_constructor_containing_field_3_4_0,
		check_hlds__post_typecheck__get_constructor_containing_field_2_4_0_i5);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__post_typecheck__get_constructor_containing_field_2_4_0_i7);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0_i21);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("post_typecheck.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_constructor_containing_field: can\'t find field", 50);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module31)
	MR_init_entry1(check_hlds__post_typecheck__get_constructor_containing_field_5_0);
	MR_init_label7(check_hlds__post_typecheck__get_constructor_containing_field_5_0,4,2,7,8,9,10,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__get_constructor_containing_field_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__post_typecheck__get_constructor_containing_field_5_0_i4);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__get_constructor_containing_field_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__post_typecheck__get_constructor_containing_field_5_0_i8);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("post_typecheck.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_constructor_containing_field: type_to_ctor_and_args failed", 62);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__post_typecheck__get_constructor_containing_field_5_0_i7);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__post_typecheck__get_constructor_containing_field_5_0_i8);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__post_typecheck__get_constructor_containing_field_5_0_i9);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__post_typecheck__get_constructor_containing_field_5_0_i10);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__get_constructor_containing_field_5_0_i12);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__post_typecheck__get_constructor_containing_field_2_4_0);
MR_def_label(check_hlds__post_typecheck__get_constructor_containing_field_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("post_typecheck.m", 16);
	MR_r2 = (MR_Word) MR_string_const("get_constructor_containing_field: not du type", 45);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0);
MR_decl_entry(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_goal_path_3_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module32)
	MR_init_entry1(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0);
	MR_init_label7(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0,2,3,4,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0_i2);
MR_def_label(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0,
		check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0_i3);
MR_def_label(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_tempr2 = MR_sv(6);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__create_pure_atomic_complicated_unification_6_0,
		check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0_i4);
MR_def_label(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0_i6);
MR_def_label(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0_i7);
MR_def_label(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0_i8);
MR_def_label(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_goal_path_3_0,
		check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0_i9);
MR_def_label(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svvarset__new_vars_4_0);
MR_decl_entry(svmap__det_insert_from_corresponding_lists_4_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module33)
	MR_init_entry1(check_hlds__post_typecheck__make_new_vars_6_0);
	MR_init_label3(check_hlds__post_typecheck__make_new_vars_6_0,2,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__make_new_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__post_typecheck__make_new_vars_6_0_i2);
MR_def_label(check_hlds__post_typecheck__make_new_vars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(svvarset__new_vars_4_0,
		check_hlds__post_typecheck__make_new_vars_6_0_i3);
MR_def_label(check_hlds__post_typecheck__make_new_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(svmap__det_insert_from_corresponding_lists_4_0,
		check_hlds__post_typecheck__make_new_vars_6_0_i5);
MR_def_label(check_hlds__post_typecheck__make_new_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__index1_det_3_0);
MR_decl_entry(parse_tree__prog_type__type_list_subsumes_3_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module34)
	MR_init_entry1(check_hlds__post_typecheck__translate_get_function_13_0);
	MR_init_label8(check_hlds__post_typecheck__translate_get_function_13_0,3,4,5,6,8,9,10,14)
	MR_init_label8(check_hlds__post_typecheck__translate_get_function_13_0,16,11,7,19,20,21,23,24)
	MR_init_label1(check_hlds__post_typecheck__translate_get_function_13_0,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__translate_get_function_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r9;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i3);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__get_constructor_containing_field_5_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i4);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i5);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i6);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__translate_get_function_13_0_i8);
	}
	MR_r2 = MR_sv(8);
	MR_sv(9) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(check_hlds__post_typecheck__split_list_at_index_5_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i19);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i9);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(list__index1_det_3_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i10);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i14);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__translate_get_function_13_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i16);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(check_hlds__post_typecheck__split_list_at_index_5_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i19);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("post_typecheck.m", 16);
	MR_r2 = (MR_Word) MR_string_const("translate_get_function: type_list_subsumes failed", 49);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i7);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__post_typecheck__split_list_at_index_5_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i19);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__post_typecheck__make_new_vars_6_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i20);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__make_new_vars_6_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i21);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__post_typecheck__translate_get_function_13_0_i23);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i24);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(5);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr4 = MR_r1;
	MR_r1 = MR_tempr5;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr4;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0,
		check_hlds__post_typecheck__translate_get_function_13_0_i28);
MR_def_label(check_hlds__post_typecheck__translate_get_function_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svvarset__new_var_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module35)
	MR_init_entry1(check_hlds__post_typecheck__make_new_var_6_0);
	MR_init_label2(check_hlds__post_typecheck__make_new_var_6_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__make_new_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(svvarset__new_var_3_0,
		check_hlds__post_typecheck__make_new_var_6_0_i2);
MR_def_label(check_hlds__post_typecheck__make_new_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__post_typecheck__make_new_var_6_0_i4);
MR_def_label(check_hlds__post_typecheck__make_new_var_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type__remove_new_prefix_2_1);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module36)
	MR_init_entry1(check_hlds__post_typecheck__translate_set_function_14_0);
	MR_init_label8(check_hlds__post_typecheck__translate_set_function_14_0,3,4,5,6,7,8,9,10)
	MR_init_label8(check_hlds__post_typecheck__translate_set_function_14_0,12,13,14,15,18,20,21,23)
	MR_init_label5(check_hlds__post_typecheck__translate_set_function_14_0,28,26,32,22,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__translate_set_function_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i3);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__get_constructor_containing_field_5_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i4);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i5);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i6);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(13) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__split_list_at_index_5_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i7);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__post_typecheck__make_new_vars_6_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i8);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__make_new_var_6_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i9);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__make_new_vars_6_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i10);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tempr2 = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(9) = MR_tempr2;
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__post_typecheck__translate_set_function_14_0_i12);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i13);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__post_typecheck__translate_set_function_14_0_i14);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i15);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr4 = MR_sv(10);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tempr5 = MR_sv(5);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr5;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr3;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i18);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__post_typecheck__translate_set_function_14_0_i20);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i21);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__translate_set_function_14_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr3 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_sv(6);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_r1;
	MR_r1 = MR_tempr4;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_r7;
	MR_GOTO_LAB(check_hlds__post_typecheck__translate_set_function_14_0_i22);
	}
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__translate_set_function_14_0_i26);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__remove_new_prefix_2_1,
		check_hlds__post_typecheck__translate_set_function_14_0_i28);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tempr5 = MR_sv(6);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_r6 = MR_sv(3);
	MR_r1 = MR_tempr5;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_GOTO_LAB(check_hlds__post_typecheck__translate_set_function_14_0_i22);
	}
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__post_typecheck__this_file_0_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i32);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("translate_set_function: invalid cons_id", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i22);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r3;
	MR_np_call_localret_ent(check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_0,
		check_hlds__post_typecheck__translate_set_function_14_0_i35);
MR_def_label(check_hlds__post_typecheck__translate_set_function_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,5,2);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__field_extraction_function_args_2_0);
MR_decl_entry(hlds__hlds_pred__field_update_function_args_3_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module37)
	MR_init_entry1(check_hlds__post_typecheck__finish_field_access_function_14_0);
	MR_init_label4(check_hlds__post_typecheck__finish_field_access_function_14_0,4,3,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__finish_field_access_function_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__finish_field_access_function_14_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r10;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_r9;
	MR_np_call_localret_ent(hlds__hlds_pred__field_extraction_function_args_2_0,
		check_hlds__post_typecheck__finish_field_access_function_14_0_i4);
MR_def_label(check_hlds__post_typecheck__finish_field_access_function_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__translate_get_function_13_0,
		check_hlds__post_typecheck__finish_field_access_function_14_0_i8);
MR_def_label(check_hlds__post_typecheck__finish_field_access_function_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r10;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_r9;
	MR_np_call_localret_ent(hlds__hlds_pred__field_update_function_args_3_0,
		check_hlds__post_typecheck__finish_field_access_function_14_0_i7);
MR_def_label(check_hlds__post_typecheck__finish_field_access_function_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__translate_set_function_14_0,
		check_hlds__post_typecheck__finish_field_access_function_14_0_i8);
MR_def_label(check_hlds__post_typecheck__finish_field_access_function_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_field_access_function_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_func_sym_arity_5_0);
MR_decl_entry(hlds__hlds_data__search_hlds_constraint_list_5_0);
MR_decl_entry(hlds__pred_table__find_matching_pred_id_7_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_proc_id_0_0);
MR_decl_entry(parse_tree__prog_type__type_is_higher_order_details_5_0);
MR_decl_entry(hlds__pred_table__get_pred_id_7_0);
MR_decl_entry(hlds__pred_table__get_proc_id_3_0);
MR_decl_entry(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0);
MR_decl_entry(hlds__hlds_pred__is_field_access_function_name_5_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module38)
	MR_init_entry1(check_hlds__post_typecheck__resolve_unify_functor_15_0);
	MR_init_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0,3,4,9,10,11,8,13,14)
	MR_init_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0,16,17,5,26,30,32,33,34)
	MR_init_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0,35,37,38,40,41,42,45,47)
	MR_init_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0,49,21,22,58,62,64,65,66)
	MR_init_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0,67,68,69,71,72,75,74,78)
	MR_init_label8(check_hlds__post_typecheck__resolve_unify_functor_15_0,80,82,55,56,90,94,96,97)
	MR_init_label6(check_hlds__post_typecheck__resolve_unify_functor_15_0,100,87,88,106,109,104)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__post_typecheck__resolve_unify_functor_15_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(15) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_sv(16) = MR_tempr1;
	MR_sv(17) = MR_r11;
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(18);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i3);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i4);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i5);
	}
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i9);
	}
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i8);
	}
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("apply", 5)) != 0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i10);
	}
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i8);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("impure_apply", 12)) != 0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i11);
	}
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_sv(18);
	MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i8);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("semipure_apply", 14)) != 0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i5);
	}
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(18);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(10),1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i13);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(18) = MR_r4;
	MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i5);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i14);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(18) = MR_r4;
	MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i5);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i16);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i17);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 3) = (MR_Integer) 6;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(7);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_decr_sp_and_return(19);
	}
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i22);
	}
	MR_sv(11) = MR_ctfield(1, MR_sv(2), 0);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i26);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i21);
	}
	MR_r1 = MR_sv(10);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_field_access_function_2_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i30);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i21);
	}
	MR_r1 = MR_sv(10);
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i32);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i33);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i34);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_func_sym_arity_5_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i35);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i21);
	}
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i37);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i38);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i40);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_constraint_map_2_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i41);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_path_1_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i42);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_data__search_hlds_constraint_list_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__pred_table__find_matching_pred_id_7_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i45);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i21);
	}
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i47);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i49);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 2) = MR_r1;
	MR_tfield(1, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr2, 4) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 5) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(7);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_decr_sp_and_return(19);
	}
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i56);
	}
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_details_5_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i58);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i55);
	}
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r5;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_field_access_function_2_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i62);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i55);
	}
	MR_r3 = MR_sv(12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(16);
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i64);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i65);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i66);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i67);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__calls_are_fully_qualified_1_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i68);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(hlds__pred_table__get_pred_id_7_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i69);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i55);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i71);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i72);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i74);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__pred_table__get_proc_id_3_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i75);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i82);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i78);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i82);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_proc_id_0_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i80);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__shroud_pred_proc_id_1_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i82);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(7);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_decr_sp_and_return(19);
	}
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i88);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i88);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__is_field_access_function_name_5_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i90);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i87);
	}
	if ((MR_sv(10) != MR_r2)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i87);
	}
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i94);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i87);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_tempr2 = MR_sv(12);
	MR_r1 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i96);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i97);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__post_typecheck__find_matching_constructor_5_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i100);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i87);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(17);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(7);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(check_hlds__post_typecheck__finish_field_access_function_14_0);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i104);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i104);
	}
	MR_sv(10) = MR_r1;
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i106);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i104);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__resolve_unify_functor_15_0_i104);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		check_hlds__post_typecheck__resolve_unify_functor_15_0_i109);
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(7);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_decr_sp_and_return(19);
	}
MR_def_label(check_hlds__post_typecheck__resolve_unify_functor_15_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(7);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_decr_sp_and_return(19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module39)
	MR_init_entry1(fn__check_hlds__post_typecheck__constraint_to_error_piece_2_0);
	MR_init_label1(fn__check_hlds__post_typecheck__constraint_to_error_piece_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__post_typecheck__constraint_to_error_piece_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_0,
		fn__check_hlds__post_typecheck__constraint_to_error_piece_2_0_i2);
MR_def_label(fn__check_hlds__post_typecheck__constraint_to_error_piece_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module40)
	MR_init_entry1(fn__check_hlds__post_typecheck__var_and_type_to_pieces_3_0);
	MR_init_label2(fn__check_hlds__post_typecheck__var_and_type_to_pieces_3_0,2,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__post_typecheck__var_and_type_to_pieces_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__post_typecheck__var_and_type_to_pieces_3_0_i2);
MR_def_label(fn__check_hlds__post_typecheck__var_and_type_to_pieces_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		fn__check_hlds__post_typecheck__var_and_type_to_pieces_3_0_i5);
MR_def_label(fn__check_hlds__post_typecheck__var_and_type_to_pieces_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,12);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(map__det_remove_4_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module41)
	MR_init_entry1(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0);
	MR_init_label6(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0,2,3,6,16,17,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__post_typecheck__report_unbound_inst_var_error_7_0_i2);
MR_def_label(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__post_typecheck__report_unbound_inst_var_error_7_0_i3);
MR_def_label(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,0,38);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		check_hlds__post_typecheck__report_unbound_inst_var_error_7_0_i6);
MR_def_label(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,43);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_unbound_inst_var_error_7_0_i16);
MR_def_label(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__post_typecheck__report_unbound_inst_var_error_7_0_i17);
MR_def_label(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
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
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_remove_4_0,
		check_hlds__post_typecheck__report_unbound_inst_var_error_7_0_i24);
MR_def_label(check_hlds__post_typecheck__report_unbound_inst_var_error_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0);
MR_decl_entry(mdbcomp__prim_data__sym_name_get_module_name_2_0);
MR_decl_entry(mdbcomp__prim_data__any_mercury_builtin_module_1_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_context_2_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module42)
	MR_init_entry1(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0);
	MR_init_label8(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,3,4,6,8,10,14,16,20)
	MR_init_label2(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,22,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_status_2_0,
		check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i3);
MR_def_label(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i4);
MR_def_label(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i6);
MR_def_label(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,
		check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i8);
MR_def_label(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__prim_data__sym_name_get_module_name_2_0,
		check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i10);
MR_def_label(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__any_mercury_builtin_module_1_0,
		check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i14);
MR_def_label(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i16);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("type_desc", 9)) == 0)) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i2);
	}
	}
MR_def_label(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i20);
MR_def_label(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_context_2_0,
		check_hlds__post_typecheck__check_for_missing_definitions_2_4_0_i22);
MR_def_label(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,44);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,4,24);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__post_typecheck__check_for_missing_definitions_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_type__void_type_0_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(check_hlds__post_typecheck_module43)
	MR_init_entry1(check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__334__1_3_0);
	MR_init_label1(check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__334__1_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__334__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__void_type_0_0,
		check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__334__1_3_0_i2);
MR_def_label(check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__334__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__post_typecheck_module44)
	MR_init_entry1(fn__check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1104__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1104__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__post_typecheck_module45)
	MR_init_entry1(fn__check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1270__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1270__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__post_typecheck_maybe_bunch_0(void)
{
	check_hlds__post_typecheck_module0();
	check_hlds__post_typecheck_module1();
	check_hlds__post_typecheck_module2();
	check_hlds__post_typecheck_module3();
	check_hlds__post_typecheck_module4();
	check_hlds__post_typecheck_module5();
	check_hlds__post_typecheck_module6();
	check_hlds__post_typecheck_module7();
	check_hlds__post_typecheck_module8();
	check_hlds__post_typecheck_module9();
	check_hlds__post_typecheck_module10();
	check_hlds__post_typecheck_module11();
	check_hlds__post_typecheck_module12();
	check_hlds__post_typecheck_module13();
	check_hlds__post_typecheck_module14();
	check_hlds__post_typecheck_module15();
	check_hlds__post_typecheck_module16();
	check_hlds__post_typecheck_module17();
	check_hlds__post_typecheck_module18();
	check_hlds__post_typecheck_module19();
	check_hlds__post_typecheck_module20();
	check_hlds__post_typecheck_module21();
	check_hlds__post_typecheck_module22();
	check_hlds__post_typecheck_module23();
	check_hlds__post_typecheck_module24();
	check_hlds__post_typecheck_module25();
	check_hlds__post_typecheck_module26();
	check_hlds__post_typecheck_module27();
	check_hlds__post_typecheck_module28();
	check_hlds__post_typecheck_module29();
	check_hlds__post_typecheck_module30();
	check_hlds__post_typecheck_module31();
	check_hlds__post_typecheck_module32();
	check_hlds__post_typecheck_module33();
	check_hlds__post_typecheck_module34();
	check_hlds__post_typecheck_module35();
	check_hlds__post_typecheck_module36();
	check_hlds__post_typecheck_module37();
	check_hlds__post_typecheck_module38();
	check_hlds__post_typecheck_module39();
}

static void mercury__check_hlds__post_typecheck_maybe_bunch_1(void)
{
	check_hlds__post_typecheck_module40();
	check_hlds__post_typecheck_module41();
	check_hlds__post_typecheck_module42();
	check_hlds__post_typecheck_module43();
	check_hlds__post_typecheck_module44();
	check_hlds__post_typecheck_module45();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__post_typecheck__init(void);
void mercury__check_hlds__post_typecheck__init_type_tables(void);
void mercury__check_hlds__post_typecheck__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__post_typecheck__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__post_typecheck__init_complexity_procs(void);
#endif

void mercury__check_hlds__post_typecheck__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__post_typecheck_maybe_bunch_0();
	mercury__check_hlds__post_typecheck_maybe_bunch_1();
	mercury__check_hlds__post_typecheck__init_debugger();
}

void mercury__check_hlds__post_typecheck__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__check_hlds__post_typecheck__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__post_typecheck__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__post_typecheck);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__post_typecheck__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
