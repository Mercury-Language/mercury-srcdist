/*
** Automatically generated from `var_locn.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__var_locn__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.var_locn.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.var_locn.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.var_locn.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.var_locn.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "ll_backend.var_locn.c"
#line 44 "ll_backend.var_locn.c"
#include "ll_backend.var_locn.mh"

#line 47 "ll_backend.var_locn.c"
#line 48 "ll_backend.var_locn.c"
#ifndef LL_BACKEND__VAR_LOCN_DECL_GUARD
#define LL_BACKEND__VAR_LOCN_DECL_GUARD

#line 52 "ll_backend.var_locn.c"
#line 53 "ll_backend.var_locn.c"

#endif
#line 56 "ll_backend.var_locn.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__var_locn__type_ctor_info_var_state_map_0,
	mercury_data_ll_backend__var_locn__type_ctor_info_var_state_0,
	mercury_data_ll_backend__var_locn__type_ctor_info_var_locn_info_0,
	mercury_data_ll_backend__var_locn__type_ctor_info_var_avail_0,
	mercury_data_ll_backend__var_locn__type_ctor_info_loc_var_map_0,
	mercury_data_ll_backend__var_locn__type_ctor_info_dep_search_lval_0,
	mercury_data_ll_backend__var_locn__type_ctor_info_dead_or_alive_0;
MR_decl_label8(ll_backend__var_locn__actually_place_var_7_0, 3,2,6,7,8,10,9,12)
MR_decl_label8(ll_backend__var_locn__actually_place_var_7_0, 13,16,17,15,18,21,14,23)
MR_decl_label8(ll_backend__var_locn__actually_place_var_7_0, 27,24,25,29,31,33,34,35)
MR_decl_label4(ll_backend__var_locn__actually_place_var_7_0, 36,37,40,39)
MR_decl_label3(ll_backend__var_locn__actually_place_vars_5_0, 4,5,3)
MR_decl_label7(ll_backend__var_locn__add_additional_lval_for_var_4_0, 2,3,4,5,7,8,9)
MR_decl_label2(ll_backend__var_locn__add_use_ref_4_0, 2,3)
MR_decl_label5(ll_backend__var_locn__add_use_refs_4_0, 13,4,5,6,3)
MR_decl_label8(ll_backend__var_locn__assign_cell_args_8_0, 5,8,11,10,9,12,15,14)
MR_decl_label8(ll_backend__var_locn__assign_cell_args_8_0, 17,18,19,6,21,4,26,3)
MR_decl_label5(ll_backend__var_locn__cell_is_constant_4_0, 27,5,7,8,1)
MR_decl_label4(ll_backend__var_locn__check_var_is_unknown_2_0, 3,5,6,8)
MR_decl_label2(ll_backend__var_locn__clobber_lval_in_var_state_map_6_0, 3,2)
MR_decl_label8(ll_backend__var_locn__clobber_regs_in_maps_6_0, 27,7,9,10,11,4,5,3)
MR_decl_label1(ll_backend__var_locn__convert_live_to_lval_set_2_0, 1)
MR_decl_label5(ll_backend__var_locn__ensure_copies_are_present_5_0, 2,3,4,5,6)
MR_decl_label4(ll_backend__var_locn__ensure_copies_are_present_lval_5_0, 12,4,5,3)
MR_decl_label8(ll_backend__var_locn__expr_is_constant_4_0, 21,15,16,4,11,13,7,8)
MR_decl_label4(ll_backend__var_locn__expr_is_constant_4_0, 5,6,35,1)
MR_decl_label7(ll_backend__var_locn__find_one_occupying_var_5_0, 22,3,5,7,8,4,1)
MR_decl_label8(ll_backend__var_locn__find_var_availability_4_0, 2,3,7,4,5,12,10,16)
MR_decl_label4(ll_backend__var_locn__find_var_availability_4_0, 14,18,23,9)
MR_decl_label4(ll_backend__var_locn__free_up_lval_7_0, 3,5,7,2)
MR_decl_label8(ll_backend__var_locn__free_up_lval_with_copy_7_0, 3,5,6,9,11,12,7,15)
MR_decl_label8(ll_backend__var_locn__free_up_lval_with_copy_7_0, 16,19,22,28,25,32,34,2)
MR_decl_label6(ll_backend__var_locn__free_up_lval_with_copy_7_0, 36,37,40,39,42,38)
MR_decl_label5(ll_backend__var_locn__get_spare_reg_2_4_0, 22,4,2,8,7)
MR_decl_label4(ll_backend__var_locn__get_var_set_roots_2_0, 2,3,4,5)
MR_decl_label5(ll_backend__var_locn__init_var_locn_state_8_0, 2,3,4,5,6)
MR_decl_label8(ll_backend__var_locn__init_var_locn_state_2_6_0, 39,4,9,6,12,11,15,16)
MR_decl_label4(ll_backend__var_locn__init_var_locn_state_2_6_0, 17,18,19,3)
MR_decl_label3(ll_backend__var_locn__is_root_lval_1_0, 4,12,1)
MR_decl_label8(ll_backend__var_locn__lval_depends_on_search_lval_2_0, 5,8,77,15,78,4,81,38)
MR_decl_label1(ll_backend__var_locn__lval_depends_on_search_lval_2_0, 1)
MR_decl_label8(ll_backend__var_locn__lval_does_not_support_lval_2_0, 7,9,73,15,17,40,74,6)
MR_decl_label2(ll_backend__var_locn__lval_does_not_support_lval_2_0, 72,3)
MR_decl_label6(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0, 2,3,4,5,6,7)
MR_decl_label5(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0, 2,3,4,5,6)
MR_decl_label5(ll_backend__var_locn__make_var_depend_on_root_lval_4_0, 2,4,6,3,8)
MR_decl_label7(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0, 2,4,6,9,11,7,3)
MR_decl_label8(ll_backend__var_locn__materialize_var_9_0, 2,4,3,6,10,11,12,7)
MR_decl_label1(ll_backend__var_locn__materialize_var_9_0, 13)
MR_decl_label2(ll_backend__var_locn__nonempty_state_1_0, 4,2)
MR_decl_label8(ll_backend__var_locn__record_change_in_root_dependencies_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__var_locn__record_change_in_root_dependencies_5_0, 10,11,12,13,14,15,16,17)
MR_decl_label1(ll_backend__var_locn__record_change_in_root_dependencies_5_0, 18)
MR_decl_label5(ll_backend__var_locn__record_clobbering_4_0, 3,5,6,7,2)
MR_decl_label8(ll_backend__var_locn__record_copy_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(ll_backend__var_locn__record_copy_4_0, 10,11,12)
MR_decl_label8(ll_backend__var_locn__record_copy_for_var_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0, 32,6,5,8,10,11,2,1)
MR_decl_label3(ll_backend__var_locn__reg_is_not_locked_for_var_3_0, 3,6,1)
MR_decl_label4(ll_backend__var_locn__reinit_var_locn_state_3_0, 2,3,4,5)
MR_decl_label3(ll_backend__var_locn__remove_use_refs_4_0, 14,4,5)
MR_decl_label8(ll_backend__var_locn__remove_use_refs_2_4_0, 36,4,7,6,10,11,13,16)
MR_decl_label2(ll_backend__var_locn__remove_use_refs_2_4_0, 12,3)
MR_decl_label8(ll_backend__var_locn__rval_depends_on_search_lval_2_0, 4,7,9,12,20,13,30,1)
MR_decl_label8(ll_backend__var_locn__select_preferred_reg_3_0, 3,6,5,13,16,8,9,2)
MR_decl_label8(ll_backend__var_locn__select_preferred_reg_avoid_4_0, 3,6,5,13,16,8,9,2)
MR_decl_label8(ll_backend__var_locn__select_preferred_reg_or_stack_4_0, 3,6,5,12,15,2,20,22)
MR_decl_label3(ll_backend__var_locn__select_preferred_reg_or_stack_4_0, 27,19,31)
MR_decl_label8(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0, 3,6,5,13,8,9,2,18)
MR_decl_label3(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0, 20,23,17)
MR_decl_label2(ll_backend__var_locn__select_reg_lval_2_0, 7,1)
MR_decl_label4(ll_backend__var_locn__select_reg_or_stack_lval_2_0, 6,15,3,1)
MR_decl_label3(ll_backend__var_locn__select_stack_lval_2_0, 5,3,1)
MR_decl_label8(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0, 2,3,9,8,6,15,14,20)
MR_decl_label4(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0, 21,30,23,1)
MR_decl_label2(ll_backend__var_locn__var_locn_acquire_reg_3_0, 2,3)
MR_decl_label5(ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0, 4,6,2,7,8)
MR_decl_label4(ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0, 4,2,7,8)
MR_decl_label4(ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0, 14,4,2,7)
MR_decl_label8(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0, 3,5,2,9,11,12,6,7)
MR_decl_label1(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0, 13)
MR_decl_label8(ll_backend__var_locn__var_locn_assign_const_to_var_4_0, 3,5,6,2,8,10,12,13)
MR_decl_label2(ll_backend__var_locn__var_locn_assign_const_to_var_4_0, 14,9)
MR_decl_label8(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0, 2,3,4,5,11,12,13,14)
MR_decl_label5(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0, 18,16,20,15,22)
MR_decl_label8(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0, 3,5,6,2,8,9,10,11)
MR_decl_label3(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0, 12,13,14)
MR_decl_label8(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0, 2,9,10,18,20,21,22,23)
MR_decl_label8(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0, 24,25,12,27,28,29,30,31)
MR_decl_label8(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0, 3,33,34,35,36,37,38,39)
MR_decl_label2(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0, 40,41)
MR_decl_label8(ll_backend__var_locn__var_locn_assign_var_to_var_4_0, 3,5,6,2,8,9,10,13)
MR_decl_label8(ll_backend__var_locn__var_locn_assign_var_to_var_4_0, 12,14,15,16,11,17,18,19)
MR_decl_label1(ll_backend__var_locn__var_locn_assign_var_to_var_4_0, 20)
MR_decl_label2(ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_0, 4,2)
MR_decl_label8(ll_backend__var_locn__var_locn_clear_r1_4_0, 3,5,7,9,2,10,11,12)
MR_decl_label3(ll_backend__var_locn__var_locn_clear_r1_4_0, 13,14,15)
MR_decl_label4(ll_backend__var_locn__var_locn_clobber_all_regs_3_0, 2,3,4,5)
MR_decl_label2(ll_backend__var_locn__var_locn_clobber_regs_3_0, 2,3)
MR_decl_label2(ll_backend__var_locn__var_locn_get_var_locations_2_0, 2,3)
MR_decl_label6(ll_backend__var_locn__var_locn_lval_in_use_2_0, 4,8,16,3,11,1)
MR_decl_label8(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0, 12,14,49,19,50,21,51,23)
MR_decl_label8(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0, 52,25,53,27,54,29,30,55)
MR_decl_label3(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0, 32,33,34)
MR_decl_label4(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0, 9,17,6,7)
MR_decl_label8(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0, 90,5,91,7,8,12,9,10)
MR_decl_label8(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0, 18,16,22,20,24,29,15,92)
MR_decl_label8(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0, 34,35,42,39,40,41,37,38)
MR_decl_label1(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0, 36)
MR_decl_label4(ll_backend__var_locn__var_locn_max_reg_in_use_2_0, 2,3,4,5)
MR_decl_label3(ll_backend__var_locn__var_locn_place_vars_5_0, 2,3,4)
MR_decl_label8(ll_backend__var_locn__var_locn_produce_var_6_0, 2,3,8,6,12,10,14,19)
MR_decl_label8(ll_backend__var_locn__var_locn_produce_var_6_0, 5,24,25,28,26,32,30,34)
MR_decl_label4(ll_backend__var_locn__var_locn_produce_var_6_0, 39,21,40,41)
MR_decl_label6(ll_backend__var_locn__var_locn_produce_var_in_reg_6_0, 2,3,6,5,8,9)
MR_decl_label6(ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0, 2,3,6,5,8,9)
MR_decl_label3(ll_backend__var_locn__var_locn_release_reg_3_0, 3,5,2)
MR_decl_label4(ll_backend__var_locn__var_locn_set_magic_var_location_4_0, 2,3,4,5)
MR_decl_label8(ll_backend__var_locn__var_locn_var_becomes_dead_4_0, 3,7,6,5,10,12,13,14)
MR_decl_label6(ll_backend__var_locn__var_locn_var_becomes_dead_4_0, 15,16,8,18,2,21)
MR_decl_label3(__Unify___ll_backend__var_locn__dep_search_lval_0_0, 12,5,1)
MR_decl_label3(__Unify___ll_backend__var_locn__var_avail_0_0, 12,5,1)
MR_decl_label8(__Unify___ll_backend__var_locn__var_locn_info_0_0, 4,6,8,10,12,14,16,18)
MR_decl_label2(__Unify___ll_backend__var_locn__var_locn_info_0_0, 22,1)
MR_decl_label6(__Unify___ll_backend__var_locn__var_state_0_0, 4,6,8,10,12,1)
MR_decl_label4(__Compare___ll_backend__var_locn__dep_search_lval_0_0, 18,7,5,9)
MR_decl_label4(__Compare___ll_backend__var_locn__var_avail_0_0, 18,7,5,9)
MR_decl_label8(__Compare___ll_backend__var_locn__var_locn_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label5(__Compare___ll_backend__var_locn__var_locn_info_0_0, 29,33,37,41,93)
MR_decl_label7(__Compare___ll_backend__var_locn__var_state_0_0, 3,2,5,9,13,17,45)
MR_decl_static(ll_backend__var_locn__get_var_set_roots_2_0)
MR_decl_static(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0)
MR_decl_static(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0)
MR_decl_static(ll_backend__var_locn__init_var_locn_state_2_6_0)
MR_def_extern_entry(ll_backend__var_locn__init_var_locn_state_8_0)
MR_def_extern_entry(ll_backend__var_locn__reinit_var_locn_state_3_0)
MR_decl_static(ll_backend__var_locn__clobber_regs_in_maps_6_0)
MR_decl_static(ll_backend__var_locn__var_locn_get_var_state_map_2_0)
MR_decl_static(ll_backend__var_locn__var_locn_get_loc_var_map_2_0)
MR_decl_static(ll_backend__var_locn__var_locn_set_var_state_map_3_0)
MR_decl_static(ll_backend__var_locn__var_locn_set_loc_var_map_3_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_clobber_all_regs_3_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_clobber_regs_3_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_set_magic_var_location_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_lval_in_use_2_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_var_becomes_dead_4_0)
MR_decl_static(ll_backend__var_locn__remove_use_refs_4_0)
MR_decl_static(ll_backend__var_locn__remove_use_refs_2_4_0)
MR_decl_static(ll_backend__var_locn__get_var_name_3_0)
MR_decl_static(ll_backend__var_locn__check_var_is_unknown_2_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_assign_var_to_var_4_0)
MR_decl_static(ll_backend__var_locn__select_reg_lval_2_0)
MR_decl_static(ll_backend__var_locn__select_stack_lval_2_0)
MR_decl_static(ll_backend__var_locn__find_var_availability_4_0)
MR_decl_static(ll_backend__var_locn__add_additional_lval_for_var_4_0)
MR_decl_static(ll_backend__var_locn__record_clobbering_4_0)
MR_decl_static(ll_backend__var_locn__find_one_occupying_var_5_0)
MR_decl_static(ll_backend__var_locn__record_copy_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_get_stack_slots_2_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_get_follow_var_map_2_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_get_next_non_reserved_2_0)
MR_decl_static(ll_backend__var_locn__get_spare_reg_2_4_0)
MR_decl_static(ll_backend__var_locn__get_spare_reg_2_0)
MR_decl_static(ll_backend__var_locn__select_preferred_reg_or_stack_4_0)
MR_decl_static(ll_backend__var_locn__reg_is_not_locked_for_var_3_0)
MR_decl_static(ll_backend__var_locn__var_locn_get_vartypes_2_0)
MR_decl_static(ll_backend__var_locn__select_preferred_reg_avoid_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_place_var_6_0)
MR_decl_static(ll_backend__var_locn__actually_place_var_7_0)
MR_decl_static(ll_backend__var_locn__free_up_lval_7_0)
MR_decl_static(ll_backend__var_locn__free_up_lval_with_copy_7_0)
MR_decl_static(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0)
MR_decl_static(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0)
MR_decl_static(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0)
MR_decl_static(ll_backend__var_locn__materialize_var_9_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_materialize_vars_in_lval_6_0)
MR_decl_static(ll_backend__var_locn__add_use_ref_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0)
MR_decl_static(ll_backend__var_locn__expr_is_constant_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_assign_const_to_var_4_0)
MR_decl_static(ll_backend__var_locn__add_use_refs_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0)
MR_decl_static(ll_backend__var_locn__select_preferred_reg_3_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_produce_var_6_0)
MR_decl_static(ll_backend__var_locn__assign_cell_args_8_0)
MR_decl_static(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0)
MR_decl_static(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0)
MR_decl_static(ll_backend__var_locn__cell_is_constant_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_lock_regs_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_unlock_regs_2_0)
MR_decl_static(ll_backend__var_locn__actually_place_vars_5_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_place_vars_5_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_produce_var_in_reg_6_0)
MR_decl_static(ll_backend__var_locn__select_reg_or_stack_lval_2_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_acquire_reg_3_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_release_reg_3_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_clear_r1_4_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_get_var_locations_2_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_set_follow_vars_3_0)
MR_def_extern_entry(ll_backend__var_locn__var_locn_max_reg_in_use_2_0)
MR_decl_static(ll_backend__var_locn__convert_live_to_lval_set_2_0)
MR_decl_static(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0)
MR_decl_static(ll_backend__var_locn__nonempty_state_1_0)
MR_decl_static(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0)
MR_decl_static(ll_backend__var_locn__clobber_lval_in_var_state_map_6_0)
MR_decl_static(fn__ll_backend__var_locn__add_field_offset_3_0)
MR_decl_static(ll_backend__var_locn__record_change_in_root_dependencies_5_0)
MR_decl_static(ll_backend__var_locn__ensure_copies_are_present_5_0)
MR_decl_static(fn__ll_backend__var_locn__substitute_lval_in_lval_3_0)
MR_decl_static(ll_backend__var_locn__ensure_copies_are_present_lval_5_0)
MR_decl_static(ll_backend__var_locn__record_copy_for_var_7_0)
MR_decl_static(ll_backend__var_locn__make_var_depend_on_root_lval_4_0)
MR_decl_static(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0)
MR_decl_static(ll_backend__var_locn__is_root_lval_1_0)
MR_decl_static(ll_backend__var_locn__rval_depends_on_search_lval_2_0)
MR_decl_static(ll_backend__var_locn__lval_depends_on_search_lval_2_0)
MR_decl_static(ll_backend__var_locn__lval_does_not_support_lval_2_0)
MR_decl_static(__Unify___ll_backend__var_locn__dead_or_alive_0_0)
MR_decl_static(__Compare___ll_backend__var_locn__dead_or_alive_0_0)
MR_decl_static(__Unify___ll_backend__var_locn__dep_search_lval_0_0)
MR_decl_static(__Compare___ll_backend__var_locn__dep_search_lval_0_0)
MR_decl_static(__Unify___ll_backend__var_locn__loc_var_map_0_0)
MR_decl_static(__Compare___ll_backend__var_locn__loc_var_map_0_0)
MR_decl_static(__Unify___ll_backend__var_locn__var_avail_0_0)
MR_decl_static(__Compare___ll_backend__var_locn__var_avail_0_0)
MR_def_extern_entry(__Unify___ll_backend__var_locn__var_locn_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__var_locn__var_locn_info_0_0)
MR_decl_static(__Unify___ll_backend__var_locn__var_state_0_0)
MR_decl_static(__Compare___ll_backend__var_locn__var_state_0_0)
MR_decl_static(__Unify___ll_backend__var_locn__var_state_map_0_0)
MR_decl_static(__Compare___ll_backend__var_locn__var_state_map_0_0)
MR_decl_static(ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1551__1_2_0)
MR_decl_static(ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1574__1_2_0)
MR_decl_static(ll_backend__var_locn__IntroducedFrom__pred__record_copy__1441__1_3_0)
MR_decl_static(ll_backend__var_locn__IntroducedFrom__pred__record_copy__1445__1_3_0)
MR_decl_static(ll_backend__var_locn__IntroducedFrom__pred__expr_is_constant__1958__1_3_0)

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__get_var_set_roots_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__init_var_locn_state_2_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__var_locn__type_ctor_info_var_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_root_lval_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0_1;
static const struct mercury_type_0 mercury_common_0[10] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__get_var_set_roots_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__init_var_locn_state_2_6_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_4,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ll_backend__var_locn, var_state)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_root_lval_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
};

static const struct mercury_type_1 mercury_common_1[7] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(ll_backend__var_locn__is_root_lval_1_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(ll_backend__var_locn__is_root_lval_1_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(ll_backend__var_locn__is_root_lval_1_0),
0
},
{
MR_COMMON(7,1),
MR_ENTRY_AP(ll_backend__var_locn__IntroducedFrom__pred__record_copy__1445__1_3_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(ll_backend__var_locn__convert_live_to_lval_set_2_0),
0
},
{
MR_COMMON(0,5),
MR_ENTRY_AP(ll_backend__var_locn__is_root_lval_1_0),
0
},
{
MR_COMMON(0,6),
MR_ENTRY_AP(ll_backend__var_locn__is_root_lval_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_2 mercury_common_2[11] =
{
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
MR_LIST_CTOR_ADDR,
MR_COMMON(2,1)
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
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,2,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(2,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, rval)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__var_locn__type_ctor_info_var_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_3 mercury_common_3[9] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(2,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_TAG_COMMON(0,2,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(2,1),
MR_CTOR0_ADDR(ll_backend__var_locn, var_state)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,2,3),
MR_CTOR0_ADDR(ll_backend__var_locn, var_state)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,2,3),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,2,3),
MR_CTOR0_ADDR(ll_backend__var_locn, var_state)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,2,3),
MR_TAG_COMMON(0,2,9)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(2,1),
MR_CTOR0_ADDR(ll_backend__var_locn, var_state)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(2,1),
MR_COMMON(2,10)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_var_becomes_dead_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_3;
static const struct mercury_type_4 mercury_common_4[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,0),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,0),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__var_locn_var_becomes_dead_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,0),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,7),
MR_CTOR0_ADDR(ll_backend__llds, rval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,0),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,0),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__clobber_regs_in_maps_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_clobbering_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__free_up_lval_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_clear_r1_4_0_1;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__clobber_regs_in_maps_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(2,5),
MR_BOOL_CTOR_ADDR,
MR_COMMON(2,0),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_clobbering_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(2,5),
MR_BOOL_CTOR_ADDR,
MR_COMMON(2,0),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__free_up_lval_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(2,5),
MR_BOOL_CTOR_ADDR,
MR_COMMON(2,0),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__var_locn_clear_r1_4_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(2,5),
MR_BOOL_CTOR_ADDR,
MR_COMMON(2,0),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_var_becomes_dead_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_var_becomes_dead_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_get_var_locations_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_2;
static const struct mercury_type_6 mercury_common_6[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__var_locn_var_becomes_dead_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__var_locn_var_becomes_dead_4_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__var_locn_get_var_locations_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,7),
MR_COMMON(3,8)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__expr_is_constant_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__exprn_aux__type_ctor_info_exprn_opts_0;
static const struct mercury_type_7 mercury_common_7[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(2,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,5),
MR_COMMON(2,5),
MR_COMMON(2,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__expr_is_constant_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(3,2),
MR_CTOR0_ADDR(ll_backend__exprn_aux, exprn_opts),
MR_CTOR0_ADDR(ll_backend__llds, rval)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_4;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_4,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(2,0),
MR_COMMON(3,2),
MR_COMMON(3,2),
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_string_const(")", 1),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__free_up_lval_with_copy_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__var_locn__type_ctor_info_var_locn_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__ensure_copies_are_present_5_0_1;
static const struct mercury_type_10 mercury_common_10[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__free_up_lval_with_copy_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(2,6),
MR_COMMON(2,0),
MR_CTOR0_ADDR(ll_backend__var_locn, var_locn_info),
MR_CTOR0_ADDR(ll_backend__var_locn, var_locn_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__var_locn__ensure_copies_are_present_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,6),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(2,6),
MR_COMMON(2,6)
}
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
1
},
};

static const struct mercury_type_12 mercury_common_12[2] =
{
{
{
0,
1
}
},
{
{
0,
-42
}
},
};

static const struct mercury_type_13 mercury_common_13[1] =
{
{
MR_COMMON(5,3),
MR_ENTRY_AP(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0),
3,
MR_TAG_COMMON(1,12,0),
MR_tbmkword(0, 0),
0
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__var_locn__type_ctor_info_var_state_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_ll_backend__var_locn__type_ctor_info_var_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__var_locn__type_ctor_info_var_state_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__var_locn__var_state_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__var_locn__var_state_map_0_0)),
	"ll_backend.var_locn",
	"var_state_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__var_locn__type_ctor_info_var_state_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__var_locn__type_ctor_info_dead_or_alive_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__var_locn__field_types_var_state_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__var_locn__type_ctor_info_dead_or_alive_0
};

const MR_ConstString mercury_data_ll_backend__var_locn__field_names_var_state_0_0[] = {
	"locs",
	"const_rval",
	"expr_rval",
	"using_vars",
	"dead_or_alive"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__var_locn__du_functor_desc_var_state_0_0 = {
	"var_state",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__var_locn__field_types_var_state_0_0,
	mercury_data_ll_backend__var_locn__field_names_var_state_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__var_locn__du_stag_ordered_var_state_0_0[] = {
	&mercury_data_ll_backend__var_locn__du_functor_desc_var_state_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__var_locn__du_ptag_ordered_var_state_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__var_locn__du_stag_ordered_var_state_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__var_locn__du_name_ordered_var_state_0[] = {
	&mercury_data_ll_backend__var_locn__du_functor_desc_var_state_0_0
};

const MR_Integer mercury_data_ll_backend__var_locn__functor_number_map_var_state_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__var_locn__type_ctor_info_var_state_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__var_locn__var_state_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__var_locn__var_state_0_0)),
	"ll_backend.var_locn",
	"var_state",
	{ (void *)mercury_data_ll_backend__var_locn__du_name_ordered_var_state_0 },
	{ (void *)mercury_data_ll_backend__var_locn__du_ptag_ordered_var_state_0 },
	1,
	4,
	mercury_data_ll_backend__var_locn__functor_number_map_var_state_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__exprn_aux__type_ctor_info_exprn_opts_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__exprn_aux__type_ctor_info_exprn_opts_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__var_locn__field_types_var_locn_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__exprn_aux__type_ctor_info_exprn_opts_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__var_locn__type_ctor_info_var_state_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0
};

const MR_ConstString mercury_data_ll_backend__var_locn__field_names_var_locn_info_0_0[] = {
	"varset",
	"vartypes",
	"stack_slots",
	"exprn_opts",
	"follow_vars_map",
	"next_non_res",
	"var_state_map",
	"loc_var_map",
	"acquired",
	"locked",
	"exceptions"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__var_locn__du_functor_desc_var_locn_info_0_0 = {
	"var_locn_info",
	11,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__var_locn__field_types_var_locn_info_0_0,
	mercury_data_ll_backend__var_locn__field_names_var_locn_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__var_locn__du_stag_ordered_var_locn_info_0_0[] = {
	&mercury_data_ll_backend__var_locn__du_functor_desc_var_locn_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__var_locn__du_ptag_ordered_var_locn_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__var_locn__du_stag_ordered_var_locn_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__var_locn__du_name_ordered_var_locn_info_0[] = {
	&mercury_data_ll_backend__var_locn__du_functor_desc_var_locn_info_0_0
};

const MR_Integer mercury_data_ll_backend__var_locn__functor_number_map_var_locn_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__var_locn__type_ctor_info_var_locn_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__var_locn__var_locn_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__var_locn__var_locn_info_0_0)),
	"ll_backend.var_locn",
	"var_locn_info",
	{ (void *)mercury_data_ll_backend__var_locn__du_name_ordered_var_locn_info_0 },
	{ (void *)mercury_data_ll_backend__var_locn__du_ptag_ordered_var_locn_info_0 },
	1,
	4,
	mercury_data_ll_backend__var_locn__functor_number_map_var_locn_info_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__var_locn__field_types_var_avail_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__var_locn__du_functor_desc_var_avail_0_0 = {
	"available",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__var_locn__field_types_var_avail_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__var_locn__du_functor_desc_var_avail_0_1 = {
	"needs_materialization",
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

const MR_DuFunctorDescPtr mercury_data_ll_backend__var_locn__du_stag_ordered_var_avail_0_0[] = {
	&mercury_data_ll_backend__var_locn__du_functor_desc_var_avail_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__var_locn__du_stag_ordered_var_avail_0_1[] = {
	&mercury_data_ll_backend__var_locn__du_functor_desc_var_avail_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__var_locn__du_ptag_ordered_var_avail_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__var_locn__du_stag_ordered_var_avail_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__var_locn__du_stag_ordered_var_avail_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__var_locn__du_name_ordered_var_avail_0[] = {
	&mercury_data_ll_backend__var_locn__du_functor_desc_var_avail_0_0,
	&mercury_data_ll_backend__var_locn__du_functor_desc_var_avail_0_1
};

const MR_Integer mercury_data_ll_backend__var_locn__functor_number_map_var_avail_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__var_locn__type_ctor_info_var_avail_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__var_locn__var_avail_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__var_locn__var_avail_0_0)),
	"ll_backend.var_locn",
	"var_avail",
	{ (void *)mercury_data_ll_backend__var_locn__du_name_ordered_var_avail_0 },
	{ (void *)mercury_data_ll_backend__var_locn__du_ptag_ordered_var_avail_0 },
	2,
	4,
	mercury_data_ll_backend__var_locn__functor_number_map_var_avail_0
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__var_locn__type_ctor_info_loc_var_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__var_locn__loc_var_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__var_locn__loc_var_map_0_0)),
	"ll_backend.var_locn",
	"loc_var_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__var_locn__du_functor_desc_dep_search_lval_0_0 = {
	"all_regs",
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

const MR_PseudoTypeInfo mercury_data_ll_backend__var_locn__field_types_dep_search_lval_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__var_locn__du_functor_desc_dep_search_lval_0_1 = {
	"specific_reg_or_stack",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__var_locn__field_types_dep_search_lval_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_0[] = {
	&mercury_data_ll_backend__var_locn__du_functor_desc_dep_search_lval_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_1[] = {
	&mercury_data_ll_backend__var_locn__du_functor_desc_dep_search_lval_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__var_locn__du_ptag_ordered_dep_search_lval_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__var_locn__du_name_ordered_dep_search_lval_0[] = {
	&mercury_data_ll_backend__var_locn__du_functor_desc_dep_search_lval_0_0,
	&mercury_data_ll_backend__var_locn__du_functor_desc_dep_search_lval_0_1
};

const MR_Integer mercury_data_ll_backend__var_locn__functor_number_map_dep_search_lval_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__var_locn__type_ctor_info_dep_search_lval_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__var_locn__dep_search_lval_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__var_locn__dep_search_lval_0_0)),
	"ll_backend.var_locn",
	"dep_search_lval",
	{ (void *)mercury_data_ll_backend__var_locn__du_name_ordered_dep_search_lval_0 },
	{ (void *)mercury_data_ll_backend__var_locn__du_ptag_ordered_dep_search_lval_0 },
	2,
	4,
	mercury_data_ll_backend__var_locn__functor_number_map_dep_search_lval_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_0 = {
	"doa_dead",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_1 = {
	"doa_alive",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__var_locn__enum_value_ordered_dead_or_alive_0[] = {
	&mercury_data_ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_0,
	&mercury_data_ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__var_locn__enum_name_ordered_dead_or_alive_0[] = {
	&mercury_data_ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_1,
	&mercury_data_ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_0
};

const MR_Integer mercury_data_ll_backend__var_locn__functor_number_map_dead_or_alive_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__var_locn__type_ctor_info_dead_or_alive_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__var_locn__dead_or_alive_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__var_locn__dead_or_alive_0_0)),
	"ll_backend.var_locn",
	"dead_or_alive",
	{ (void *)mercury_data_ll_backend__var_locn__enum_name_ordered_dead_or_alive_0 },
	{ (void *)mercury_data_ll_backend__var_locn__enum_value_ordered_dead_or_alive_0 },
	2,
	4,
	mercury_data_ll_backend__var_locn__functor_number_map_dead_or_alive_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__get_var_set_roots_2_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"is_root_lval",
1,
0
},
"ll_backend.var_locn",
"var_locn.m",
1587,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"is_root_lval",
1,
0
},
"ll_backend.var_locn",
"var_locn.m",
1587,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0_2 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"make_var_depend_on_root_lval",
4,
0
},
"ll_backend.var_locn",
"var_locn.m",
2181,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"is_root_lval",
1,
0
},
"ll_backend.var_locn",
"var_locn.m",
1587,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_2 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"make_var_depend_on_root_lval",
4,
0
},
"ll_backend.var_locn",
"var_locn.m",
2181,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__init_var_locn_state_2_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"is_root_lval",
1,
0
},
"ll_backend.var_locn",
"var_locn.m",
532,
"d2;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__clobber_regs_in_maps_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"clobber_lval_in_var_state_map",
6,
0
},
"ll_backend.var_locn",
"var_locn.m",
610,
"d2;c7;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_var_becomes_dead_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"lambda_var_locn_m_1551",
2,
0
},
"ll_backend.var_locn",
"var_locn.m",
1551,
"d1;c6;t;c2;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_var_becomes_dead_4_0_2 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"make_var_not_depend_on_root_lval",
4,
0
},
"ll_backend.var_locn",
"var_locn.m",
1562,
"d1;c6;t;c3;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_var_becomes_dead_4_0_3 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"lambda_var_locn_m_1574",
2,
0
},
"ll_backend.var_locn",
"var_locn.m",
1574,
"d1;c6;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_clobbering_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"clobber_lval_in_var_state_map",
6,
0
},
"ll_backend.var_locn",
"var_locn.m",
1242,
"d1;c6;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"is_root_lval",
1,
0
},
"ll_backend.var_locn",
"var_locn.m",
1432,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_2 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"lambda_var_locn_m_1441",
3,
0
},
"ll_backend.var_locn",
"var_locn.m",
1441,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_3 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"lambda_var_locn_m_1445",
3,
0
},
"ll_backend.var_locn",
"var_locn.m",
1445,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_4_0_4 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"record_copy_for_var",
7,
0
},
"ll_backend.var_locn",
"var_locn.m",
1450,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__free_up_lval_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"try_clobber_lval_in_var_state_map",
6,
0
},
"ll_backend.var_locn",
"var_locn.m",
1276,
"d1;c8;?;c5;~;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__free_up_lval_with_copy_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"ensure_copies_are_present",
5,
0
},
"ll_backend.var_locn",
"var_locn.m",
1322,
"d1;c8;?;c6;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_1 = {
{
MR_FUNCTION,
"ll_backend.var_locn",
"ll_backend.var_locn",
"add_field_offset",
4,
0
},
"ll_backend.var_locn",
"var_locn.m",
730,
"d1;c9;t;c4;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__expr_is_constant_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"lambda_var_locn_m_1958",
3,
0
},
"ll_backend.var_locn",
"var_locn.m",
1958,
"d5;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_clear_r1_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"try_clobber_lval_in_var_state_map",
6,
0
},
"ll_backend.var_locn",
"var_locn.m",
1276,
"d1;c8;?;c5;~;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__var_locn_get_var_locations_2_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"convert_live_to_lval_set",
2,
0
},
"ll_backend.var_locn",
"var_locn.m",
563,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"lval_does_not_support_lval",
2,
0
},
"ll_backend.var_locn",
"var_locn.m",
644,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"is_root_lval",
1,
0
},
"ll_backend.var_locn",
"var_locn.m",
1587,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_2 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"is_root_lval",
1,
0
},
"ll_backend.var_locn",
"var_locn.m",
1587,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_3 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"make_var_depend_on_root_lval",
4,
0
},
"ll_backend.var_locn",
"var_locn.m",
1521,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_change_in_root_dependencies_5_0_4 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"make_var_not_depend_on_root_lval",
4,
0
},
"ll_backend.var_locn",
"var_locn.m",
1522,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__ensure_copies_are_present_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"ensure_copies_are_present_lval",
5,
0
},
"ll_backend.var_locn",
"var_locn.m",
1393,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_1 = {
{
MR_FUNCTION,
"ll_backend.var_locn",
"ll_backend.var_locn",
"substitute_lval_in_lval",
4,
0
},
"ll_backend.var_locn",
"var_locn.m",
1498,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_2 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"lval_does_not_support_lval",
2,
0
},
"ll_backend.var_locn",
"var_locn.m",
1500,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_3 = {
{
MR_FUNCTION,
"ll_backend.var_locn",
"ll_backend.var_locn",
"substitute_lval_in_lval",
4,
0
},
"ll_backend.var_locn",
"var_locn.m",
1501,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__record_copy_for_var_7_0_4 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"nonempty_state",
1,
0
},
"ll_backend.var_locn",
"var_locn.m",
1504,
"d1;c21;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_depend_on_root_lval_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"is_root_lval",
1,
0
},
"ll_backend.var_locn",
"var_locn.m",
2195,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.var_locn",
"ll_backend.var_locn",
"is_root_lval",
1,
0
},
"ll_backend.var_locn",
"var_locn.m",
2212,
"d1;c5;"
};

MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(ll_backend__code_util__lvals_in_lvals_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(list__sort_and_remove_dups_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module0)
	MR_init_entry1(ll_backend__var_locn__get_var_set_roots_2_0);
	MR_init_label4(ll_backend__var_locn__get_var_set_roots_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__get_var_set_roots_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__get_var_set_roots_2_0_i2);
MR_def_label(ll_backend__var_locn__get_var_set_roots_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_lvals_2_0,
		ll_backend__var_locn__get_var_set_roots_2_0_i3);
MR_def_label(ll_backend__var_locn__get_var_set_roots_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__var_locn__get_var_set_roots_2_0_i4);
MR_def_label(ll_backend__var_locn__get_var_set_roots_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(list__filter_3_0,
		ll_backend__var_locn__get_var_set_roots_2_0_i5);
MR_def_label(ll_backend__var_locn__get_var_set_roots_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__sort_and_remove_dups_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(ll_backend__var_locn_module1)
	MR_init_entry1(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0);
	MR_init_label5(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0_i2);
MR_def_label(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_lvals_2_0,
		ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0_i3);
MR_def_label(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0_i4);
MR_def_label(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(list__filter_3_0,
		ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0_i5);
MR_def_label(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0_i6);
MR_def_label(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__make_var_depend_on_root_lval_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__singleton_set_2_1);

MR_BEGIN_MODULE(ll_backend__var_locn_module2)
	MR_init_entry1(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0);
	MR_init_label6(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_i2);
MR_def_label(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_i3);
MR_def_label(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_lvals_2_0,
		ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_i4);
MR_def_label(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_i5);
MR_def_label(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(list__filter_3_0,
		ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_i6);
MR_def_label(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		ll_backend__var_locn__make_var_depend_on_lval_roots_4_0_i7);
MR_def_label(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__make_var_depend_on_root_lval_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module3)
	MR_init_entry1(ll_backend__var_locn__init_var_locn_state_2_6_0);
	MR_init_label8(ll_backend__var_locn__init_var_locn_state_2_6_0,39,4,9,6,12,11,15,16)
	MR_init_label4(ll_backend__var_locn__init_var_locn_state_2_6_0,17,18,19,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__init_var_locn_state_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__init_var_locn_state_2_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__is_root_lval_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r3 = (MR_Word) MR_string_const("init_var_locn_state_2: unexpected lval", 38);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__var_locn__init_var_locn_state_2_6_0_i4);
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__init_var_locn_state_2_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_ctfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__var_locn__init_var_locn_state_2_6_0_i9);
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__init_var_locn_state_2_6_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(ll_backend__var_locn__init_var_locn_state_2_6_0_i39);
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__init_var_locn_state_2_6_0_i12);
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__init_var_locn_state_2_6_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("init_state_2: repeated variable", 31);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__init_var_locn_state_2_6_0_i18);
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		ll_backend__var_locn__init_var_locn_state_2_6_0_i15);
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__var_locn__init_var_locn_state_2_6_0_i16);
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__init_var_locn_state_2_6_0_i17);
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0,
		ll_backend__var_locn__init_var_locn_state_2_6_0_i19);
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(ll_backend__var_locn__init_var_locn_state_2_6_0_i39);
MR_def_label(ll_backend__var_locn__init_var_locn_state_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(ll_backend__exprn_aux__init_exprn_opts_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module4)
	MR_init_entry1(ll_backend__var_locn__init_var_locn_state_8_0);
	MR_init_label5(ll_backend__var_locn__init_var_locn_state_8_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__init_var_locn_state_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__var_locn__init_var_locn_state_8_0_i2);
MR_def_label(ll_backend__var_locn__init_var_locn_state_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__var_locn__init_var_locn_state_8_0_i3);
MR_def_label(ll_backend__var_locn__init_var_locn_state_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__var_locn__init_var_locn_state_2_6_0,
		ll_backend__var_locn__init_var_locn_state_8_0_i4);
MR_def_label(ll_backend__var_locn__init_var_locn_state_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__exprn_aux__init_exprn_opts_2_0,
		ll_backend__var_locn__init_var_locn_state_8_0_i5);
MR_def_label(ll_backend__var_locn__init_var_locn_state_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__var_locn__init_var_locn_state_8_0_i6);
MR_def_label(ll_backend__var_locn__init_var_locn_state_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module5)
	MR_init_entry1(ll_backend__var_locn__reinit_var_locn_state_3_0);
	MR_init_label4(ll_backend__var_locn__reinit_var_locn_state_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__reinit_var_locn_state_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__var_locn__reinit_var_locn_state_3_0_i2);
MR_def_label(ll_backend__var_locn__reinit_var_locn_state_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__var_locn__reinit_var_locn_state_3_0_i3);
MR_def_label(ll_backend__var_locn__reinit_var_locn_state_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__init_var_locn_state_2_6_0,
		ll_backend__var_locn__reinit_var_locn_state_3_0_i4);
MR_def_label(ll_backend__var_locn__reinit_var_locn_state_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__var_locn__reinit_var_locn_state_3_0_i5);
MR_def_label(ll_backend__var_locn__reinit_var_locn_state_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(map__delete_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module6)
	MR_init_entry1(ll_backend__var_locn__clobber_regs_in_maps_6_0);
	MR_init_label8(ll_backend__var_locn__clobber_regs_in_maps_6_0,27,7,9,10,11,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__clobber_regs_in_maps_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__var_locn__clobber_regs_in_maps_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__clobber_regs_in_maps_6_0_i3);
	}
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__clobber_regs_in_maps_6_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__var_locn__clobber_regs_in_maps_6_0_i7);
MR_def_label(ll_backend__var_locn__clobber_regs_in_maps_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__clobber_regs_in_maps_6_0_i4);
	}
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__delete_3_0,
		ll_backend__var_locn__clobber_regs_in_maps_6_0_i9);
MR_def_label(ll_backend__var_locn__clobber_regs_in_maps_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__clobber_regs_in_maps_6_0_i10);
MR_def_label(ll_backend__var_locn__clobber_regs_in_maps_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__clobber_lval_in_var_state_map_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__var_locn__clobber_regs_in_maps_6_0_i11);
MR_def_label(ll_backend__var_locn__clobber_regs_in_maps_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__var_locn__clobber_regs_in_maps_6_0_i27);
MR_def_label(ll_backend__var_locn__clobber_regs_in_maps_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
MR_def_label(ll_backend__var_locn__clobber_regs_in_maps_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__var_locn__clobber_regs_in_maps_6_0_i27);
MR_def_label(ll_backend__var_locn__clobber_regs_in_maps_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module7)
	MR_init_entry1(ll_backend__var_locn__var_locn_get_var_state_map_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__var_locn_get_var_state_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module8)
	MR_init_entry1(ll_backend__var_locn__var_locn_get_loc_var_map_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__var_locn_get_loc_var_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module9)
	MR_init_entry1(ll_backend__var_locn__var_locn_set_var_state_map_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__var_locn_set_var_state_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module10)
	MR_init_entry1(ll_backend__var_locn__var_locn_set_loc_var_map_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__var_locn_set_loc_var_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module11)
	MR_init_entry1(ll_backend__var_locn__var_locn_clobber_all_regs_3_0);
	MR_init_label4(ll_backend__var_locn__var_locn_clobber_all_regs_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_clobber_all_regs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__var_locn__var_locn_clobber_all_regs_3_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_clobber_all_regs_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__keys_2_0,
		ll_backend__var_locn__var_locn_clobber_all_regs_3_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_clobber_all_regs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__var_locn__clobber_regs_in_maps_6_0,
		ll_backend__var_locn__var_locn_clobber_all_regs_3_0_i4);
MR_def_label(ll_backend__var_locn__var_locn_clobber_all_regs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_loc_var_map_3_0,
		ll_backend__var_locn__var_locn_clobber_all_regs_3_0_i5);
MR_def_label(ll_backend__var_locn__var_locn_clobber_all_regs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ll_backend__var_locn__var_locn_set_var_state_map_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__delete_list_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module12)
	MR_init_entry1(ll_backend__var_locn__var_locn_clobber_regs_3_0);
	MR_init_label2(ll_backend__var_locn__var_locn_clobber_regs_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_clobber_regs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_r2, 8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__delete_list_2_0,
		ll_backend__var_locn__var_locn_clobber_regs_3_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_clobber_regs_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(0, MR_tempr1, 7);
	MR_r4 = MR_ctfield(0, MR_tempr1, 6);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__clobber_regs_in_maps_6_0,
		ll_backend__var_locn__var_locn_clobber_regs_3_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_clobber_regs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r2;
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module13)
	MR_init_entry1(ll_backend__var_locn__var_locn_set_magic_var_location_4_0);
	MR_init_label4(ll_backend__var_locn__var_locn_set_magic_var_location_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_set_magic_var_location_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_ctfield(0, MR_r3, 7);
	MR_np_call_localret_ent(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0,
		ll_backend__var_locn__var_locn_set_magic_var_location_4_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_set_magic_var_location_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(set__singleton_set_2_1,
		ll_backend__var_locn__var_locn_set_magic_var_location_4_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_set_magic_var_location_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__var_locn__var_locn_set_magic_var_location_4_0_i4);
MR_def_label(ll_backend__var_locn__var_locn_set_magic_var_location_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__var_locn_set_magic_var_location_4_0_i5);
MR_def_label(ll_backend__var_locn__var_locn_set_magic_var_location_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__empty_1_0);
MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module14)
	MR_init_entry1(ll_backend__var_locn__var_locn_lval_in_use_2_0);
	MR_init_label6(ll_backend__var_locn__var_locn_lval_in_use_2_0,4,8,16,3,11,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_lval_in_use_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(0, MR_r1, 9);
	MR_sv(2) = MR_ctfield(0, MR_r1, 8);
	MR_sv(1) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_ctfield(0, MR_tempr1, 7);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__var_locn__var_locn_lval_in_use_2_0_i4);
MR_def_label(ll_backend__var_locn__var_locn_lval_in_use_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_lval_in_use_2_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__var_locn__var_locn_lval_in_use_2_0_i8);
MR_def_label(ll_backend__var_locn__var_locn_lval_in_use_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_lval_in_use_2_0_i3);
	}
MR_def_label(ll_backend__var_locn__var_locn_lval_in_use_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__var_locn__var_locn_lval_in_use_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__var_locn__var_locn_lval_in_use_2_0_i11);
MR_def_label(ll_backend__var_locn__var_locn_lval_in_use_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_lval_in_use_2_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_lval_in_use_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_lval_in_use_2_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = ((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(3));
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__var_locn__var_locn_lval_in_use_2_0,1)
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


MR_BEGIN_MODULE(ll_backend__var_locn_module15)
	MR_init_entry1(ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_0);
	MR_init_label2(ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_0_i4);
MR_def_label(ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("check_and_set_magic_var_location: in use", 40);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__var_locn__var_locn_set_magic_var_location_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_remove_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module16)
	MR_init_entry1(ll_backend__var_locn__var_locn_var_becomes_dead_4_0);
	MR_init_label8(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,3,7,6,5,10,12,13,14)
	MR_init_label6(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,15,16,8,18,2,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_var_becomes_dead_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1551__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(2);
	MR_tfield(0, MR_r1, 4) = (MR_Integer) 0;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r3 = (MR_Word) MR_string_const("var_becomes_dead: already dead", 30);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i7);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i5);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_ctfield(0, MR_r2, 3);
	MR_r1 = MR_sv(9);
	}
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i10);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i8);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__det_remove_4_0,
		ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i12);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_r2;
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r1, 8) = MR_ctfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r1, 9) = MR_ctfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r1, 10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_loc_var_map_2_0,
		ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i13);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__get_var_set_roots_2_0,
		ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i14);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i15);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_loc_var_map_3_0,
		ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i16);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ll_backend__var_locn__remove_use_refs_4_0);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i18);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ll_backend__var_locn__var_locn_set_var_state_map_3_0);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1574__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(2);
	MR_tfield(0, MR_r1, 4) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r3 = (MR_Word) MR_string_const("var_becomes_dead: premature deletion", 36);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__var_locn__var_locn_var_becomes_dead_4_0_i21);
MR_def_label(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__exprn_aux__vars_in_rval_2_0);
MR_decl_entry(list__remove_dups_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module17)
	MR_init_entry1(ll_backend__var_locn__remove_use_refs_4_0);
	MR_init_label3(ll_backend__var_locn__remove_use_refs_4_0,14,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__remove_use_refs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__remove_use_refs_4_0_i14);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__var_locn__remove_use_refs_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__vars_in_rval_2_0,
		ll_backend__var_locn__remove_use_refs_4_0_i4);
MR_def_label(ll_backend__var_locn__remove_use_refs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_np_call_localret_ent(list__remove_dups_2_0,
		ll_backend__var_locn__remove_use_refs_4_0_i5);
MR_def_label(ll_backend__var_locn__remove_use_refs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__var_locn__remove_use_refs_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__remove_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module18)
	MR_init_entry1(ll_backend__var_locn__remove_use_refs_2_4_0);
	MR_init_label8(ll_backend__var_locn__remove_use_refs_2_4_0,36,4,7,6,10,11,13,16)
	MR_init_label2(ll_backend__var_locn__remove_use_refs_2_4_0,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__remove_use_refs_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(ll_backend__var_locn__remove_use_refs_2_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__remove_use_refs_2_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__remove_use_refs_2_4_0_i4);
MR_def_label(ll_backend__var_locn__remove_use_refs_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_ctfield(0, MR_r1, 4);
	MR_sv(6) = MR_ctfield(0, MR_r1, 0);
	MR_sv(7) = MR_ctfield(0, MR_r1, 1);
	MR_sv(8) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__remove_3_0,
		ll_backend__var_locn__remove_use_refs_2_4_0_i7);
MR_def_label(ll_backend__var_locn__remove_use_refs_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__remove_use_refs_2_4_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_GOTO_LAB(ll_backend__var_locn__remove_use_refs_2_4_0_i10);
	}
MR_def_label(ll_backend__var_locn__remove_use_refs_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("remove_use_refs_2: using ref not present", 40);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__remove_use_refs_2_4_0_i10);
MR_def_label(ll_backend__var_locn__remove_use_refs_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r5;
	MR_sv(11) = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__remove_use_refs_2_4_0_i11);
MR_def_label(ll_backend__var_locn__remove_use_refs_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__var_locn__remove_use_refs_2_4_0_i13);
MR_def_label(ll_backend__var_locn__remove_use_refs_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__remove_use_refs_2_4_0_i12);
	}
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(ll_backend__var_locn__remove_use_refs_2_4_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_var_becomes_dead_4_0,
		ll_backend__var_locn__remove_use_refs_2_4_0_i16);
MR_def_label(ll_backend__var_locn__remove_use_refs_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__var_locn__remove_use_refs_2_4_0_i36);
MR_def_label(ll_backend__var_locn__remove_use_refs_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__var_locn__remove_use_refs_2_4_0_i36);
MR_def_label(ll_backend__var_locn__remove_use_refs_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module19)
	MR_init_entry1(ll_backend__var_locn__get_var_name_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__get_var_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(varset__lookup_name_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module20)
	MR_init_entry1(ll_backend__var_locn__check_var_is_unknown_2_0);
	MR_init_label4(ll_backend__var_locn__check_var_is_unknown_2_0,3,5,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__check_var_is_unknown_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_ctfield(0, MR_sv(1), 6);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__check_var_is_unknown_2_0_i3);
MR_def_label(ll_backend__var_locn__check_var_is_unknown_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__check_var_is_unknown_2_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		ll_backend__var_locn__check_var_is_unknown_2_0_i5);
MR_def_label(ll_backend__var_locn__check_var_is_unknown_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("assign_to_var: existing definition of variable ", 47);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__var_locn__check_var_is_unknown_2_0_i6);
MR_def_label(ll_backend__var_locn__check_var_is_unknown_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__var_locn__check_var_is_unknown_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module21)
	MR_init_entry1(ll_backend__var_locn__var_locn_assign_var_to_var_4_0);
	MR_init_label8(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,3,5,6,2,8,9,10,13)
	MR_init_label8(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,12,14,15,16,11,17,18,19)
	MR_init_label1(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_assign_var_to_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_ctfield(0, MR_sv(9), 6);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(9), 0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i5);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("assign_to_var: existing definition of variable ", 47);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i6);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i8);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_var_state_map_2_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i9);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i10);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i12);
	}
	MR_sv(4) = MR_ctfield(0, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i13);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r5 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i11);
	}
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_sv(10), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(10), 0) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_r1, 1);
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_ctfield(0, MR_r1, 3);
	MR_sv(8) = MR_ctfield(0, MR_r1, 4);
	MR_r1 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i14);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r3 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i15);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i16);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i17);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_var_state_map_3_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i18);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_loc_var_map_2_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i19);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0,
		ll_backend__var_locn__var_locn_assign_var_to_var_4_0_i20);
MR_def_label(ll_backend__var_locn__var_locn_assign_var_to_var_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ll_backend__var_locn__var_locn_set_loc_var_map_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module22)
	MR_init_entry1(ll_backend__var_locn__select_reg_lval_2_0);
	MR_init_label2(ll_backend__var_locn__select_reg_lval_2_0,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__select_reg_lval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_reg_lval_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_reg_lval_2_0_i7);
	}
	MR_r1 = MR_tempr1;
	MR_np_localtailcall(ll_backend__var_locn__select_reg_lval_2_0);
	}
MR_def_label(ll_backend__var_locn__select_reg_lval_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__var_locn__select_reg_lval_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module23)
	MR_init_entry1(ll_backend__var_locn__select_stack_lval_2_0);
	MR_init_label3(ll_backend__var_locn__select_stack_lval_2_0,5,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__select_stack_lval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_stack_lval_2_0_i1);
	}
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_stack_lval_2_0_i5);
	}
	MR_r1 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__select_stack_lval_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_stack_lval_2_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__var_locn__select_stack_lval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localtailcall(ll_backend__var_locn__select_stack_lval_2_0);
MR_def_label(ll_backend__var_locn__select_stack_lval_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module24)
	MR_init_entry1(ll_backend__var_locn__find_var_availability_4_0);
	MR_init_label8(ll_backend__var_locn__find_var_availability_4_0,2,3,7,4,5,12,10,16)
	MR_init_label4(ll_backend__var_locn__find_var_availability_4_0,14,18,23,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__find_var_availability_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_ctfield(0, MR_tempr1, 6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__find_var_availability_4_0_i2);
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__find_var_availability_4_0_i3);
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__find_var_availability_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__var_locn__find_var_availability_4_0_i7);
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__find_var_availability_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__select_reg_lval_2_0,
		ll_backend__var_locn__find_var_availability_4_0_i12);
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__find_var_availability_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__var_locn__find_var_availability_4_0_i23);
	}
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__var_locn__select_stack_lval_2_0,
		ll_backend__var_locn__find_var_availability_4_0_i16);
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__find_var_availability_4_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__var_locn__find_var_availability_4_0_i23);
	}
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__find_var_availability_4_0_i18);
	}
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_GOTO_LAB(ll_backend__var_locn__find_var_availability_4_0_i23);
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__find_var_availability_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__var_locn__find_var_availability_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module25)
	MR_init_entry1(ll_backend__var_locn__add_additional_lval_for_var_4_0);
	MR_init_label7(ll_backend__var_locn__add_additional_lval_for_var_4_0,2,3,4,5,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__add_additional_lval_for_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_ctfield(0, MR_r3, 7);
	MR_np_call_localret_ent(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0,
		ll_backend__var_locn__add_additional_lval_for_var_4_0_i2);
MR_def_label(ll_backend__var_locn__add_additional_lval_for_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__add_additional_lval_for_var_4_0_i3);
MR_def_label(ll_backend__var_locn__add_additional_lval_for_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 2);
	MR_sv(5) = MR_ctfield(0, MR_r1, 3);
	MR_sv(6) = MR_ctfield(0, MR_r1, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__var_locn__add_additional_lval_for_var_4_0_i4);
MR_def_label(ll_backend__var_locn__add_additional_lval_for_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__add_additional_lval_for_var_4_0_i5);
MR_def_label(ll_backend__var_locn__add_additional_lval_for_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__add_additional_lval_for_var_4_0_i7);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ll_backend__var_locn__add_additional_lval_for_var_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__vars_in_rval_2_0,
		ll_backend__var_locn__add_additional_lval_for_var_4_0_i8);
MR_def_label(ll_backend__var_locn__add_additional_lval_for_var_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(list__remove_dups_2_0,
		ll_backend__var_locn__add_additional_lval_for_var_4_0_i9);
MR_def_label(ll_backend__var_locn__add_additional_lval_for_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ll_backend__var_locn__remove_use_refs_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module26)
	MR_init_entry1(ll_backend__var_locn__record_clobbering_4_0);
	MR_init_label5(ll_backend__var_locn__record_clobbering_4_0,3,5,6,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__record_clobbering_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__var_locn__record_clobbering_4_0_i3);
MR_def_label(ll_backend__var_locn__record_clobbering_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__record_clobbering_4_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__record_clobbering_4_0_i5);
MR_def_label(ll_backend__var_locn__record_clobbering_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__delete_3_0,
		ll_backend__var_locn__record_clobbering_4_0_i6);
MR_def_label(ll_backend__var_locn__record_clobbering_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr3, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr3, 10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__clobber_lval_in_var_state_map_6_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 0;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 6);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__var_locn__record_clobbering_4_0_i7);
MR_def_label(ll_backend__var_locn__record_clobbering_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__var_locn__var_locn_set_var_state_map_3_0);
MR_def_label(ll_backend__var_locn__record_clobbering_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__delete_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module27)
	MR_init_entry1(ll_backend__var_locn__find_one_occupying_var_5_0);
	MR_init_label7(ll_backend__var_locn__find_one_occupying_var_5_0,22,3,5,7,8,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__find_one_occupying_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__var_locn__find_one_occupying_var_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__find_one_occupying_var_5_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__find_one_occupying_var_5_0_i3);
MR_def_label(ll_backend__var_locn__find_one_occupying_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__var_locn__find_one_occupying_var_5_0_i5);
MR_def_label(ll_backend__var_locn__find_one_occupying_var_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__find_one_occupying_var_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__var_locn__find_one_occupying_var_5_0_i7);
MR_def_label(ll_backend__var_locn__find_one_occupying_var_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__find_one_occupying_var_5_0_i8);
MR_def_label(ll_backend__var_locn__find_one_occupying_var_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__var_locn__find_one_occupying_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__var_locn__find_one_occupying_var_5_0_i22);
MR_def_label(ll_backend__var_locn__find_one_occupying_var_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__list_to_set_2_0);
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module28)
	MR_init_entry1(ll_backend__var_locn__record_copy_4_0);
	MR_init_label8(ll_backend__var_locn__record_copy_4_0,2,3,4,5,6,7,8,9)
	MR_init_label3(ll_backend__var_locn__record_copy_4_0,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__record_copy_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__is_root_lval_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r3 = (MR_Word) MR_string_const("record_copy: non-root New lval", 30);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__var_locn__record_copy_4_0_i2);
MR_def_label(ll_backend__var_locn__record_copy_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_var_state_map_2_0,
		ll_backend__var_locn__record_copy_4_0_i3);
MR_def_label(ll_backend__var_locn__record_copy_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_loc_var_map_2_0,
		ll_backend__var_locn__record_copy_4_0_i4);
MR_def_label(ll_backend__var_locn__record_copy_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		ll_backend__var_locn__record_copy_4_0_i5);
MR_def_label(ll_backend__var_locn__record_copy_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__var_locn__get_var_set_roots_2_0,
		ll_backend__var_locn__record_copy_4_0_i6);
MR_def_label(ll_backend__var_locn__record_copy_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__IntroducedFrom__pred__record_copy__1441__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		ll_backend__var_locn__record_copy_4_0_i7);
MR_def_label(ll_backend__var_locn__record_copy_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__var_locn__record_copy_4_0_i8);
MR_def_label(ll_backend__var_locn__record_copy_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__var_locn__record_copy_4_0_i9);
MR_def_label(ll_backend__var_locn__record_copy_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__record_copy_4_0_i10);
MR_def_label(ll_backend__var_locn__record_copy_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__record_copy_for_var_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		ll_backend__var_locn__record_copy_4_0_i11);
MR_def_label(ll_backend__var_locn__record_copy_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_loc_var_map_3_0,
		ll_backend__var_locn__record_copy_4_0_i12);
MR_def_label(ll_backend__var_locn__record_copy_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__var_locn__var_locn_set_var_state_map_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module29)
	MR_init_entry1(ll_backend__var_locn__var_locn_get_stack_slots_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_get_stack_slots_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module30)
	MR_init_entry1(ll_backend__var_locn__var_locn_get_follow_var_map_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_get_follow_var_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module31)
	MR_init_entry1(ll_backend__var_locn__var_locn_get_next_non_reserved_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_get_next_non_reserved_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module32)
	MR_init_entry1(ll_backend__var_locn__get_spare_reg_2_4_0);
	MR_init_label5(ll_backend__var_locn__get_spare_reg_2_4_0,22,4,2,8,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__get_spare_reg_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__var_locn__get_spare_reg_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__get_spare_reg_2_4_0_i4);
MR_def_label(ll_backend__var_locn__get_spare_reg_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__get_spare_reg_2_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__var_locn__get_spare_reg_2_4_0_i22);
MR_def_label(ll_backend__var_locn__get_spare_reg_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__var_locn__get_spare_reg_2_4_0_i8);
MR_def_label(ll_backend__var_locn__get_spare_reg_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__get_spare_reg_2_4_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__var_locn__get_spare_reg_2_4_0_i22);
MR_def_label(ll_backend__var_locn__get_spare_reg_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module33)
	MR_init_entry1(ll_backend__var_locn__get_spare_reg_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__get_spare_reg_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_r1, 5);
	MR_np_tailcall_ent(ll_backend__var_locn__get_spare_reg_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__llds__stack_slot_to_lval_1_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module34)
	MR_init_entry1(ll_backend__var_locn__select_preferred_reg_or_stack_4_0);
	MR_init_label8(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,3,6,5,12,15,2,20,22)
	MR_init_label3(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,27,19,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__select_preferred_reg_or_stack_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r4 = MR_ctfield(0, MR_sv(1), 4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i3);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i6);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i5);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i2);
	}
	MR_r1 = MR_r2;
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i12);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i15);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r4 = MR_ctfield(0, MR_sv(1), 2);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i20);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i19);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_to_lval_1_0,
		ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i22);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i27);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_4_0_i19);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_r1, 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__var_locn__get_spare_reg_2_4_0);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module35)
	MR_init_entry1(ll_backend__var_locn__reg_is_not_locked_for_var_3_0);
	MR_init_label3(ll_backend__var_locn__reg_is_not_locked_for_var_3_0,3,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__reg_is_not_locked_for_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(4) = MR_ctfield(0, MR_r1, 10);
	MR_sv(3) = MR_ctfield(0, MR_r1, 9);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr2, 8);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__var_locn__reg_is_not_locked_for_var_3_0_i3);
MR_def_label(ll_backend__var_locn__reg_is_not_locked_for_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__reg_is_not_locked_for_var_3_0_i1);
	}
	if (((MR_Integer) MR_sv(1) > (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(ll_backend__var_locn__reg_is_not_locked_for_var_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__member_2_0);
	}
MR_def_label(ll_backend__var_locn__reg_is_not_locked_for_var_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__var_locn__reg_is_not_locked_for_var_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module36)
	MR_init_entry1(ll_backend__var_locn__var_locn_get_vartypes_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__var_locn_get_vartypes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module37)
	MR_init_entry1(ll_backend__var_locn__select_preferred_reg_avoid_4_0);
	MR_init_label8(ll_backend__var_locn__select_preferred_reg_avoid_4_0,3,6,5,13,16,8,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__select_preferred_reg_avoid_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r4 = MR_ctfield(0, MR_sv(1), 4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__select_preferred_reg_avoid_4_0_i3);
MR_def_label(ll_backend__var_locn__select_preferred_reg_avoid_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_avoid_4_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_avoid_4_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_avoid_4_0_i5);
MR_def_label(ll_backend__var_locn__select_preferred_reg_avoid_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_avoid_4_0_i2);
	}
	MR_r1 = MR_sv(1);
MR_def_label(ll_backend__var_locn__select_preferred_reg_avoid_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_avoid_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__select_preferred_reg_avoid_4_0_i13);
MR_def_label(ll_backend__var_locn__select_preferred_reg_avoid_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_avoid_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__var_locn__select_preferred_reg_avoid_4_0_i16);
MR_def_label(ll_backend__var_locn__select_preferred_reg_avoid_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_avoid_4_0_i8);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__var_locn__select_preferred_reg_avoid_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ll_backend__var_locn__select_preferred_reg_avoid_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_r1, 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__var_locn__get_spare_reg_2_4_0);
MR_def_label(ll_backend__var_locn__select_preferred_reg_avoid_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_r1, 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ll_backend__var_locn__get_spare_reg_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module38)
	MR_init_entry1(ll_backend__var_locn__var_locn_place_var_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_place_var_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__var_locn__actually_place_var_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(check_hlds__type_util__is_dummy_argument_type_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module39)
	MR_init_entry1(ll_backend__var_locn__actually_place_var_7_0);
	MR_init_label8(ll_backend__var_locn__actually_place_var_7_0,3,2,6,7,8,10,9,12)
	MR_init_label8(ll_backend__var_locn__actually_place_var_7_0,13,16,17,15,18,21,14,23)
	MR_init_label8(ll_backend__var_locn__actually_place_var_7_0,27,24,25,29,31,33,34,35)
	MR_init_label4(ll_backend__var_locn__actually_place_var_7_0,36,37,40,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__actually_place_var_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr2, 8);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__var_locn__actually_place_var_7_0_i3);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__actually_place_var_7_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("actually_place_var: target is acquired reg", 42);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__actually_place_var_7_0_i6);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_var_state_map_2_0,
		ll_backend__var_locn__actually_place_var_7_0_i7);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__actually_place_var_7_0_i8);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__var_locn__actually_place_var_7_0_i10);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__actually_place_var_7_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__free_up_lval_7_0,
		ll_backend__var_locn__actually_place_var_7_0_i12);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_tempr2;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__find_var_availability_4_0,
		ll_backend__var_locn__actually_place_var_7_0_i13);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__actually_place_var_7_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Integer) 0;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__materialize_var_9_0,
		ll_backend__var_locn__actually_place_var_7_0_i16);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__record_clobbering_4_0,
		ll_backend__var_locn__actually_place_var_7_0_i17);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(ll_backend__var_locn__actually_place_var_7_0_i14);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__actually_place_var_7_0_i18);
	}
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__record_copy_4_0,
		ll_backend__var_locn__actually_place_var_7_0_i21);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__var_locn__record_clobbering_4_0,
		ll_backend__var_locn__actually_place_var_7_0_i21);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(ll_backend__var_locn__add_additional_lval_for_var_4_0,
		ll_backend__var_locn__actually_place_var_7_0_i23);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__var_locn__actually_place_var_7_0_i25);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_sv(6), 0);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__var_locn__actually_place_var_7_0_i27);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__actually_place_var_7_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_sv(5);
	MR_tfield(2, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__get_var_name_3_0,
		ll_backend__var_locn__actually_place_var_7_0_i29);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__actually_place_var_7_0_i31);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Placing ", 8);
	MR_np_call_localret_ent(string__append_3_2,
		ll_backend__var_locn__actually_place_var_7_0_i35);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__var_locn__actually_place_var_7_0_i33);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__int_to_string_2_0,
		ll_backend__var_locn__actually_place_var_7_0_i34);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" (depth ", 8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("Placing ", 8);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ll_backend__var_locn__actually_place_var_7_0_i35);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_vartypes_2_0,
		ll_backend__var_locn__actually_place_var_7_0_i36);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__actually_place_var_7_0_i37);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ll_backend__var_locn__actually_place_var_7_0_i40);
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__actually_place_var_7_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_sv(5);
	MR_tfield(2, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__var_locn__actually_place_var_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_sv(5);
	MR_tfield(2, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(ll_backend__var_locn_module40)
	MR_init_entry1(ll_backend__var_locn__free_up_lval_7_0);
	MR_init_label4(ll_backend__var_locn__free_up_lval_7_0,3,5,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__free_up_lval_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_ctfield(0, MR_tempr1, 7);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__var_locn__free_up_lval_7_0_i3);
MR_def_label(ll_backend__var_locn__free_up_lval_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_7_0_i2);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__free_up_lval_7_0_i5);
MR_def_label(ll_backend__var_locn__free_up_lval_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r5 = MR_ctfield(0, MR_sv(5), 6);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ll_backend__var_locn__free_up_lval_7_0_i7);
MR_def_label(ll_backend__var_locn__free_up_lval_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_7_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ll_backend__var_locn__free_up_lval_with_copy_7_0);
MR_def_label(ll_backend__var_locn__free_up_lval_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__delete_list_3_0);
MR_decl_entry(list__delete_all_3_1);

MR_BEGIN_MODULE(ll_backend__var_locn_module41)
	MR_init_entry1(ll_backend__var_locn__free_up_lval_with_copy_7_0);
	MR_init_label8(ll_backend__var_locn__free_up_lval_with_copy_7_0,3,5,6,9,11,12,7,15)
	MR_init_label8(ll_backend__var_locn__free_up_lval_with_copy_7_0,16,19,22,28,25,32,34,2)
	MR_init_label6(ll_backend__var_locn__free_up_lval_with_copy_7_0,36,37,40,39,42,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__free_up_lval_with_copy_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_ctfield(0, MR_tempr1, 7);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i3);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i2);
	}
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__delete_list_3_0,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i5);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i6);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_sv(6), 6);
	MR_np_call_localret_ent(ll_backend__var_locn__find_one_occupying_var_5_0,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i9);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__delete_all_3_1,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i11);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__ensure_copies_are_present_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_locn_info);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i12);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i15);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i2);
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(6);
	}
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__select_preferred_reg_or_stack_4_0,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i16);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i19);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i22);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i2);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i28);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i34);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i2);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_ctfield(1, MR_tempr2, 1);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__reg_is_not_locked_for_var_3_0,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i32);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(7);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__var_locn__actually_place_var_7_0);
	}
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__var_locn__get_spare_reg_2_0,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i36);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__var_locn__record_copy_4_0,
		ll_backend__var_locn__free_up_lval_with_copy_7_0_i37);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i40);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i39);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i38);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i42);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(ll_backend__var_locn__free_up_lval_with_copy_7_0_i38);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__var_locn__free_up_lval_with_copy_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("Freeing up the source lval", 26);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module42)
	MR_init_entry1(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0);
	MR_init_label8(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,12,14,49,19,50,21,51,23)
	MR_init_label8(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,52,25,53,27,54,29,30,55)
	MR_init_label3(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,32,33,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i14));
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("var_locn_materialize_vars_in_lval_avoid: temp", 45);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i49) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i50) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i52) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i54) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i55) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i34));
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i19);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i21);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i23);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i25);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i27);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i29);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r5 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i30);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0_i32);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("var_locn_materialize_vars_in_lval_avoid: lvar", 45);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module43)
	MR_init_entry1(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0);
	MR_init_label8(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,90,5,91,7,8,12,9,10)
	MR_init_label8(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,18,16,22,20,24,29,15,92)
	MR_init_label8(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,34,35,42,39,40,41,37,38)
	MR_init_label1(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i90) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i91) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i92) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i35));
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i5);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_ctfield(0, MR_tempr1, 6);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i7);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i8);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i10);
	}
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i12);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(8);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__select_reg_lval_2_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i18);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i16);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i29);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__var_locn__select_stack_lval_2_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i22);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i20);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i29);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i24);
	}
	MR_r3 = MR_sv(5);
	MR_r1 = MR_ctfield(1, MR_sv(6), 0);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i29);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ll_backend__var_locn__materialize_var_9_0);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r2, 0);
	MR_r2 = MR_ctfield(2, MR_r2, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i34);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i36);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_ctfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i37);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r2, 0),2)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i39);
	}
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i42);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_localcall_lab(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i40);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r5 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_localcall_lab(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i41);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0_i38);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module44)
	MR_init_entry1(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0);
	MR_init_label4(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0,9,17,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0_i9);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0_i17);
	}
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 2);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0_i6);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r5 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0_i7);
MR_def_label(ll_backend__var_locn__var_locn_materialize_vars_in_mem_ref_avoid_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__count_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module45)
	MR_init_entry1(ll_backend__var_locn__materialize_var_9_0);
	MR_init_label8(ll_backend__var_locn__materialize_var_9_0,2,4,3,6,10,11,12,7)
	MR_init_label1(ll_backend__var_locn__materialize_var_9_0,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__materialize_var_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_ctfield(0, MR_tempr1, 6);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__materialize_var_9_0_i2);
MR_def_label(ll_backend__var_locn__materialize_var_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__materialize_var_9_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("materialize_var: no expr", 24);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__materialize_var_9_0_i3);
MR_def_label(ll_backend__var_locn__materialize_var_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r5 = MR_sv(6);
	}
MR_def_label(ll_backend__var_locn__materialize_var_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_0,
		ll_backend__var_locn__materialize_var_9_0_i6);
MR_def_label(ll_backend__var_locn__materialize_var_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__var_locn__materialize_var_9_0_i13);
	}
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(set__count_2_0,
		ll_backend__var_locn__materialize_var_9_0_i10);
MR_def_label(ll_backend__var_locn__materialize_var_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__materialize_var_9_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__var_locn__select_preferred_reg_avoid_4_0,
		ll_backend__var_locn__materialize_var_9_0_i11);
MR_def_label(ll_backend__var_locn__materialize_var_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__var_locn__actually_place_var_7_0,
		ll_backend__var_locn__materialize_var_9_0_i12);
MR_def_label(ll_backend__var_locn__materialize_var_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ll_backend__var_locn__materialize_var_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
MR_def_label(ll_backend__var_locn__materialize_var_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module46)
	MR_init_entry1(ll_backend__var_locn__var_locn_materialize_vars_in_lval_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_materialize_vars_in_lval_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module47)
	MR_init_entry1(ll_backend__var_locn__add_use_ref_4_0);
	MR_init_label2(ll_backend__var_locn__add_use_ref_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__add_use_ref_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__add_use_ref_4_0_i2);
MR_def_label(ll_backend__var_locn__add_use_ref_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 2);
	MR_sv(5) = MR_ctfield(0, MR_r1, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__add_use_ref_4_0_i3);
MR_def_label(ll_backend__var_locn__add_use_ref_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__global_data__search_scalar_static_cell_offset_4_0);
MR_decl_entry(fn__set__map_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module48)
	MR_init_entry1(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0);
	MR_init_label8(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,2,9,10,18,20,21,22,23)
	MR_init_label8(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,24,25,12,27,28,29,30,31)
	MR_init_label8(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,3,33,34,35,36,37,38,39)
	MR_init_label2(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,40,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_assign_lval_to_var_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__check_var_is_unknown_2_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,8)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(3);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i3);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i3);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr5, 3);
	if (MR_RTAGS_TESTR(MR_tempr3,3,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i3);
	}
	MR_tempr4 = MR_ctfield(3, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_tempr3;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_var_state_map_2_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i9);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i10);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i12);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i12);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 0);
	if ((MR_sv(1) != MR_tempr1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i12);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i12);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,3)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i12);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i12);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__global_data__search_scalar_static_cell_offset_4_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i18);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__var_locn__add_field_offset_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__map_2_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i20);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i21);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i22);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_var_state_map_3_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i23);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_loc_var_map_2_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i24);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__var_locn__make_var_depend_on_lvals_roots_4_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i25);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_loc_var_map_3_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i31);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i27);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i28);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = (MR_Integer) 1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i29);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__add_use_ref_4_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i30);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_var_state_map_3_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i31);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_materialize_vars_in_lval_6_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i33);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_var_state_map_2_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i34);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i35);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i36);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i37);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_var_state_map_3_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i38);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_loc_var_map_2_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i39);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__var_locn__make_var_depend_on_lval_roots_4_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i40);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_loc_var_map_3_0,
		ll_backend__var_locn__var_locn_assign_lval_to_var_7_0_i41);
MR_def_label(ll_backend__var_locn__var_locn_assign_lval_to_var_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__exprn_aux__const_is_constant_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module49)
	MR_init_entry1(ll_backend__var_locn__expr_is_constant_4_0);
	MR_init_label8(ll_backend__var_locn__expr_is_constant_4_0,21,15,16,4,11,13,7,8)
	MR_init_label4(ll_backend__var_locn__expr_is_constant_4_0,5,6,35,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__expr_is_constant_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r3,3)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i4);
	}
	if (MR_PTAG_TEST(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i15);
	}
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i1);
	}
	MR_sv(1) = MR_ctfield(2, MR_r3, 0);
	MR_r3 = MR_ctfield(2, MR_r3, 1);
	MR_np_localcall_lab(ll_backend__var_locn__expr_is_constant_4_0,
		ll_backend__var_locn__expr_is_constant_4_0_i21);
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__expr_is_constant_4_0_i16);
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__IntroducedFrom__pred__expr_is_constant__1958__1_3_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r1, 3) = MR_sv(1);
	MR_tfield(0, MR_r1, 4) = MR_sv(2);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_ctfield(0, MR_r1, 5);
	MR_r2 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r3 = (MR_Word) MR_string_const("non-constant rval in variable state", 35);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__var_locn__expr_is_constant_4_0_i35);
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i5);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),1)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i7);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),2)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	}
	MR_np_localcall_lab(ll_backend__var_locn__expr_is_constant_4_0,
		ll_backend__var_locn__expr_is_constant_4_0_i11);
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(ll_backend__var_locn__expr_is_constant_4_0,
		ll_backend__var_locn__expr_is_constant_4_0_i13);
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r3, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_localcall_lab(ll_backend__var_locn__expr_is_constant_4_0,
		ll_backend__var_locn__expr_is_constant_4_0_i8);
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__const_is_constant_3_0,
		ll_backend__var_locn__expr_is_constant_4_0_i6);
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__expr_is_constant_4_0_i1);
	}
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__var_locn__expr_is_constant_4_0,1)
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


MR_BEGIN_MODULE(ll_backend__var_locn_module50)
	MR_init_entry1(ll_backend__var_locn__var_locn_assign_const_to_var_4_0);
	MR_init_label8(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,3,5,6,2,8,10,12,13)
	MR_init_label2(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,14,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_assign_const_to_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_ctfield(0, MR_sv(4), 6);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_assign_const_to_var_4_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_const_to_var_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(4), 0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		ll_backend__var_locn__var_locn_assign_const_to_var_4_0_i5);
MR_def_label(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("assign_to_var: existing definition of variable ", 47);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__var_locn__var_locn_assign_const_to_var_4_0_i6);
MR_def_label(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__var_locn_assign_const_to_var_4_0_i8);
MR_def_label(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_ctfield(0, MR_tempr1, 6);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	}
MR_def_label(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__expr_is_constant_4_0,
		ll_backend__var_locn__var_locn_assign_const_to_var_4_0_i10);
MR_def_label(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_const_to_var_4_0_i9);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__var_locn__var_locn_assign_const_to_var_4_0_i12);
MR_def_label(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__var_locn__var_locn_assign_const_to_var_4_0_i13);
MR_def_label(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__var_locn_assign_const_to_var_4_0_i14);
MR_def_label(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ll_backend__var_locn__var_locn_set_var_state_map_3_0);
MR_def_label(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("var_locn_assign_const_to_var: supposed constant isn\'t", 53);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module51)
	MR_init_entry1(ll_backend__var_locn__add_use_refs_4_0);
	MR_init_label5(ll_backend__var_locn__add_use_refs_4_0,13,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__add_use_refs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ll_backend__var_locn__add_use_refs_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__add_use_refs_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__add_use_refs_4_0_i4);
MR_def_label(ll_backend__var_locn__add_use_refs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_sv(7) = MR_ctfield(0, MR_r1, 2);
	MR_sv(8) = MR_ctfield(0, MR_r1, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__add_use_refs_4_0_i5);
MR_def_label(ll_backend__var_locn__add_use_refs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__add_use_refs_4_0_i6);
MR_def_label(ll_backend__var_locn__add_use_refs_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__var_locn__add_use_refs_4_0_i13);
MR_def_label(ll_backend__var_locn__add_use_refs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module52)
	MR_init_entry1(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0);
	MR_init_label8(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,3,5,6,2,8,9,10,11)
	MR_init_label3(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_assign_expr_to_var_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_ctfield(0, MR_sv(4), 6);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_assign_expr_to_var_5_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(4), 0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		ll_backend__var_locn__var_locn_assign_expr_to_var_5_0_i5);
MR_def_label(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("assign_to_var: existing definition of variable ", 47);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__var_locn__var_locn_assign_expr_to_var_5_0_i6);
MR_def_label(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__var_locn_assign_expr_to_var_5_0_i8);
MR_def_label(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_sv(4), 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
MR_def_label(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__var_locn__var_locn_assign_expr_to_var_5_0_i9);
MR_def_label(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__var_locn__var_locn_assign_expr_to_var_5_0_i10);
MR_def_label(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__var_locn_assign_expr_to_var_5_0_i11);
MR_def_label(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_sv(6), 0);
	MR_np_call_localret_ent(ll_backend__exprn_aux__vars_in_rval_2_0,
		ll_backend__var_locn__var_locn_assign_expr_to_var_5_0_i12);
MR_def_label(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(list__remove_dups_2_0,
		ll_backend__var_locn__var_locn_assign_expr_to_var_5_0_i13);
MR_def_label(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__add_use_refs_4_0,
		ll_backend__var_locn__var_locn_assign_expr_to_var_5_0_i14);
MR_def_label(ll_backend__var_locn__var_locn_assign_expr_to_var_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module53)
	MR_init_entry1(ll_backend__var_locn__select_preferred_reg_3_0);
	MR_init_label8(ll_backend__var_locn__select_preferred_reg_3_0,3,6,5,13,16,8,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__select_preferred_reg_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r4 = MR_ctfield(0, MR_sv(1), 4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__select_preferred_reg_3_0_i3);
MR_def_label(ll_backend__var_locn__select_preferred_reg_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_3_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_3_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_3_0_i5);
MR_def_label(ll_backend__var_locn__select_preferred_reg_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_3_0_i2);
	}
	MR_r1 = MR_sv(1);
MR_def_label(ll_backend__var_locn__select_preferred_reg_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__select_preferred_reg_3_0_i13);
MR_def_label(ll_backend__var_locn__select_preferred_reg_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_3_0_i8);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__var_locn__select_preferred_reg_3_0_i16);
MR_def_label(ll_backend__var_locn__select_preferred_reg_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_3_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__var_locn__select_preferred_reg_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ll_backend__var_locn__select_preferred_reg_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_r1, 5);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__var_locn__get_spare_reg_2_4_0);
MR_def_label(ll_backend__var_locn__select_preferred_reg_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_r1, 5);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__var_locn__get_spare_reg_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module54)
	MR_init_entry1(ll_backend__var_locn__var_locn_produce_var_6_0);
	MR_init_label8(ll_backend__var_locn__var_locn_produce_var_6_0,2,3,8,6,12,10,14,19)
	MR_init_label8(ll_backend__var_locn__var_locn_produce_var_6_0,5,24,25,28,26,32,30,34)
	MR_init_label4(ll_backend__var_locn__var_locn_produce_var_6_0,39,21,40,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_produce_var_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_produce_var_6_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__var_locn_produce_var_6_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__select_reg_lval_2_0,
		ll_backend__var_locn__var_locn_produce_var_6_0_i8);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_r3 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i19);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__var_locn__select_stack_lval_2_0,
		ll_backend__var_locn__var_locn_produce_var_6_0_i12);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_r3 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i19);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i14);
	}
	MR_r1 = MR_ctfield(1, MR_sv(4), 0);
	MR_r3 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i19);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(5), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i21);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_produce_var_6_0_i24);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__var_locn_produce_var_6_0_i25);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__select_reg_lval_2_0,
		ll_backend__var_locn__var_locn_produce_var_6_0_i28);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i26);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_r3 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i39);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__var_locn__select_stack_lval_2_0,
		ll_backend__var_locn__var_locn_produce_var_6_0_i32);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i30);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_r3 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i39);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i34);
	}
	MR_r1 = MR_ctfield(1, MR_sv(3), 0);
	MR_r3 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i39);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_6_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__select_preferred_reg_3_0,
		ll_backend__var_locn__var_locn_produce_var_6_0_i40);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__var_locn__actually_place_var_7_0,
		ll_backend__var_locn__var_locn_produce_var_6_0_i41);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module55)
	MR_init_entry1(ll_backend__var_locn__assign_cell_args_8_0);
	MR_init_label8(ll_backend__var_locn__assign_cell_args_8_0,5,8,11,10,9,12,15,14)
	MR_init_label8(ll_backend__var_locn__assign_cell_args_8_0,17,18,19,6,21,4,26,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__assign_cell_args_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__assign_cell_args_8_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_r7 = MR_ctfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__assign_cell_args_8_0_i5);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_np_localcall_lab(ll_backend__var_locn__assign_cell_args_8_0,
		ll_backend__var_locn__assign_cell_args_8_0_i26);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r9 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_sv(7) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 8;
	MR_tempr6 = MR_r3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr6;
	MR_tempr7 = MR_r4;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr7;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tempr4 = MR_ctfield(1, MR_r7, 0);
	MR_r9 = MR_tempr4;
	MR_sv(6) = MR_ctfield(1, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__assign_cell_args_8_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr6;
	MR_sv(3) = MR_tempr7;
	MR_sv(4) = MR_tempr5;
	MR_tempr8 = MR_r6;
	MR_sv(5) = MR_tempr8;
	MR_sv(8) = MR_ctfield(1, MR_tempr4, 0);
	MR_r1 = MR_tempr8;
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__find_var_availability_4_0,
		ll_backend__var_locn__assign_cell_args_8_0_i8);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__assign_cell_args_8_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__var_locn__materialize_var_9_0,
		ll_backend__var_locn__assign_cell_args_8_0_i11);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(8);
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_GOTO_LAB(ll_backend__var_locn__assign_cell_args_8_0_i9);
	}
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(8);
	MR_sv(10) = MR_sv(5);
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_ctfield(0, MR_sv(10), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r5;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__assign_cell_args_8_0_i12);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ll_backend__var_locn__assign_cell_args_8_0_i15);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__assign_cell_args_8_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	MR_r6 = MR_sv(10);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ll_backend__var_locn__assign_cell_args_8_0,
		ll_backend__var_locn__assign_cell_args_8_0_i26);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__var_locn__add_additional_lval_for_var_4_0,
		ll_backend__var_locn__assign_cell_args_8_0_i17);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(8), 0);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		ll_backend__var_locn__assign_cell_args_8_0_i18);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("assigning from ", 15);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__var_locn__assign_cell_args_8_0_i19);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	MR_r6 = MR_sv(8);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ll_backend__var_locn__assign_cell_args_8_0,
		ll_backend__var_locn__assign_cell_args_8_0_i26);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r9,3,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__assign_cell_args_8_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r9;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("assigning field from const", 26);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_r5 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ll_backend__var_locn__assign_cell_args_8_0,
		ll_backend__var_locn__assign_cell_args_8_0_i26);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("assign_cell_args: unknown rval", 30);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__assign_cell_args_8_0_i4);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(ll_backend__var_locn__assign_cell_args_8_0,
		ll_backend__var_locn__assign_cell_args_8_0_i26);
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ll_backend__var_locn__assign_cell_args_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module56)
	MR_init_entry1(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0);
	MR_init_label8(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,3,6,5,13,8,9,2,18)
	MR_init_label3(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,20,23,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r4 = MR_ctfield(0, MR_sv(1), 4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i3);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i5);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i2);
	}
	MR_r1 = MR_sv(1);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i13);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i8);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_r1, 5);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__var_locn__get_spare_reg_2_4_0);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r4 = MR_ctfield(0, MR_sv(1), 2);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i18);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i17);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_to_lval_1_0,
		ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i20);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i23);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_r1, 5);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__var_locn__get_spare_reg_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module57)
	MR_init_entry1(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0);
	MR_init_label8(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,2,3,4,5,11,12,13,14)
	MR_init_label5(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,18,16,20,15,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__check_var_is_unknown_2_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(12), 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i4);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i5);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),2)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i12);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_produce_var_6_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i11);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(13), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(13), 0) = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("Allocating region for ", 22);
	MR_sv(12) = MR_r3;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i13);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(13), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(13), 0) = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_sv(6) = MR_r1;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("Allocating heap for ", 20);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i13);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_magic_var_location_4_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i14);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i16);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tempr4 = MR_sv(10);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tempr5 = MR_sv(13);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr5;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_tempr4;
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tempr2;
	MR_r5 = (MR_Integer) 0;
	MR_r3 = MR_tempr5;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__assign_cell_args_8_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i22);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tempr4 = MR_sv(10);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tempr5 = MR_sv(13);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr5;
	MR_tempr6 = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr6;
	MR_tfield(3, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_tempr4;
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tempr2;
	MR_r5 = ((MR_Integer) 0 - (MR_Integer) MR_ctfield(1, MR_tempr6, 0));
	MR_r3 = MR_tempr5;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__assign_cell_args_8_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i22);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tempr4 = MR_sv(10);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tempr5 = MR_sv(13);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr5;
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_tfield(3, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_tempr4;
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tempr2;
	MR_r5 = (MR_Integer) 0;
	MR_r3 = MR_tempr5;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__assign_cell_args_8_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i22);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("accurate GC combined with term size profiling", 45);
	}
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i15);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__var_locn__assign_cell_args_8_0,
		ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0_i22);
MR_def_label(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__global_data__rval_type_as_arg_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module58)
	MR_init_entry1(ll_backend__var_locn__cell_is_constant_4_0);
	MR_init_label5(ll_backend__var_locn__cell_is_constant_4_0,27,5,7,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__cell_is_constant_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__cell_is_constant_4_0_i27);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__var_locn__cell_is_constant_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__cell_is_constant_4_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__expr_is_constant_4_0,
		ll_backend__var_locn__cell_is_constant_4_0_i5);
MR_def_label(ll_backend__var_locn__cell_is_constant_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__cell_is_constant_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_sv(2), 3);
	}
	MR_np_call_localret_ent(ll_backend__global_data__rval_type_as_arg_3_0,
		ll_backend__var_locn__cell_is_constant_4_0_i7);
MR_def_label(ll_backend__var_locn__cell_is_constant_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__var_locn__cell_is_constant_4_0,
		ll_backend__var_locn__cell_is_constant_4_0_i8);
MR_def_label(ll_backend__var_locn__cell_is_constant_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__cell_is_constant_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__var_locn__cell_is_constant_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__global_data__add_scalar_static_cell_4_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module59)
	MR_init_entry1(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0);
	MR_init_label8(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0,3,5,2,9,11,12,6,7)
	MR_init_label1(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_assign_cell_to_var_15_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r4 = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_r3 = MR_r5;
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r12;
	MR_r1 = MR_ctfield(0, MR_tempr1, 6);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_tempr1;
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0_i2);
	}
MR_def_label(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_ctfield(1, MR_r7, 0);
	MR_r13 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_r13 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r13 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r4 = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_r3 = MR_tempr5;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_tempr6 = MR_r12;
	MR_r1 = MR_ctfield(0, MR_tempr6, 6);
	MR_r2 = MR_ctfield(0, MR_tempr6, 3);
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_tempr6;
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0_i2);
	}
MR_def_label(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r13, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_r4 = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_r3 = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_tempr3 = MR_r12;
	MR_r1 = MR_ctfield(0, MR_tempr3, 6);
	MR_r2 = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_tempr3;
	}
MR_def_label(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0_i7);
	}
	MR_sv(8) = MR_r3;
	MR_np_call_localret_ent(ll_backend__var_locn__cell_is_constant_4_0,
		ll_backend__var_locn__var_locn_assign_cell_to_var_15_0_i9);
MR_def_label(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__global_data__add_scalar_static_cell_4_0,
		ll_backend__var_locn__var_locn_assign_cell_to_var_15_0_i11);
MR_def_label(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_assign_const_to_var_4_0,
		ll_backend__var_locn__var_locn_assign_cell_to_var_15_0_i12);
MR_def_label(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
MR_def_label(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_0,
		ll_backend__var_locn__var_locn_assign_cell_to_var_15_0_i13);
MR_def_label(ll_backend__var_locn__var_locn_assign_cell_to_var_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module60)
	MR_init_entry1(ll_backend__var_locn__var_locn_lock_regs_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_lock_regs_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_r1;
	MR_tfield(0, MR_tempr1, 10) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module61)
	MR_init_entry1(ll_backend__var_locn__var_locn_unlock_regs_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_unlock_regs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module62)
	MR_init_entry1(ll_backend__var_locn__actually_place_vars_5_0);
	MR_init_label3(ll_backend__var_locn__actually_place_vars_5_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__actually_place_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__actually_place_vars_5_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_r5 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__actually_place_var_7_0,
		ll_backend__var_locn__actually_place_vars_5_0_i4);
MR_def_label(ll_backend__var_locn__actually_place_vars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__var_locn__actually_place_vars_5_0,
		ll_backend__var_locn__actually_place_vars_5_0_i5);
MR_def_label(ll_backend__var_locn__actually_place_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__var_locn__actually_place_vars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__values_2_0);
MR_decl_entry(ll_backend__code_util__max_mentioned_reg_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module63)
	MR_init_entry1(ll_backend__var_locn__var_locn_place_vars_5_0);
	MR_init_label3(ll_backend__var_locn__var_locn_place_vars_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_place_vars_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(assoc_list__values_2_0,
		ll_backend__var_locn__var_locn_place_vars_5_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_place_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_util__max_mentioned_reg_2_0,
		ll_backend__var_locn__var_locn_place_vars_5_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_place_vars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_r1;
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 10) = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__actually_place_vars_5_0,
		ll_backend__var_locn__var_locn_place_vars_5_0_i4);
MR_def_label(ll_backend__var_locn__var_locn_place_vars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module64)
	MR_init_entry1(ll_backend__var_locn__var_locn_produce_var_in_reg_6_0);
	MR_init_label6(ll_backend__var_locn__var_locn_produce_var_in_reg_6_0,2,3,6,5,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_produce_var_in_reg_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_ctfield(0, MR_sv(3), 6);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_produce_var_in_reg_6_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__var_locn_produce_var_in_reg_6_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__var_locn__select_reg_lval_2_0,
		ll_backend__var_locn__var_locn_produce_var_in_reg_6_0_i6);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_in_reg_6_0_i5);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__select_preferred_reg_3_0,
		ll_backend__var_locn__var_locn_produce_var_in_reg_6_0_i8);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__var_locn__actually_place_var_7_0,
		ll_backend__var_locn__var_locn_produce_var_in_reg_6_0_i9);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module65)
	MR_init_entry1(ll_backend__var_locn__select_reg_or_stack_lval_2_0);
	MR_init_label4(ll_backend__var_locn__select_reg_or_stack_lval_2_0,6,15,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__select_reg_or_stack_lval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i1);
	}
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i6);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i3));
	}
MR_def_label(ll_backend__var_locn__select_reg_or_stack_lval_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__select_reg_or_stack_lval_2_0_i3);
	}
MR_def_label(ll_backend__var_locn__select_reg_or_stack_lval_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__var_locn__select_reg_or_stack_lval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localtailcall(ll_backend__var_locn__select_reg_or_stack_lval_2_0);
MR_def_label(ll_backend__var_locn__select_reg_or_stack_lval_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module66)
	MR_init_entry1(ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0);
	MR_init_label6(ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0,2,3,6,5,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_ctfield(0, MR_sv(3), 6);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__var_locn__select_reg_or_stack_lval_2_0,
		ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0_i6);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0_i5);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__select_preferred_reg_or_stack_check_3_0,
		ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0_i8);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__var_locn__actually_place_var_7_0,
		ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0_i9);
MR_def_label(ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module67)
	MR_init_entry1(ll_backend__var_locn__var_locn_acquire_reg_3_0);
	MR_init_label2(ll_backend__var_locn__var_locn_acquire_reg_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_acquire_reg_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_r1, 5);
	MR_np_call_localret_ent(ll_backend__var_locn__get_spare_reg_2_4_0,
		ll_backend__var_locn__var_locn_acquire_reg_3_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_sv(2), 8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__var_locn__var_locn_acquire_reg_3_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module68)
	MR_init_entry1(ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0);
	MR_init_label4(ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0,4,2,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0_i4);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("acquire_reg_require_given: lval in use", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0_i7);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r2 = MR_ctfield(0, MR_r2, 8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0_i8);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_require_given_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module69)
	MR_init_entry1(ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0);
	MR_init_label5(ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0,4,6,2,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0_i4);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_r1, 5);
	MR_np_call_localret_ent(ll_backend__var_locn__get_spare_reg_2_4_0,
		ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0_i6);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r2 = MR_ctfield(0, MR_sv(2), 8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0_i7);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_r2, 8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0_i8);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_prefer_given_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module70)
	MR_init_entry1(ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0);
	MR_init_label4(ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0,14,4,2,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_lval_in_use_2_0,
		ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0_i4);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0_i14);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_r2, 8);
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0_i7);
MR_def_label(ll_backend__var_locn__var_locn_acquire_reg_start_at_given_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module71)
	MR_init_entry1(ll_backend__var_locn__var_locn_release_reg_3_0);
	MR_init_label3(ll_backend__var_locn__var_locn_release_reg_3_0,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_release_reg_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__var_locn__var_locn_release_reg_3_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_release_reg_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_release_reg_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__var_locn__var_locn_release_reg_3_0_i5);
MR_def_label(ll_backend__var_locn__var_locn_release_reg_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__var_locn__var_locn_release_reg_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("release_reg: unacquired reg", 27);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module72)
	MR_init_entry1(ll_backend__var_locn__var_locn_clear_r1_4_0);
	MR_init_label8(ll_backend__var_locn__var_locn_clear_r1_4_0,3,5,7,9,2,10,11,12)
	MR_init_label3(ll_backend__var_locn__var_locn_clear_r1_4_0,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_clear_r1_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,12,0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_ctfield(0, MR_sv(2), 7);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__var_locn__var_locn_clear_r1_4_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_clear_r1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_clear_r1_4_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__var_locn_clear_r1_4_0_i5);
MR_def_label(ll_backend__var_locn__var_locn_clear_r1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,13,0);
	MR_r5 = MR_ctfield(0, MR_sv(2), 6);
	MR_np_call_localret_ent(list__foldl_4_2,
		ll_backend__var_locn__var_locn_clear_r1_4_0_i7);
MR_def_label(ll_backend__var_locn__var_locn_clear_r1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__var_locn_clear_r1_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__free_up_lval_with_copy_7_0,
		ll_backend__var_locn__var_locn_clear_r1_4_0_i9);
MR_def_label(ll_backend__var_locn__var_locn_clear_r1_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(ll_backend__var_locn__var_locn_clear_r1_4_0_i10);
MR_def_label(ll_backend__var_locn__var_locn_clear_r1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__var_locn__var_locn_clear_r1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_loc_var_map_2_0,
		ll_backend__var_locn__var_locn_clear_r1_4_0_i11);
MR_def_label(ll_backend__var_locn__var_locn_clear_r1_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_get_var_state_map_2_0,
		ll_backend__var_locn__var_locn_clear_r1_4_0_i12);
MR_def_label(ll_backend__var_locn__var_locn_clear_r1_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__clobber_regs_in_maps_6_0,
		ll_backend__var_locn__var_locn_clear_r1_4_0_i13);
MR_def_label(ll_backend__var_locn__var_locn_clear_r1_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_loc_var_map_3_0,
		ll_backend__var_locn__var_locn_clear_r1_4_0_i14);
MR_def_label(ll_backend__var_locn__var_locn_clear_r1_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__var_locn_set_var_state_map_3_0,
		ll_backend__var_locn__var_locn_clear_r1_4_0_i15);
MR_def_label(ll_backend__var_locn__var_locn_clear_r1_4_0,15)
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

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(map__from_assoc_list_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module73)
	MR_init_entry1(ll_backend__var_locn__var_locn_get_var_locations_2_0);
	MR_init_label2(ll_backend__var_locn__var_locn_get_var_locations_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_get_var_locations_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,2,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r3 = MR_ctfield(0, MR_tempr1, 6);
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__var_locn__var_locn_get_var_locations_2_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_get_var_locations_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_np_call_localret_ent(list__filter_map_3_0,
		ll_backend__var_locn__var_locn_get_var_locations_2_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_get_var_locations_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(map__from_assoc_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module74)
	MR_init_entry1(ll_backend__var_locn__var_locn_set_follow_vars_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_set_follow_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module75)
	MR_init_entry1(ll_backend__var_locn__var_locn_max_reg_in_use_2_0);
	MR_init_label4(ll_backend__var_locn__var_locn_max_reg_in_use_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__var_locn__var_locn_max_reg_in_use_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_ctfield(0, MR_sv(1), 7);
	MR_np_call_localret_ent(map__keys_2_0,
		ll_backend__var_locn__var_locn_max_reg_in_use_2_0_i2);
MR_def_label(ll_backend__var_locn__var_locn_max_reg_in_use_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_util__max_mentioned_reg_2_0,
		ll_backend__var_locn__var_locn_max_reg_in_use_2_0_i3);
MR_def_label(ll_backend__var_locn__var_locn_max_reg_in_use_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__var_locn_max_reg_in_use_2_0_i4);
MR_def_label(ll_backend__var_locn__var_locn_max_reg_in_use_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__code_util__max_mentioned_reg_2_0,
		ll_backend__var_locn__var_locn_max_reg_in_use_2_0_i5);
MR_def_label(ll_backend__var_locn__var_locn_max_reg_in_use_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(int__max_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module76)
	MR_init_entry1(ll_backend__var_locn__convert_live_to_lval_set_2_0);
	MR_init_label1(ll_backend__var_locn__convert_live_to_lval_set_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__convert_live_to_lval_set_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 4);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__convert_live_to_lval_set_2_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__convert_live_to_lval_set_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module77)
	MR_init_entry1(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0);
	MR_init_label8(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0,32,6,5,8,10,11,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0_i2);
	}
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0_i6);
MR_def_label(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0_i32);
MR_def_label(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0_i8);
MR_def_label(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0_i10);
MR_def_label(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0,
		ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0_i11);
MR_def_label(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0_i32);
MR_def_label(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__non_empty_1_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module78)
	MR_init_entry1(ll_backend__var_locn__nonempty_state_1_0);
	MR_init_label2(ll_backend__var_locn__nonempty_state_1_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__nonempty_state_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__non_empty_1_0,
		ll_backend__var_locn__nonempty_state_1_0_i4);
MR_def_label(ll_backend__var_locn__nonempty_state_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__nonempty_state_1_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__nonempty_state_1_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_sv(2) != (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__var_locn__nonempty_state_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__filter_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module79)
	MR_init_entry1(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0);
	MR_init_label8(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,2,3,9,8,6,15,14,20)
	MR_init_label4(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,21,30,23,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i2);
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r1, 2);
	MR_sv(6) = MR_ctfield(0, MR_r1, 3);
	MR_sv(7) = MR_ctfield(0, MR_r1, 4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__filter_2_0,
		ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i3);
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__non_empty_1_0,
		ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i9);
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i8);
	}
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i23);
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i30);
	}
	MR_r3 = MR_sv(1);
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i6);
	}
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r3;
	MR_r4 = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i23);
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i15);
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i14);
	}
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i23);
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i20);
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_0,
		ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i21);
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i1);
	}
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0_i23);
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module80)
	MR_init_entry1(ll_backend__var_locn__clobber_lval_in_var_state_map_6_0);
	MR_init_label2(ll_backend__var_locn__clobber_lval_in_var_state_map_6_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__clobber_lval_in_var_state_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_0,
		ll_backend__var_locn__clobber_lval_in_var_state_map_6_0_i3);
MR_def_label(ll_backend__var_locn__clobber_lval_in_var_state_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__clobber_lval_in_var_state_map_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__var_locn__clobber_lval_in_var_state_map_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("clobber_lval_in_var_state_map: empty state", 42);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module81)
	MR_init_entry1(fn__ll_backend__var_locn__add_field_offset_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__var_locn__add_field_offset_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__difference_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module82)
	MR_init_entry1(ll_backend__var_locn__record_change_in_root_dependencies_5_0);
	MR_init_label8(ll_backend__var_locn__record_change_in_root_dependencies_5_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__var_locn__record_change_in_root_dependencies_5_0,10,11,12,13,14,15,16,17)
	MR_init_label1(ll_backend__var_locn__record_change_in_root_dependencies_5_0,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__record_change_in_root_dependencies_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i2);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_lvals_2_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i3);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i4);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_np_call_localret_ent(list__filter_3_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i5);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i6);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i7);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_lvals_2_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i8);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i9);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_np_call_localret_ent(list__filter_3_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i10);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i11);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i12);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__list_to_set_2_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i13);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__difference_3_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i14);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__difference_3_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i15);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i16);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i17);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__make_var_depend_on_root_lval_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__var_locn__record_change_in_root_dependencies_5_0_i18);
MR_def_label(ll_backend__var_locn__record_change_in_root_dependencies_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module83)
	MR_init_entry1(ll_backend__var_locn__ensure_copies_are_present_5_0);
	MR_init_label5(ll_backend__var_locn__ensure_copies_are_present_5_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__ensure_copies_are_present_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(10) = MR_tempr1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__ensure_copies_are_present_5_0_i2);
MR_def_label(ll_backend__var_locn__ensure_copies_are_present_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_sv(7) = MR_ctfield(0, MR_r1, 2);
	MR_sv(8) = MR_ctfield(0, MR_r1, 3);
	MR_sv(9) = MR_ctfield(0, MR_r1, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__var_locn__ensure_copies_are_present_5_0_i3);
MR_def_label(ll_backend__var_locn__ensure_copies_are_present_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__ensure_copies_are_present_lval_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__var_locn__ensure_copies_are_present_5_0_i4);
MR_def_label(ll_backend__var_locn__ensure_copies_are_present_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__ensure_copies_are_present_5_0_i5);
MR_def_label(ll_backend__var_locn__ensure_copies_are_present_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__record_change_in_root_dependencies_5_0,
		ll_backend__var_locn__ensure_copies_are_present_5_0_i6);
MR_def_label(ll_backend__var_locn__ensure_copies_are_present_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__exprn_aux__substitute_lval_in_lval_4_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module84)
	MR_init_entry1(fn__ll_backend__var_locn__substitute_lval_in_lval_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__var_locn__substitute_lval_in_lval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ll_backend__exprn_aux__substitute_lval_in_lval_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module85)
	MR_init_entry1(ll_backend__var_locn__ensure_copies_are_present_lval_5_0);
	MR_init_label4(ll_backend__var_locn__ensure_copies_are_present_lval_5_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__ensure_copies_are_present_lval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__var_locn__ensure_copies_are_present_lval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__ensure_copies_are_present_lval_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__exprn_aux__substitute_lval_in_lval_4_0,
		ll_backend__var_locn__ensure_copies_are_present_lval_5_0_i4);
MR_def_label(ll_backend__var_locn__ensure_copies_are_present_lval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__var_locn__ensure_copies_are_present_lval_5_0_i5);
MR_def_label(ll_backend__var_locn__ensure_copies_are_present_lval_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__var_locn__ensure_copies_are_present_lval_5_0_i12);
MR_def_label(ll_backend__var_locn__ensure_copies_are_present_lval_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__union_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module86)
	MR_init_entry1(ll_backend__var_locn__record_copy_for_var_7_0);
	MR_init_label8(ll_backend__var_locn__record_copy_for_var_7_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__record_copy_for_var_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__record_copy_for_var_7_0_i2);
MR_def_label(ll_backend__var_locn__record_copy_for_var_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__var_locn__substitute_lval_in_lval_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(1,12,1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r1, 2);
	MR_sv(6) = MR_ctfield(0, MR_r1, 3);
	MR_sv(7) = MR_ctfield(0, MR_r1, 4);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,12,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__set__map_2_0,
		ll_backend__var_locn__record_copy_for_var_7_0_i3);
MR_def_label(ll_backend__var_locn__record_copy_for_var_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__union_3_0,
		ll_backend__var_locn__record_copy_for_var_7_0_i4);
MR_def_label(ll_backend__var_locn__record_copy_for_var_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__filter_2_0,
		ll_backend__var_locn__record_copy_for_var_7_0_i5);
MR_def_label(ll_backend__var_locn__record_copy_for_var_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__var_locn__substitute_lval_in_lval_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__map_2_0,
		ll_backend__var_locn__record_copy_for_var_7_0_i6);
MR_def_label(ll_backend__var_locn__record_copy_for_var_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,7);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__nonempty_state_1_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r3 = (MR_Word) MR_string_const("record_copy_for_var: empty state", 32);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__var_locn__record_copy_for_var_7_0_i7);
MR_def_label(ll_backend__var_locn__record_copy_for_var_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__var_locn__record_copy_for_var_7_0_i8);
MR_def_label(ll_backend__var_locn__record_copy_for_var_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__var_locn__record_change_in_root_dependencies_5_0,
		ll_backend__var_locn__record_copy_for_var_7_0_i9);
MR_def_label(ll_backend__var_locn__record_copy_for_var_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module87)
	MR_init_entry1(ll_backend__var_locn__make_var_depend_on_root_lval_4_0);
	MR_init_label5(ll_backend__var_locn__make_var_depend_on_root_lval_4_0,2,4,6,3,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__make_var_depend_on_root_lval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__is_root_lval_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r3 = (MR_Word) MR_string_const("make_var_depend_on_root_lval: non-root lval", 43);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__var_locn__make_var_depend_on_root_lval_4_0_i2);
MR_def_label(ll_backend__var_locn__make_var_depend_on_root_lval_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__var_locn__make_var_depend_on_root_lval_4_0_i4);
MR_def_label(ll_backend__var_locn__make_var_depend_on_root_lval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__make_var_depend_on_root_lval_4_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__var_locn__make_var_depend_on_root_lval_4_0_i6);
MR_def_label(ll_backend__var_locn__make_var_depend_on_root_lval_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__det_update_4_0);
MR_def_label(ll_backend__var_locn__make_var_depend_on_root_lval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		ll_backend__var_locn__make_var_depend_on_root_lval_4_0_i8);
MR_def_label(ll_backend__var_locn__make_var_depend_on_root_lval_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module88)
	MR_init_entry1(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0);
	MR_init_label7(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0,2,4,6,9,11,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__var_locn__is_root_lval_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r3 = (MR_Word) MR_string_const("make_var_depend_on_root_lval: non-root lval", 43);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0_i2);
MR_def_label(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0_i4);
MR_def_label(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0_i6);
MR_def_label(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__empty_1_0,
		ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0_i9);
MR_def_label(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__det_remove_4_0,
		ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0_i11);
MR_def_label(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_update_4_0);
MR_def_label(ll_backend__var_locn__make_var_not_depend_on_root_lval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("make_var_not_depend_on_root_lval: no record", 43);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module89)
	MR_init_entry1(ll_backend__var_locn__is_root_lval_1_0);
	MR_init_label3(ll_backend__var_locn__is_root_lval_1_0,4,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__is_root_lval_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__var_locn__is_root_lval_1_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i12) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__is_root_lval_1_0_i1));
MR_def_label(ll_backend__var_locn__is_root_lval_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__is_root_lval_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__is_root_lval_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__var_locn__is_root_lval_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module90)
	MR_init_entry1(ll_backend__var_locn__rval_depends_on_search_lval_2_0);
	MR_init_label8(ll_backend__var_locn__rval_depends_on_search_lval_2_0,4,7,9,12,20,13,30,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__rval_depends_on_search_lval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i12));
MR_def_label(ll_backend__var_locn__rval_depends_on_search_lval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__var_locn__lval_depends_on_search_lval_2_0);
MR_def_label(ll_backend__var_locn__rval_depends_on_search_lval_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("rval_depends_on_search_lval: var", 32);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__rval_depends_on_search_lval_2_0_i30);
MR_def_label(ll_backend__var_locn__rval_depends_on_search_lval_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i12));
MR_def_label(ll_backend__var_locn__rval_depends_on_search_lval_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i13);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i1);
	}
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__var_locn__rval_depends_on_search_lval_2_0,
		ll_backend__var_locn__rval_depends_on_search_lval_2_0_i20);
MR_def_label(ll_backend__var_locn__rval_depends_on_search_lval_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i30);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i12));
MR_def_label(ll_backend__var_locn__rval_depends_on_search_lval_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__rval_depends_on_search_lval_2_0_i12));
MR_def_label(ll_backend__var_locn__rval_depends_on_search_lval_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__var_locn__rval_depends_on_search_lval_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module91)
	MR_init_entry1(ll_backend__var_locn__lval_depends_on_search_lval_2_0);
	MR_init_label8(ll_backend__var_locn__lval_depends_on_search_lval_2_0,5,8,77,15,78,4,81,38)
	MR_init_label1(ll_backend__var_locn__lval_depends_on_search_lval_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__lval_depends_on_search_lval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i77) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i78));
MR_def_label(ll_backend__var_locn__lval_depends_on_search_lval_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = (MR_tempr2 == MR_tempr3);
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__lval_depends_on_search_lval_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_r1, 1);
	MR_tempr3 = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = (MR_tempr2 == MR_tempr3);
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__lval_depends_on_search_lval_2_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__var_locn__rval_depends_on_search_lval_2_0,
		ll_backend__var_locn__lval_depends_on_search_lval_2_0_i15);
MR_def_label(ll_backend__var_locn__lval_depends_on_search_lval_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i38);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__var_locn__rval_depends_on_search_lval_2_0);
MR_def_label(ll_backend__var_locn__lval_depends_on_search_lval_2_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("lval_depends_on_search_lval: lvar", 33);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__lval_depends_on_search_lval_2_0_i38);
MR_def_label(ll_backend__var_locn__lval_depends_on_search_lval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i81);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if ((MR_tempr2 != MR_tempr3)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_depends_on_search_lval_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_r1, 1);
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_tempr2 == MR_tempr3);
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__lval_depends_on_search_lval_2_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__var_locn__lval_depends_on_search_lval_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__var_locn__lval_depends_on_search_lval_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module92)
	MR_init_entry1(ll_backend__var_locn__lval_does_not_support_lval_2_0);
	MR_init_label8(ll_backend__var_locn__lval_does_not_support_lval_2_0,7,9,73,15,17,40,74,6)
	MR_init_label2(ll_backend__var_locn__lval_does_not_support_lval_2_0,72,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__lval_does_not_support_lval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_does_not_support_lval_2_0_i6);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i73) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__var_locn__lval_does_not_support_lval_2_0_i74));
MR_def_label(ll_backend__var_locn__lval_does_not_support_lval_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_tempr2 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_tempr1 != MR_tempr2);
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__lval_does_not_support_lval_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_tempr2 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_tempr1 != MR_tempr2);
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__lval_does_not_support_lval_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__rval_depends_on_search_lval_2_0,
		ll_backend__var_locn__lval_does_not_support_lval_2_0_i15);
MR_def_label(ll_backend__var_locn__lval_does_not_support_lval_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_does_not_support_lval_2_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__var_locn__rval_depends_on_search_lval_2_0,
		ll_backend__var_locn__lval_does_not_support_lval_2_0_i17);
MR_def_label(ll_backend__var_locn__lval_does_not_support_lval_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_does_not_support_lval_2_0_i3);
	}
MR_def_label(ll_backend__var_locn__lval_does_not_support_lval_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__var_locn__lval_does_not_support_lval_2_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("var_locn.m", 10);
	MR_r2 = (MR_Word) MR_string_const("lval_depends_on_search_lval: lvar", 33);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__var_locn__lval_does_not_support_lval_2_0_i40);
MR_def_label(ll_backend__var_locn__lval_does_not_support_lval_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__var_locn__lval_does_not_support_lval_2_0_i72);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_tempr1 != MR_tempr2);
	MR_proceed();
	}
MR_def_label(ll_backend__var_locn__lval_does_not_support_lval_2_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__var_locn__lval_does_not_support_lval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module93)
	MR_init_entry1(__Unify___ll_backend__var_locn__dead_or_alive_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__var_locn__dead_or_alive_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module94)
	MR_init_entry1(__Compare___ll_backend__var_locn__dead_or_alive_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__var_locn__dead_or_alive_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module95)
	MR_init_entry1(__Unify___ll_backend__var_locn__dep_search_lval_0_0);
	MR_init_label3(__Unify___ll_backend__var_locn__dep_search_lval_0_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__var_locn__dep_search_lval_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__dep_search_lval_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__dep_search_lval_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__var_locn__dep_search_lval_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__var_locn__dep_search_lval_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__dep_search_lval_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
MR_def_label(__Unify___ll_backend__var_locn__dep_search_lval_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module96)
	MR_init_entry1(__Compare___ll_backend__var_locn__dep_search_lval_0_0);
	MR_init_label4(__Compare___ll_backend__var_locn__dep_search_lval_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__var_locn__dep_search_lval_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__dep_search_lval_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__dep_search_lval_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__dep_search_lval_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__var_locn__dep_search_lval_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__var_locn__dep_search_lval_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__var_locn__dep_search_lval_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__dep_search_lval_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__var_locn__dep_search_lval_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__lval_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module97)
	MR_init_entry1(__Unify___ll_backend__var_locn__loc_var_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__var_locn__loc_var_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
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

MR_BEGIN_MODULE(ll_backend__var_locn_module98)
	MR_init_entry1(__Compare___ll_backend__var_locn__loc_var_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__var_locn__loc_var_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__rval_0_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module99)
	MR_init_entry1(__Unify___ll_backend__var_locn__var_avail_0_0);
	MR_init_label3(__Unify___ll_backend__var_locn__var_avail_0_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__var_locn__var_avail_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_avail_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_avail_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__var_locn__var_avail_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__var_locn__var_avail_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_avail_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__var_locn__var_avail_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__rval_0_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module100)
	MR_init_entry1(__Compare___ll_backend__var_locn__var_avail_0_0);
	MR_init_label4(__Compare___ll_backend__var_locn__var_avail_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__var_locn__var_avail_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_avail_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_avail_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_avail_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__var_locn__var_avail_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__var_locn__var_avail_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__var_locn__var_avail_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_avail_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__var_locn__var_avail_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___ll_backend__exprn_aux__exprn_opts_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module101)
	MR_init_entry1(__Unify___ll_backend__var_locn__var_locn_info_0_0);
	MR_init_label8(__Unify___ll_backend__var_locn__var_locn_info_0_0,4,6,8,10,12,14,16,18)
	MR_init_label2(__Unify___ll_backend__var_locn__var_locn_info_0_0,22,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__var_locn__var_locn_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_locn_info_0_0_i22);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
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
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(18) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(19) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(20) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___ll_backend__var_locn__var_locn_info_0_0_i4);
MR_def_label(__Unify___ll_backend__var_locn__var_locn_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_locn_info_0_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__var_locn__var_locn_info_0_0_i6);
MR_def_label(__Unify___ll_backend__var_locn__var_locn_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_locn_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__var_locn__var_locn_info_0_0_i8);
MR_def_label(__Unify___ll_backend__var_locn__var_locn_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_locn_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___ll_backend__exprn_aux__exprn_opts_0_0,
		__Unify___ll_backend__var_locn__var_locn_info_0_0_i10);
MR_def_label(__Unify___ll_backend__var_locn__var_locn_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_locn_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__var_locn__var_locn_info_0_0_i12);
MR_def_label(__Unify___ll_backend__var_locn__var_locn_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_locn_info_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(15))) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_locn_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__var_locn__var_locn_info_0_0_i14);
MR_def_label(__Unify___ll_backend__var_locn__var_locn_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_locn_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__var_locn__var_locn_info_0_0_i16);
MR_def_label(__Unify___ll_backend__var_locn__var_locn_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_locn_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__var_locn__var_locn_info_0_0_i18);
MR_def_label(__Unify___ll_backend__var_locn__var_locn_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_locn_info_0_0_i1);
	}
	if ((MR_sv(9) != MR_sv(19))) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_locn_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(20);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__var_locn__var_locn_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__var_locn__var_locn_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___ll_backend__exprn_aux__exprn_opts_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module102)
	MR_init_entry1(__Compare___ll_backend__var_locn__var_locn_info_0_0);
	MR_init_label8(__Compare___ll_backend__var_locn__var_locn_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label5(__Compare___ll_backend__var_locn__var_locn_info_0_0,29,33,37,41,93)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__var_locn__var_locn_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i3);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i2);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___ll_backend__var_locn__var_locn_info_0_0_i5);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__var_locn__var_locn_info_0_0_i9);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__var_locn__var_locn_info_0_0_i13);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i93);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___ll_backend__exprn_aux__exprn_opts_0_0,
		__Compare___ll_backend__var_locn__var_locn_info_0_0_i17);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__var_locn__var_locn_info_0_0_i21);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i93);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__var_locn__var_locn_info_0_0_i25);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__var_locn__var_locn_info_0_0_i29);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__var_locn__var_locn_info_0_0_i33);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__var_locn__var_locn_info_0_0_i37);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i93);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__var_locn__var_locn_info_0_0_i41);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_locn_info_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(20);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__var_locn__var_locn_info_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module103)
	MR_init_entry1(__Unify___ll_backend__var_locn__var_state_0_0);
	MR_init_label6(__Unify___ll_backend__var_locn__var_state_0_0,4,6,8,10,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__var_locn__var_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_state_0_0_i12);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__var_locn__var_state_0_0_i4);
MR_def_label(__Unify___ll_backend__var_locn__var_state_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_state_0_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__var_locn__var_state_0_0_i6);
MR_def_label(__Unify___ll_backend__var_locn__var_state_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_state_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__var_locn__var_state_0_0_i8);
MR_def_label(__Unify___ll_backend__var_locn__var_state_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_state_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__var_locn__var_state_0_0_i10);
MR_def_label(__Unify___ll_backend__var_locn__var_state_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__var_locn__var_state_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___ll_backend__var_locn__var_state_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__var_locn__var_state_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module104)
	MR_init_entry1(__Compare___ll_backend__var_locn__var_state_0_0);
	MR_init_label7(__Compare___ll_backend__var_locn__var_state_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__var_locn__var_state_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_state_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_state_0_0_i2);
MR_def_label(__Compare___ll_backend__var_locn__var_state_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__var_locn__var_state_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__var_locn__var_state_0_0_i5);
MR_def_label(__Compare___ll_backend__var_locn__var_state_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_state_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__var_locn__var_state_0_0_i9);
MR_def_label(__Compare___ll_backend__var_locn__var_state_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_state_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__var_locn__var_state_0_0_i13);
MR_def_label(__Compare___ll_backend__var_locn__var_state_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_state_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__var_locn__var_state_0_0_i17);
MR_def_label(__Compare___ll_backend__var_locn__var_state_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__var_locn__var_state_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__var_locn__var_state_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module105)
	MR_init_entry1(__Unify___ll_backend__var_locn__var_state_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__var_locn__var_state_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module106)
	MR_init_entry1(__Compare___ll_backend__var_locn__var_state_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__var_locn__var_state_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__var_locn, var_state);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module107)
	MR_init_entry1(ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1551__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1551__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module108)
	MR_init_entry1(ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1574__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1574__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module109)
	MR_init_entry1(ll_backend__var_locn__IntroducedFrom__pred__record_copy__1441__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__IntroducedFrom__pred__record_copy__1441__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_np_tailcall_ent(map__search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ll_backend__var_locn_module110)
	MR_init_entry1(ll_backend__var_locn__IntroducedFrom__pred__record_copy__1445__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__IntroducedFrom__pred__record_copy__1445__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__var_locn_module111)
	MR_init_entry1(ll_backend__var_locn__IntroducedFrom__pred__expr_is_constant__1958__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__var_locn__IntroducedFrom__pred__expr_is_constant__1958__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ll_backend__var_locn__expr_is_constant_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__var_locn_maybe_bunch_0(void)
{
	ll_backend__var_locn_module0();
	ll_backend__var_locn_module1();
	ll_backend__var_locn_module2();
	ll_backend__var_locn_module3();
	ll_backend__var_locn_module4();
	ll_backend__var_locn_module5();
	ll_backend__var_locn_module6();
	ll_backend__var_locn_module7();
	ll_backend__var_locn_module8();
	ll_backend__var_locn_module9();
	ll_backend__var_locn_module10();
	ll_backend__var_locn_module11();
	ll_backend__var_locn_module12();
	ll_backend__var_locn_module13();
	ll_backend__var_locn_module14();
	ll_backend__var_locn_module15();
	ll_backend__var_locn_module16();
	ll_backend__var_locn_module17();
	ll_backend__var_locn_module18();
	ll_backend__var_locn_module19();
	ll_backend__var_locn_module20();
	ll_backend__var_locn_module21();
	ll_backend__var_locn_module22();
	ll_backend__var_locn_module23();
	ll_backend__var_locn_module24();
	ll_backend__var_locn_module25();
	ll_backend__var_locn_module26();
	ll_backend__var_locn_module27();
	ll_backend__var_locn_module28();
	ll_backend__var_locn_module29();
	ll_backend__var_locn_module30();
	ll_backend__var_locn_module31();
	ll_backend__var_locn_module32();
	ll_backend__var_locn_module33();
	ll_backend__var_locn_module34();
	ll_backend__var_locn_module35();
	ll_backend__var_locn_module36();
	ll_backend__var_locn_module37();
	ll_backend__var_locn_module38();
	ll_backend__var_locn_module39();
}

static void mercury__ll_backend__var_locn_maybe_bunch_1(void)
{
	ll_backend__var_locn_module40();
	ll_backend__var_locn_module41();
	ll_backend__var_locn_module42();
	ll_backend__var_locn_module43();
	ll_backend__var_locn_module44();
	ll_backend__var_locn_module45();
	ll_backend__var_locn_module46();
	ll_backend__var_locn_module47();
	ll_backend__var_locn_module48();
	ll_backend__var_locn_module49();
	ll_backend__var_locn_module50();
	ll_backend__var_locn_module51();
	ll_backend__var_locn_module52();
	ll_backend__var_locn_module53();
	ll_backend__var_locn_module54();
	ll_backend__var_locn_module55();
	ll_backend__var_locn_module56();
	ll_backend__var_locn_module57();
	ll_backend__var_locn_module58();
	ll_backend__var_locn_module59();
	ll_backend__var_locn_module60();
	ll_backend__var_locn_module61();
	ll_backend__var_locn_module62();
	ll_backend__var_locn_module63();
	ll_backend__var_locn_module64();
	ll_backend__var_locn_module65();
	ll_backend__var_locn_module66();
	ll_backend__var_locn_module67();
	ll_backend__var_locn_module68();
	ll_backend__var_locn_module69();
	ll_backend__var_locn_module70();
	ll_backend__var_locn_module71();
	ll_backend__var_locn_module72();
	ll_backend__var_locn_module73();
	ll_backend__var_locn_module74();
	ll_backend__var_locn_module75();
	ll_backend__var_locn_module76();
	ll_backend__var_locn_module77();
	ll_backend__var_locn_module78();
	ll_backend__var_locn_module79();
}

static void mercury__ll_backend__var_locn_maybe_bunch_2(void)
{
	ll_backend__var_locn_module80();
	ll_backend__var_locn_module81();
	ll_backend__var_locn_module82();
	ll_backend__var_locn_module83();
	ll_backend__var_locn_module84();
	ll_backend__var_locn_module85();
	ll_backend__var_locn_module86();
	ll_backend__var_locn_module87();
	ll_backend__var_locn_module88();
	ll_backend__var_locn_module89();
	ll_backend__var_locn_module90();
	ll_backend__var_locn_module91();
	ll_backend__var_locn_module92();
	ll_backend__var_locn_module93();
	ll_backend__var_locn_module94();
	ll_backend__var_locn_module95();
	ll_backend__var_locn_module96();
	ll_backend__var_locn_module97();
	ll_backend__var_locn_module98();
	ll_backend__var_locn_module99();
	ll_backend__var_locn_module100();
	ll_backend__var_locn_module101();
	ll_backend__var_locn_module102();
	ll_backend__var_locn_module103();
	ll_backend__var_locn_module104();
	ll_backend__var_locn_module105();
	ll_backend__var_locn_module106();
	ll_backend__var_locn_module107();
	ll_backend__var_locn_module108();
	ll_backend__var_locn_module109();
	ll_backend__var_locn_module110();
	ll_backend__var_locn_module111();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__var_locn__init(void);
void mercury__ll_backend__var_locn__init_type_tables(void);
void mercury__ll_backend__var_locn__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__var_locn__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__var_locn__init_complexity_procs(void);
#endif

void mercury__ll_backend__var_locn__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__var_locn_maybe_bunch_0();
	mercury__ll_backend__var_locn_maybe_bunch_1();
	mercury__ll_backend__var_locn_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__var_locn__type_ctor_info_var_state_map_0,
		ll_backend__var_locn__var_state_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__var_locn__type_ctor_info_var_state_0,
		ll_backend__var_locn__var_state_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__var_locn__type_ctor_info_var_locn_info_0,
		ll_backend__var_locn__var_locn_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__var_locn__type_ctor_info_var_avail_0,
		ll_backend__var_locn__var_avail_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__var_locn__type_ctor_info_loc_var_map_0,
		ll_backend__var_locn__loc_var_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__var_locn__type_ctor_info_dep_search_lval_0,
		ll_backend__var_locn__dep_search_lval_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__var_locn__type_ctor_info_dead_or_alive_0,
		ll_backend__var_locn__dead_or_alive_0_0);
	mercury__ll_backend__var_locn__init_debugger();
}

void mercury__ll_backend__var_locn__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__var_locn__type_ctor_info_var_state_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__var_locn__type_ctor_info_var_state_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__var_locn__type_ctor_info_var_locn_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__var_locn__type_ctor_info_var_avail_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__var_locn__type_ctor_info_loc_var_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__var_locn__type_ctor_info_dep_search_lval_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__var_locn__type_ctor_info_dead_or_alive_0);
	}
}


void mercury__ll_backend__var_locn__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__var_locn__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__var_locn__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
