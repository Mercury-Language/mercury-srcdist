/*
** Automatically generated from `prog_type.m'
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
INIT mercury__parse_tree__prog_type__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "parse_tree.prog_type.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "parse_tree.prog_type.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "parse_tree.prog_type.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "parse_tree.prog_type.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "parse_tree.prog_type.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "parse_tree.prog_type.c"
#line 48 "parse_tree.prog_type.c"
#include "parse_tree.prog_type.mh"

#line 51 "parse_tree.prog_type.c"
#line 52 "parse_tree.prog_type.c"
#ifndef PARSE_TREE__PROG_TYPE_DECL_GUARD
#define PARSE_TREE__PROG_TYPE_DECL_GUARD

#line 56 "parse_tree.prog_type.c"
#line 57 "parse_tree.prog_type.c"

#endif
#line 60 "parse_tree.prog_type.c"

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
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_category_0,
	mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0,
	mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0,
	mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0,
	mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0,
	mercury_data_parse_tree__prog_type__type_ctor_info_polymorphism_cell_0,
	mercury_data_parse_tree__prog_type__type_ctor_info_is_builtin_dummy_type_ctor_0,
	mercury_data_parse_tree__prog_type__type_ctor_info_ctor_defn_0;
MR_decl_label1(parse_tree__prog_type__IntroducedFrom__pred__split_vars_typeinfo_no_typeinfo__873__1_2_0, 3)
MR_decl_label4(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0, 3,9,15,1)
MR_decl_label4(parse_tree__prog_type__apply_partial_map_to_list_3_0, 21,6,4,9)
MR_decl_label8(parse_tree__prog_type__arg_type_list_subsumes_6_0, 2,3,4,5,6,10,15,14)
MR_decl_label2(parse_tree__prog_type__arg_type_list_subsumes_6_0, 8,1)
MR_decl_label2(parse_tree__prog_type__constraint_get_tvars_2_0, 2,4)
MR_decl_label1(parse_tree__prog_type__constraint_list_get_tvars_2_0, 5)
MR_decl_label2(parse_tree__prog_type__construct_higher_order_type_5_0, 4,3)
MR_decl_label8(parse_tree__prog_type__construct_type_3_0, 6,2,3,11,15,14,9,19)
MR_decl_label1(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0, 1)
MR_decl_label2(parse_tree__prog_type__get_unconstrained_tvars_3_0, 2,4)
MR_decl_label5(parse_tree__prog_type__is_introduced_type_info_type_1_0, 2,6,7,9,1)
MR_decl_label4(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0, 4,5,7,1)
MR_decl_label2(parse_tree__prog_type__is_region_var_2_0, 3,4)
MR_decl_label1(parse_tree__prog_type__make_type_ctor_3_0, 1)
MR_decl_label2(parse_tree__prog_type__prog_constraints_get_tvars_2_0, 2,3)
MR_decl_label8(parse_tree__prog_type__qualify_cons_id_5_0, 48,21,22,49,6,9,5,3)
MR_decl_label3(parse_tree__prog_type__qualify_cons_id_5_0, 28,15,16)
MR_decl_label4(parse_tree__prog_type__remove_new_prefix_2_0, 4,3,7,1)
MR_decl_label3(parse_tree__prog_type__remove_new_prefix_2_1, 4,3,6)
MR_decl_label8(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0, 70,11,12,9,16,71,27,3)
MR_decl_label8(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0, 4,18,19,21,23,29,30,69)
MR_decl_label2(parse_tree__prog_type__subst_type_is_ground_2_0, 4,1)
MR_decl_label5(parse_tree__prog_type__subst_type_is_nonground_2_0, 3,6,8,10,2)
MR_decl_label6(parse_tree__prog_type__type_constructors_are_type_info_1_0, 9,10,8,7,12,1)
MR_decl_label8(parse_tree__prog_type__type_contains_var_2_0, 33,19,21,69,4,68,11,65)
MR_decl_label1(parse_tree__prog_type__type_contains_var_2_0, 64)
MR_decl_label1(parse_tree__prog_type__type_ctor_is_array_1_0, 1)
MR_decl_label1(parse_tree__prog_type__type_ctor_is_bitmap_1_0, 1)
MR_decl_label5(parse_tree__prog_type__type_ctor_is_higher_order_4_0, 6,3,2,9,1)
MR_decl_label1(parse_tree__prog_type__type_ctor_is_tuple_1_0, 1)
MR_decl_label5(parse_tree__prog_type__type_has_variable_arity_ctor_3_0, 4,6,2,9,1)
MR_decl_label2(parse_tree__prog_type__type_is_ground_1_0, 6,5)
MR_decl_label1(parse_tree__prog_type__type_is_higher_order_1_0, 2)
MR_decl_label4(parse_tree__prog_type__type_is_higher_order_details_5_0, 2,5,7,1)
MR_decl_label5(parse_tree__prog_type__type_is_io_state_1_0, 2,4,7,9,1)
MR_decl_label2(parse_tree__prog_type__type_is_nonground_1_0, 3,2)
MR_decl_label1(parse_tree__prog_type__type_is_nonvar_1_0, 3)
MR_decl_label2(parse_tree__prog_type__type_is_tuple_2_0, 2,1)
MR_decl_label1(parse_tree__prog_type__type_is_var_1_0, 2)
MR_decl_label3(parse_tree__prog_type__type_list_contains_var_2_0, 7,4,2)
MR_decl_label4(parse_tree__prog_type__type_list_subsumes_3_0, 2,4,5,6)
MR_decl_label2(parse_tree__prog_type__type_list_subsumes_det_3_0, 3,2)
MR_decl_label3(parse_tree__prog_type__type_list_to_var_list_2_0, 22,5,1)
MR_decl_label8(parse_tree__prog_type__type_occurs_3_0, 118,70,35,37,40,46,3,6)
MR_decl_label6(parse_tree__prog_type__type_occurs_3_0, 10,13,20,24,67,1)
MR_decl_label4(parse_tree__prog_type__type_occurs_list_3_0, 19,6,3,1)
MR_decl_label8(parse_tree__prog_type__type_to_ctor_and_args_3_0, 86,6,9,36,45,3,12,13)
MR_decl_label8(parse_tree__prog_type__type_to_ctor_and_args_3_0, 15,18,14,21,24,26,31,33)
MR_decl_label1(parse_tree__prog_type__type_to_ctor_and_args_3_0, 1)
MR_decl_label2(parse_tree__prog_type__type_to_ctor_and_args_det_3_0, 3,2)
MR_decl_label2(parse_tree__prog_type__type_to_ctor_det_2_0, 3,2)
MR_decl_label4(parse_tree__prog_type__type_unify_5_0, 2,43,12,18)
MR_decl_label8(parse_tree__prog_type__type_unify_apply_6_0, 137,28,29,48,3,4,5,6)
MR_decl_label8(parse_tree__prog_type__type_unify_apply_6_0, 9,8,15,14,19,34,41,42)
MR_decl_label1(parse_tree__prog_type__type_unify_apply_6_0, 1)
MR_decl_label5(parse_tree__prog_type__type_unify_args_8_0, 2,3,4,6,1)
MR_decl_label8(parse_tree__prog_type__type_unify_head_type_param_6_0, 39,4,2,10,9,14,18,1)
MR_decl_label4(parse_tree__prog_type__type_unify_list_5_0, 28,3,6,1)
MR_decl_label8(parse_tree__prog_type__type_unify_nonvar_5_0, 129,7,28,132,19,23,130,1)
MR_decl_label5(parse_tree__prog_type__type_unify_rev_args_8_0, 25,3,5,7,1)
MR_decl_label5(parse_tree__prog_type__type_unify_special_5_0, 2,6,12,10,1)
MR_decl_label7(parse_tree__prog_type__type_unify_var_5_0, 2,8,6,14,18,21,1)
MR_decl_label8(parse_tree__prog_type__type_unify_var_var_6_0, 4,2,10,8,16,19,18,23)
MR_decl_label8(parse_tree__prog_type__type_unify_var_var_6_0, 27,24,25,31,14,38,40,44)
MR_decl_label8(parse_tree__prog_type__type_unify_var_var_6_0, 41,42,48,36,53,52,57,1)
MR_decl_label2(parse_tree__prog_type__type_vars_2_0, 2,4)
MR_decl_label8(parse_tree__prog_type__type_vars_2_3_0, 18,6,23,3,9,10,16,52)
MR_decl_label2(parse_tree__prog_type__type_vars_list_2_0, 2,4)
MR_decl_label3(parse_tree__prog_type__type_vars_list_2_3_0, 10,3,4)
MR_decl_label3(parse_tree__prog_type__var_list_to_type_list_3_0, 15,4,6)
MR_decl_label8(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0, 2,6,10,14,18,22,26,30)
MR_decl_label1(fn__parse_tree__prog_type__c_pointer_type_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_type__cell_cons_id_1_0, 3)
MR_decl_label2(fn__parse_tree__prog_type__cell_inst_cons_id_2_0, 3,4)
MR_decl_label6(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0, 6,7,3,14,15,11)
MR_decl_label1(fn__parse_tree__prog_type__comparison_result_type_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_type__heap_pointer_type_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_type__io_io_type_0_0, 3)
MR_decl_label1(fn__parse_tree__prog_type__io_state_type_0_0, 3)
MR_decl_label1(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0, 3)
MR_decl_label1(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0, 4)
MR_decl_label1(fn__parse_tree__prog_type__region_type_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_type__remove_typeinfo_vars_2_0, 4)
MR_decl_label2(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0, 3,5)
MR_decl_label1(fn__parse_tree__prog_type__sample_type_info_type_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_type__sample_typeclass_info_type_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_type__stm_atomic_type_0_0, 3)
MR_decl_label1(fn__parse_tree__prog_type__strip_kind_annotation_1_0, 14)
MR_decl_label1(fn__parse_tree__prog_type__type_ctor_info_type_0_0, 2)
MR_decl_label1(fn__parse_tree__prog_type__type_info_type_0_0, 2)
MR_decl_label7(__Unify___parse_tree__prog_type__ctor_defn_0_0, 4,7,9,11,13,17,1)
MR_decl_label3(__Unify___parse_tree__prog_type__polymorphism_cell_0_0, 12,5,1)
MR_decl_label7(__Unify___parse_tree__prog_type__type_ctor_category_0_0, 5,8,21,14,17,23,1)
MR_decl_label8(__Compare___parse_tree__prog_type__ctor_defn_0_0, 3,2,5,10,15,19,23,55)
MR_decl_label4(__Compare___parse_tree__prog_type__polymorphism_cell_0_0, 18,7,5,9)
MR_decl_label8(__Compare___parse_tree__prog_type__type_ctor_category_0_0, 153,5,17,20,38,50,42,53)
MR_decl_label8(__Compare___parse_tree__prog_type__type_ctor_category_0_0, 156,83,86,163,104,116,119,22)
MR_decl_label8(__Compare___parse_tree__prog_type__type_ctor_category_0_0, 33,36,55,66,69,217,88,99)
MR_decl_label7(__Compare___parse_tree__prog_type__type_ctor_category_0_0, 121,132,137,148,151,169,147)
MR_def_extern_entry(fn__parse_tree__prog_type__strip_kind_annotation_1_0)
MR_def_extern_entry(parse_tree__prog_type__type_is_var_1_0)
MR_def_extern_entry(parse_tree__prog_type__type_is_nonvar_1_0)
MR_def_extern_entry(parse_tree__prog_type__type_is_higher_order_1_0)
MR_def_extern_entry(parse_tree__prog_type__type_is_higher_order_details_5_0)
MR_def_extern_entry(parse_tree__prog_type__type_is_tuple_2_0)
MR_def_extern_entry(parse_tree__prog_type__type_contains_var_2_0)
MR_def_extern_entry(parse_tree__prog_type__type_list_contains_var_2_0)
MR_def_extern_entry(parse_tree__prog_type__type_is_ground_1_0)
MR_def_extern_entry(parse_tree__prog_type__type_is_nonground_1_0)
MR_def_extern_entry(parse_tree__prog_type__subst_type_is_nonground_2_0)
MR_def_extern_entry(parse_tree__prog_type__subst_type_is_ground_2_0)
MR_def_extern_entry(parse_tree__prog_type__type_has_variable_arity_ctor_3_0)
MR_def_extern_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0)
MR_def_extern_entry(parse_tree__prog_type__type_to_ctor_and_args_det_3_0)
MR_def_extern_entry(parse_tree__prog_type__type_to_ctor_det_2_0)
MR_def_extern_entry(parse_tree__prog_type__type_ctor_is_higher_order_4_0)
MR_def_extern_entry(parse_tree__prog_type__type_ctor_is_tuple_1_0)
MR_def_extern_entry(parse_tree__prog_type__type_list_to_var_list_2_0)
MR_def_extern_entry(parse_tree__prog_type__var_list_to_type_list_3_0)
MR_decl_static(parse_tree__prog_type__type_vars_2_3_0)
MR_decl_static(parse_tree__prog_type__type_vars_list_2_3_0)
MR_def_extern_entry(parse_tree__prog_type__type_vars_2_0)
MR_def_extern_entry(parse_tree__prog_type__type_vars_list_2_0)
MR_def_extern_entry(parse_tree__prog_type__construct_higher_order_pred_type_4_0)
MR_def_extern_entry(parse_tree__prog_type__construct_higher_order_func_type_5_0)
MR_def_extern_entry(parse_tree__prog_type__construct_higher_order_type_5_0)
MR_def_extern_entry(parse_tree__prog_type__construct_type_3_0)
MR_def_extern_entry(parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0)
MR_def_extern_entry(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0)
MR_def_extern_entry(parse_tree__prog_type__constraint_list_get_tvars_2_0)
MR_def_extern_entry(parse_tree__prog_type__prog_constraints_get_tvars_2_0)
MR_def_extern_entry(parse_tree__prog_type__constraint_get_tvars_2_0)
MR_def_extern_entry(parse_tree__prog_type__get_unconstrained_tvars_3_0)
MR_def_extern_entry(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0)
MR_def_extern_entry(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0)
MR_def_extern_entry(parse_tree__prog_type__type_is_io_state_1_0)
MR_def_extern_entry(parse_tree__prog_type__type_ctor_is_array_1_0)
MR_def_extern_entry(parse_tree__prog_type__type_ctor_is_bitmap_1_0)
MR_def_extern_entry(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0)
MR_def_extern_entry(parse_tree__prog_type__is_introduced_type_info_type_1_0)
MR_def_extern_entry(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0)
MR_def_extern_entry(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0)
MR_def_extern_entry(fn__parse_tree__prog_type__remove_typeinfo_vars_2_0)
MR_def_extern_entry(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0)
MR_def_extern_entry(parse_tree__prog_type__remove_new_prefix_2_0)
MR_def_extern_entry(parse_tree__prog_type__remove_new_prefix_2_1)
MR_def_extern_entry(fn__parse_tree__prog_type__int_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__string_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__float_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__char_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__void_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__c_pointer_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__heap_pointer_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__sample_type_info_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__sample_typeclass_info_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__comparison_result_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__io_state_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__io_io_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__stm_atomic_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__region_type_0_0)
MR_def_extern_entry(parse_tree__prog_type__is_region_var_2_0)
MR_def_extern_entry(fn__parse_tree__prog_type__type_info_type_0_0)
MR_def_extern_entry(fn__parse_tree__prog_type__type_ctor_info_type_0_0)
MR_def_extern_entry(parse_tree__prog_type__make_type_ctor_3_0)
MR_def_extern_entry(fn__parse_tree__prog_type__cell_cons_id_1_0)
MR_def_extern_entry(fn__parse_tree__prog_type__cell_inst_cons_id_2_0)
MR_def_extern_entry(parse_tree__prog_type__qualify_cons_id_5_0)
MR_def_extern_entry(parse_tree__prog_type__type_constructors_are_type_info_1_0)
MR_def_extern_entry(parse_tree__prog_type__type_ctor_should_be_notag_8_0)
MR_decl_static(parse_tree__prog_type__type_unify_head_type_param_6_0)
MR_decl_static(parse_tree__prog_type__type_occurs_3_0)
MR_decl_static(parse_tree__prog_type__type_occurs_list_3_0)
MR_def_extern_entry(parse_tree__prog_type__type_unify_5_0)
MR_def_extern_entry(parse_tree__prog_type__type_unify_list_5_0)
MR_decl_static(parse_tree__prog_type__type_unify_var_5_0)
MR_decl_static(parse_tree__prog_type__type_unify_var_var_6_0)
MR_decl_static(parse_tree__prog_type__type_unify_nonvar_5_0)
MR_decl_static(parse_tree__prog_type__type_unify_special_5_0)
MR_decl_static(parse_tree__prog_type__type_unify_apply_6_0)
MR_decl_static(parse_tree__prog_type__type_unify_args_8_0)
MR_decl_static(parse_tree__prog_type__type_unify_rev_args_8_0)
MR_def_extern_entry(parse_tree__prog_type__type_list_subsumes_3_0)
MR_def_extern_entry(parse_tree__prog_type__type_list_subsumes_det_3_0)
MR_def_extern_entry(parse_tree__prog_type__arg_type_list_subsumes_6_0)
MR_def_extern_entry(parse_tree__prog_type__apply_partial_map_to_list_3_0)
MR_def_extern_entry(__Unify___parse_tree__prog_type__ctor_defn_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_type__ctor_defn_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_type__is_builtin_dummy_type_ctor_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_type__is_builtin_dummy_type_ctor_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_type__polymorphism_cell_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_type__polymorphism_cell_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_type__type_ctor_cat_builtin_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_type__type_ctor_cat_builtin_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_type__type_ctor_cat_enum_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_type__type_ctor_cat_enum_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_type__type_ctor_cat_system_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_type__type_ctor_cat_system_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_type__type_ctor_cat_user_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_type__type_ctor_cat_user_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_type__type_ctor_category_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_type__type_ctor_category_0_0)
MR_decl_static(parse_tree__prog_type__IntroducedFrom__pred__split_vars_typeinfo_no_typeinfo__873__1_2_0)
MR_def_extern_entry(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[7] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,0)
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
MR_LIST_CTOR_ADDR,
MR_COMMON(0,2)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const struct mercury_type_1 mercury_common_1[8] =
{
{
MR_string_const("tuple", 5)
},
{
MR_string_const("pred", 4)
},
{
MR_string_const("func", 4)
},
{
MR_string_const("{}", 2)
},
{
MR_string_const("io", 2)
},
{
MR_string_const("store", 5)
},
{
MR_string_const("void", 4)
},
{
MR_string_const("stm_builtin", 11)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_TAG_COMMON(0,1,0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type__constraint_list_get_tvars_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_type__remove_typeinfo_vars_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_3 mercury_common_3[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_type__constraint_list_get_tvars_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_COMMON(0,3)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,0),
MR_COMMON(0,6)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__parse_tree__prog_type__remove_typeinfo_vars_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,0),
MR_COMMON(0,6)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,0),
MR_COMMON(0,6)
},
{
(MR_Word *) &mercury_data__closure_layout__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR
},
};

MR_decl_entry(fn__mdbcomp__prim_data__unqualify_name_1_0);
static const struct mercury_type_4 mercury_common_4[3] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(parse_tree__prog_type__constraint_get_tvars_2_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(fn__mdbcomp__prim_data__unqualify_name_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,5),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_TAG_COMMON(0,1,6),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_6 mercury_common_6[4] =
{
{
0
},
{
2
},
{
1
},
{
3
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_type__field_types_type_ctor_category_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0 = {
	"ctor_cat_builtin",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_type__field_types_type_ctor_category_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1 = {
	"ctor_cat_higher_order",
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

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2 = {
	"ctor_cat_tuple",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_type__field_types_type_ctor_category_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3 = {
	"ctor_cat_enum",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_type__field_types_type_ctor_category_0_3,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4 = {
	"ctor_cat_builtin_dummy",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5 = {
	"ctor_cat_variable",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_type__field_types_type_ctor_category_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6 = {
	"ctor_cat_system",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	6,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_type__field_types_type_ctor_category_0_6,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7 = {
	"ctor_cat_void",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_type__field_types_type_ctor_category_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8 = {
	"ctor_cat_user",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	8,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_type__field_types_type_ctor_category_0_8,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[] = {
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[] = {
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[] = {
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[] = {
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0[] = {
	{ 5, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_type__du_name_ordered_type_ctor_category_0[] = {
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5,
	&mercury_data_parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7
};

const MR_Integer mercury_data_parse_tree__prog_type__functor_number_map_type_ctor_category_0[] = {
	0,
	3,
	5,
	2,
	1,
	7,
	4,
	8,
	6 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_category_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_type__type_ctor_category_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0)),
	"parse_tree.prog_type",
	"type_ctor_category",
	{ (void *)mercury_data_parse_tree__prog_type__du_name_ordered_type_ctor_category_0 },
	{ (void *)mercury_data_parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0 },
	9,
	4,
	mercury_data_parse_tree__prog_type__functor_number_map_type_ctor_category_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0 = {
	"cat_user_direct_dummy",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1 = {
	"cat_user_notag",
	1
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2 = {
	"cat_user_general",
	2
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0[] = {
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[] = {
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1
};

const MR_Integer mercury_data_parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_type__type_ctor_cat_user_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_type__type_ctor_cat_user_0_0)),
	"parse_tree.prog_type",
	"type_ctor_cat_user",
	{ (void *)mercury_data_parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0 },
	{ (void *)mercury_data_parse_tree__prog_type__enum_value_ordered_type_ctor_cat_user_0 },
	3,
	4,
	mercury_data_parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0 = {
	"cat_system_type_info",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1 = {
	"cat_system_type_ctor_info",
	1
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2 = {
	"cat_system_typeclass_info",
	2
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3 = {
	"cat_system_base_typeclass_info",
	3
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0[] = {
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[] = {
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2
};

const MR_Integer mercury_data_parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[] = {
	2,
	1,
	3,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_type__type_ctor_cat_system_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_type__type_ctor_cat_system_0_0)),
	"parse_tree.prog_type",
	"type_ctor_cat_system",
	{ (void *)mercury_data_parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0 },
	{ (void *)mercury_data_parse_tree__prog_type__enum_value_ordered_type_ctor_cat_system_0 },
	4,
	4,
	mercury_data_parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0 = {
	"cat_enum_mercury",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1 = {
	"cat_enum_foreign",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0[] = {
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[] = {
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0
};

const MR_Integer mercury_data_parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_type__type_ctor_cat_enum_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_type__type_ctor_cat_enum_0_0)),
	"parse_tree.prog_type",
	"type_ctor_cat_enum",
	{ (void *)mercury_data_parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0 },
	{ (void *)mercury_data_parse_tree__prog_type__enum_value_ordered_type_ctor_cat_enum_0 },
	2,
	4,
	mercury_data_parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0 = {
	"cat_builtin_int",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1 = {
	"cat_builtin_float",
	1
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2 = {
	"cat_builtin_char",
	2
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3 = {
	"cat_builtin_string",
	3
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0[] = {
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0[] = {
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_2,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_1,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_0,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_type_ctor_cat_builtin_0_3
};

const MR_Integer mercury_data_parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[] = {
	2,
	1,
	0,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_type__type_ctor_cat_builtin_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_type__type_ctor_cat_builtin_0_0)),
	"parse_tree.prog_type",
	"type_ctor_cat_builtin",
	{ (void *)mercury_data_parse_tree__prog_type__enum_name_ordered_type_ctor_cat_builtin_0 },
	{ (void *)mercury_data_parse_tree__prog_type__enum_value_ordered_type_ctor_cat_builtin_0 },
	4,
	4,
	mercury_data_parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_type__field_types_polymorphism_cell_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0 = {
	"type_info_cell",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_type__field_types_polymorphism_cell_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1 = {
	"typeclass_info_cell",
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

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[] = {
	&mercury_data_parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[] = {
	&mercury_data_parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[] = {
	&mercury_data_parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0,
	&mercury_data_parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

const MR_Integer mercury_data_parse_tree__prog_type__functor_number_map_polymorphism_cell_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_polymorphism_cell_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_type__polymorphism_cell_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_type__polymorphism_cell_0_0)),
	"parse_tree.prog_type",
	"polymorphism_cell",
	{ (void *)mercury_data_parse_tree__prog_type__du_name_ordered_polymorphism_cell_0 },
	{ (void *)mercury_data_parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0 },
	2,
	4,
	mercury_data_parse_tree__prog_type__functor_number_map_polymorphism_cell_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0 = {
	"is_builtin_dummy_type_ctor",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1 = {
	"is_not_builtin_dummy_type_ctor",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0[] = {
	&mercury_data_parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[] = {
	&mercury_data_parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
	&mercury_data_parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1
};

const MR_Integer mercury_data_parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_is_builtin_dummy_type_ctor_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_type__is_builtin_dummy_type_ctor_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_type__is_builtin_dummy_type_ctor_0_0)),
	"parse_tree.prog_type",
	"is_builtin_dummy_type_ctor",
	{ (void *)mercury_data_parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0 },
	{ (void *)mercury_data_parse_tree__prog_type__enum_value_ordered_is_builtin_dummy_type_ctor_0 },
	2,
	4,
	mercury_data_parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_kind_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_type__field_types_ctor_defn_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
};

const MR_ConstString mercury_data_parse_tree__prog_type__field_names_ctor_defn_0_0[] = {
	"ctor_tvars",
	"ctor_existq_tvars",
	"ctor_tvar_kinds",
	"ctor_constraints",
	"ctor_arg_types",
	"ctor_result_type"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_type__du_functor_desc_ctor_defn_0_0 = {
	"ctor_defn",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_type__field_types_ctor_defn_0_0,
	mercury_data_parse_tree__prog_type__field_names_ctor_defn_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0[] = {
	&mercury_data_parse_tree__prog_type__du_functor_desc_ctor_defn_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_type__du_ptag_ordered_ctor_defn_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_type__du_stag_ordered_ctor_defn_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_type__du_name_ordered_ctor_defn_0[] = {
	&mercury_data_parse_tree__prog_type__du_functor_desc_ctor_defn_0_0
};

const MR_Integer mercury_data_parse_tree__prog_type__functor_number_map_ctor_defn_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_type__type_ctor_info_ctor_defn_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_type__ctor_defn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_type__ctor_defn_0_0)),
	"parse_tree.prog_type",
	"ctor_defn",
	{ (void *)mercury_data_parse_tree__prog_type__du_name_ordered_ctor_defn_0 },
	{ (void *)mercury_data_parse_tree__prog_type__du_ptag_ordered_ctor_defn_0 },
	1,
	4,
	mercury_data_parse_tree__prog_type__functor_number_map_ctor_defn_0
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type",
"parse_tree.prog_type",
"strip_builtin_qualifiers_from_type",
2,
0
},
"parse_tree.prog_type",
"prog_type.m",
756,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_type__constraint_list_get_tvars_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type",
"parse_tree.prog_type",
"constraint_get_tvars",
2,
0
},
"parse_tree.prog_type",
"prog_type.m",
766,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type",
"parse_tree.prog_type",
"lambda_prog_type_m_873",
2,
0
},
"parse_tree.prog_type",
"prog_type.m",
873,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_type__remove_typeinfo_vars_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type",
"parse_tree.prog_type",
"lambda_prog_type_m_873",
2,
0
},
"parse_tree.prog_type",
"prog_type.m",
873,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type",
"parse_tree.prog_type",
"lambda_prog_type_m_873",
2,
0
},
"parse_tree.prog_type",
"prog_type.m",
873,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_1 = {
{
MR_FUNCTION,
"mdbcomp.prim_data",
"mdbcomp.prim_data",
"unqualify_name",
2,
0
},
"parse_tree.prog_type",
"prog_type.m",
1071,
"d1;c17;"
};


MR_BEGIN_MODULE(parse_tree__prog_type_module0)
	MR_init_entry1(fn__parse_tree__prog_type__strip_kind_annotation_1_0);
	MR_init_label1(fn__parse_tree__prog_type__strip_kind_annotation_1_0,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__strip_kind_annotation_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__strip_kind_annotation_1_0_i14);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_localtailcall(fn__parse_tree__prog_type__strip_kind_annotation_1_0);
MR_def_label(fn__parse_tree__prog_type__strip_kind_annotation_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module1)
	MR_init_entry1(parse_tree__prog_type__type_is_var_1_0);
	MR_init_label1(parse_tree__prog_type__type_is_var_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_is_var_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		parse_tree__prog_type__type_is_var_1_0_i2);
MR_def_label(parse_tree__prog_type__type_is_var_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 0));
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module2)
	MR_init_entry1(parse_tree__prog_type__type_is_nonvar_1_0);
	MR_init_label1(parse_tree__prog_type__type_is_nonvar_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_is_nonvar_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		parse_tree__prog_type__type_is_nonvar_1_0_i3);
MR_def_label(parse_tree__prog_type__type_is_nonvar_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r1) != MR_mktag((MR_Integer) 0));
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module3)
	MR_init_entry1(parse_tree__prog_type__type_is_higher_order_1_0);
	MR_init_label1(parse_tree__prog_type__type_is_higher_order_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_is_higher_order_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		parse_tree__prog_type__type_is_higher_order_1_0_i2);
MR_def_label(parse_tree__prog_type__type_is_higher_order_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_ctfield(3, MR_r1, 0) == (MR_Integer) 1));
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__list__append_2_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module4)
	MR_init_entry1(parse_tree__prog_type__type_is_higher_order_details_5_0);
	MR_init_label4(parse_tree__prog_type__type_is_higher_order_details_5_0,2,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_is_higher_order_details_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		parse_tree__prog_type__type_is_higher_order_details_5_0_i2);
MR_def_label(parse_tree__prog_type__type_is_higher_order_details_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_is_higher_order_details_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r6 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_is_higher_order_details_5_0_i5);
	}
	MR_r2 = MR_ctfield(3, MR_tempr1, 3);
	MR_r3 = (MR_Integer) 0;
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_type__type_is_higher_order_details_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r6, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		parse_tree__prog_type__type_is_higher_order_details_5_0_i7);
MR_def_label(parse_tree__prog_type__type_is_higher_order_details_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_is_higher_order_details_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module5)
	MR_init_entry1(parse_tree__prog_type__type_is_tuple_2_0);
	MR_init_label2(parse_tree__prog_type__type_is_tuple_2_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_is_tuple_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		parse_tree__prog_type__type_is_tuple_2_0_i2);
MR_def_label(parse_tree__prog_type__type_is_tuple_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_is_tuple_2_0_i1);
	}
	MR_r2 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_is_tuple_2_0,1)
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

MR_declare_entry(MR_do_fail);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(parse_tree__prog_type_module6)
	MR_init_entry1(parse_tree__prog_type__type_contains_var_2_0);
	MR_init_label8(parse_tree__prog_type__type_contains_var_2_0,33,19,21,69,4,68,11,65)
	MR_init_label1(parse_tree__prog_type__type_contains_var_2_0,64)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_contains_var_2_0_i21);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_contains_var_2_0_i19);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_contains_var_2_0_i65);
	}
	}
MR_def_label(parse_tree__prog_type__type_contains_var_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 1);
	MR_np_tailcall_ent(parse_tree__prog_type__type_list_contains_var_2_0);
MR_def_label(parse_tree__prog_type__type_contains_var_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_contains_var_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_contains_var_2_0_i33);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_contains_var_2_0_i68);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_contains_var_2_0_i69);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_localtailcall(parse_tree__prog_type__type_contains_var_2_0);
	}
MR_def_label(parse_tree__prog_type__type_contains_var_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred parse_tree.prog_type.type_contains_var/2-0", 1,
		MR_LABEL_AP(parse_tree__prog_type__type_contains_var_2_0_i4));
	MR_fv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succeed();
MR_def_label(parse_tree__prog_type__type_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(parse_tree__prog_type__type_list_contains_var_2_0);
MR_def_label(parse_tree__prog_type__type_contains_var_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred parse_tree.prog_type.type_contains_var/2-0", 1,
		MR_LABEL_AP(parse_tree__prog_type__type_contains_var_2_0_i11));
	MR_fv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_contains_var_2_0,
		parse_tree__prog_type__type_contains_var_2_0_i64);
MR_def_label(parse_tree__prog_type__type_contains_var_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_fv(1),0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r1 = MR_ctfield(1, MR_fv(1), 0);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(parse_tree__prog_type__type_contains_var_2_0);
MR_def_label(parse_tree__prog_type__type_contains_var_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(parse_tree__prog_type__type_contains_var_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module7)
	MR_init_entry1(parse_tree__prog_type__type_list_contains_var_2_0);
	MR_init_label3(parse_tree__prog_type__type_list_contains_var_2_0,7,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_list_contains_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred parse_tree.prog_type.type_list_contains_var/2-0", 1);
MR_def_label(parse_tree__prog_type__type_list_contains_var_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(1) = MR_ctfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(parse_tree__prog_type__type_list_contains_var_2_0_i4);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_contains_var_2_0,
		parse_tree__prog_type__type_list_contains_var_2_0_i2);
MR_def_label(parse_tree__prog_type__type_list_contains_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_GOTO_LAB(parse_tree__prog_type__type_list_contains_var_2_0_i7);
MR_def_label(parse_tree__prog_type__type_list_contains_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module8)
	MR_init_entry1(parse_tree__prog_type__type_is_ground_1_0);
	MR_init_label2(parse_tree__prog_type__type_is_ground_1_0,6,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_is_ground_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(2) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(3));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(parse_tree__prog_type__type_is_ground_1_0_i5);
	MR_np_call_localret_ent(parse_tree__prog_type__type_contains_var_2_0,
		parse_tree__prog_type__type_is_ground_1_0_i6);
MR_def_label(parse_tree__prog_type__type_is_ground_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(3));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_is_ground_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module9)
	MR_init_entry1(parse_tree__prog_type__type_is_nonground_1_0);
	MR_init_label2(parse_tree__prog_type__type_is_nonground_1_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_is_nonground_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(2) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(3));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(parse_tree__prog_type__type_is_nonground_1_0_i2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_contains_var_2_0,
		parse_tree__prog_type__type_is_nonground_1_0_i3);
MR_def_label(parse_tree__prog_type__type_is_nonground_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(3));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_is_nonground_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module10)
	MR_init_entry1(parse_tree__prog_type__subst_type_is_nonground_2_0);
	MR_init_label5(parse_tree__prog_type__subst_type_is_nonground_2_0,3,6,8,10,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__subst_type_is_nonground_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(parse_tree__prog_type__subst_type_is_nonground_2_0_i2);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_contains_var_2_0,
		parse_tree__prog_type__subst_type_is_nonground_2_0_i3);
MR_def_label(parse_tree__prog_type__subst_type_is_nonground_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type__subst_type_is_nonground_2_0_i6);
MR_def_label(parse_tree__prog_type__subst_type_is_nonground_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__subst_type_is_nonground_2_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(parse_tree__prog_type__subst_type_is_nonground_2_0,
		parse_tree__prog_type__subst_type_is_nonground_2_0_i8);
MR_def_label(parse_tree__prog_type__subst_type_is_nonground_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
MR_def_label(parse_tree__prog_type__subst_type_is_nonground_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__subst_type_is_nonground_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module11)
	MR_init_entry1(parse_tree__prog_type__subst_type_is_ground_2_0);
	MR_init_label2(parse_tree__prog_type__subst_type_is_ground_2_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__subst_type_is_ground_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parse_tree__prog_type__subst_type_is_nonground_2_0,
		parse_tree__prog_type__subst_type_is_ground_2_0_i4);
MR_def_label(parse_tree__prog_type__subst_type_is_ground_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__subst_type_is_ground_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__subst_type_is_ground_2_0,1)
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

MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_str_1_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module12)
	MR_init_entry1(parse_tree__prog_type__type_has_variable_arity_ctor_3_0);
	MR_init_label5(parse_tree__prog_type__type_has_variable_arity_ctor_3_0,4,6,2,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_has_variable_arity_ctor_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_details_5_0,
		parse_tree__prog_type__type_has_variable_arity_ctor_3_0_i4);
MR_def_label(parse_tree__prog_type__type_has_variable_arity_ctor_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_has_variable_arity_ctor_3_0_i2);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_str_1_0,
		parse_tree__prog_type__type_has_variable_arity_ctor_3_0_i6);
MR_def_label(parse_tree__prog_type__type_has_variable_arity_ctor_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_type__type_has_variable_arity_ctor_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_type__strip_kind_annotation_1_0,
		parse_tree__prog_type__type_has_variable_arity_ctor_3_0_i9);
MR_def_label(parse_tree__prog_type__type_has_variable_arity_ctor_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_has_variable_arity_ctor_3_0_i1);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_has_variable_arity_ctor_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__builtin_type_to_string_2_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(fn__mdbcomp__prim_data__insert_module_qualifier_2_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module13)
	MR_init_entry1(parse_tree__prog_type__type_to_ctor_and_args_3_0);
	MR_init_label8(parse_tree__prog_type__type_to_ctor_and_args_3_0,86,6,9,36,45,3,12,13)
	MR_init_label8(parse_tree__prog_type__type_to_ctor_and_args_3_0,15,18,14,21,24,26,31,33)
	MR_init_label1(parse_tree__prog_type__type_to_ctor_and_args_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_to_ctor_and_args_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_3_0_i36);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_3_0_i9);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_3_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__builtin_type_to_string_2_0,
		parse_tree__prog_type__type_to_ctor_and_args_3_0_i6);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		parse_tree__prog_type__type_to_ctor_and_args_3_0_i33);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_3_0_i31);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_3_0_i12);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_3_0_i3);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_3_0_i86);
	}
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_type.m", 11);
	MR_r2 = (MR_Word) MR_string_const("apply/N types", 13);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		parse_tree__prog_type__type_to_ctor_and_args_3_0_i45);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		parse_tree__prog_type__type_to_ctor_and_args_3_0_i13);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_3_0_i15);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_3_0_i14);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(2), 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		parse_tree__prog_type__type_to_ctor_and_args_3_0_i18);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const("impure", 6);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__insert_module_qualifier_2_0,
		parse_tree__prog_type__type_to_ctor_and_args_3_0_i26);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_3_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("semipure", 8);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__insert_module_qualifier_2_0,
		parse_tree__prog_type__type_to_ctor_and_args_3_0_i26);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		parse_tree__prog_type__type_to_ctor_and_args_3_0_i33);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module14)
	MR_init_entry1(parse_tree__prog_type__type_to_ctor_and_args_det_3_0);
	MR_init_label2(parse_tree__prog_type__type_to_ctor_and_args_det_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_to_ctor_and_args_det_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		parse_tree__prog_type__type_to_ctor_and_args_det_3_0_i3);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_det_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_and_args_det_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
MR_def_label(parse_tree__prog_type__type_to_ctor_and_args_det_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_type.m", 11);
	MR_r2 = (MR_Word) MR_string_const("type_to_ctor_and_args_det: type_to_ctor_and_args failed", 55);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module15)
	MR_init_entry1(parse_tree__prog_type__type_to_ctor_det_2_0);
	MR_init_label2(parse_tree__prog_type__type_to_ctor_det_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_to_ctor_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		parse_tree__prog_type__type_to_ctor_det_2_0_i3);
MR_def_label(parse_tree__prog_type__type_to_ctor_det_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_to_ctor_det_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(parse_tree__prog_type__type_to_ctor_det_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_type.m", 11);
	MR_r2 = (MR_Word) MR_string_const("type_to_ctor_and_args_det: type_to_ctor_and_args failed", 55);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module16)
	MR_init_entry1(parse_tree__prog_type__type_ctor_is_higher_order_4_0);
	MR_init_label5(parse_tree__prog_type__type_ctor_is_higher_order_4_0,6,3,2,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_ctor_is_higher_order_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_higher_order_4_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_higher_order_4_0_i1);
	}
	MR_r7 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("impure", 6)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_higher_order_4_0_i6);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_higher_order_4_0_i2);
	}
MR_def_label(parse_tree__prog_type__type_ctor_is_higher_order_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r7, MR_string_const("semipure", 8)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_higher_order_4_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_ctfield(1, MR_r5, 1);
	MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_higher_order_4_0_i2);
MR_def_label(parse_tree__prog_type__type_ctor_is_higher_order_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_ctfield(0, MR_r5, 0);
MR_def_label(parse_tree__prog_type__type_ctor_is_higher_order_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("func", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_higher_order_4_0_i9);
	}
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_ctor_is_higher_order_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pred", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_higher_order_4_0_i1);
	}
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_ctor_is_higher_order_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module17)
	MR_init_entry1(parse_tree__prog_type__type_ctor_is_tuple_1_0);
	MR_init_label1(parse_tree__prog_type__type_ctor_is_tuple_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_ctor_is_tuple_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_tuple_1_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("{}", 2)) == 0);
	MR_proceed();
	}
MR_def_label(parse_tree__prog_type__type_ctor_is_tuple_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module18)
	MR_init_entry1(parse_tree__prog_type__type_list_to_var_list_2_0);
	MR_init_label3(parse_tree__prog_type__type_list_to_var_list_2_0,22,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_list_to_var_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_list_to_var_list_2_0_i22);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_list_to_var_list_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_list_to_var_list_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(parse_tree__prog_type__type_list_to_var_list_2_0,
		parse_tree__prog_type__type_list_to_var_list_2_0_i5);
MR_def_label(parse_tree__prog_type__type_list_to_var_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_list_to_var_list_2_0_i1);
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
MR_def_label(parse_tree__prog_type__type_list_to_var_list_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__get_tvar_kind_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module19)
	MR_init_entry1(parse_tree__prog_type__var_list_to_type_list_3_0);
	MR_init_label3(parse_tree__prog_type__var_list_to_type_list_3_0,15,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__var_list_to_type_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__var_list_to_type_list_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_type__var_list_to_type_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__get_tvar_kind_3_0,
		parse_tree__prog_type__var_list_to_type_list_3_0_i4);
MR_def_label(parse_tree__prog_type__var_list_to_type_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(parse_tree__prog_type__var_list_to_type_list_3_0,
		parse_tree__prog_type__var_list_to_type_list_3_0_i6);
MR_def_label(parse_tree__prog_type__var_list_to_type_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module20)
	MR_init_entry1(parse_tree__prog_type__type_vars_2_3_0);
	MR_init_label8(parse_tree__prog_type__type_vars_2_3_0,18,6,23,3,9,10,16,52)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_vars_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i18) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i6) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i23));
MR_def_label(parse_tree__prog_type__type_vars_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_type__type_vars_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(parse_tree__prog_type__type_vars_2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_vars_2_3_0_i16);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_vars_2_3_0_i9);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_vars_2_3_0_i3);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i18) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i6) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i23));
	}
MR_def_label(parse_tree__prog_type__type_vars_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_type__type_vars_list_2_3_0);
	}
MR_def_label(parse_tree__prog_type__type_vars_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_3_0,
		parse_tree__prog_type__type_vars_2_3_0_i10);
MR_def_label(parse_tree__prog_type__type_vars_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_vars_2_3_0_i52);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i18) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i16) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i6) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__type_vars_2_3_0_i23));
MR_def_label(parse_tree__prog_type__type_vars_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_type__type_vars_list_2_3_0);
MR_def_label(parse_tree__prog_type__type_vars_2_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module21)
	MR_init_entry1(parse_tree__prog_type__type_vars_list_2_3_0);
	MR_init_label3(parse_tree__prog_type__type_vars_list_2_3_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_vars_list_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_type__type_vars_list_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_vars_list_2_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(parse_tree__prog_type__type_vars_list_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_3_0,
		parse_tree__prog_type__type_vars_list_2_3_0_i4);
MR_def_label(parse_tree__prog_type__type_vars_list_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(parse_tree__prog_type__type_vars_list_2_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);
MR_decl_entry(list__remove_dups_2_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module22)
	MR_init_entry1(parse_tree__prog_type__type_vars_2_0);
	MR_init_label2(parse_tree__prog_type__type_vars_2_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_3_0,
		parse_tree__prog_type__type_vars_2_0_i2);
MR_def_label(parse_tree__prog_type__type_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_type__type_vars_2_0_i4);
MR_def_label(parse_tree__prog_type__type_vars_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__remove_dups_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module23)
	MR_init_entry1(parse_tree__prog_type__type_vars_list_2_0);
	MR_init_label2(parse_tree__prog_type__type_vars_list_2_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_vars_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_3_0,
		parse_tree__prog_type__type_vars_list_2_0_i2);
MR_def_label(parse_tree__prog_type__type_vars_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_type__type_vars_list_2_0_i4);
MR_def_label(parse_tree__prog_type__type_vars_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__remove_dups_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module24)
	MR_init_entry1(parse_tree__prog_type__construct_higher_order_pred_type_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__construct_higher_order_pred_type_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module25)
	MR_init_entry1(parse_tree__prog_type__construct_higher_order_func_type_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__construct_higher_order_func_type_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_r3;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module26)
	MR_init_entry1(parse_tree__prog_type__construct_higher_order_type_5_0);
	MR_init_label2(parse_tree__prog_type__construct_higher_order_type_5_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__construct_higher_order_type_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__construct_higher_order_type_5_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		parse_tree__prog_type__construct_higher_order_type_5_0_i4);
MR_def_label(parse_tree__prog_type__construct_higher_order_type_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = MR_sv(1);
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_type__construct_higher_order_type_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__builtin_type_to_string_2_1);

MR_BEGIN_MODULE(parse_tree__prog_type_module27)
	MR_init_entry1(parse_tree__prog_type__construct_type_3_0);
	MR_init_label8(parse_tree__prog_type__construct_type_3_0,6,2,3,11,15,14,9,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__construct_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__construct_type_3_0_i3);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__construct_type_3_0_i3);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__builtin_type_to_string_2_1,
		parse_tree__prog_type__construct_type_3_0_i6);
MR_def_label(parse_tree__prog_type__construct_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__construct_type_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_type__construct_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(parse_tree__prog_type__construct_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_higher_order_4_0,
		parse_tree__prog_type__construct_type_3_0_i11);
MR_def_label(parse_tree__prog_type__construct_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__construct_type_3_0_i9);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__construct_type_3_0_i14);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		parse_tree__prog_type__construct_type_3_0_i15);
MR_def_label(parse_tree__prog_type__construct_type_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = MR_sv(1);
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_type__construct_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_type__construct_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__construct_type_3_0_i19);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__construct_type_3_0_i19);
	}
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_r2;
	MR_tfield(3, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(parse_tree__prog_type__construct_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module28)
	MR_init_entry1(parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module29)
	MR_init_entry1(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0);
	MR_init_label8(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,70,11,12,9,16,71,27,3)
	MR_init_label8(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,4,18,19,21,23,29,30,69)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i69) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i70) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i69) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i71));
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i9);
	}
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i11);
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i12);
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i9);
	}
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = MR_sv(5);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0,
		parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i16);
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0,
		parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i16);
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i29);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i18);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i3);
	}
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	}
	MR_np_localcall_lab(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,
		parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i27);
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0,
		parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i4);
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0,
		parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i19);
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_localcall_lab(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,
		parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i23);
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_0,
		parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0_i30);
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module30)
	MR_init_entry1(parse_tree__prog_type__constraint_list_get_tvars_2_0);
	MR_init_label1(parse_tree__prog_type__constraint_list_get_tvars_2_0,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__constraint_list_get_tvars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__prog_type__constraint_list_get_tvars_2_0_i5);
MR_def_label(parse_tree__prog_type__constraint_list_get_tvars_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__condense_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(parse_tree__prog_type_module31)
	MR_init_entry1(parse_tree__prog_type__prog_constraints_get_tvars_2_0);
	MR_init_label2(parse_tree__prog_type__prog_constraints_get_tvars_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__prog_constraints_get_tvars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__constraint_list_get_tvars_2_0,
		parse_tree__prog_type__prog_constraints_get_tvars_2_0_i2);
MR_def_label(parse_tree__prog_type__prog_constraints_get_tvars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__constraint_list_get_tvars_2_0,
		parse_tree__prog_type__prog_constraints_get_tvars_2_0_i3);
MR_def_label(parse_tree__prog_type__prog_constraints_get_tvars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module32)
	MR_init_entry1(parse_tree__prog_type__constraint_get_tvars_2_0);
	MR_init_label2(parse_tree__prog_type__constraint_get_tvars_2_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__constraint_get_tvars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_3_0,
		parse_tree__prog_type__constraint_get_tvars_2_0_i2);
MR_def_label(parse_tree__prog_type__constraint_get_tvars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_type__constraint_get_tvars_2_0_i4);
MR_def_label(parse_tree__prog_type__constraint_get_tvars_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__remove_dups_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_elems_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module33)
	MR_init_entry1(parse_tree__prog_type__get_unconstrained_tvars_3_0);
	MR_init_label2(parse_tree__prog_type__get_unconstrained_tvars_3_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__get_unconstrained_tvars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__constraint_list_get_tvars_2_0,
		parse_tree__prog_type__get_unconstrained_tvars_3_0_i2);
MR_def_label(parse_tree__prog_type__get_unconstrained_tvars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__delete_elems_3_0,
		parse_tree__prog_type__get_unconstrained_tvars_3_0_i4);
MR_def_label(parse_tree__prog_type__get_unconstrained_tvars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__remove_dups_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module34)
	MR_init_entry1(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0);
	MR_init_label8(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,2,6,10,14,18,22,26,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0_i2);
MR_def_label(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("tuple", 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0_i6);
MR_def_label(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("void", 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0_i10);
MR_def_label(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("func", 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0_i14);
MR_def_label(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("pred", 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0_i18);
MR_def_label(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("float", 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0_i22);
MR_def_label(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("character", 9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0_i26);
MR_def_label(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("string", 6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0_i30);
MR_def_label(fn__parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("int", 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module35)
	MR_init_entry1(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0);
	MR_init_label6(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0,6,7,3,14,15,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i3);
	}
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0,
		fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i6);
MR_def_label(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i7);
MR_def_label(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i3);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("state", 5)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i3);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0,
		fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i14);
MR_def_label(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i15);
MR_def_label(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i11);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("store", 5)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i11);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__prog_type__check_builtin_dummy_type_ctor_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module36)
	MR_init_entry1(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0);
	MR_init_label1(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module37)
	MR_init_entry1(parse_tree__prog_type__type_is_io_state_1_0);
	MR_init_label5(parse_tree__prog_type__type_is_io_state_1_0,2,4,7,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_is_io_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		parse_tree__prog_type__type_is_io_state_1_0_i2);
MR_def_label(parse_tree__prog_type__type_is_io_state_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_is_io_state_1_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		parse_tree__prog_type__type_is_io_state_1_0_i4);
MR_def_label(parse_tree__prog_type__type_is_io_state_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_is_io_state_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0,
		parse_tree__prog_type__type_is_io_state_1_0_i7);
MR_def_label(parse_tree__prog_type__type_is_io_state_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_is_io_state_1_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_type__type_is_io_state_1_0_i9);
MR_def_label(parse_tree__prog_type__type_is_io_state_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_is_io_state_1_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("state", 5)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_is_io_state_1_0_i1);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) == (MR_Integer) 0);
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_type__type_is_io_state_1_0,1)
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


MR_BEGIN_MODULE(parse_tree__prog_type_module38)
	MR_init_entry1(parse_tree__prog_type__type_ctor_is_array_1_0);
	MR_init_label1(parse_tree__prog_type__type_ctor_is_array_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_ctor_is_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_array_1_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_array_1_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_array_1_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("array", 5)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_array_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
MR_def_label(parse_tree__prog_type__type_ctor_is_array_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module39)
	MR_init_entry1(parse_tree__prog_type__type_ctor_is_bitmap_1_0);
	MR_init_label1(parse_tree__prog_type__type_ctor_is_bitmap_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_ctor_is_bitmap_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_bitmap_1_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_bitmap_1_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, MR_string_const("bitmap", 6)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_bitmap_1_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("bitmap", 6)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_ctor_is_bitmap_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(parse_tree__prog_type__type_ctor_is_bitmap_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module40)
	MR_init_entry1(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0);
	MR_init_label4(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0,4,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0_i4);
MR_def_label(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0_i5);
MR_def_label(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("type_info", 9)) == 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0_i7);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("type_ctor_info", 14)) == 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0_i7);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("typeclass_info", 14)) == 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0_i7);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("base_typeclass_info", 19)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__is_introduced_type_info_type_ctor_1_0,1)
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


MR_BEGIN_MODULE(parse_tree__prog_type_module41)
	MR_init_entry1(parse_tree__prog_type__is_introduced_type_info_type_1_0);
	MR_init_label5(parse_tree__prog_type__is_introduced_type_info_type_1_0,2,6,7,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__is_introduced_type_info_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		parse_tree__prog_type__is_introduced_type_info_type_1_0_i2);
MR_def_label(parse_tree__prog_type__is_introduced_type_info_type_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_1_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_1_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		parse_tree__prog_type__is_introduced_type_info_type_1_0_i6);
MR_def_label(parse_tree__prog_type__is_introduced_type_info_type_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_type__is_introduced_type_info_type_1_0_i7);
MR_def_label(parse_tree__prog_type__is_introduced_type_info_type_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_1_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("type_info", 9)) == 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_1_0_i9);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("type_ctor_info", 14)) == 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_1_0_i9);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("typeclass_info", 14)) == 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__is_introduced_type_info_type_1_0_i9);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("base_typeclass_info", 19)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_type__is_introduced_type_info_type_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__is_introduced_type_info_type_1_0,1)
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


MR_BEGIN_MODULE(parse_tree__prog_type_module42)
	MR_init_entry1(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0);
	MR_init_label1(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module43)
	MR_init_entry1(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0);
	MR_init_label1(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type__IntroducedFrom__pred__split_vars_typeinfo_no_typeinfo__873__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0_i4);
MR_def_label(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module44)
	MR_init_entry1(fn__parse_tree__prog_type__remove_typeinfo_vars_2_0);
	MR_init_label1(fn__parse_tree__prog_type__remove_typeinfo_vars_2_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__remove_typeinfo_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type__IntroducedFrom__pred__split_vars_typeinfo_no_typeinfo__873__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		fn__parse_tree__prog_type__remove_typeinfo_vars_2_0_i4);
MR_def_label(fn__parse_tree__prog_type__remove_typeinfo_vars_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__set__from_list_1_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module45)
	MR_init_entry1(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0);
	MR_init_label2(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0_i3);
MR_def_label(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type__IntroducedFrom__pred__split_vars_typeinfo_no_typeinfo__873__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0_i5);
MR_def_label(fn__parse_tree__prog_type__remove_typeinfo_vars_from_set_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__set__from_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_1);

MR_BEGIN_MODULE(parse_tree__prog_type_module46)
	MR_init_entry1(parse_tree__prog_type__remove_new_prefix_2_0);
	MR_init_label4(parse_tree__prog_type__remove_new_prefix_2_0,4,3,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__remove_new_prefix_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__remove_new_prefix_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(string__append_3_1,
		parse_tree__prog_type__remove_new_prefix_2_0_i4);
MR_def_label(parse_tree__prog_type__remove_new_prefix_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__remove_new_prefix_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_type__remove_new_prefix_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__append_3_1,
		parse_tree__prog_type__remove_new_prefix_2_0_i7);
MR_def_label(parse_tree__prog_type__remove_new_prefix_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__remove_new_prefix_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_type__remove_new_prefix_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(parse_tree__prog_type_module47)
	MR_init_entry1(parse_tree__prog_type__remove_new_prefix_2_1);
	MR_init_label3(parse_tree__prog_type__remove_new_prefix_2_1,4,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__remove_new_prefix_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__remove_new_prefix_2_1_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(string__append_3_2,
		parse_tree__prog_type__remove_new_prefix_2_1_i4);
MR_def_label(parse_tree__prog_type__remove_new_prefix_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(parse_tree__prog_type__remove_new_prefix_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__append_3_2,
		parse_tree__prog_type__remove_new_prefix_2_1_i6);
MR_def_label(parse_tree__prog_type__remove_new_prefix_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module48)
	MR_init_entry1(fn__parse_tree__prog_type__int_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__int_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,6,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module49)
	MR_init_entry1(fn__parse_tree__prog_type__string_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__string_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,6,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module50)
	MR_init_entry1(fn__parse_tree__prog_type__float_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__float_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,6,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module51)
	MR_init_entry1(fn__parse_tree__prog_type__char_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__char_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,6,3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module52)
	MR_init_entry1(fn__parse_tree__prog_type__void_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__void_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module53)
	MR_init_entry1(fn__parse_tree__prog_type__c_pointer_type_0_0);
	MR_init_label1(fn__parse_tree__prog_type__c_pointer_type_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__c_pointer_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_type__c_pointer_type_0_0_i2);
MR_def_label(fn__parse_tree__prog_type__c_pointer_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("c_pointer", 9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module54)
	MR_init_entry1(fn__parse_tree__prog_type__heap_pointer_type_0_0);
	MR_init_label1(fn__parse_tree__prog_type__heap_pointer_type_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__heap_pointer_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__prog_type__heap_pointer_type_0_0_i2);
MR_def_label(fn__parse_tree__prog_type__heap_pointer_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("heap_pointer", 12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module55)
	MR_init_entry1(fn__parse_tree__prog_type__sample_type_info_type_0_0);
	MR_init_label1(fn__parse_tree__prog_type__sample_type_info_type_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__sample_type_info_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__prog_type__sample_type_info_type_0_0_i2);
MR_def_label(fn__parse_tree__prog_type__sample_type_info_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("sample_type_info", 16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module56)
	MR_init_entry1(fn__parse_tree__prog_type__sample_typeclass_info_type_0_0);
	MR_init_label1(fn__parse_tree__prog_type__sample_typeclass_info_type_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__sample_typeclass_info_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__prog_type__sample_typeclass_info_type_0_0_i2);
MR_def_label(fn__parse_tree__prog_type__sample_typeclass_info_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("sample_typeclass_info", 21);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module57)
	MR_init_entry1(fn__parse_tree__prog_type__comparison_result_type_0_0);
	MR_init_label1(fn__parse_tree__prog_type__comparison_result_type_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__comparison_result_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		fn__parse_tree__prog_type__comparison_result_type_0_0_i2);
MR_def_label(fn__parse_tree__prog_type__comparison_result_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("comparison_result", 17);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module58)
	MR_init_entry1(fn__parse_tree__prog_type__io_state_type_0_0);
	MR_init_label1(fn__parse_tree__prog_type__io_state_type_0_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__io_state_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0,
		fn__parse_tree__prog_type__io_state_type_0_0_i3);
MR_def_label(fn__parse_tree__prog_type__io_state_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("state", 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module59)
	MR_init_entry1(fn__parse_tree__prog_type__io_io_type_0_0);
	MR_init_label1(fn__parse_tree__prog_type__io_io_type_0_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__io_io_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0,
		fn__parse_tree__prog_type__io_io_type_0_0_i3);
MR_def_label(fn__parse_tree__prog_type__io_io_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("io", 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module60)
	MR_init_entry1(fn__parse_tree__prog_type__stm_atomic_type_0_0);
	MR_init_label1(fn__parse_tree__prog_type__stm_atomic_type_0_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__stm_atomic_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0,
		fn__parse_tree__prog_type__stm_atomic_type_0_0_i3);
MR_def_label(fn__parse_tree__prog_type__stm_atomic_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("stm", 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module61)
	MR_init_entry1(fn__parse_tree__prog_type__region_type_0_0);
	MR_init_label1(fn__parse_tree__prog_type__region_type_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__region_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0,
		fn__parse_tree__prog_type__region_type_0_0_i2);
MR_def_label(fn__parse_tree__prog_type__region_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("region", 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module62)
	MR_init_entry1(parse_tree__prog_type__is_region_var_2_0);
	MR_init_label2(parse_tree__prog_type__is_region_var_2_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__is_region_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type__is_region_var_2_0_i3);
MR_def_label(parse_tree__prog_type__is_region_var_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0,
		parse_tree__prog_type__is_region_var_2_0_i4);
MR_def_label(parse_tree__prog_type__is_region_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("region", 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module63)
	MR_init_entry1(fn__parse_tree__prog_type__type_info_type_0_0);
	MR_init_label1(fn__parse_tree__prog_type__type_info_type_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__type_info_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__prog_type__type_info_type_0_0_i2);
MR_def_label(fn__parse_tree__prog_type__type_info_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("type_info", 9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module64)
	MR_init_entry1(fn__parse_tree__prog_type__type_ctor_info_type_0_0);
	MR_init_label1(fn__parse_tree__prog_type__type_ctor_info_type_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__type_ctor_info_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__prog_type__type_ctor_info_type_0_0_i2);
MR_def_label(fn__parse_tree__prog_type__type_ctor_info_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("type_ctor_info", 14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module65)
	MR_init_entry1(parse_tree__prog_type__make_type_ctor_3_0);
	MR_init_label1(parse_tree__prog_type__make_type_ctor_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__make_type_ctor_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__make_type_ctor_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_type__make_type_ctor_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module66)
	MR_init_entry1(fn__parse_tree__prog_type__cell_cons_id_1_0);
	MR_init_label1(fn__parse_tree__prog_type__cell_cons_id_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__cell_cons_id_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__cell_cons_id_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_type__cell_cons_id_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module67)
	MR_init_entry1(fn__parse_tree__prog_type__cell_inst_cons_id_2_0);
	MR_init_label2(fn__parse_tree__prog_type__cell_inst_cons_id_2_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_type__cell_inst_cons_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_type__cell_inst_cons_id_2_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_string_const("typeclass_info", 14);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__prog_type__cell_inst_cons_id_2_0_i4);
MR_def_label(fn__parse_tree__prog_type__cell_inst_cons_id_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_string_const("type_info", 9);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__parse_tree__prog_type__cell_inst_cons_id_2_0_i4);
MR_def_label(fn__parse_tree__prog_type__cell_inst_cons_id_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module68)
	MR_init_entry1(parse_tree__prog_type__qualify_cons_id_5_0);
	MR_init_label8(parse_tree__prog_type__qualify_cons_id_5_0,48,21,22,49,6,9,5,3)
	MR_init_label3(parse_tree__prog_type__qualify_cons_id_5_0,28,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__qualify_cons_id_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(parse_tree__prog_type__qualify_cons_id_5_0_i48) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__qualify_cons_id_5_0_i49) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__qualify_cons_id_5_0_i3) MR_AND
		MR_LABEL_AP(parse_tree__prog_type__qualify_cons_id_5_0_i28));
MR_def_label(parse_tree__prog_type__qualify_cons_id_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		parse_tree__prog_type__qualify_cons_id_5_0_i21);
MR_def_label(parse_tree__prog_type__qualify_cons_id_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		parse_tree__prog_type__qualify_cons_id_5_0_i22);
MR_def_label(parse_tree__prog_type__qualify_cons_id_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("typeclass_info", 14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type__qualify_cons_id_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		parse_tree__prog_type__qualify_cons_id_5_0_i6);
MR_def_label(parse_tree__prog_type__qualify_cons_id_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__qualify_cons_id_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__qualify_cons_id_5_0_i5);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__unqualify_name_1_0,
		parse_tree__prog_type__qualify_cons_id_5_0_i9);
MR_def_label(parse_tree__prog_type__qualify_cons_id_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(parse_tree__prog_type__qualify_cons_id_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_type__qualify_cons_id_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r1;
	MR_proceed();
MR_def_label(parse_tree__prog_type__qualify_cons_id_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),6)) {
		MR_GOTO_LAB(parse_tree__prog_type__qualify_cons_id_5_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		parse_tree__prog_type__qualify_cons_id_5_0_i15);
MR_def_label(parse_tree__prog_type__qualify_cons_id_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		parse_tree__prog_type__qualify_cons_id_5_0_i16);
MR_def_label(parse_tree__prog_type__qualify_cons_id_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("type_info", 9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module69)
	MR_init_entry1(parse_tree__prog_type__type_constructors_are_type_info_1_0);
	MR_init_label6(parse_tree__prog_type__type_constructors_are_type_info_1_0,9,10,8,7,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_constructors_are_type_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_constructors_are_type_info_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_constructors_are_type_info_1_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_constructors_are_type_info_1_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_constructors_are_type_info_1_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_constructors_are_type_info_1_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_constructors_are_type_info_1_0_i8);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		parse_tree__prog_type__type_constructors_are_type_info_1_0_i9);
MR_def_label(parse_tree__prog_type__type_constructors_are_type_info_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_type__type_constructors_are_type_info_1_0_i10);
MR_def_label(parse_tree__prog_type__type_constructors_are_type_info_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_constructors_are_type_info_1_0_i1);
	}
	MR_GOTO_LAB(parse_tree__prog_type__type_constructors_are_type_info_1_0_i7);
MR_def_label(parse_tree__prog_type__type_constructors_are_type_info_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
MR_def_label(parse_tree__prog_type__type_constructors_are_type_info_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("type_info", 9)) == 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_constructors_are_type_info_1_0_i12);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("type_ctor_info", 14)) == 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_constructors_are_type_info_1_0_i12);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("typeclass_info", 14)) == 0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_constructors_are_type_info_1_0_i12);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("base_typeclass_info", 19)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_type__type_constructors_are_type_info_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_constructors_are_type_info_1_0,1)
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


MR_BEGIN_MODULE(parse_tree__prog_type_module70)
	MR_init_entry1(parse_tree__prog_type__type_ctor_should_be_notag_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_ctor_should_be_notag_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module71)
	MR_init_entry1(parse_tree__prog_type__type_unify_head_type_param_6_0);
	MR_init_label8(parse_tree__prog_type__type_unify_head_type_param_6_0,39,4,2,10,9,14,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_unify_head_type_param_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_type__type_unify_head_type_param_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type__type_unify_head_type_param_6_0_i4);
MR_def_label(parse_tree__prog_type__type_unify_head_type_param_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_head_type_param_6_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_head_type_param_6_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(parse_tree__prog_type__type_unify_head_type_param_6_0_i39);
MR_def_label(parse_tree__prog_type__type_unify_head_type_param_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		parse_tree__prog_type__type_unify_head_type_param_6_0_i10);
MR_def_label(parse_tree__prog_type__type_unify_head_type_param_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_head_type_param_6_0_i9);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(parse_tree__prog_type__type_unify_head_type_param_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		parse_tree__prog_type__type_unify_head_type_param_6_0_i14);
MR_def_label(parse_tree__prog_type__type_unify_head_type_param_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_head_type_param_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		parse_tree__prog_type__type_unify_head_type_param_6_0_i18);
MR_def_label(parse_tree__prog_type__type_unify_head_type_param_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(parse_tree__prog_type__type_unify_head_type_param_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module72)
	MR_init_entry1(parse_tree__prog_type__type_occurs_3_0);
	MR_init_label8(parse_tree__prog_type__type_occurs_3_0,118,70,35,37,40,46,3,6)
	MR_init_label6(parse_tree__prog_type__type_occurs_3_0,10,13,20,24,67,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_occurs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_type__type_occurs_3_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i46);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i35);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i1);
	}
	}
MR_def_label(parse_tree__prog_type__type_occurs_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_type__type_occurs_list_3_0);
MR_def_label(parse_tree__prog_type__type_occurs_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		parse_tree__prog_type__type_occurs_3_0_i37);
MR_def_label(parse_tree__prog_type__type_occurs_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i67);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type__type_occurs_3_0_i40);
MR_def_label(parse_tree__prog_type__type_occurs_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i1);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i118);
MR_def_label(parse_tree__prog_type__type_occurs_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i70);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i20);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i3);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i118);
	}
MR_def_label(parse_tree__prog_type__type_occurs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		parse_tree__prog_type__type_occurs_3_0_i6);
MR_def_label(parse_tree__prog_type__type_occurs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i67);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_occurs_list_3_0,
		parse_tree__prog_type__type_occurs_3_0_i10);
MR_def_label(parse_tree__prog_type__type_occurs_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i67);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type__type_occurs_3_0_i13);
MR_def_label(parse_tree__prog_type__type_occurs_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i1);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i118);
MR_def_label(parse_tree__prog_type__type_occurs_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_occurs_list_3_0,
		parse_tree__prog_type__type_occurs_3_0_i24);
MR_def_label(parse_tree__prog_type__type_occurs_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i67);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(3), 0);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(parse_tree__prog_type__type_occurs_3_0_i118);
MR_def_label(parse_tree__prog_type__type_occurs_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__prog_type__type_occurs_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module73)
	MR_init_entry1(parse_tree__prog_type__type_occurs_list_3_0);
	MR_init_label4(parse_tree__prog_type__type_occurs_list_3_0,19,6,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_occurs_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_type__type_occurs_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_list_3_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_occurs_3_0,
		parse_tree__prog_type__type_occurs_list_3_0_i6);
MR_def_label(parse_tree__prog_type__type_occurs_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__type_occurs_list_3_0_i3);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__prog_type__type_occurs_list_3_0_i19);
MR_def_label(parse_tree__prog_type__type_occurs_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_type__type_occurs_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module74)
	MR_init_entry1(parse_tree__prog_type__type_unify_5_0);
	MR_init_label4(parse_tree__prog_type__type_unify_5_0,2,43,12,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_unify_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_5_0_i2);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_var_5_0);
MR_def_label(parse_tree__prog_type__type_unify_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_5_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_var_5_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_nonvar_5_0,
		parse_tree__prog_type__type_unify_5_0_i12);
MR_def_label(parse_tree__prog_type__type_unify_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_5_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_special_5_0);
MR_def_label(parse_tree__prog_type__type_unify_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module75)
	MR_init_entry1(parse_tree__prog_type__type_unify_list_5_0);
	MR_init_label4(parse_tree__prog_type__type_unify_list_5_0,28,3,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_unify_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_type__type_unify_list_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_list_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_list_5_0_i1);
	}
	MR_r2 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__prog_type__type_unify_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_list_5_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		parse_tree__prog_type__type_unify_list_5_0_i6);
MR_def_label(parse_tree__prog_type__type_unify_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_list_5_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__prog_type__type_unify_list_5_0_i28);
	}
MR_def_label(parse_tree__prog_type__type_unify_list_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module76)
	MR_init_entry1(parse_tree__prog_type__type_unify_var_5_0);
	MR_init_label7(parse_tree__prog_type__type_unify_var_5_0,2,8,6,14,18,21,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_unify_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_5_0_i2);
	}
	MR_sv(2) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_sv(2), 1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_var_var_6_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type__type_unify_var_5_0_i8);
MR_def_label(parse_tree__prog_type__type_unify_var_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_5_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_5_0);
MR_def_label(parse_tree__prog_type__type_unify_var_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_occurs_3_0,
		parse_tree__prog_type__type_unify_var_5_0_i14);
MR_def_label(parse_tree__prog_type__type_unify_var_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		parse_tree__prog_type__type_unify_var_5_0_i18);
MR_def_label(parse_tree__prog_type__type_unify_var_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_5_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		parse_tree__prog_type__type_unify_var_5_0_i21);
MR_def_label(parse_tree__prog_type__type_unify_var_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_unify_var_5_0,1)
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

MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module77)
	MR_init_entry1(parse_tree__prog_type__type_unify_var_var_6_0);
	MR_init_label8(parse_tree__prog_type__type_unify_var_var_6_0,4,2,10,8,16,19,18,23)
	MR_init_label8(parse_tree__prog_type__type_unify_var_var_6_0,27,24,25,31,14,38,40,44)
	MR_init_label8(parse_tree__prog_type__type_unify_var_var_6_0,41,42,48,36,53,52,57,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_unify_var_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i4);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_head_type_param_6_0);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i10);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_head_type_param_6_0);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i16);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i14);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i19);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_5_0);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i23);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i27);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i24);
	}
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type__type_occurs_3_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i31);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i57);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i38);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i36);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i40);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i42);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i44);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i41);
	}
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type__type_occurs_3_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i48);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i57);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i53);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_var_var_6_0_i52);
	}
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		parse_tree__prog_type__type_unify_var_var_6_0_i57);
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_unify_var_var_6_0,1)
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


MR_BEGIN_MODULE(parse_tree__prog_type_module78)
	MR_init_entry1(parse_tree__prog_type__type_unify_nonvar_5_0);
	MR_init_label8(parse_tree__prog_type__type_unify_nonvar_5_0,129,7,28,132,19,23,130,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_unify_nonvar_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i28);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i129);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i130);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i130);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr3, 0);
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	if ((MR_tempr2 != MR_tempr1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i130);
	}
	MR_r2 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_type__type_unify_nonvar_5_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		parse_tree__prog_type__type_unify_nonvar_5_0_i7);
MR_def_label(parse_tree__prog_type__type_unify_nonvar_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_list_5_0);
MR_def_label(parse_tree__prog_type__type_unify_nonvar_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i23);
	}
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i130);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i130);
	}
	MR_r5 = MR_ctfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i132);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 3);
	if ((MR_tempr2 != MR_tempr1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i130);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i130);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_list_5_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_nonvar_5_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 3);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r5, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_list_5_0,
		parse_tree__prog_type__type_unify_nonvar_5_0_i19);
MR_def_label(parse_tree__prog_type__type_unify_nonvar_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_5_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_nonvar_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_nonvar_5_0_i130);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_list_5_0);
MR_def_label(parse_tree__prog_type__type_unify_nonvar_5_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_type__type_unify_nonvar_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module79)
	MR_init_entry1(parse_tree__prog_type__type_unify_special_5_0);
	MR_init_label5(parse_tree__prog_type__type_unify_special_5_0,2,6,12,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_unify_special_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_special_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_apply_6_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_special_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_special_5_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_apply_6_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_special_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_special_5_0_i10);
	}
	MR_r5 = MR_ctfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_special_5_0_i12);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_5_0);
MR_def_label(parse_tree__prog_type__type_unify_special_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_5_0);
MR_def_label(parse_tree__prog_type__type_unify_special_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_special_5_0_i1);
	}
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_5_0);
MR_def_label(parse_tree__prog_type__type_unify_special_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module80)
	MR_init_entry1(parse_tree__prog_type__type_unify_apply_6_0);
	MR_init_label8(parse_tree__prog_type__type_unify_apply_6_0,137,28,29,48,3,4,5,6)
	MR_init_label8(parse_tree__prog_type__type_unify_apply_6_0,9,8,15,14,19,34,41,42)
	MR_init_label1(parse_tree__prog_type__type_unify_apply_6_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_unify_apply_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i48);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i28);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i1);
	}
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_var_5_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_args_8_0,
		parse_tree__prog_type__type_unify_apply_6_0_i29);
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_var_5_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i41);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i34);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i3);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i137);
	}
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		parse_tree__prog_type__type_unify_apply_6_0_i4);
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__length_2_0,
		parse_tree__prog_type__type_unify_apply_6_0_i5);
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		parse_tree__prog_type__type_unify_apply_6_0_i6);
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_args_8_0,
		parse_tree__prog_type__type_unify_apply_6_0_i9);
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_var_5_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i14);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_args_8_0,
		parse_tree__prog_type__type_unify_apply_6_0_i15);
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_var_var_6_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_args_8_0,
		parse_tree__prog_type__type_unify_apply_6_0_i19);
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_var_5_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_var_5_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_args_8_0,
		parse_tree__prog_type__type_unify_apply_6_0_i42);
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_apply_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_var_5_0);
	}
MR_def_label(parse_tree__prog_type__type_unify_apply_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module81)
	MR_init_entry1(parse_tree__prog_type__type_unify_args_8_0);
	MR_init_label5(parse_tree__prog_type__type_unify_args_8_0,2,3,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_unify_args_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_type__type_unify_args_8_0_i2);
MR_def_label(parse_tree__prog_type__type_unify_args_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_type__type_unify_args_8_0_i3);
MR_def_label(parse_tree__prog_type__type_unify_args_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_rev_args_8_0,
		parse_tree__prog_type__type_unify_args_8_0_i4);
MR_def_label(parse_tree__prog_type__type_unify_args_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_args_8_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_type__type_unify_args_8_0_i6);
MR_def_label(parse_tree__prog_type__type_unify_args_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__type_unify_args_8_0,1)
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

MR_decl_entry(fn__parse_tree__prog_data__get_type_kind_1_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module82)
	MR_init_entry1(parse_tree__prog_type__type_unify_rev_args_8_0);
	MR_init_label5(parse_tree__prog_type__type_unify_rev_args_8_0,25,3,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__type_unify_rev_args_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_type__type_unify_rev_args_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_rev_args_8_0_i3);
	}
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(parse_tree__prog_type__type_unify_rev_args_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_rev_args_8_0_i1);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		parse_tree__prog_type__type_unify_rev_args_8_0_i5);
MR_def_label(parse_tree__prog_type__type_unify_rev_args_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_unify_rev_args_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_type_kind_1_0,
		parse_tree__prog_type__type_unify_rev_args_8_0_i7);
MR_def_label(parse_tree__prog_type__type_unify_rev_args_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(parse_tree__prog_type__type_unify_rev_args_8_0_i25);
	}
MR_def_label(parse_tree__prog_type__type_unify_rev_args_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module83)
	MR_init_entry1(parse_tree__prog_type__type_list_subsumes_3_0);
	MR_init_label4(parse_tree__prog_type__type_list_subsumes_3_0,2,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_list_subsumes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_3_0,
		parse_tree__prog_type__type_list_subsumes_3_0_i2);
MR_def_label(parse_tree__prog_type__type_list_subsumes_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_type__type_list_subsumes_3_0_i4);
MR_def_label(parse_tree__prog_type__type_list_subsumes_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__remove_dups_2_0,
		parse_tree__prog_type__type_list_subsumes_3_0_i5);
MR_def_label(parse_tree__prog_type__type_list_subsumes_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		parse_tree__prog_type__type_list_subsumes_3_0_i6);
MR_def_label(parse_tree__prog_type__type_list_subsumes_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_type__type_unify_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module84)
	MR_init_entry1(parse_tree__prog_type__type_list_subsumes_det_3_0);
	MR_init_label2(parse_tree__prog_type__type_list_subsumes_det_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__type_list_subsumes_det_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		parse_tree__prog_type__type_list_subsumes_det_3_0_i3);
MR_def_label(parse_tree__prog_type__type_list_subsumes_det_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__type_list_subsumes_det_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(parse_tree__prog_type__type_list_subsumes_det_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_type.m", 11);
	MR_r2 = (MR_Word) MR_string_const("type_list_subsumes_det: type_list_subsumes failed", 49);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__tvarset_merge_renaming_4_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_0);
MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(parse_tree__prog_type_module85)
	MR_init_entry1(parse_tree__prog_type__arg_type_list_subsumes_6_0);
	MR_init_label8(parse_tree__prog_type__arg_type_list_subsumes_6_0,2,3,4,5,6,10,15,14)
	MR_init_label2(parse_tree__prog_type__arg_type_list_subsumes_6_0,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__arg_type_list_subsumes_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_data__tvarset_merge_renaming_4_0,
		parse_tree__prog_type__arg_type_list_subsumes_6_0_i2);
MR_def_label(parse_tree__prog_type__arg_type_list_subsumes_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_0,
		parse_tree__prog_type__arg_type_list_subsumes_6_0_i3);
MR_def_label(parse_tree__prog_type__arg_type_list_subsumes_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		parse_tree__prog_type__arg_type_list_subsumes_6_0_i4);
MR_def_label(parse_tree__prog_type__arg_type_list_subsumes_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_0,
		parse_tree__prog_type__arg_type_list_subsumes_6_0_i5);
MR_def_label(parse_tree__prog_type__arg_type_list_subsumes_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		parse_tree__prog_type__arg_type_list_subsumes_6_0_i6);
MR_def_label(parse_tree__prog_type__arg_type_list_subsumes_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__arg_type_list_subsumes_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__arg_type_list_subsumes_6_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_0,
		parse_tree__prog_type__arg_type_list_subsumes_6_0_i10);
MR_def_label(parse_tree__prog_type__arg_type_list_subsumes_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(parse_tree__prog_type__arg_type_list_subsumes_6_0_i14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		parse_tree__prog_type__arg_type_list_subsumes_6_0_i15);
MR_def_label(parse_tree__prog_type__arg_type_list_subsumes_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__arg_type_list_subsumes_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__arg_type_list_subsumes_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_type__arg_type_list_subsumes_6_0,1)
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

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module86)
	MR_init_entry1(parse_tree__prog_type__apply_partial_map_to_list_3_0);
	MR_init_label4(parse_tree__prog_type__apply_partial_map_to_list_3_0,21,6,4,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_type__apply_partial_map_to_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_type__apply_partial_map_to_list_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_type__apply_partial_map_to_list_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_tempr2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_type__apply_partial_map_to_list_3_0_i6);
MR_def_label(parse_tree__prog_type__apply_partial_map_to_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_type__apply_partial_map_to_list_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_localcall_lab(parse_tree__prog_type__apply_partial_map_to_list_3_0,
		parse_tree__prog_type__apply_partial_map_to_list_3_0_i9);
MR_def_label(parse_tree__prog_type__apply_partial_map_to_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(parse_tree__prog_type__apply_partial_map_to_list_3_0,
		parse_tree__prog_type__apply_partial_map_to_list_3_0_i9);
MR_def_label(parse_tree__prog_type__apply_partial_map_to_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module87)
	MR_init_entry1(__Unify___parse_tree__prog_type__ctor_defn_0_0);
	MR_init_label7(__Unify___parse_tree__prog_type__ctor_defn_0_0,4,7,9,11,13,17,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_type__ctor_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__ctor_defn_0_0_i17);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
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
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___parse_tree__prog_type__ctor_defn_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_type__ctor_defn_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__ctor_defn_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_type__ctor_defn_0_0_i7);
MR_def_label(__Unify___parse_tree__prog_type__ctor_defn_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__ctor_defn_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___parse_tree__prog_type__ctor_defn_0_0_i9);
MR_def_label(__Unify___parse_tree__prog_type__ctor_defn_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__ctor_defn_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_type__ctor_defn_0_0_i11);
MR_def_label(__Unify___parse_tree__prog_type__ctor_defn_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__ctor_defn_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_type__ctor_defn_0_0_i13);
MR_def_label(__Unify___parse_tree__prog_type__ctor_defn_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__ctor_defn_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_def_label(__Unify___parse_tree__prog_type__ctor_defn_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_type__ctor_defn_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module88)
	MR_init_entry1(__Compare___parse_tree__prog_type__ctor_defn_0_0);
	MR_init_label8(__Compare___parse_tree__prog_type__ctor_defn_0_0,3,2,5,10,15,19,23,55)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_type__ctor_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__ctor_defn_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_type__ctor_defn_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_type__ctor_defn_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_type__ctor_defn_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___parse_tree__prog_type__ctor_defn_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_type__ctor_defn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__ctor_defn_0_0_i55);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_type__ctor_defn_0_0_i10);
MR_def_label(__Compare___parse_tree__prog_type__ctor_defn_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__ctor_defn_0_0_i55);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___parse_tree__prog_type__ctor_defn_0_0_i15);
MR_def_label(__Compare___parse_tree__prog_type__ctor_defn_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__ctor_defn_0_0_i55);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_type__ctor_defn_0_0_i19);
MR_def_label(__Compare___parse_tree__prog_type__ctor_defn_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__ctor_defn_0_0_i55);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_type__ctor_defn_0_0_i23);
MR_def_label(__Compare___parse_tree__prog_type__ctor_defn_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__ctor_defn_0_0_i55);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_def_label(__Compare___parse_tree__prog_type__ctor_defn_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module89)
	MR_init_entry1(__Unify___parse_tree__prog_type__is_builtin_dummy_type_ctor_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_type__is_builtin_dummy_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module90)
	MR_init_entry1(__Compare___parse_tree__prog_type__is_builtin_dummy_type_ctor_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_type__is_builtin_dummy_type_ctor_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module91)
	MR_init_entry1(__Unify___parse_tree__prog_type__polymorphism_cell_0_0);
	MR_init_label3(__Unify___parse_tree__prog_type__polymorphism_cell_0_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_type__polymorphism_cell_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__polymorphism_cell_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__polymorphism_cell_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_type__polymorphism_cell_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_type__polymorphism_cell_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__polymorphism_cell_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_def_label(__Unify___parse_tree__prog_type__polymorphism_cell_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__type_ctor_0_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module92)
	MR_init_entry1(__Compare___parse_tree__prog_type__polymorphism_cell_0_0);
	MR_init_label4(__Compare___parse_tree__prog_type__polymorphism_cell_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_type__polymorphism_cell_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__polymorphism_cell_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__polymorphism_cell_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__polymorphism_cell_0_0_i7);
	}
MR_def_label(__Compare___parse_tree__prog_type__polymorphism_cell_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_type__polymorphism_cell_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_type__polymorphism_cell_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__polymorphism_cell_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_type__polymorphism_cell_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__type_ctor_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module93)
	MR_init_entry1(__Unify___parse_tree__prog_type__type_ctor_cat_builtin_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_type__type_ctor_cat_builtin_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module94)
	MR_init_entry1(__Compare___parse_tree__prog_type__type_ctor_cat_builtin_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_type__type_ctor_cat_builtin_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module95)
	MR_init_entry1(__Unify___parse_tree__prog_type__type_ctor_cat_enum_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_type__type_ctor_cat_enum_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module96)
	MR_init_entry1(__Compare___parse_tree__prog_type__type_ctor_cat_enum_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_type__type_ctor_cat_enum_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module97)
	MR_init_entry1(__Unify___parse_tree__prog_type__type_ctor_cat_system_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_type__type_ctor_cat_system_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module98)
	MR_init_entry1(__Compare___parse_tree__prog_type__type_ctor_cat_system_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_type__type_ctor_cat_system_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module99)
	MR_init_entry1(__Unify___parse_tree__prog_type__type_ctor_cat_user_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_type__type_ctor_cat_user_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module100)
	MR_init_entry1(__Compare___parse_tree__prog_type__type_ctor_cat_user_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_type__type_ctor_cat_user_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module101)
	MR_init_entry1(__Unify___parse_tree__prog_type__type_ctor_category_0_0);
	MR_init_label7(__Unify___parse_tree__prog_type__type_ctor_category_0_0,5,8,21,14,17,23,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_type__type_ctor_category_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__type_ctor_category_0_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___parse_tree__prog_type__type_ctor_category_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_type__type_ctor_category_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_type__type_ctor_category_0_0_i8) MR_AND
		MR_LABEL_AP(__Unify___parse_tree__prog_type__type_ctor_category_0_0_i21));
MR_def_label(__Unify___parse_tree__prog_type__type_ctor_category_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__type_ctor_category_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_type__type_ctor_category_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__type_ctor_category_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_type__type_ctor_category_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__type_ctor_category_0_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__type_ctor_category_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_type__type_ctor_category_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_type__type_ctor_category_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_type__type_ctor_category_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_type__type_ctor_category_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_type__type_ctor_category_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_type_module102)
	MR_init_entry1(__Compare___parse_tree__prog_type__type_ctor_category_0_0);
	MR_init_label8(__Compare___parse_tree__prog_type__type_ctor_category_0_0,153,5,17,20,38,50,42,53)
	MR_init_label8(__Compare___parse_tree__prog_type__type_ctor_category_0_0,156,83,86,163,104,116,119,22)
	MR_init_label8(__Compare___parse_tree__prog_type__type_ctor_category_0_0,33,36,55,66,69,217,88,99)
	MR_init_label7(__Compare___parse_tree__prog_type__type_ctor_category_0_0,121,132,137,148,151,169,147)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_type__type_ctor_category_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i147);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i38) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i156));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(1)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i55) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i88) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i121) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i137));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i17) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i42) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i20));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217);
	}
	MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i42) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i53));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_sv(1), 0);
	MR_r2 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i104);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i83) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i86));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217);
	}
	MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217);
	}
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i116) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i119));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169);
	}
	MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i163);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i36));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i147) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i66) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i69));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i147);
	}
	MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217);
	}
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i99) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i147) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i132) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i147) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i148) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i151));
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),4)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i147);
	}
	MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i169);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_type__type_ctor_category_0_0_i217);
	}
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_type__type_ctor_category_0_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module103)
	MR_init_entry1(parse_tree__prog_type__IntroducedFrom__pred__split_vars_typeinfo_no_typeinfo__873__1_2_0);
	MR_init_label1(parse_tree__prog_type__IntroducedFrom__pred__split_vars_typeinfo_no_typeinfo__873__1_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_type__IntroducedFrom__pred__split_vars_typeinfo_no_typeinfo__873__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		parse_tree__prog_type__IntroducedFrom__pred__split_vars_typeinfo_no_typeinfo__873__1_2_0_i3);
MR_def_label(parse_tree__prog_type__IntroducedFrom__pred__split_vars_typeinfo_no_typeinfo__873__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(parse_tree__prog_type__is_introduced_type_info_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_1);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__maybe__map_maybe_2_0);

MR_BEGIN_MODULE(parse_tree__prog_type_module104)
	MR_init_entry1(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0);
	MR_init_label4(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0,3,9,15,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r2 = (MR_Integer) 206;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i3);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_r5 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i1);
	}
	MR_r5 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(1) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i9);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("{}", 2)) == 0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i1);
	}
	}
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__maybe__map_maybe_2_0,
		f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0_i15);
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_116_121_112_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_104_111_117_108_100_95_98_101_95_110_111_116_97_103_95_95_91_50_93_95_48_8_0,1)
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

static void mercury__parse_tree__prog_type_maybe_bunch_0(void)
{
	parse_tree__prog_type_module0();
	parse_tree__prog_type_module1();
	parse_tree__prog_type_module2();
	parse_tree__prog_type_module3();
	parse_tree__prog_type_module4();
	parse_tree__prog_type_module5();
	parse_tree__prog_type_module6();
	parse_tree__prog_type_module7();
	parse_tree__prog_type_module8();
	parse_tree__prog_type_module9();
	parse_tree__prog_type_module10();
	parse_tree__prog_type_module11();
	parse_tree__prog_type_module12();
	parse_tree__prog_type_module13();
	parse_tree__prog_type_module14();
	parse_tree__prog_type_module15();
	parse_tree__prog_type_module16();
	parse_tree__prog_type_module17();
	parse_tree__prog_type_module18();
	parse_tree__prog_type_module19();
	parse_tree__prog_type_module20();
	parse_tree__prog_type_module21();
	parse_tree__prog_type_module22();
	parse_tree__prog_type_module23();
	parse_tree__prog_type_module24();
	parse_tree__prog_type_module25();
	parse_tree__prog_type_module26();
	parse_tree__prog_type_module27();
	parse_tree__prog_type_module28();
	parse_tree__prog_type_module29();
	parse_tree__prog_type_module30();
	parse_tree__prog_type_module31();
	parse_tree__prog_type_module32();
	parse_tree__prog_type_module33();
	parse_tree__prog_type_module34();
	parse_tree__prog_type_module35();
	parse_tree__prog_type_module36();
	parse_tree__prog_type_module37();
	parse_tree__prog_type_module38();
	parse_tree__prog_type_module39();
}

static void mercury__parse_tree__prog_type_maybe_bunch_1(void)
{
	parse_tree__prog_type_module40();
	parse_tree__prog_type_module41();
	parse_tree__prog_type_module42();
	parse_tree__prog_type_module43();
	parse_tree__prog_type_module44();
	parse_tree__prog_type_module45();
	parse_tree__prog_type_module46();
	parse_tree__prog_type_module47();
	parse_tree__prog_type_module48();
	parse_tree__prog_type_module49();
	parse_tree__prog_type_module50();
	parse_tree__prog_type_module51();
	parse_tree__prog_type_module52();
	parse_tree__prog_type_module53();
	parse_tree__prog_type_module54();
	parse_tree__prog_type_module55();
	parse_tree__prog_type_module56();
	parse_tree__prog_type_module57();
	parse_tree__prog_type_module58();
	parse_tree__prog_type_module59();
	parse_tree__prog_type_module60();
	parse_tree__prog_type_module61();
	parse_tree__prog_type_module62();
	parse_tree__prog_type_module63();
	parse_tree__prog_type_module64();
	parse_tree__prog_type_module65();
	parse_tree__prog_type_module66();
	parse_tree__prog_type_module67();
	parse_tree__prog_type_module68();
	parse_tree__prog_type_module69();
	parse_tree__prog_type_module70();
	parse_tree__prog_type_module71();
	parse_tree__prog_type_module72();
	parse_tree__prog_type_module73();
	parse_tree__prog_type_module74();
	parse_tree__prog_type_module75();
	parse_tree__prog_type_module76();
	parse_tree__prog_type_module77();
	parse_tree__prog_type_module78();
	parse_tree__prog_type_module79();
}

static void mercury__parse_tree__prog_type_maybe_bunch_2(void)
{
	parse_tree__prog_type_module80();
	parse_tree__prog_type_module81();
	parse_tree__prog_type_module82();
	parse_tree__prog_type_module83();
	parse_tree__prog_type_module84();
	parse_tree__prog_type_module85();
	parse_tree__prog_type_module86();
	parse_tree__prog_type_module87();
	parse_tree__prog_type_module88();
	parse_tree__prog_type_module89();
	parse_tree__prog_type_module90();
	parse_tree__prog_type_module91();
	parse_tree__prog_type_module92();
	parse_tree__prog_type_module93();
	parse_tree__prog_type_module94();
	parse_tree__prog_type_module95();
	parse_tree__prog_type_module96();
	parse_tree__prog_type_module97();
	parse_tree__prog_type_module98();
	parse_tree__prog_type_module99();
	parse_tree__prog_type_module100();
	parse_tree__prog_type_module101();
	parse_tree__prog_type_module102();
	parse_tree__prog_type_module103();
	parse_tree__prog_type_module104();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_type__init(void);
void mercury__parse_tree__prog_type__init_type_tables(void);
void mercury__parse_tree__prog_type__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_type__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_type__init_complexity_procs(void);
#endif

void mercury__parse_tree__prog_type__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_type_maybe_bunch_0();
	mercury__parse_tree__prog_type_maybe_bunch_1();
	mercury__parse_tree__prog_type_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_category_0,
		parse_tree__prog_type__type_ctor_category_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0,
		parse_tree__prog_type__type_ctor_cat_user_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0,
		parse_tree__prog_type__type_ctor_cat_system_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0,
		parse_tree__prog_type__type_ctor_cat_enum_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0,
		parse_tree__prog_type__type_ctor_cat_builtin_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_type__type_ctor_info_polymorphism_cell_0,
		parse_tree__prog_type__polymorphism_cell_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_type__type_ctor_info_is_builtin_dummy_type_ctor_0,
		parse_tree__prog_type__is_builtin_dummy_type_ctor_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_type__type_ctor_info_ctor_defn_0,
		parse_tree__prog_type__ctor_defn_0_0);
	mercury__parse_tree__prog_type__init_debugger();
}

void mercury__parse_tree__prog_type__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_category_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_type__type_ctor_info_polymorphism_cell_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_type__type_ctor_info_is_builtin_dummy_type_ctor_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_type__type_ctor_info_ctor_defn_0);
	}
}


void mercury__parse_tree__prog_type__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_type__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__prog_type);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_type__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
