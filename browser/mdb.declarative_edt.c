/*
** Automatically generated from `declarative_edt.m'
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
INIT mercury__mdb__declarative_edt__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "mdb.declarative_edt.c"
#include "mdb.declarative_edt.mh"

#line 27 "mdb.declarative_edt.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 31 "mdb.declarative_edt.c"
#line 27 "../mdbcomp/mdbcomp.rtti_access.int"
#include "mdbcomp.rtti_access.mh"

#line 35 "mdb.declarative_edt.c"
#line 107 "mdb.declarative_execution.int"
#include "mdb.declarative_execution.mh"

#line 39 "mdb.declarative_edt.c"
#line 130 "../library/io.int2"
#include "io.mh"

#line 43 "mdb.declarative_edt.c"
#line 136 "../library/io.int2"
#include "string.mh"

#line 47 "mdb.declarative_edt.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 51 "mdb.declarative_edt.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 55 "mdb.declarative_edt.c"
#line 28 "../library/array.int2"
#include "array.mh"

#line 59 "mdb.declarative_edt.c"
#line 60 "mdb.declarative_edt.c"
#ifndef MDB__DECLARATIVE_EDT_DECL_GUARD
#define MDB__DECLARATIVE_EDT_DECL_GUARD

#line 64 "mdb.declarative_edt.c"
#line 65 "mdb.declarative_edt.c"

#endif
#line 68 "mdb.declarative_edt.c"


struct mercury_type_1 {
	MR_Integer f1;
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1[2];
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Integer f2;
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Unsigned f1[3];
};
static const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
static const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
};
static const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[2];
	MR_Integer f4[2];
	MR_Word * f5[4];
};
static const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Word * f6;
	MR_Word * f7;
	MR_Word * f8;
	MR_Word * f9;
};
static const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
static const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
};
static const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Unsigned f1[2];
};
static const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
static const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
static const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
static const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Word * f6;
	MR_Word * f7;
	MR_Word * f8;
};
static const struct mercury_type_15 mercury_common_15[];

struct mercury_type_0 {
	MR_String f1;
};
static const struct mercury_type_0 mercury_vector_common_0_0[];

extern const MR_TypeClassDeclStruct
	mercury_data_mdb__declarative_edt__type_class_decl_mercury_edt_2;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__declarative_edt__type_ctor_info_weighting_heuristic_0,
	mercury_data_mdb__declarative_edt__type_ctor_info_suspect_status_0,
	mercury_data_mdb__declarative_edt__type_ctor_info_suspect_id_0,
	mercury_data_mdb__declarative_edt__type_ctor_info_suspect_1,
	mercury_data_mdb__declarative_edt__type_ctor_info_subterm_origin_1,
	mercury_data_mdb__declarative_edt__type_ctor_info_subterm_mode_0,
	mercury_data_mdb__declarative_edt__type_ctor_info_search_space_1,
	mercury_data_mdb__declarative_edt__type_ctor_info_primitive_op_type_0,
	mercury_data_mdb__declarative_edt__type_ctor_info_maybe_found_descendent_0,
	mercury_data_mdb__declarative_edt__type_ctor_info_find_origin_response_0;
MR_decl_label1(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1308__1_4_0, 2)
MR_decl_label1(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1315__1_4_0, 2)
MR_decl_label2(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1909__1_3_0, 2,3)
MR_decl_label4(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0, 2,3,12,6)
MR_decl_label1(mdb__declarative_edt__IntroducedFrom__pred__revise_root__915__1_6_0, 2)
MR_decl_label1(mdb__declarative_edt__IntroducedFrom__pred__revise_root__930__1_3_0, 2)
MR_decl_label4(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0, 2,3,4,1)
MR_decl_label8(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0, 4,5,6,7,8,9,10,3)
MR_decl_label8(mdb__declarative_edt__add_children_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label6(mdb__declarative_edt__add_children_8_0, 10,13,14,15,16,11)
MR_decl_label2(mdb__declarative_edt__add_original_weight_7_0, 3,5)
MR_decl_label7(mdb__declarative_edt__add_weight_to_ancestors_4_0, 40,6,8,9,12,2,3)
MR_decl_label8(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0, 2,3,6,8,9,15,14,18)
MR_decl_label4(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0, 17,20,12,4)
MR_decl_label3(mdb__declarative_edt__assert_suspect_is_erroneous_3_0, 2,3,4)
MR_decl_label8(mdb__declarative_edt__assert_suspect_is_valid_4_0, 2,3,5,6,4,7,9,10)
MR_decl_label3(mdb__declarative_edt__assert_suspect_is_valid_4_0, 13,11,8)
MR_decl_label8(mdb__declarative_edt__calc_suspect_weight_7_0, 24,3,6,4,8,11,12,13)
MR_decl_label8(mdb__declarative_edt__calc_suspect_weight_7_0, 14,15,16,17,18,19,20,2)
MR_decl_label1(mdb__declarative_edt__calc_weight_5_0, 3)
MR_decl_label8(mdb__declarative_edt__children_6_0, 2,3,6,15,16,10,18,5)
MR_decl_label1(mdb__declarative_edt__children_6_0, 1)
MR_decl_label4(mdb__declarative_edt__choose_skipped_suspect_2_0, 3,7,5,1)
MR_decl_label2(mdb__declarative_edt__excluded_complement_2_0, 10,4)
MR_decl_label7(mdb__declarative_edt__extend_search_space_upwards_4_0, 2,3,4,5,6,8,1)
MR_decl_label5(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0, 25,4,6,3,1)
MR_decl_label8(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0, 2,3,4,10,11,12,13,14)
MR_decl_label8(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0, 15,16,9,17,5,19,20,21)
MR_decl_label7(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0, 22,23,24,25,26,27,1)
MR_decl_label4(mdb__declarative_edt__find_node_in_list_4_0, 5,3,7,1)
MR_decl_label8(mdb__declarative_edt__find_subterm_origin_11_0, 2,9,11,12,8,6,4,18)
MR_decl_label4(mdb__declarative_edt__find_subterm_origin_11_0, 17,19,22,21)
MR_decl_label8(mdb__declarative_edt__first_unknown_descendent_list_6_0, 2,5,6,9,15,8,17,4)
MR_decl_label1(mdb__declarative_edt__first_unknown_descendent_list_6_0, 3)
MR_decl_label4(mdb__declarative_edt__force_propagate_status_downwards_5_0, 2,3,7,5)
MR_decl_label3(mdb__declarative_edt__force_propagate_status_downwards_6_0, 2,3,5)
MR_decl_label5(mdb__declarative_edt__get_children_list_7_0, 4,7,9,5,3)
MR_decl_label4(mdb__declarative_edt__get_path_5_0, 18,2,3,1)
MR_decl_label6(mdb__declarative_edt__get_siblings_3_0, 2,4,5,7,10,12)
MR_decl_label4(mdb__declarative_edt__give_up_subterm_tracking_3_0, 3,12,6,1)
MR_decl_label6(mdb__declarative_edt__ignore_suspect_4_0, 2,3,4,5,6,7)
MR_decl_label3(mdb__declarative_edt__incorporate_explicit_subtree_4_0, 2,3,4)
MR_decl_label8(mdb__declarative_edt__incorporate_explicit_supertree_5_0, 2,3,5,7,8,9,10,11)
MR_decl_label2(mdb__declarative_edt__incorporate_explicit_supertree_5_0, 12,4)
MR_decl_label8(mdb__declarative_edt__initialise_search_space_4_0, 3,5,7,2,8,9,10,11)
MR_decl_label5(mdb__declarative_edt__initialise_search_space_4_0, 12,13,14,15,16)
MR_decl_label8(mdb__declarative_edt__insert_new_topmost_node_5_0, 3,5,6,7,8,10,12,13)
MR_decl_label8(mdb__declarative_edt__insert_new_topmost_node_5_0, 16,17,18,19,20,21,22,23)
MR_decl_label8(mdb__declarative_edt__insert_new_topmost_node_5_0, 25,27,24,29,30,31,32,33)
MR_decl_label3(mdb__declarative_edt__insert_new_topmost_node_5_0, 34,9,2)
MR_decl_label4(mdb__declarative_edt__least_skipped_5_0, 2,14,3,15)
MR_decl_label8(mdb__declarative_edt__lookup_subterm_node_8_0, 2,3,4,8,9,10,5,6)
MR_decl_label2(mdb__declarative_edt__lookup_suspect_3_0, 3,2)
MR_decl_label8(mdb__declarative_edt__maybe_check_search_space_consistency_3_0, 8,10,7,12,13,14,16,17)
MR_decl_label3(mdb__declarative_edt__maybe_check_search_space_consistency_3_0, 18,56,55)
MR_decl_label8(mdb__declarative_edt__non_ignored_descendents_6_0, 36,4,5,8,10,6,13,15)
MR_decl_label1(mdb__declarative_edt__non_ignored_descendents_6_0, 1)
MR_decl_label2(mdb__declarative_edt__parent_3_0, 2,1)
MR_decl_label1(mdb__declarative_edt__propagate_status_downwards_5_0, 2)
MR_decl_label6(mdb__declarative_edt__propagate_status_downwards_7_0, 2,6,8,10,4,12)
MR_decl_label8(mdb__declarative_edt__propagate_status_upwards_6_0, 2,5,6,7,11,13,14,9)
MR_decl_label1(mdb__declarative_edt__propagate_status_upwards_6_0, 3)
MR_decl_label8(mdb__declarative_edt__recalc_weights_and_get_parents_6_0, 21,4,5,6,7,8,10,3)
MR_decl_label6(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0, 14,2,3,6,5,8)
MR_decl_label8(mdb__declarative_edt__resolve_origin_10_0, 2,5,6,7,9,10,11,8)
MR_decl_label8(mdb__declarative_edt__resolve_origin_10_0, 13,16,19,20,18,14,25,26)
MR_decl_label8(mdb__declarative_edt__revise_root_3_0, 32,5,6,7,8,9,10,12)
MR_decl_label6(mdb__declarative_edt__revise_root_3_0, 13,11,15,16,17,18)
MR_decl_label1(mdb__declarative_edt__root_2_0, 1)
MR_decl_label1(mdb__declarative_edt__should_check_search_space_consistency_0_0, 1)
MR_decl_label3(mdb__declarative_edt__skip_suspect_3_0, 2,3,4)
MR_decl_label8(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0, 2,7,9,11,12,14,16,18)
MR_decl_label3(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0, 20,22,4)
MR_decl_label2(mdb__declarative_edt__suspect_correct_or_inadmissible_2_0, 2,3)
MR_decl_label1(mdb__declarative_edt__suspect_erroneous_2_0, 2)
MR_decl_label1(mdb__declarative_edt__suspect_ignored_2_0, 2)
MR_decl_label3(mdb__declarative_edt__suspect_in_excluded_complement_2_0, 2,11,5)
MR_decl_label3(mdb__declarative_edt__suspect_in_excluded_subtree_2_0, 2,10,5)
MR_decl_label1(mdb__declarative_edt__suspect_inadmissible_2_0, 2)
MR_decl_label3(mdb__declarative_edt__suspect_is_leaf_2_0, 2,3,1)
MR_decl_label1(mdb__declarative_edt__suspect_skipped_2_0, 2)
MR_decl_label1(mdb__declarative_edt__suspect_unknown_2_0, 2)
MR_decl_label1(mdb__declarative_edt__topmost_det_2_0, 3)
MR_decl_label4(mdb__declarative_edt__travel_up_4_0, 17,4,2,3)
MR_decl_label8(mdb__declarative_edt__update_weighting_heuristic_4_0, 30,5,6,4,8,9,10,11)
MR_decl_label1(mdb__declarative_edt__update_weighting_heuristic_4_0, 12)
MR_decl_label4(fn__mdb__declarative_edt__empty_search_space_0_0, 2,3,4,5)
MR_decl_label1(fn__mdb__declarative_edt__get_edt_node_2_0, 2)
MR_decl_label2(fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0, 2,3)
MR_decl_label1(fn__mdb__declarative_edt__get_weight_2_0, 2)
MR_decl_label3(fn__mdb__declarative_edt__new_child_status_1_0, 9,10,4)
MR_decl_label3(fn__mdb__declarative_edt__new_parent_status_1_0, 9,10,4)
MR_decl_label1(fn__mdb__declarative_edt__suspect_depth_2_0, 2)
MR_decl_label6(__Unify___mdb__declarative_edt__find_origin_response_0_0, 10,96,6,8,98,1)
MR_decl_label3(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0, 6,4,1)
MR_decl_label7(__Unify___mdb__declarative_edt__search_space_1_0, 2,4,6,8,10,12,1)
MR_decl_label8(__Unify___mdb__declarative_edt__subterm_origin_1_0, 4,76,8,10,77,16,20,79)
MR_decl_label1(__Unify___mdb__declarative_edt__subterm_origin_1_0, 1)
MR_decl_label5(__Unify___mdb__declarative_edt__suspect_1_0, 2,4,6,8,1)
MR_decl_label2(__Unify___mdb__declarative_edt__suspect_status_0_0, 4,1)
MR_decl_label8(__Compare___mdb__declarative_edt__find_origin_response_0_0, 60,195,55,67,86,62,73,27)
MR_decl_label8(__Compare___mdb__declarative_edt__find_origin_response_0_0, 235,33,37,41,45,4,101,237)
MR_decl_label4(__Compare___mdb__declarative_edt__find_origin_response_0_0, 9,13,17,228)
MR_decl_label5(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0, 10,25,4,27,7)
MR_decl_label7(__Compare___mdb__declarative_edt__search_space_1_0, 3,7,11,15,19,23,32)
MR_decl_label8(__Compare___mdb__declarative_edt__subterm_origin_1_0, 4,73,5,74,20,23,115,132)
MR_decl_label8(__Compare___mdb__declarative_edt__subterm_origin_1_0, 27,31,39,134,47,53,135,62)
MR_decl_label2(__Compare___mdb__declarative_edt__subterm_origin_1_0, 66,129)
MR_decl_label6(__Compare___mdb__declarative_edt__suspect_1_0, 3,7,11,15,19,27)
MR_decl_label8(__Compare___mdb__declarative_edt__suspect_status_0_0, 5,16,27,38,49,60,71,81)
MR_decl_label4(__Compare___mdb__declarative_edt__suspect_status_0_0, 4,85,91,84)
MR_def_extern_entry(mdb__declarative_edt__edt_question_3_0)
MR_def_extern_entry(mdb__declarative_edt__edt_get_e_bug_3_0)
MR_def_extern_entry(mdb__declarative_edt__edt_get_i_bug_4_0)
MR_def_extern_entry(mdb__declarative_edt__edt_children_3_0)
MR_def_extern_entry(mdb__declarative_edt__edt_parent_3_0)
MR_def_extern_entry(mdb__declarative_edt__edt_dependency_6_0)
MR_def_extern_entry(mdb__declarative_edt__edt_subterm_mode_5_0)
MR_def_extern_entry(mdb__declarative_edt__edt_is_implicit_root_2_0)
MR_def_extern_entry(mdb__declarative_edt__edt_same_nodes_3_0)
MR_def_extern_entry(mdb__declarative_edt__edt_topmost_node_2_0)
MR_def_extern_entry(mdb__declarative_edt__edt_number_of_events_4_0)
MR_def_extern_entry(mdb__declarative_edt__edt_subtree_suspicion_4_0)
MR_def_extern_entry(mdb__declarative_edt__edt_context_4_0)
MR_def_extern_entry(fn__mdb__declarative_edt__edt_proc_label_2_0)
MR_def_extern_entry(fn__mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_0)
MR_def_extern_entry(fn__mdb__declarative_edt__primitive_op_type_to_string_1_0)
MR_def_extern_entry(fn__mdb__declarative_edt__empty_search_space_0_0)
MR_decl_static(mdb__declarative_edt__calc_weight_5_0)
MR_def_extern_entry(mdb__declarative_edt__initialise_search_space_4_0)
MR_def_extern_entry(mdb__declarative_edt__root_2_0)
MR_def_extern_entry(mdb__declarative_edt__topmost_det_2_0)
MR_decl_static(fn__mdb__declarative_edt__new_child_status_1_0)
MR_decl_static(mdb__declarative_edt__lookup_suspect_3_0)
MR_decl_static(mdb__declarative_edt__calc_suspect_weight_7_0)
MR_decl_static(mdb__declarative_edt__excluded_complement_2_0)
MR_decl_static(mdb__declarative_edt__add_weight_to_ancestors_4_0)
MR_decl_static(mdb__declarative_edt__add_children_8_0)
MR_def_extern_entry(mdb__declarative_edt__children_6_0)
MR_def_extern_entry(mdb__declarative_edt__non_ignored_descendents_6_0)
MR_def_extern_entry(mdb__declarative_edt__parent_3_0)
MR_def_extern_entry(mdb__declarative_edt__suspect_erroneous_2_0)
MR_decl_static(mdb__declarative_edt__get_siblings_3_0)
MR_decl_static(mdb__declarative_edt__propagate_status_upwards_6_0)
MR_decl_static(mdb__declarative_edt__assert_suspect_is_valid_4_0)
MR_def_extern_entry(mdb__declarative_edt__assert_suspect_is_correct_3_0)
MR_def_extern_entry(mdb__declarative_edt__assert_suspect_is_erroneous_3_0)
MR_def_extern_entry(mdb__declarative_edt__assert_suspect_is_inadmissible_3_0)
MR_def_extern_entry(mdb__declarative_edt__ignore_suspect_4_0)
MR_def_extern_entry(mdb__declarative_edt__skip_suspect_3_0)
MR_def_extern_entry(mdb__declarative_edt__lookup_subterm_node_8_0)
MR_def_extern_entry(fn__mdb__declarative_edt__get_edt_node_2_0)
MR_decl_static(fn__mdb__declarative_edt__new_parent_status_1_0)
MR_decl_static(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0)
MR_decl_static(mdb__declarative_edt__find_node_in_list_4_0)
MR_decl_static(mdb__declarative_edt__insert_new_topmost_node_5_0)
MR_def_extern_entry(mdb__declarative_edt__extend_search_space_upwards_4_0)
MR_decl_static(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0)
MR_decl_static(mdb__declarative_edt__resolve_origin_10_0)
MR_decl_static(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0)
MR_def_extern_entry(mdb__declarative_edt__find_subterm_origin_11_0)
MR_def_extern_entry(fn__mdb__declarative_edt__suspect_depth_2_0)
MR_def_extern_entry(mdb__declarative_edt__travel_up_4_0)
MR_def_extern_entry(mdb__declarative_edt__incorporate_explicit_subtree_4_0)
MR_def_extern_entry(mdb__declarative_edt__incorporate_explicit_supertree_5_0)
MR_def_extern_entry(fn__mdb__declarative_edt__get_weight_2_0)
MR_def_extern_entry(mdb__declarative_edt__suspect_in_excluded_subtree_2_0)
MR_def_extern_entry(mdb__declarative_edt__suspect_in_excluded_complement_2_0)
MR_def_extern_entry(mdb__declarative_edt__suspect_unknown_2_0)
MR_def_extern_entry(mdb__declarative_edt__suspect_skipped_2_0)
MR_def_extern_entry(mdb__declarative_edt__suspect_ignored_2_0)
MR_decl_static(mdb__declarative_edt__get_children_list_7_0)
MR_decl_static(mdb__declarative_edt__first_unknown_descendent_list_6_0)
MR_def_extern_entry(mdb__declarative_edt__first_unknown_descendent_6_0)
MR_def_extern_entry(mdb__declarative_edt__choose_skipped_suspect_2_0)
MR_decl_static(mdb__declarative_edt__get_path_5_0)
MR_def_extern_entry(mdb__declarative_edt__get_path_4_0)
MR_def_extern_entry(mdb__declarative_edt__suspect_correct_or_inadmissible_2_0)
MR_def_extern_entry(mdb__declarative_edt__suspect_inadmissible_2_0)
MR_def_extern_entry(mdb__declarative_edt__give_up_subterm_tracking_3_0)
MR_decl_static(mdb__declarative_edt__force_propagate_status_downwards_6_0)
MR_decl_static(mdb__declarative_edt__recalc_weights_and_get_parents_6_0)
MR_decl_static(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0)
MR_def_extern_entry(mdb__declarative_edt__revise_root_3_0)
MR_decl_static(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0)
MR_decl_static(mdb__declarative_edt__should_check_search_space_consistency_0_0)
MR_def_extern_entry(mdb__declarative_edt__maybe_check_search_space_consistency_3_0)
MR_def_extern_entry(fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0)
MR_def_extern_entry(mdb__declarative_edt__update_weighting_heuristic_4_0)
MR_def_extern_entry(fn__mdb__declarative_edt__get_current_maybe_weighting_1_0)
MR_decl_static(mdb__declarative_edt__suspect_is_leaf_2_0)
MR_decl_static(mdb__declarative_edt__propagate_status_downwards_7_0)
MR_decl_static(mdb__declarative_edt__propagate_status_downwards_5_0)
MR_decl_static(mdb__declarative_edt__force_propagate_status_downwards_5_0)
MR_decl_static(mdb__declarative_edt__add_original_weight_7_0)
MR_decl_static(mdb__declarative_edt__least_skipped_5_0)
MR_def_extern_entry(__Unify___mdb__declarative_edt__find_origin_response_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_edt__find_origin_response_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_edt__primitive_op_type_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_edt__primitive_op_type_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_edt__search_space_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_edt__search_space_1_0)
MR_def_extern_entry(__Unify___mdb__declarative_edt__subterm_mode_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_edt__subterm_mode_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_edt__subterm_origin_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_edt__subterm_origin_1_0)
MR_decl_static(__Unify___mdb__declarative_edt__suspect_1_0)
MR_decl_static(__Compare___mdb__declarative_edt__suspect_1_0)
MR_def_extern_entry(__Unify___mdb__declarative_edt__suspect_id_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_edt__suspect_id_0_0)
MR_decl_static(__Unify___mdb__declarative_edt__suspect_status_0_0)
MR_decl_static(__Compare___mdb__declarative_edt__suspect_status_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_edt__weighting_heuristic_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_edt__weighting_heuristic_0_0)
MR_decl_static(mdb__declarative_edt__IntroducedFrom__pred__revise_root__915__1_6_0)
MR_decl_static(mdb__declarative_edt__IntroducedFrom__pred__revise_root__930__1_3_0)
MR_decl_static(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0)
MR_decl_static(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1308__1_4_0)
MR_decl_static(fn__mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1310__1_2_0)
MR_decl_static(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1315__1_4_0)
MR_decl_static(mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1386__1_2_0)
MR_decl_static(mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1534__1_2_0)
MR_decl_static(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1909__1_3_0)
MR_decl_static(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0)
MR_decl_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_101_120_105_115_116_105_110_103_95_119_101_105_103_104_116_95_95_91_49_93_95_48_3_0)
MR_decl_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0)

static const struct mercury_type_1 mercury_common_1[1] =
{
{
0
},
};

static const struct mercury_type_2 mercury_common_2[10] =
{
{
{
MR_string_const("topmost_det", 11),
MR_string_const("search space empty", 18)
}
},
{
{
MR_string_const("lookup_suspect", 14),
MR_string_const("couldn\'t find suspect", 21)
}
},
{
{
MR_string_const("get_siblings", 12),
MR_string_const("parent\'s children unexplored", 28)
}
},
{
{
MR_string_const("get_siblings", 12),
MR_string_const("parent has no children", 22)
}
},
{
{
MR_string_const("insert_new_topmost_node", 23),
MR_string_const("invalid position", 16)
}
},
{
{
MR_string_const("insert_new_topmost_node", 23),
MR_string_const("couldn\'t find event number", 26)
}
},
{
{
MR_string_const("insert_new_topmost_node", 23),
MR_string_const("couldn\'t get new topmost node\'s children", 40)
}
},
{
{
MR_string_const("resolve_origin", 14),
MR_string_const("output origin for input subterm not in siblings", 47)
}
},
{
{
MR_string_const("incorporate_explicit_supertree", 30),
MR_string_const("no parent", 9)
}
},
{
{
MR_string_const("revise_root", 11),
MR_string_const("no root", 7)
}
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_CTOR1_ADDR(mdb__declarative_edt, search_space),
2
},
{
MR_CTOR1_ADDR(mdb__declarative_edt, suspect),
2
},
{
MR_CTOR1_ADDR(mdb__declarative_edt, search_space),
1
},
{
MR_CTOR1_ADDR(mdb__declarative_edt, suspect),
1
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
2,
0,
17453
}
},
{
{
2,
17437,
17453
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_typeclass_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_4;
static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_1,
MR_COMMON(4,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_4,
MR_COMMON(4,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(3,1),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_2;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_2,
MR_COMMON(4,0),
3,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(3,1),
2
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_weighting_heuristic_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_3,
MR_COMMON(4,1)
},
8,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_CTOR0_ADDR(mdb__declarative_edt, weighting_heuristic)
},
{
1,
2
},
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__add_children_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_oracle__type_ctor_info_oracle_state_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__add_children_8_0_1,
MR_COMMON(4,1),
6,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
MR_CTOR0_ADDR(mdb__declarative_oracle, oracle_state),
MR_INT_CTOR_ADDR,
MR_COMMON(3,0),
MR_COMMON(3,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__get_siblings_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__recalc_weights_upto_ancestor_5_0_1;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__get_siblings_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__recalc_weights_upto_ancestor_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_suspect_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_10 mercury_common_10[7] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__declarative_edt, suspect_status)
}
},
{
{
MR_tbmkword(0, 3),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,10,1)
}
},
{
{
MR_tbmkword(0, 2),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 2),
MR_TAG_COMMON(1,10,2)
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
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__propagate_status_upwards_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_suspect_status_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__assert_suspect_is_valid_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__choose_skipped_suspect_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__revise_root_3_0_1;
static const struct mercury_type_12 mercury_common_12[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__propagate_status_upwards_6_0_1,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(mdb__declarative_edt, suspect_status),
MR_COMMON(10,0),
MR_INT_CTOR_ADDR,
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__assert_suspect_is_valid_4_0_1,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(mdb__declarative_edt, suspect_status),
MR_COMMON(10,0),
MR_INT_CTOR_ADDR,
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__choose_skipped_suspect_2_0_1,
MR_COMMON(11,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(3,2),
MR_INT_CTOR_ADDR,
MR_COMMON(3,3),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__revise_root_3_0_1,
MR_COMMON(4,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(10,0),
MR_CTOR0_ADDR(mdb__declarative_edt, suspect_status),
MR_INT_CTOR_ADDR,
MR_COMMON(3,0),
MR_COMMON(3,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__first_unknown_descendent_list_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__first_unknown_descendent_list_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__revise_root_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__update_weighting_heuristic_4_0_1;
static const struct mercury_type_13 mercury_common_13[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__first_unknown_descendent_list_6_0_1,
MR_COMMON(4,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__first_unknown_descendent_list_6_0_2,
MR_COMMON(4,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__revise_root_3_0_2,
MR_COMMON(4,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__update_weighting_heuristic_4_0_1,
MR_COMMON(4,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__force_propagate_status_downwards_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__propagate_status_downwards_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__force_propagate_status_downwards_5_0_1;
static const struct mercury_type_14 mercury_common_14[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__force_propagate_status_downwards_6_0_1,
MR_COMMON(11,0)
},
8,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(mdb__declarative_edt, suspect_status),
MR_COMMON(10,0),
MR_INT_CTOR_ADDR,
MR_COMMON(10,5),
MR_COMMON(10,5),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__propagate_status_downwards_7_0_1,
MR_COMMON(11,0)
},
8,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(mdb__declarative_edt, suspect_status),
MR_COMMON(10,0),
MR_INT_CTOR_ADDR,
MR_COMMON(10,5),
MR_COMMON(10,5),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__force_propagate_status_downwards_5_0_1,
MR_COMMON(11,0)
},
8,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(mdb__declarative_edt, suspect_status),
MR_COMMON(10,0),
MR_INT_CTOR_ADDR,
MR_COMMON(10,5),
MR_COMMON(10,5),
MR_COMMON(3,2),
MR_COMMON(3,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_8;
static const struct mercury_type_15 mercury_common_15[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_1,
MR_COMMON(4,1),
5,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_2,
MR_COMMON(4,1),
5,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_3,
MR_COMMON(4,1),
5,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_4,
MR_COMMON(4,1),
5,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_5,
MR_COMMON(4,1),
5,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_6,
MR_COMMON(4,1),
5,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_7,
MR_COMMON(4,1),
5,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_8,
MR_COMMON(4,1),
5,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[4] =
{
{
MR_string_const("foreign procedure call", 22)
},
{
MR_string_const("builtin operation", 17)
},
{
MR_string_const("untraced call", 13)
},
{
MR_string_const("unification", 11)
},
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0 = {
	"number_of_events",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1 = {
	"suspicion",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_edt__enum_value_ordered_weighting_heuristic_0[] = {
	&mercury_data_mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0,
	&mercury_data_mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_edt__enum_name_ordered_weighting_heuristic_0[] = {
	&mercury_data_mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0,
	&mercury_data_mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1
};

const MR_Integer mercury_data_mdb__declarative_edt__functor_number_map_weighting_heuristic_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_weighting_heuristic_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_edt__weighting_heuristic_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_edt__weighting_heuristic_0_0)),
	"mdb.declarative_edt",
	"weighting_heuristic",
	{ (void *)mercury_data_mdb__declarative_edt__enum_name_ordered_weighting_heuristic_0 },
	{ (void *)mercury_data_mdb__declarative_edt__enum_value_ordered_weighting_heuristic_0 },
	2,
	4,
	mercury_data_mdb__declarative_edt__functor_number_map_weighting_heuristic_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_0 = {
	"suspect_ignored",
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

const MR_PseudoTypeInfo mercury_data_mdb__declarative_edt__field_types_suspect_status_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_1 = {
	"suspect_skipped",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_edt__field_types_suspect_status_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_2 = {
	"suspect_correct",
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

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_3 = {
	"suspect_erroneous",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_4 = {
	"suspect_inadmissible",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_5 = {
	"suspect_pruned",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_6 = {
	"suspect_in_erroneous_subtree_complement",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_7 = {
	"suspect_unknown",
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

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_suspect_status_0_0[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_0,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_2,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_3,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_4,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_5,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_6,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_7

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_suspect_status_0_1[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_1

};

const MR_DuPtagLayout mercury_data_mdb__declarative_edt__du_ptag_ordered_suspect_status_0[] = {
	{ 7, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_edt__du_stag_ordered_suspect_status_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_edt__du_stag_ordered_suspect_status_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_name_ordered_suspect_status_0[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_2,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_3,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_0,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_6,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_4,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_5,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_1,
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_status_0_7
};

const MR_Integer mercury_data_mdb__declarative_edt__functor_number_map_suspect_status_0[] = {
	2,
	6,
	0,
	1,
	4,
	5,
	3,
	7 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_suspect_status_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_edt__suspect_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_edt__suspect_status_0_0)),
	"mdb.declarative_edt",
	"suspect_status",
	{ (void *)mercury_data_mdb__declarative_edt__du_name_ordered_suspect_status_0 },
	{ (void *)mercury_data_mdb__declarative_edt__du_ptag_ordered_suspect_status_0 },
	8,
	4,
	mercury_data_mdb__declarative_edt__functor_number_map_suspect_status_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_suspect_id_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_edt__suspect_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_edt__suspect_id_0_0)),
	"mdb.declarative_edt",
	"suspect_id",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_edt__field_types_suspect_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_edt__type_ctor_info_suspect_status_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__declarative_edt__field_names_suspect_1_0[] = {
	"parent",
	"edt_node",
	"status",
	"depth",
	"children",
	"weight"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_suspect_1_0 = {
	"suspect",
	6,
	2,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_edt__field_types_suspect_1_0,
	mercury_data_mdb__declarative_edt__field_names_suspect_1_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_suspect_1_0[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_1_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_edt__du_ptag_ordered_suspect_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_edt__du_stag_ordered_suspect_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_name_ordered_suspect_1[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_suspect_1_0
};

const MR_Integer mercury_data_mdb__declarative_edt__functor_number_map_suspect_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_suspect_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_edt__suspect_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_edt__suspect_1_0)),
	"mdb.declarative_edt",
	"suspect",
	{ (void *)mercury_data_mdb__declarative_edt__du_name_ordered_suspect_1 },
	{ (void *)mercury_data_mdb__declarative_edt__du_ptag_ordered_suspect_1 },
	1,
	4,
	mercury_data_mdb__declarative_edt__functor_number_map_suspect_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_edt__field_types_subterm_origin_1_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_0 = {
	"origin_output",
	3,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_edt__field_types_subterm_origin_1_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_edt__field_types_subterm_origin_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_1 = {
	"origin_input",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_edt__field_types_subterm_origin_1_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_primitive_op_type_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_edt__field_types_subterm_origin_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_edt__type_ctor_info_primitive_op_type_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_2 = {
	"origin_primitive_op",
	3,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_edt__field_types_subterm_origin_1_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_3 = {
	"origin_not_found",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_4 = {
	"origin_require_explicit_subtree",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_subterm_origin_1_0[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_3,
	&mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_4

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_subterm_origin_1_1[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_subterm_origin_1_2[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_subterm_origin_1_3[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_2

};

const MR_DuPtagLayout mercury_data_mdb__declarative_edt__du_ptag_ordered_subterm_origin_1[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_edt__du_stag_ordered_subterm_origin_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_edt__du_stag_ordered_subterm_origin_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_edt__du_stag_ordered_subterm_origin_1_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_edt__du_stag_ordered_subterm_origin_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_name_ordered_subterm_origin_1[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_1,
	&mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_3,
	&mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_0,
	&mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_2,
	&mercury_data_mdb__declarative_edt__du_functor_desc_subterm_origin_1_4
};

const MR_Integer mercury_data_mdb__declarative_edt__functor_number_map_subterm_origin_1[] = {
	2,
	0,
	3,
	1,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_subterm_origin_1 = {
	1,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_edt__subterm_origin_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0)),
	"mdb.declarative_edt",
	"subterm_origin",
	{ (void *)mercury_data_mdb__declarative_edt__du_name_ordered_subterm_origin_1 },
	{ (void *)mercury_data_mdb__declarative_edt__du_ptag_ordered_subterm_origin_1 },
	5,
	4,
	mercury_data_mdb__declarative_edt__functor_number_map_subterm_origin_1
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0 = {
	"subterm_in",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1 = {
	"subterm_out",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_edt__enum_value_ordered_subterm_mode_0[] = {
	&mercury_data_mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0,
	&mercury_data_mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_edt__enum_name_ordered_subterm_mode_0[] = {
	&mercury_data_mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0,
	&mercury_data_mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1
};

const MR_Integer mercury_data_mdb__declarative_edt__functor_number_map_subterm_mode_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_subterm_mode_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_edt__subterm_mode_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_edt__subterm_mode_0_0)),
	"mdb.declarative_edt",
	"subterm_mode",
	{ (void *)mercury_data_mdb__declarative_edt__enum_name_ordered_subterm_mode_0 },
	{ (void *)mercury_data_mdb__declarative_edt__enum_value_ordered_subterm_mode_0 },
	2,
	4,
	mercury_data_mdb__declarative_edt__functor_number_map_subterm_mode_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mdb__declarative_edt__pti_suspect_1__pseudo_1 = {
	&mercury_data_mdb__declarative_edt__type_ctor_info_suspect_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_mdb__declarative_edt__pti_suspect_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_edt__pti_suspect_1__pseudo_1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bimap__type_ctor_info_bimap_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_bimap__pti_bimap_2__pseudo_1__pseudo_1 = {
	&mercury_data_bimap__type_ctor_info_bimap_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_weighting_heuristic_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdb__declarative_edt__type_ctor_info_weighting_heuristic_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_edt__field_types_search_space_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_mdb__declarative_edt__pti_suspect_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_bimap__pti_bimap_2__pseudo_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
};

const MR_ConstString mercury_data_mdb__declarative_edt__field_names_search_space_1_0[] = {
	"root",
	"topmost",
	"suspect_id_counter",
	"skip_counter",
	"store",
	"implicit_roots_to_explicit_roots",
	"maybe_weighting_heuristic"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_search_space_1_0 = {
	"search_space",
	7,
	48,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_edt__field_types_search_space_1_0,
	mercury_data_mdb__declarative_edt__field_names_search_space_1_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_search_space_1_0[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_search_space_1_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_edt__du_ptag_ordered_search_space_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_edt__du_stag_ordered_search_space_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_name_ordered_search_space_1[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_search_space_1_0
};

const MR_Integer mercury_data_mdb__declarative_edt__functor_number_map_search_space_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_search_space_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_edt__search_space_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_edt__search_space_1_0)),
	"mdb.declarative_edt",
	"search_space",
	{ (void *)mercury_data_mdb__declarative_edt__du_name_ordered_search_space_1 },
	{ (void *)mercury_data_mdb__declarative_edt__du_ptag_ordered_search_space_1 },
	1,
	4,
	mercury_data_mdb__declarative_edt__functor_number_map_search_space_1
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0 = {
	"primop_foreign_proc",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1 = {
	"primop_builtin_call",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2 = {
	"primop_untraced_call",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3 = {
	"primop_unification",
	3
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_edt__enum_value_ordered_primitive_op_type_0[] = {
	&mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0,
	&mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1,
	&mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2,
	&mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_edt__enum_name_ordered_primitive_op_type_0[] = {
	&mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1,
	&mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0,
	&mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3,
	&mercury_data_mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2
};

const MR_Integer mercury_data_mdb__declarative_edt__functor_number_map_primitive_op_type_0[] = {
	1,
	0,
	3,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_primitive_op_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_edt__primitive_op_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_edt__primitive_op_type_0_0)),
	"mdb.declarative_edt",
	"primitive_op_type",
	{ (void *)mercury_data_mdb__declarative_edt__enum_name_ordered_primitive_op_type_0 },
	{ (void *)mercury_data_mdb__declarative_edt__enum_value_ordered_primitive_op_type_0 },
	4,
	4,
	mercury_data_mdb__declarative_edt__functor_number_map_primitive_op_type_0
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_edt__field_types_maybe_found_descendent_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_maybe_found_descendent_0_0 = {
	"found",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_edt__field_types_maybe_found_descendent_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_maybe_found_descendent_0_1 = {
	"not_found",
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

const MR_PseudoTypeInfo mercury_data_mdb__declarative_edt__field_types_maybe_found_descendent_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_maybe_found_descendent_0_2 = {
	"require_explicit_subtree",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_edt__field_types_maybe_found_descendent_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_maybe_found_descendent_0_0[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_maybe_found_descendent_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_maybe_found_descendent_0_1[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_maybe_found_descendent_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_maybe_found_descendent_0_2[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_maybe_found_descendent_0_2

};

const MR_DuPtagLayout mercury_data_mdb__declarative_edt__du_ptag_ordered_maybe_found_descendent_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_edt__du_stag_ordered_maybe_found_descendent_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_edt__du_stag_ordered_maybe_found_descendent_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_edt__du_stag_ordered_maybe_found_descendent_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_name_ordered_maybe_found_descendent_0[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_maybe_found_descendent_0_0,
	&mercury_data_mdb__declarative_edt__du_functor_desc_maybe_found_descendent_0_1,
	&mercury_data_mdb__declarative_edt__du_functor_desc_maybe_found_descendent_0_2
};

const MR_Integer mercury_data_mdb__declarative_edt__functor_number_map_maybe_found_descendent_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_maybe_found_descendent_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0)),
	"mdb.declarative_edt",
	"maybe_found_descendent",
	{ (void *)mercury_data_mdb__declarative_edt__du_name_ordered_maybe_found_descendent_0 },
	{ (void *)mercury_data_mdb__declarative_edt__du_ptag_ordered_maybe_found_descendent_0 },
	3,
	4,
	mercury_data_mdb__declarative_edt__functor_number_map_maybe_found_descendent_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_0 = {
	"not_found",
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
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_subterm_mode_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_edt__field_types_find_origin_response_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_edt__type_ctor_info_subterm_mode_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_1 = {
	"origin",
	4,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_edt__field_types_find_origin_response_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_edt__field_types_find_origin_response_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_edt__type_ctor_info_primitive_op_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_2 = {
	"primitive_op",
	5,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_edt__field_types_find_origin_response_0_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_3 = {
	"require_explicit_subtree",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_4 = {
	"require_explicit_supertree",
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

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_find_origin_response_0_0[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_0,
	&mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_3,
	&mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_4

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_find_origin_response_0_1[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_stag_ordered_find_origin_response_0_2[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_2

};

const MR_DuPtagLayout mercury_data_mdb__declarative_edt__du_ptag_ordered_find_origin_response_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_edt__du_stag_ordered_find_origin_response_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_edt__du_stag_ordered_find_origin_response_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_edt__du_stag_ordered_find_origin_response_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_edt__du_name_ordered_find_origin_response_0[] = {
	&mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_0,
	&mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_1,
	&mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_2,
	&mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_3,
	&mercury_data_mdb__declarative_edt__du_functor_desc_find_origin_response_0_4
};

const MR_Integer mercury_data_mdb__declarative_edt__functor_number_map_find_origin_response_0[] = {
	0,
	1,
	2,
	3,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_find_origin_response_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_edt__find_origin_response_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_edt__find_origin_response_0_0)),
	"mdb.declarative_edt",
	"find_origin_response",
	{ (void *)mercury_data_mdb__declarative_edt__du_name_ordered_find_origin_response_0 },
	{ (void *)mercury_data_mdb__declarative_edt__du_ptag_ordered_find_origin_response_0 },
	5,
	4,
	mercury_data_mdb__declarative_edt__functor_number_map_find_origin_response_0
};

const MR_ConstString mercury_data_mdb__declarative_edt__type_class_id_var_names_mercury_edt_2[] = {
	"S",
	"T",
};

const MR_TypeClassMethod mercury_data_mdb__declarative_edt__type_class_id_method_ids_mercury_edt_2[] = {
	{ "edt_question", 3, MR_PREDICATE },
	{ "edt_get_e_bug", 3, MR_PREDICATE },
	{ "edt_get_i_bug", 4, MR_PREDICATE },
	{ "edt_children", 3, MR_PREDICATE },
	{ "edt_parent", 3, MR_PREDICATE },
	{ "edt_dependency", 6, MR_PREDICATE },
	{ "edt_subterm_mode", 5, MR_PREDICATE },
	{ "edt_is_implicit_root", 2, MR_PREDICATE },
	{ "edt_same_nodes", 3, MR_PREDICATE },
	{ "edt_topmost_node", 2, MR_PREDICATE },
	{ "edt_number_of_events", 4, MR_PREDICATE },
	{ "edt_subtree_suspicion", 4, MR_PREDICATE },
	{ "edt_context", 4, MR_PREDICATE },
	{ "edt_proc_label", 3, MR_FUNCTION },
	{ "edt_arg_pos_to_user_arg_num", 4, MR_FUNCTION },
};

static const MR_TypeClassId mercury_data_mdb__declarative_edt__type_class_id_mercury_edt_2 = {
	"mdb.declarative_edt",
	"mercury_edt",
	2,
	2,
	15,
	mercury_data_mdb__declarative_edt__type_class_id_var_names_mercury_edt_2,
	mercury_data_mdb__declarative_edt__type_class_id_method_ids_mercury_edt_2
};

const MR_TypeClassDeclStruct mercury_data_mdb__declarative_edt__type_class_decl_mercury_edt_2 = {
	&mercury_data_mdb__declarative_edt__type_class_id_mercury_edt_2,
	0,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"lambda_declarative_edt_m_1308",
4,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1308,
"d1;c8;d1;c3;e;c2;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_2 = {
{
MR_FUNCTION,
"mdb.declarative_edt",
"mdb.declarative_edt",
"lambda_declarative_edt_m_1310",
3,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1310,
"d1;c8;d1;c3;e;c2;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_3 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"add_original_weight",
7,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1312,
"d1;c8;d1;c3;e;c2;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__calc_suspect_weight_7_0_4 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"lambda_declarative_edt_m_1315",
4,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1315,
"d1;c8;d1;c3;e;c2;d2;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__add_children_8_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"adjust_suspect_status_from_oracle",
5,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1573,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__get_siblings_3_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"lambda_declarative_edt_m_1534",
2,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1534,
"d1;c5;d1;c4;d1;c3;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__propagate_status_upwards_6_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"propagate_status_downwards",
5,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1503,
"d1;c8;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__assert_suspect_is_valid_4_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"propagate_status_downwards",
5,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
846,
"d1;c12;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__first_unknown_descendent_list_6_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"lambda_declarative_edt_m_1909",
3,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1909,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__first_unknown_descendent_list_6_0_2 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"lambda_declarative_edt_m_1916",
3,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1916,
"d1;c9;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__choose_skipped_suspect_2_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"least_skipped",
5,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1852,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__force_propagate_status_downwards_6_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"propagate_status_downwards",
7,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1233,
"d1;c12;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__recalc_weights_upto_ancestor_5_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"lambda_declarative_edt_m_1386",
2,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1386,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__revise_root_3_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"lambda_declarative_edt_m_915",
6,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
915,
"d1;c4;d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__revise_root_3_0_2 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"lambda_declarative_edt_m_930",
3,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
930,
"d1;c4;d1;c30;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"find_inconsistency_in_weights_2",
4,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1473,
"d1;c10;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_2 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"find_inconsistency_in_weights_2",
4,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1473,
"d1;c10;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_3 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"find_inconsistency_in_weights_2",
4,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1473,
"d1;c10;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_4 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"find_inconsistency_in_weights_2",
4,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1473,
"d1;c10;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_5 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"find_inconsistency_in_weights_2",
4,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1473,
"d1;c10;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_6 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"find_inconsistency_in_weights_2",
4,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1473,
"d1;c10;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_7 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"find_inconsistency_in_weights_2",
4,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1473,
"d1;c10;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_8 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"find_inconsistency_in_weights_2",
4,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1473,
"d1;c10;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__update_weighting_heuristic_4_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"lambda_declarative_edt_m_2057",
3,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
2057,
"d1;c6;e;c3;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__propagate_status_downwards_7_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"propagate_status_downwards",
7,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1199,
"d1;c9;t;c5;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_edt__force_propagate_status_downwards_5_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"propagate_status_downwards",
7,
0
},
"mdb.declarative_edt",
"declarative_edt.m",
1233,
"d1;c12;d1;c3;"
};

MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(mdb__declarative_edt_module0)
	MR_init_entry1(mdb__declarative_edt__edt_question_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_question_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_question_3_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module1)
	MR_init_entry1(mdb__declarative_edt__edt_get_e_bug_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_get_e_bug_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_get_e_bug_3_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_3);

MR_BEGIN_MODULE(mdb__declarative_edt_module2)
	MR_init_entry1(mdb__declarative_edt__edt_get_i_bug_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_get_i_bug_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_get_i_bug_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module3)
	MR_init_entry1(mdb__declarative_edt__edt_children_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_children_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_children_3_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module4)
	MR_init_entry1(mdb__declarative_edt__edt_parent_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_parent_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_parent_3_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_4);

MR_BEGIN_MODULE(mdb__declarative_edt_module5)
	MR_init_entry1(mdb__declarative_edt__edt_dependency_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_dependency_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_dependency_6_0));
	MR_np_tailcall_ent(do_call_class_method_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module6)
	MR_init_entry1(mdb__declarative_edt__edt_subterm_mode_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_subterm_mode_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_subterm_mode_5_0));
	MR_np_tailcall_ent(do_call_class_method_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module7)
	MR_init_entry1(mdb__declarative_edt__edt_is_implicit_root_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_is_implicit_root_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_is_implicit_root_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module8)
	MR_init_entry1(mdb__declarative_edt__edt_same_nodes_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_same_nodes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 9;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_same_nodes_3_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module9)
	MR_init_entry1(mdb__declarative_edt__edt_topmost_node_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_topmost_node_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 10;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_topmost_node_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module10)
	MR_init_entry1(mdb__declarative_edt__edt_number_of_events_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_number_of_events_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 11;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_number_of_events_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module11)
	MR_init_entry1(mdb__declarative_edt__edt_subtree_suspicion_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_subtree_suspicion_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 12;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_subtree_suspicion_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module12)
	MR_init_entry1(mdb__declarative_edt__edt_context_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__edt_context_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 13;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__edt_context_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module13)
	MR_init_entry1(fn__mdb__declarative_edt__edt_proc_label_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_edt__edt_proc_label_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 14;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mdb__declarative_edt__edt_proc_label_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module14)
	MR_init_entry1(fn__mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 15;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module15)
	MR_init_entry1(fn__mdb__declarative_edt__primitive_op_type_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_edt__primitive_op_type_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__counter__init_1_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__bimap__init_0_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module16)
	MR_init_entry1(fn__mdb__declarative_edt__empty_search_space_0_0);
	MR_init_label4(fn__mdb__declarative_edt__empty_search_space_0_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_edt__empty_search_space_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		fn__mdb__declarative_edt__empty_search_space_0_0_i2);
MR_def_label(fn__mdb__declarative_edt__empty_search_space_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		fn__mdb__declarative_edt__empty_search_space_0_0_i3);
MR_def_label(fn__mdb__declarative_edt__empty_search_space_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__mdb__declarative_edt__empty_search_space_0_0_i4);
MR_def_label(fn__mdb__declarative_edt__empty_search_space_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__bimap__init_0_0,
		fn__mdb__declarative_edt__empty_search_space_0_0_i5);
MR_def_label(fn__mdb__declarative_edt__empty_search_space_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module17)
	MR_init_entry1(mdb__declarative_edt__calc_weight_5_0);
	MR_init_label1(mdb__declarative_edt__calc_weight_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__calc_weight_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__calc_weight_5_0_i3);
	}
	MR_r2 = (MR_Integer) 11;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__calc_weight_5_0));
	MR_np_tailcall_ent(do_call_class_method_2);
MR_def_label(mdb__declarative_edt__calc_weight_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__calc_weight_5_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__type_info_from_typeclass_info_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module18)
	MR_init_entry1(mdb__declarative_edt__initialise_search_space_4_0);
	MR_init_label8(mdb__declarative_edt__initialise_search_space_4_0,3,5,7,2,8,9,10,11)
	MR_init_label5(mdb__declarative_edt__initialise_search_space_4_0,12,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__initialise_search_space_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__initialise_search_space_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 2;
	MR_GOTO_LAB(mdb__declarative_edt__initialise_search_space_4_0_i2);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__initialise_search_space_4_0_i5);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__initialise_search_space_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_edt__initialise_search_space_4_0_i7);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 12;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__initialise_search_space_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_edt__initialise_search_space_4_0_i7);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__initialise_search_space_4_0_i8);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdb__declarative_edt__initialise_search_space_4_0_i9);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__initialise_search_space_4_0_i10);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__initialise_search_space_4_0_i11);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		mdb__declarative_edt__initialise_search_space_4_0_i12);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		mdb__declarative_edt__initialise_search_space_4_0_i13);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__initialise_search_space_4_0_i14);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__initialise_search_space_4_0_i15);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__bimap__init_0_0,
		mdb__declarative_edt__initialise_search_space_4_0_i16);
MR_def_label(mdb__declarative_edt__initialise_search_space_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module19)
	MR_init_entry1(mdb__declarative_edt__root_2_0);
	MR_init_label1(mdb__declarative_edt__root_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__root_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__root_2_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__declarative_edt__root_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module20)
	MR_init_entry1(mdb__declarative_edt__topmost_det_2_0);
	MR_init_label1(mdb__declarative_edt__topmost_det_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__topmost_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__topmost_det_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_edt__topmost_det_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module21)
	MR_init_entry1(fn__mdb__declarative_edt__new_child_status_1_0);
	MR_init_label3(fn__mdb__declarative_edt__new_child_status_1_0,9,10,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_edt__new_child_status_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_edt__new_child_status_1_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__mdb__declarative_edt__new_child_status_1_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_child_status_1_0_i9) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_child_status_1_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_child_status_1_0_i9) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_child_status_1_0_i9) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_child_status_1_0_i10) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_child_status_1_0_i4));
MR_def_label(fn__mdb__declarative_edt__new_child_status_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_proceed();
MR_def_label(fn__mdb__declarative_edt__new_child_status_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_proceed();
MR_def_label(fn__mdb__declarative_edt__new_child_status_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module22)
	MR_init_entry1(mdb__declarative_edt__lookup_suspect_3_0);
	MR_init_label2(mdb__declarative_edt__lookup_suspect_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__lookup_suspect_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_r2, 4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		mdb__declarative_edt__lookup_suspect_3_0_i3);
MR_def_label(mdb__declarative_edt__lookup_suspect_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__lookup_suspect_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_edt__lookup_suspect_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(mdb__declarative_edt_module23)
	MR_init_entry1(mdb__declarative_edt__calc_suspect_weight_7_0);
	MR_init_label8(mdb__declarative_edt__calc_suspect_weight_7_0,24,3,6,4,8,11,12,13)
	MR_init_label8(mdb__declarative_edt__calc_suspect_weight_7_0,14,15,16,17,18,19,20,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__calc_suspect_weight_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r7 = MR_ctfield(0, MR_r6, 6);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__calc_suspect_weight_7_0_i3);
	}
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(1, MR_r7, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(mdb__declarative_edt__calc_suspect_weight_7_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_GOTO_LAB(mdb__declarative_edt__calc_suspect_weight_7_0_i24);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,3)) {
		MR_GOTO_LAB(mdb__declarative_edt__calc_suspect_weight_7_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_GOTO_LAB(mdb__declarative_edt__calc_suspect_weight_7_0_i24);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mdb__declarative_edt__calc_weight_5_0,
		mdb__declarative_edt__calc_suspect_weight_7_0_i8);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__calc_suspect_weight_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1308__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__calc_suspect_weight_7_0_i11);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdb__declarative_edt__calc_suspect_weight_7_0_i12);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__calc_suspect_weight_7_0_i13);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__calc_suspect_weight_7_0_i14);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1310__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		mdb__declarative_edt__calc_suspect_weight_7_0_i15);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__add_original_weight_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__calc_suspect_weight_7_0_i16);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__foldl2_6_0,
		mdb__declarative_edt__calc_suspect_weight_7_0_i17);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1315__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__calc_suspect_weight_7_0_i18);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		mdb__declarative_edt__calc_suspect_weight_7_0_i19);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__calc_suspect_weight_7_0_i20);
	}
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(5));
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(9);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((((MR_Integer) MR_sv(4) - (MR_Integer) MR_sv(1)) + (MR_Integer) MR_r1) + (MR_Integer) MR_sv(5));
	MR_r2 = MR_sv(2);
MR_def_label(mdb__declarative_edt__calc_suspect_weight_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module24)
	MR_init_entry1(mdb__declarative_edt__excluded_complement_2_0);
	MR_init_label2(mdb__declarative_edt__excluded_complement_2_0,10,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__excluded_complement_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__excluded_complement_2_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(mdb__declarative_edt__excluded_complement_2_0_i4) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__excluded_complement_2_0_i4) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__excluded_complement_2_0_i10) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__excluded_complement_2_0_i4) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__excluded_complement_2_0_i4) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__excluded_complement_2_0_i10) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__excluded_complement_2_0_i4));
MR_def_label(mdb__declarative_edt__excluded_complement_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(mdb__declarative_edt__excluded_complement_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module25)
	MR_init_entry1(mdb__declarative_edt__add_weight_to_ancestors_4_0);
	MR_init_label7(mdb__declarative_edt__add_weight_to_ancestors_4_0,40,6,8,9,12,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__add_weight_to_ancestors_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_edt__add_weight_to_ancestors_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__add_weight_to_ancestors_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__add_weight_to_ancestors_4_0_i6);
MR_def_label(mdb__declarative_edt__add_weight_to_ancestors_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__add_weight_to_ancestors_4_0_i2);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__add_weight_to_ancestors_4_0_i8);
MR_def_label(mdb__declarative_edt__add_weight_to_ancestors_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = ((MR_Integer) MR_ctfield(0, MR_r1, 5) + (MR_Integer) MR_sv(1));
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_sv(4), 4);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__add_weight_to_ancestors_4_0_i9);
MR_def_label(mdb__declarative_edt__add_weight_to_ancestors_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tempr2 = MR_ctfield(0, MR_sv(3), 2);
	MR_r5 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__add_weight_to_ancestors_4_0_i12);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr2),
		MR_LABEL_AP(mdb__declarative_edt__add_weight_to_ancestors_4_0_i12) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__add_weight_to_ancestors_4_0_i12) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__add_weight_to_ancestors_4_0_i3) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__add_weight_to_ancestors_4_0_i12) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__add_weight_to_ancestors_4_0_i12) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__add_weight_to_ancestors_4_0_i3) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__add_weight_to_ancestors_4_0_i12));
	}
MR_def_label(mdb__declarative_edt__add_weight_to_ancestors_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(mdb__declarative_edt__add_weight_to_ancestors_4_0_i40);
MR_def_label(mdb__declarative_edt__add_weight_to_ancestors_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
MR_def_label(mdb__declarative_edt__add_weight_to_ancestors_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module26)
	MR_init_entry1(mdb__declarative_edt__add_children_8_0);
	MR_init_label8(mdb__declarative_edt__add_children_8_0,2,3,4,5,6,7,8,9)
	MR_init_label6(mdb__declarative_edt__add_children_8_0,10,13,14,15,16,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__add_children_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tempr1;
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__add_children_8_0_i2);
MR_def_label(mdb__declarative_edt__add_children_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__add_children_8_0_i3);
MR_def_label(mdb__declarative_edt__add_children_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = ((MR_Integer) MR_ctfield(0, MR_tempr1, 3) + (MR_Integer) 1);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0,
		mdb__declarative_edt__add_children_8_0_i4);
MR_def_label(mdb__declarative_edt__add_children_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__add_children_8_0_i5);
MR_def_label(mdb__declarative_edt__add_children_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__add_children_8_0_i6);
MR_def_label(mdb__declarative_edt__add_children_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(7) = MR_tempr1;
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr4, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_sv(8) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_sv(6) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 4);
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__add_children_8_0_i7);
MR_def_label(mdb__declarative_edt__add_children_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__add_children_8_0_i8);
MR_def_label(mdb__declarative_edt__add_children_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr3 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tempr4 = MR_sv(10);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr4;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__add_children_8_0_i9);
MR_def_label(mdb__declarative_edt__add_children_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, search_space);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		mdb__declarative_edt__add_children_8_0_i10);
MR_def_label(mdb__declarative_edt__add_children_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__add_children_8_0_i11);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__calc_suspect_weight_7_0,
		mdb__declarative_edt__add_children_8_0_i13);
MR_def_label(mdb__declarative_edt__add_children_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_ctfield(0, MR_sv(2), 4);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__add_children_8_0_i14);
MR_def_label(mdb__declarative_edt__add_children_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__add_children_8_0_i15);
MR_def_label(mdb__declarative_edt__add_children_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = ((MR_Integer) MR_ctfield(0, MR_sv(7), 5) - (MR_Integer) MR_ctfield(0, MR_sv(5), 5));
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__add_children_8_0_i16);
MR_def_label(mdb__declarative_edt__add_children_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(mdb__declarative_edt__add_weight_to_ancestors_4_0,
		mdb__declarative_edt__add_children_8_0_i11);
MR_def_label(mdb__declarative_edt__add_children_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module27)
	MR_init_entry1(mdb__declarative_edt__children_6_0);
	MR_init_label8(mdb__declarative_edt__children_6_0,2,3,6,15,16,10,18,5)
	MR_init_label1(mdb__declarative_edt__children_6_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__children_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__children_6_0_i2);
MR_def_label(mdb__declarative_edt__children_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__children_6_0_i3);
MR_def_label(mdb__declarative_edt__children_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r1, 4);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__children_6_0_i5);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(0, MR_sv(4), 1);
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__children_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_edt__children_6_0_i6);
MR_def_label(mdb__declarative_edt__children_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__children_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 2);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__children_6_0_i10);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(mdb__declarative_edt__children_6_0_i10) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__children_6_0_i15) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__children_6_0_i10) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__children_6_0_i15) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__children_6_0_i15) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__children_6_0_i16) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__children_6_0_i10));
	}
MR_def_label(mdb__declarative_edt__children_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Word) MR_tbmkword(0, 4);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(mdb__declarative_edt__add_children_8_0,
		mdb__declarative_edt__children_6_0_i18);
MR_def_label(mdb__declarative_edt__children_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Word) MR_tbmkword(0, 5);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(mdb__declarative_edt__add_children_8_0,
		mdb__declarative_edt__children_6_0_i18);
MR_def_label(mdb__declarative_edt__children_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Word) MR_tbmkword(0, 6);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(mdb__declarative_edt__add_children_8_0,
		mdb__declarative_edt__children_6_0_i18);
MR_def_label(mdb__declarative_edt__children_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__children_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r5, 0);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__children_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(mdb__declarative_edt_module28)
	MR_init_entry1(mdb__declarative_edt__non_ignored_descendents_6_0);
	MR_init_label8(mdb__declarative_edt__non_ignored_descendents_6_0,36,4,5,8,10,6,13,15)
	MR_init_label1(mdb__declarative_edt__non_ignored_descendents_6_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__non_ignored_descendents_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__non_ignored_descendents_6_0_i36);
	}
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__non_ignored_descendents_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__non_ignored_descendents_6_0_i4);
MR_def_label(mdb__declarative_edt__non_ignored_descendents_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__non_ignored_descendents_6_0_i5);
MR_def_label(mdb__declarative_edt__non_ignored_descendents_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__non_ignored_descendents_6_0_i6);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__children_6_0,
		mdb__declarative_edt__non_ignored_descendents_6_0_i8);
MR_def_label(mdb__declarative_edt__non_ignored_descendents_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__non_ignored_descendents_6_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(mdb__declarative_edt__non_ignored_descendents_6_0,
		mdb__declarative_edt__non_ignored_descendents_6_0_i10);
MR_def_label(mdb__declarative_edt__non_ignored_descendents_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__non_ignored_descendents_6_0_i1);
	}
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_localcall_lab(mdb__declarative_edt__non_ignored_descendents_6_0,
		mdb__declarative_edt__non_ignored_descendents_6_0_i13);
MR_def_label(mdb__declarative_edt__non_ignored_descendents_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(6);
	}
	MR_np_localcall_lab(mdb__declarative_edt__non_ignored_descendents_6_0,
		mdb__declarative_edt__non_ignored_descendents_6_0_i13);
MR_def_label(mdb__declarative_edt__non_ignored_descendents_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__non_ignored_descendents_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__declarative_edt__non_ignored_descendents_6_0_i15);
MR_def_label(mdb__declarative_edt__non_ignored_descendents_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(mdb__declarative_edt__non_ignored_descendents_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module29)
	MR_init_entry1(mdb__declarative_edt__parent_3_0);
	MR_init_label2(mdb__declarative_edt__parent_3_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__parent_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__parent_3_0_i2);
MR_def_label(mdb__declarative_edt__parent_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__parent_3_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__declarative_edt__parent_3_0,1)
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


MR_BEGIN_MODULE(mdb__declarative_edt_module30)
	MR_init_entry1(mdb__declarative_edt__suspect_erroneous_2_0);
	MR_init_label1(mdb__declarative_edt__suspect_erroneous_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__suspect_erroneous_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__suspect_erroneous_2_0_i2);
MR_def_label(mdb__declarative_edt__suspect_erroneous_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 2));
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module31)
	MR_init_entry1(mdb__declarative_edt__get_siblings_3_0);
	MR_init_label6(mdb__declarative_edt__get_siblings_3_0,2,4,5,7,10,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__get_siblings_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__get_siblings_3_0_i2);
MR_def_label(mdb__declarative_edt__get_siblings_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__get_siblings_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(mdb__declarative_edt__get_siblings_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__get_siblings_3_0_i5);
MR_def_label(mdb__declarative_edt__get_siblings_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 4);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__get_siblings_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_edt__get_siblings_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r3, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__get_siblings_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_edt__get_siblings_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1534__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		mdb__declarative_edt__get_siblings_3_0_i12);
MR_def_label(mdb__declarative_edt__get_siblings_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module32)
	MR_init_entry1(mdb__declarative_edt__propagate_status_upwards_6_0);
	MR_init_label8(mdb__declarative_edt__propagate_status_upwards_6_0,2,5,6,7,11,13,14,9)
	MR_init_label1(mdb__declarative_edt__propagate_status_upwards_6_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__propagate_status_upwards_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__propagate_status_upwards_6_0_i2);
MR_def_label(mdb__declarative_edt__propagate_status_upwards_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__propagate_status_upwards_6_0_i3);
	}
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__get_siblings_3_0,
		mdb__declarative_edt__propagate_status_upwards_6_0_i5);
MR_def_label(mdb__declarative_edt__propagate_status_upwards_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__propagate_status_downwards_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, search_space);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		mdb__declarative_edt__propagate_status_upwards_6_0_i6);
MR_def_label(mdb__declarative_edt__propagate_status_upwards_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__propagate_status_upwards_6_0_i7);
MR_def_label(mdb__declarative_edt__propagate_status_upwards_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_status);
	MR_r2 = MR_ctfield(0, MR_sv(4), 2);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		mdb__declarative_edt__propagate_status_upwards_6_0_i11);
MR_def_label(mdb__declarative_edt__propagate_status_upwards_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdb__declarative_edt__propagate_status_upwards_6_0_i9);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(mdb__declarative_edt__propagate_status_upwards_6_0,
		mdb__declarative_edt__propagate_status_upwards_6_0_i13);
MR_def_label(mdb__declarative_edt__propagate_status_upwards_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_r2, 4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__propagate_status_upwards_6_0_i14);
MR_def_label(mdb__declarative_edt__propagate_status_upwards_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__declarative_edt__propagate_status_upwards_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(mdb__declarative_edt__propagate_status_upwards_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module33)
	MR_init_entry1(mdb__declarative_edt__assert_suspect_is_valid_4_0);
	MR_init_label8(mdb__declarative_edt__assert_suspect_is_valid_4_0,2,3,5,6,4,7,9,10)
	MR_init_label3(mdb__declarative_edt__assert_suspect_is_valid_4_0,13,11,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__assert_suspect_is_valid_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__assert_suspect_is_valid_4_0_i2);
MR_def_label(mdb__declarative_edt__assert_suspect_is_valid_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 4);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__assert_suspect_is_valid_4_0_i3);
MR_def_label(mdb__declarative_edt__assert_suspect_is_valid_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tempr3 = MR_sv(1);
	MR_r5 = MR_ctfield(0, MR_tempr3, 4);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__assert_suspect_is_valid_4_0_i5);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) 0 - (MR_Integer) MR_ctfield(0, MR_tempr3, 5));
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(mdb__declarative_edt__assert_suspect_is_valid_4_0_i4);
	}
MR_def_label(mdb__declarative_edt__assert_suspect_is_valid_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__propagate_status_downwards_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr4 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_TAG_COMMON(1,10,2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, search_space);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_sv(3) = MR_ctfield(0, MR_sv(1), 5);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		mdb__declarative_edt__assert_suspect_is_valid_4_0_i6);
MR_def_label(mdb__declarative_edt__assert_suspect_is_valid_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r3 = ((MR_Integer) 0 - (MR_Integer) MR_sv(3));
	MR_r1 = MR_sv(4);
MR_def_label(mdb__declarative_edt__assert_suspect_is_valid_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(mdb__declarative_edt__add_weight_to_ancestors_4_0,
		mdb__declarative_edt__assert_suspect_is_valid_4_0_i7);
MR_def_label(mdb__declarative_edt__assert_suspect_is_valid_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__excluded_complement_2_0,
		mdb__declarative_edt__assert_suspect_is_valid_4_0_i9);
MR_def_label(mdb__declarative_edt__assert_suspect_is_valid_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__assert_suspect_is_valid_4_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,10,3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(mdb__declarative_edt__propagate_status_upwards_6_0,
		mdb__declarative_edt__assert_suspect_is_valid_4_0_i10);
MR_def_label(mdb__declarative_edt__assert_suspect_is_valid_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_erroneous_2_0,
		mdb__declarative_edt__assert_suspect_is_valid_4_0_i13);
MR_def_label(mdb__declarative_edt__assert_suspect_is_valid_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__assert_suspect_is_valid_4_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_sv(6);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(4);
	MR_tfield(0, MR_r1, 5) = MR_sv(3);
	MR_tfield(0, MR_r1, 6) = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
MR_def_label(mdb__declarative_edt__assert_suspect_is_valid_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_sv(6);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_tempr1;
	MR_tfield(0, MR_r1, 5) = MR_sv(3);
	MR_tfield(0, MR_r1, 6) = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
MR_def_label(mdb__declarative_edt__assert_suspect_is_valid_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module34)
	MR_init_entry1(mdb__declarative_edt__assert_suspect_is_correct_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__assert_suspect_is_correct_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_tailcall_ent(mdb__declarative_edt__assert_suspect_is_valid_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module35)
	MR_init_entry1(mdb__declarative_edt__assert_suspect_is_erroneous_3_0);
	MR_init_label3(mdb__declarative_edt__assert_suspect_is_erroneous_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__assert_suspect_is_erroneous_3_0);
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
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__assert_suspect_is_erroneous_3_0_i2);
MR_def_label(mdb__declarative_edt__assert_suspect_is_erroneous_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_sv(2), 4);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__assert_suspect_is_erroneous_3_0_i3);
MR_def_label(mdb__declarative_edt__assert_suspect_is_erroneous_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,10,4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__propagate_status_upwards_6_0,
		mdb__declarative_edt__assert_suspect_is_erroneous_3_0_i4);
MR_def_label(mdb__declarative_edt__assert_suspect_is_erroneous_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module36)
	MR_init_entry1(mdb__declarative_edt__assert_suspect_is_inadmissible_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__assert_suspect_is_inadmissible_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_tailcall_ent(mdb__declarative_edt__assert_suspect_is_valid_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module37)
	MR_init_entry1(mdb__declarative_edt__ignore_suspect_4_0);
	MR_init_label6(mdb__declarative_edt__ignore_suspect_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__ignore_suspect_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__ignore_suspect_4_0_i2);
MR_def_label(mdb__declarative_edt__ignore_suspect_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__ignore_suspect_4_0_i3);
MR_def_label(mdb__declarative_edt__ignore_suspect_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__calc_suspect_weight_7_0,
		mdb__declarative_edt__ignore_suspect_4_0_i4);
MR_def_label(mdb__declarative_edt__ignore_suspect_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_ctfield(0, MR_sv(4), 4);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__ignore_suspect_4_0_i5);
MR_def_label(mdb__declarative_edt__ignore_suspect_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__ignore_suspect_4_0_i6);
MR_def_label(mdb__declarative_edt__ignore_suspect_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_ctfield(0, MR_tempr2, 5));
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__ignore_suspect_4_0_i7);
MR_def_label(mdb__declarative_edt__ignore_suspect_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdb__declarative_edt__add_weight_to_ancestors_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module38)
	MR_init_entry1(mdb__declarative_edt__skip_suspect_3_0);
	MR_init_label3(mdb__declarative_edt__skip_suspect_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__skip_suspect_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__skip_suspect_3_0_i2);
MR_def_label(mdb__declarative_edt__skip_suspect_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 3);
	MR_np_call_localret_ent(counter__allocate_3_0,
		mdb__declarative_edt__skip_suspect_3_0_i3);
MR_def_label(mdb__declarative_edt__skip_suspect_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr4 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr4, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_sv(2);
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(0, MR_tempr5, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr5, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 3) = MR_ctfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_ctfield(0, MR_tempr5, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_ctfield(0, MR_tempr5, 5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__skip_suspect_3_0_i4);
MR_def_label(mdb__declarative_edt__skip_suspect_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__search_3_1);

MR_BEGIN_MODULE(mdb__declarative_edt_module39)
	MR_init_entry1(mdb__declarative_edt__lookup_subterm_node_8_0);
	MR_init_label8(mdb__declarative_edt__lookup_subterm_node_8_0,2,3,4,8,9,10,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__lookup_subterm_node_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__lookup_subterm_node_8_0_i2);
MR_def_label(mdb__declarative_edt__lookup_subterm_node_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__lookup_subterm_node_8_0_i3);
MR_def_label(mdb__declarative_edt__lookup_subterm_node_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r2 = (MR_Integer) 7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__lookup_subterm_node_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_4),
		mercury__mdb__declarative_edt__lookup_subterm_node_8_0_i4);
MR_def_label(mdb__declarative_edt__lookup_subterm_node_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__lookup_subterm_node_8_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_sv(5), 5);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__lookup_subterm_node_8_0_i8);
MR_def_label(mdb__declarative_edt__lookup_subterm_node_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__lookup_subterm_node_8_0_i9);
MR_def_label(mdb__declarative_edt__lookup_subterm_node_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(bimap__search_3_1,
		mdb__declarative_edt__lookup_subterm_node_8_0_i10);
MR_def_label(mdb__declarative_edt__lookup_subterm_node_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__lookup_subterm_node_8_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(mdb__declarative_edt__lookup_subterm_node_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(mdb__declarative_edt__lookup_subterm_node_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module40)
	MR_init_entry1(fn__mdb__declarative_edt__get_edt_node_2_0);
	MR_init_label1(fn__mdb__declarative_edt__get_edt_node_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_edt__get_edt_node_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		fn__mdb__declarative_edt__get_edt_node_2_0_i2);
MR_def_label(fn__mdb__declarative_edt__get_edt_node_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module41)
	MR_init_entry1(fn__mdb__declarative_edt__new_parent_status_1_0);
	MR_init_label3(fn__mdb__declarative_edt__new_parent_status_1_0,9,10,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_edt__new_parent_status_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_edt__new_parent_status_1_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__mdb__declarative_edt__new_parent_status_1_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_parent_status_1_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_parent_status_1_0_i10) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_parent_status_1_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_parent_status_1_0_i9) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_parent_status_1_0_i10) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_edt__new_parent_status_1_0_i4));
MR_def_label(fn__mdb__declarative_edt__new_parent_status_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_proceed();
MR_def_label(fn__mdb__declarative_edt__new_parent_status_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_proceed();
MR_def_label(fn__mdb__declarative_edt__new_parent_status_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_oracle__answer_known_3_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module42)
	MR_init_entry1(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0);
	MR_init_label8(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,2,3,6,8,9,15,14,18)
	MR_init_label4(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,17,20,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i2);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i3);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,6)) {
		MR_GOTO_LAB(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i4);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i6);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i8);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_oracle__answer_known_3_0,
		mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i9);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i4);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i12);
	}
	MR_r3 = MR_ctfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i14);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i15);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_edt__assert_suspect_is_valid_4_0);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i17);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i18);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_edt__assert_suspect_is_erroneous_3_0);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0_i20);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_edt__assert_suspect_is_valid_4_0);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_edt__ignore_suspect_4_0);
MR_def_label(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module43)
	MR_init_entry1(mdb__declarative_edt__find_node_in_list_4_0);
	MR_init_label4(mdb__declarative_edt__find_node_in_list_4_0,5,3,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__find_node_in_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_node_in_list_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(3);
	MR_r2 = (MR_Integer) 9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__find_node_in_list_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__mdb__declarative_edt__find_node_in_list_4_0_i5);
MR_def_label(mdb__declarative_edt__find_node_in_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_node_in_list_4_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__find_node_in_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(mdb__declarative_edt__find_node_in_list_4_0,
		mdb__declarative_edt__find_node_in_list_4_0_i7);
MR_def_label(mdb__declarative_edt__find_node_in_list_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_node_in_list_4_0_i1);
	}
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__find_node_in_list_4_0,1)
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

MR_decl_entry(list__split_list_4_0);
MR_decl_entry(svmap__set_4_0);
MR_decl_entry(fn__list__append_2_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module44)
	MR_init_entry1(mdb__declarative_edt__insert_new_topmost_node_5_0);
	MR_init_label8(mdb__declarative_edt__insert_new_topmost_node_5_0,3,5,6,7,8,10,12,13)
	MR_init_label8(mdb__declarative_edt__insert_new_topmost_node_5_0,16,17,18,19,20,21,22,23)
	MR_init_label8(mdb__declarative_edt__insert_new_topmost_node_5_0,25,27,24,29,30,31,32,33)
	MR_init_label3(mdb__declarative_edt__insert_new_topmost_node_5_0,34,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__insert_new_topmost_node_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(11) = MR_r5;
	MR_sv(14) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__edt_children_3_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i3);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__insert_new_topmost_node_5_0_i2);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i5);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i6);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i7);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i8);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(mdb__declarative_edt__find_node_in_list_4_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i10);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__insert_new_topmost_node_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i12);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__split_list_4_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i13);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__insert_new_topmost_node_5_0_i9);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__insert_new_topmost_node_5_0_i9);
	}
	MR_sv(4) = MR_r2;
	MR_sv(8) = MR_ctfield(1, MR_r3, 1);
	MR_r1 = MR_ctfield(0, MR_sv(6), 2);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__new_parent_status_1_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i16);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_ctfield(0, MR_sv(6), 3) - (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(11), 2);
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i17);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(12) = MR_tempr1;
	MR_tempr2 = MR_sv(11);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(11) = MR_r1;
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 4);
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i18);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(13);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i19);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(13) = MR_tempr1;
	MR_tempr2 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__mdb__declarative_edt__new_child_status_1_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i20);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i21);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__list__append_2_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i22);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(13);
	MR_np_call_localret_ent(mdb__declarative_edt__add_children_8_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i23);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(7) - (MR_Integer) 1);
	MR_np_call_localret_ent(list__split_list_4_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i25);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__insert_new_topmost_node_5_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i27);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(mdb__declarative_edt__insert_new_topmost_node_5_0_i29);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i29);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_r4;
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(mdb__declarative_edt__calc_suspect_weight_7_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i30);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr2 = MR_sv(10);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(7) = MR_ctfield(0, MR_sv(4), 4);
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i31);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i32);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_sv(7) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i33);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__insert_new_topmost_node_5_0_i34);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(11);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(mdb__declarative_edt__adjust_suspect_status_from_oracle_5_0);
	}
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_edt__insert_new_topmost_node_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module45)
	MR_init_entry1(mdb__declarative_edt__extend_search_space_upwards_4_0);
	MR_init_label7(mdb__declarative_edt__extend_search_space_upwards_4_0,2,3,4,5,6,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__extend_search_space_upwards_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__extend_search_space_upwards_4_0_i2);
MR_def_label(mdb__declarative_edt__extend_search_space_upwards_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_edt__extend_search_space_upwards_4_0_i3);
MR_def_label(mdb__declarative_edt__extend_search_space_upwards_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__extend_search_space_upwards_4_0_i4);
MR_def_label(mdb__declarative_edt__extend_search_space_upwards_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__extend_search_space_upwards_4_0_i5);
MR_def_label(mdb__declarative_edt__extend_search_space_upwards_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Integer) 5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__extend_search_space_upwards_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_edt__extend_search_space_upwards_4_0_i6);
MR_def_label(mdb__declarative_edt__extend_search_space_upwards_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__extend_search_space_upwards_4_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_edt__insert_new_topmost_node_5_0,
		mdb__declarative_edt__extend_search_space_upwards_4_0_i8);
MR_def_label(mdb__declarative_edt__extend_search_space_upwards_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__extend_search_space_upwards_4_0,1)
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

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module46)
	MR_init_entry1(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0);
	MR_init_label5(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0,25,4,6,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr3, 4);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		mdb__declarative_edt__find_edt_node_in_suspect_list_4_0_i4);
MR_def_label(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0_i3);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		mdb__declarative_edt__find_edt_node_in_suspect_list_4_0_i6);
MR_def_label(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0_i25);
MR_def_label(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__search_3_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module47)
	MR_init_entry1(mdb__declarative_edt__resolve_origin_10_0);
	MR_init_label8(mdb__declarative_edt__resolve_origin_10_0,2,5,6,7,9,10,11,8)
	MR_init_label8(mdb__declarative_edt__resolve_origin_10_0,13,16,19,20,18,14,25,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__resolve_origin_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__resolve_origin_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_4),
		mercury__mdb__declarative_edt__resolve_origin_10_0_i2);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(mdb__declarative_edt__resolve_origin_10_0_i5) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__resolve_origin_10_0_i7) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__resolve_origin_10_0_i25) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__resolve_origin_10_0_i26));
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(mdb__declarative_edt__resolve_origin_10_0_i6);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(11);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(11);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_sv(7), 5);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__resolve_origin_10_0_i9);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__resolve_origin_10_0_i10);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(bimap__search_3_0,
		mdb__declarative_edt__resolve_origin_10_0_i11);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__resolve_origin_10_0_i8);
	}
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_sv(1) = MR_r6;
	MR_r5 = MR_sv(7);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(mdb__declarative_edt__resolve_origin_10_0_i13);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_sv(1) = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r1 = MR_sv(9);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r5;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(mdb__declarative_edt__children_6_0,
		mdb__declarative_edt__resolve_origin_10_0_i16);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__resolve_origin_10_0_i14);
	}
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__resolve_origin_10_0_i19);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__find_edt_node_in_suspect_list_4_0,
		mdb__declarative_edt__resolve_origin_10_0_i20);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__resolve_origin_10_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 3) = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 3) = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdb__declarative_edt__resolve_origin_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr2, 2);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(svmap__det_insert_4_0);
MR_decl_entry(mdb__declarative_execution__absolute_arg_num_3_0);
MR_decl_entry(mdb__declarative_execution__select_arg_at_pos_3_0);
MR_decl_entry(mdbcomp__rtti_access__find_initial_version_arg_num_3_0);
MR_decl_entry(mdb__term_rep__deref_path_3_0);
MR_decl_entry(__Unify___mdb__term_rep__term_rep_0_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module48)
	MR_init_entry1(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0);
	MR_init_label8(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,2,7,9,11,12,14,16,18)
	MR_init_label3(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,20,22,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i2);
MR_def_label(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__rtti_access, proc_layout);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__search_3_0,
		mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i7);
MR_def_label(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__rtti_access, proc_layout);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i9);
MR_def_label(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_execution__absolute_arg_num_3_0,
		mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i11);
MR_def_label(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__select_arg_at_pos_3_0,
		mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i12);
MR_def_label(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__find_initial_version_arg_num_3_0,
		mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i14);
MR_def_label(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__term_rep__deref_path_3_0,
		mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i16);
MR_def_label(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__select_arg_at_pos_3_0,
		mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i18);
MR_def_label(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i4);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdb__term_rep__deref_path_3_0,
		mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i20);
MR_def_label(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___mdb__term_rep__term_rep_0_0,
		mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i22);
MR_def_label(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module49)
	MR_init_entry1(mdb__declarative_edt__find_subterm_origin_11_0);
	MR_init_label8(mdb__declarative_edt__find_subterm_origin_11_0,2,9,11,12,8,6,4,18)
	MR_init_label4(mdb__declarative_edt__find_subterm_origin_11_0,17,19,22,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__find_subterm_origin_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_tempr4 = MR_r9;
	MR_sv(8) = MR_tempr4;
	MR_sv(9) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_subterm_node_8_0,
		mdb__declarative_edt__find_subterm_origin_11_0_i2);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_subterm_origin_11_0_i4);
	}
	MR_r5 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_subterm_origin_11_0_i6);
	}
	MR_sv(6) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(mdb__declarative_edt__extend_search_space_upwards_4_0,
		mdb__declarative_edt__find_subterm_origin_11_0_i9);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_subterm_origin_11_0_i8);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__find_subterm_origin_11_0_i11);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_edt__find_subterm_origin_11_0_i12);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__resolve_origin_10_0,
		mdb__declarative_edt__find_subterm_origin_11_0_i18);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_ctfield(1, MR_tempr1, 0);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(8);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__resolve_origin_10_0,
		mdb__declarative_edt__find_subterm_origin_11_0_i18);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_subterm_origin_11_0_i17);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Integer) 1;
	MR_r9 = MR_sv(8);
	MR_np_call_localret_ent(mdb__declarative_edt__resolve_origin_10_0,
		mdb__declarative_edt__find_subterm_origin_11_0_i18);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(10);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_0,
		mdb__declarative_edt__find_subterm_origin_11_0_i19);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_subterm_origin_11_0_i21);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Integer) 1;
	MR_r9 = MR_sv(8);
	MR_np_call_localret_ent(mdb__declarative_edt__resolve_origin_10_0,
		mdb__declarative_edt__find_subterm_origin_11_0_i22);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(10);
MR_def_label(mdb__declarative_edt__find_subterm_origin_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module50)
	MR_init_entry1(fn__mdb__declarative_edt__suspect_depth_2_0);
	MR_init_label1(fn__mdb__declarative_edt__suspect_depth_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_edt__suspect_depth_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		fn__mdb__declarative_edt__suspect_depth_2_0_i2);
MR_def_label(fn__mdb__declarative_edt__suspect_depth_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module51)
	MR_init_entry1(mdb__declarative_edt__travel_up_4_0);
	MR_init_label4(mdb__declarative_edt__travel_up_4_0,17,4,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__travel_up_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_edt__travel_up_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r4,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__travel_up_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__travel_up_4_0_i4);
MR_def_label(mdb__declarative_edt__travel_up_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__travel_up_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mdb__declarative_edt__travel_up_4_0_i17);
	}
MR_def_label(mdb__declarative_edt__travel_up_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
MR_def_label(mdb__declarative_edt__travel_up_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__set_4_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module52)
	MR_init_entry1(mdb__declarative_edt__incorporate_explicit_subtree_4_0);
	MR_init_label3(mdb__declarative_edt__incorporate_explicit_subtree_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__incorporate_explicit_subtree_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__incorporate_explicit_subtree_4_0_i2);
MR_def_label(mdb__declarative_edt__incorporate_explicit_subtree_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_sv(3), 4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__incorporate_explicit_subtree_4_0_i3);
MR_def_label(mdb__declarative_edt__incorporate_explicit_subtree_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_ctfield(0, MR_tempr1, 5);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(bimap__set_4_0,
		mdb__declarative_edt__incorporate_explicit_subtree_4_0_i4);
MR_def_label(mdb__declarative_edt__incorporate_explicit_subtree_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module53)
	MR_init_entry1(mdb__declarative_edt__incorporate_explicit_supertree_5_0);
	MR_init_label8(mdb__declarative_edt__incorporate_explicit_supertree_5_0,2,3,5,7,8,9,10,11)
	MR_init_label2(mdb__declarative_edt__incorporate_explicit_supertree_5_0,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__incorporate_explicit_supertree_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__incorporate_explicit_supertree_5_0_i2);
MR_def_label(mdb__declarative_edt__incorporate_explicit_supertree_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_edt__incorporate_explicit_supertree_5_0_i3);
MR_def_label(mdb__declarative_edt__incorporate_explicit_supertree_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__incorporate_explicit_supertree_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_edt__incorporate_explicit_supertree_5_0_i5);
MR_def_label(mdb__declarative_edt__incorporate_explicit_supertree_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__incorporate_explicit_supertree_5_0_i4);
	}
	MR_r1 = MR_sv(6);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_edt__insert_new_topmost_node_5_0,
		mdb__declarative_edt__incorporate_explicit_supertree_5_0_i7);
MR_def_label(mdb__declarative_edt__incorporate_explicit_supertree_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 5);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__incorporate_explicit_supertree_5_0_i8);
MR_def_label(mdb__declarative_edt__incorporate_explicit_supertree_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__incorporate_explicit_supertree_5_0_i9);
MR_def_label(mdb__declarative_edt__incorporate_explicit_supertree_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__incorporate_explicit_supertree_5_0_i10);
MR_def_label(mdb__declarative_edt__incorporate_explicit_supertree_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__incorporate_explicit_supertree_5_0_i11);
MR_def_label(mdb__declarative_edt__incorporate_explicit_supertree_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(bimap__set_4_0,
		mdb__declarative_edt__incorporate_explicit_supertree_5_0_i12);
MR_def_label(mdb__declarative_edt__incorporate_explicit_supertree_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__declarative_edt__incorporate_explicit_supertree_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module54)
	MR_init_entry1(fn__mdb__declarative_edt__get_weight_2_0);
	MR_init_label1(fn__mdb__declarative_edt__get_weight_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_edt__get_weight_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		fn__mdb__declarative_edt__get_weight_2_0_i2);
MR_def_label(fn__mdb__declarative_edt__get_weight_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module55)
	MR_init_entry1(mdb__declarative_edt__suspect_in_excluded_subtree_2_0);
	MR_init_label3(mdb__declarative_edt__suspect_in_excluded_subtree_2_0,2,10,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__suspect_in_excluded_subtree_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__suspect_in_excluded_subtree_2_0_i2);
MR_def_label(mdb__declarative_edt__suspect_in_excluded_subtree_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(mdb__declarative_edt__suspect_in_excluded_subtree_2_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_subtree_2_0_i5) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_subtree_2_0_i10) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_subtree_2_0_i5) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_subtree_2_0_i10) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_subtree_2_0_i10) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_subtree_2_0_i5) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_subtree_2_0_i5));
	}
MR_def_label(mdb__declarative_edt__suspect_in_excluded_subtree_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_edt__suspect_in_excluded_subtree_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module56)
	MR_init_entry1(mdb__declarative_edt__suspect_in_excluded_complement_2_0);
	MR_init_label3(mdb__declarative_edt__suspect_in_excluded_complement_2_0,2,11,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__suspect_in_excluded_complement_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__suspect_in_excluded_complement_2_0_i2);
MR_def_label(mdb__declarative_edt__suspect_in_excluded_complement_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(mdb__declarative_edt__suspect_in_excluded_complement_2_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_complement_2_0_i5) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_complement_2_0_i5) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_complement_2_0_i11) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_complement_2_0_i5) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_complement_2_0_i5) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_complement_2_0_i11) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__suspect_in_excluded_complement_2_0_i5));
	}
MR_def_label(mdb__declarative_edt__suspect_in_excluded_complement_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_edt__suspect_in_excluded_complement_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module57)
	MR_init_entry1(mdb__declarative_edt__suspect_unknown_2_0);
	MR_init_label1(mdb__declarative_edt__suspect_unknown_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__suspect_unknown_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__suspect_unknown_2_0_i2);
MR_def_label(mdb__declarative_edt__suspect_unknown_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 6));
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module58)
	MR_init_entry1(mdb__declarative_edt__suspect_skipped_2_0);
	MR_init_label1(mdb__declarative_edt__suspect_skipped_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__suspect_skipped_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__suspect_skipped_2_0_i2);
MR_def_label(mdb__declarative_edt__suspect_skipped_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_r1 = (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1));
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module59)
	MR_init_entry1(mdb__declarative_edt__suspect_ignored_2_0);
	MR_init_label1(mdb__declarative_edt__suspect_ignored_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__suspect_ignored_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__suspect_ignored_2_0_i2);
MR_def_label(mdb__declarative_edt__suspect_ignored_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module60)
	MR_init_entry1(mdb__declarative_edt__get_children_list_7_0);
	MR_init_label5(mdb__declarative_edt__get_children_list_7_0,4,7,9,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__get_children_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__get_children_list_7_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r4, 0);
	MR_sv(4) = MR_r1;
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	MR_np_localcall_lab(mdb__declarative_edt__get_children_list_7_0,
		mdb__declarative_edt__get_children_list_7_0_i4);
MR_def_label(mdb__declarative_edt__get_children_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__children_6_0,
		mdb__declarative_edt__get_children_list_7_0_i7);
MR_def_label(mdb__declarative_edt__get_children_list_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__get_children_list_7_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__declarative_edt__get_children_list_7_0_i9);
MR_def_label(mdb__declarative_edt__get_children_list_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(mdb__declarative_edt__get_children_list_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(mdb__declarative_edt__get_children_list_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module61)
	MR_init_entry1(mdb__declarative_edt__first_unknown_descendent_list_6_0);
	MR_init_label8(mdb__declarative_edt__first_unknown_descendent_list_6_0,2,5,6,9,15,8,17,4)
	MR_init_label1(mdb__declarative_edt__first_unknown_descendent_list_6_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__first_unknown_descendent_list_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1909__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		mdb__declarative_edt__first_unknown_descendent_list_6_0_i2);
MR_def_label(mdb__declarative_edt__first_unknown_descendent_list_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__first_unknown_descendent_list_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		mdb__declarative_edt__first_unknown_descendent_list_6_0_i5);
MR_def_label(mdb__declarative_edt__first_unknown_descendent_list_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__get_children_list_7_0,
		mdb__declarative_edt__first_unknown_descendent_list_6_0_i6);
MR_def_label(mdb__declarative_edt__first_unknown_descendent_list_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__first_unknown_descendent_list_6_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(mdb__declarative_edt__first_unknown_descendent_list_6_0,
		mdb__declarative_edt__first_unknown_descendent_list_6_0_i9);
MR_def_label(mdb__declarative_edt__first_unknown_descendent_list_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_edt__first_unknown_descendent_list_6_0_i3);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(mdb__declarative_edt__first_unknown_descendent_list_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__first_unknown_descendent_list_6_0_i15);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(mdb__declarative_edt__first_unknown_descendent_list_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_ctfield(1, MR_sv(1), 0);
	MR_decr_sp_and_return(5);
MR_def_label(mdb__declarative_edt__first_unknown_descendent_list_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__first_unknown_descendent_list_6_0_i17);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(mdb__declarative_edt__first_unknown_descendent_list_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(mdb__declarative_edt__first_unknown_descendent_list_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(3);
MR_def_label(mdb__declarative_edt__first_unknown_descendent_list_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module62)
	MR_init_entry1(mdb__declarative_edt__first_unknown_descendent_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__first_unknown_descendent_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(mdb__declarative_edt__first_unknown_descendent_list_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module63)
	MR_init_entry1(mdb__declarative_edt__choose_skipped_suspect_2_0);
	MR_init_label4(mdb__declarative_edt__choose_skipped_suspect_2_0,3,7,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__choose_skipped_suspect_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__choose_skipped_suspect_2_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(12,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__least_skipped_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_ctfield(0, MR_sv(1), 4);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		mdb__declarative_edt__choose_skipped_suspect_2_0_i3);
MR_def_label(mdb__declarative_edt__choose_skipped_suspect_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__choose_skipped_suspect_2_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__choose_skipped_suspect_2_0_i7);
MR_def_label(mdb__declarative_edt__choose_skipped_suspect_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__declarative_edt__choose_skipped_suspect_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	}
MR_def_label(mdb__declarative_edt__choose_skipped_suspect_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__choose_skipped_suspect_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module64)
	MR_init_entry1(mdb__declarative_edt__get_path_5_0);
	MR_init_label4(mdb__declarative_edt__get_path_5_0,18,2,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__get_path_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_edt__get_path_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(mdb__declarative_edt__get_path_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdb__declarative_edt__get_path_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__get_path_5_0_i3);
MR_def_label(mdb__declarative_edt__get_path_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__get_path_5_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(mdb__declarative_edt__get_path_5_0_i18);
	}
MR_def_label(mdb__declarative_edt__get_path_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module65)
	MR_init_entry1(mdb__declarative_edt__get_path_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__get_path_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(mdb__declarative_edt__get_path_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module66)
	MR_init_entry1(mdb__declarative_edt__suspect_correct_or_inadmissible_2_0);
	MR_init_label2(mdb__declarative_edt__suspect_correct_or_inadmissible_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__suspect_correct_or_inadmissible_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__suspect_correct_or_inadmissible_2_0_i2);
MR_def_label(mdb__declarative_edt__suspect_correct_or_inadmissible_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,1)) {
		MR_GOTO_LAB(mdb__declarative_edt__suspect_correct_or_inadmissible_2_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 3));
	MR_decr_sp_and_return(1);
	}
MR_def_label(mdb__declarative_edt__suspect_correct_or_inadmissible_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module67)
	MR_init_entry1(mdb__declarative_edt__suspect_inadmissible_2_0);
	MR_init_label1(mdb__declarative_edt__suspect_inadmissible_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__suspect_inadmissible_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__suspect_inadmissible_2_0_i2);
MR_def_label(mdb__declarative_edt__suspect_inadmissible_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 3));
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module68)
	MR_init_entry1(mdb__declarative_edt__give_up_subterm_tracking_3_0);
	MR_init_label4(mdb__declarative_edt__give_up_subterm_tracking_3_0,3,12,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__give_up_subterm_tracking_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__give_up_subterm_tracking_3_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__give_up_subterm_tracking_3_0_i3);
MR_def_label(mdb__declarative_edt__give_up_subterm_tracking_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(mdb__declarative_edt__give_up_subterm_tracking_3_0_i6);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(mdb__declarative_edt__give_up_subterm_tracking_3_0_i6) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__give_up_subterm_tracking_3_0_i6) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__give_up_subterm_tracking_3_0_i12) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__give_up_subterm_tracking_3_0_i6) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__give_up_subterm_tracking_3_0_i6) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__give_up_subterm_tracking_3_0_i12) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__give_up_subterm_tracking_3_0_i6));
	}
MR_def_label(mdb__declarative_edt__give_up_subterm_tracking_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_edt__give_up_subterm_tracking_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 0);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_edt__give_up_subterm_tracking_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module69)
	MR_init_entry1(mdb__declarative_edt__force_propagate_status_downwards_6_0);
	MR_init_label3(mdb__declarative_edt__force_propagate_status_downwards_6_0,2,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__force_propagate_status_downwards_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__force_propagate_status_downwards_6_0_i2);
MR_def_label(mdb__declarative_edt__force_propagate_status_downwards_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_sv(4), 4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__force_propagate_status_downwards_6_0_i3);
MR_def_label(mdb__declarative_edt__force_propagate_status_downwards_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r3 = MR_ctfield(0, MR_sv(3), 4);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__force_propagate_status_downwards_6_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdb__declarative_edt__force_propagate_status_downwards_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__propagate_status_downwards_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, search_space);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r7 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,10,6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r5 = MR_ctfield(1, MR_tempr3, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module70)
	MR_init_entry1(mdb__declarative_edt__recalc_weights_and_get_parents_6_0);
	MR_init_label8(mdb__declarative_edt__recalc_weights_and_get_parents_6_0,21,4,5,6,7,8,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__recalc_weights_and_get_parents_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_edt__recalc_weights_and_get_parents_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__recalc_weights_and_get_parents_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__recalc_weights_and_get_parents_6_0_i4);
MR_def_label(mdb__declarative_edt__recalc_weights_and_get_parents_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__recalc_weights_and_get_parents_6_0_i5);
MR_def_label(mdb__declarative_edt__recalc_weights_and_get_parents_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__calc_suspect_weight_7_0,
		mdb__declarative_edt__recalc_weights_and_get_parents_6_0_i6);
MR_def_label(mdb__declarative_edt__recalc_weights_and_get_parents_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(8) = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(7) = MR_ctfield(0, MR_sv(3), 4);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__recalc_weights_and_get_parents_6_0_i7);
MR_def_label(mdb__declarative_edt__recalc_weights_and_get_parents_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__recalc_weights_and_get_parents_6_0_i8);
MR_def_label(mdb__declarative_edt__recalc_weights_and_get_parents_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r6 = MR_ctfield(0, MR_sv(6), 0);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__recalc_weights_and_get_parents_6_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(mdb__declarative_edt__recalc_weights_and_get_parents_6_0_i21);
	}
MR_def_label(mdb__declarative_edt__recalc_weights_and_get_parents_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r6, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(mdb__declarative_edt__recalc_weights_and_get_parents_6_0_i21);
	}
MR_def_label(mdb__declarative_edt__recalc_weights_and_get_parents_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__sort_and_remove_dups_2_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module71)
	MR_init_entry1(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0);
	MR_init_label6(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0,14,2,3,6,5,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdb__declarative_edt__recalc_weights_and_get_parents_6_0,
		mdb__declarative_edt__recalc_weights_upto_ancestor_5_0_i2);
MR_def_label(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1386__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(3) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		mdb__declarative_edt__recalc_weights_upto_ancestor_5_0_i3);
MR_def_label(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		mdb__declarative_edt__recalc_weights_upto_ancestor_5_0_i6);
MR_def_label(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0_i14);
MR_def_label(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__recalc_weights_and_get_parents_6_0,
		mdb__declarative_edt__recalc_weights_upto_ancestor_5_0_i8);
MR_def_label(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module72)
	MR_init_entry1(mdb__declarative_edt__revise_root_3_0);
	MR_init_label8(mdb__declarative_edt__revise_root_3_0,32,5,6,7,8,9,10,12)
	MR_init_label6(mdb__declarative_edt__revise_root_3_0,13,11,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__revise_root_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r3, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__revise_root_3_0_i32);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_edt__revise_root_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r4, 0);
	MR_sv(3) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,10,2);
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__revise_root_3_0_i5);
MR_def_label(mdb__declarative_edt__revise_root_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__force_propagate_status_downwards_6_0,
		mdb__declarative_edt__revise_root_3_0_i6);
MR_def_label(mdb__declarative_edt__revise_root_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__IntroducedFrom__pred__revise_root__915__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 6);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__revise_root_3_0_i7);
MR_def_label(mdb__declarative_edt__revise_root_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, search_space);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		mdb__declarative_edt__revise_root_3_0_i8);
MR_def_label(mdb__declarative_edt__revise_root_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,10,4);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__revise_root_3_0_i9);
MR_def_label(mdb__declarative_edt__revise_root_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__propagate_status_upwards_6_0,
		mdb__declarative_edt__revise_root_3_0_i10);
MR_def_label(mdb__declarative_edt__revise_root_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__revise_root_3_0_i12);
MR_def_label(mdb__declarative_edt__revise_root_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_erroneous_2_0,
		mdb__declarative_edt__revise_root_3_0_i13);
MR_def_label(mdb__declarative_edt__revise_root_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__revise_root_3_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(8);
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 4) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 6) = MR_sv(4);
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_GOTO_LAB(mdb__declarative_edt__revise_root_3_0_i15);
	}
MR_def_label(mdb__declarative_edt__revise_root_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	}
MR_def_label(mdb__declarative_edt__revise_root_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__revise_root_3_0_i16);
MR_def_label(mdb__declarative_edt__revise_root_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__keys_2_0,
		mdb__declarative_edt__revise_root_3_0_i17);
MR_def_label(mdb__declarative_edt__revise_root_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__IntroducedFrom__pred__revise_root__930__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		mdb__declarative_edt__revise_root_3_0_i18);
MR_def_label(mdb__declarative_edt__revise_root_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module73)
	MR_init_entry1(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0);
	MR_init_label8(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,2,3,4,10,11,12,13,14)
	MR_init_label8(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,15,16,9,17,5,19,20,21)
	MR_init_label7(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,22,23,24,25,26,27,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i2);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i3);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__calc_suspect_weight_7_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i4);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_r5 = MR_ctfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r5)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i5);
	}
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i5);
	}
	MR_r5 = MR_ctfield(0, MR_tempr2, 4);
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i9);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i10) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i11) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i12) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i13) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i14) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i15) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i16));
	}
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,1)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i17);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i17);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,1)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i17);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i17);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i17);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i17);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,1)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i17);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 1,1)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i17);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i19);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i20);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i21);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i22);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" Calculated weight = ", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i23);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i24);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", Suspect = ", 12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i25);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i26);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Weights not consistent for suspect id ", 38);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_edt__find_inconsistency_in_weights_2_4_0_i27);
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,1)
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


MR_BEGIN_MODULE(mdb__declarative_edt_module74)
	MR_init_entry1(mdb__declarative_edt__should_check_search_space_consistency_0_0);
	MR_init_label1(mdb__declarative_edt__should_check_search_space_consistency_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__should_check_search_space_consistency_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__mdb__declarative_edt__should_check_search_space_consistency_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 1268 "declarative_edt.m"

    #ifdef MR_DD_CHECK_SEARCH_SPACE
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif
;}
#line 8210 "mdb.declarative_edt.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_edt__should_check_search_space_consistency_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__should_check_search_space_consistency_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module75)
	MR_init_entry1(mdb__declarative_edt__maybe_check_search_space_consistency_3_0);
	MR_init_label8(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,8,10,7,12,13,14,16,17)
	MR_init_label3(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,18,56,55)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__maybe_check_search_space_consistency_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__mdb__declarative_edt__maybe_check_search_space_consistency_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 1268 "declarative_edt.m"

    #ifdef MR_DD_CHECK_SEARCH_SPACE
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif
;}
#line 8255 "mdb.declarative_edt.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i56);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_ctfield(0, MR_r3, 6);
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i56);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i8);
MR_def_label(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,
		mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i10);
MR_def_label(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i55);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i16);
MR_def_label(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i12);
MR_def_label(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i13);
MR_def_label(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__find_inconsistency_in_weights_2_4_0,
		mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i14);
MR_def_label(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i55);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(3);
MR_def_label(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n Context = ", 12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i17);
MR_def_label(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_edt__maybe_check_search_space_consistency_3_0_i18);
MR_def_label(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("check_search_space_consistency", 30);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
MR_def_label(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module76)
	MR_init_entry1(fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0);
	MR_init_label2(fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0_i2);
MR_def_label(fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0_i3);
MR_def_label(fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Integer) 14;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module77)
	MR_init_entry1(mdb__declarative_edt__update_weighting_heuristic_4_0);
	MR_init_label8(mdb__declarative_edt__update_weighting_heuristic_4_0,30,5,6,4,8,9,10,11)
	MR_init_label1(mdb__declarative_edt__update_weighting_heuristic_4_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_edt__update_weighting_heuristic_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 6);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__update_weighting_heuristic_4_0_i30);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if ((MR_tempr2 != MR_r3)) {
		MR_GOTO_LAB(mdb__declarative_edt__update_weighting_heuristic_4_0_i30);
	}
	MR_r1 = MR_tempr3;
	MR_proceed();
	}
MR_def_label(mdb__declarative_edt__update_weighting_heuristic_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__update_weighting_heuristic_4_0_i5);
MR_def_label(mdb__declarative_edt__update_weighting_heuristic_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__is_empty_1_0,
		mdb__declarative_edt__update_weighting_heuristic_4_0_i6);
MR_def_label(mdb__declarative_edt__update_weighting_heuristic_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_edt__update_weighting_heuristic_4_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(mdb__declarative_edt__update_weighting_heuristic_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_sv(3), 4);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__update_weighting_heuristic_4_0_i8);
MR_def_label(mdb__declarative_edt__update_weighting_heuristic_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__keys_2_0,
		mdb__declarative_edt__update_weighting_heuristic_4_0_i9);
MR_def_label(mdb__declarative_edt__update_weighting_heuristic_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		mdb__declarative_edt__update_weighting_heuristic_4_0_i10);
MR_def_label(mdb__declarative_edt__update_weighting_heuristic_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__update_weighting_heuristic_4_0_i11);
MR_def_label(mdb__declarative_edt__update_weighting_heuristic_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_edt__update_weighting_heuristic_4_0_i12);
MR_def_label(mdb__declarative_edt__update_weighting_heuristic_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdb__declarative_edt__recalc_weights_upto_ancestor_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module78)
	MR_init_entry1(fn__mdb__declarative_edt__get_current_maybe_weighting_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_edt__get_current_maybe_weighting_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r2, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module79)
	MR_init_entry1(mdb__declarative_edt__suspect_is_leaf_2_0);
	MR_init_label3(mdb__declarative_edt__suspect_is_leaf_2_0,2,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__suspect_is_leaf_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__suspect_is_leaf_2_0_i2);
MR_def_label(mdb__declarative_edt__suspect_is_leaf_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__suspect_is_leaf_2_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__suspect_is_leaf_2_0_i1);
	}
	}
MR_def_label(mdb__declarative_edt__suspect_is_leaf_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__suspect_is_leaf_2_0,1)
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

MR_decl_entry(list__cons_3_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module80)
	MR_init_entry1(mdb__declarative_edt__propagate_status_downwards_7_0);
	MR_init_label6(mdb__declarative_edt__propagate_status_downwards_7_0,2,6,8,10,4,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__propagate_status_downwards_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__propagate_status_downwards_7_0_i2);
MR_def_label(mdb__declarative_edt__propagate_status_downwards_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_status);
	MR_r2 = MR_ctfield(0, MR_sv(4), 2);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		mdb__declarative_edt__propagate_status_downwards_7_0_i6);
MR_def_label(mdb__declarative_edt__propagate_status_downwards_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdb__declarative_edt__propagate_status_downwards_7_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_r2 = MR_ctfield(0, MR_sv(6), 4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__propagate_status_downwards_7_0_i8);
MR_def_label(mdb__declarative_edt__propagate_status_downwards_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r3 = MR_ctfield(0, MR_sv(4), 4);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__propagate_status_downwards_7_0_i10);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(mdb__declarative_edt__propagate_status_downwards_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__propagate_status_downwards_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr4 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, search_space);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r7 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,10,6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r5 = MR_ctfield(1, MR_tempr3, 0);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
MR_def_label(mdb__declarative_edt__propagate_status_downwards_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__cons_3_0,
		mdb__declarative_edt__propagate_status_downwards_7_0_i12);
MR_def_label(mdb__declarative_edt__propagate_status_downwards_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module81)
	MR_init_entry1(mdb__declarative_edt__propagate_status_downwards_5_0);
	MR_init_label1(mdb__declarative_edt__propagate_status_downwards_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__propagate_status_downwards_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r6 = MR_r5;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(mdb__declarative_edt__propagate_status_downwards_7_0,
		mdb__declarative_edt__propagate_status_downwards_5_0_i2);
MR_def_label(mdb__declarative_edt__propagate_status_downwards_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module82)
	MR_init_entry1(mdb__declarative_edt__force_propagate_status_downwards_5_0);
	MR_init_label4(mdb__declarative_edt__force_propagate_status_downwards_5_0,2,3,7,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__force_propagate_status_downwards_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__force_propagate_status_downwards_5_0_i2);
MR_def_label(mdb__declarative_edt__force_propagate_status_downwards_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_sv(4), 4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdb__declarative_edt__force_propagate_status_downwards_5_0_i3);
MR_def_label(mdb__declarative_edt__force_propagate_status_downwards_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r3 = MR_ctfield(0, MR_sv(3), 4);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__force_propagate_status_downwards_5_0_i5);
	}
	}
MR_def_label(mdb__declarative_edt__force_propagate_status_downwards_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(mdb__declarative_edt__force_propagate_status_downwards_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__propagate_status_downwards_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, search_space);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r7 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,10,6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r5 = MR_ctfield(1, MR_tempr3, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		mdb__declarative_edt__force_propagate_status_downwards_5_0_i7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module83)
	MR_init_entry1(mdb__declarative_edt__add_original_weight_7_0);
	MR_init_label2(mdb__declarative_edt__add_original_weight_7_0,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__add_original_weight_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__add_original_weight_7_0_i3);
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_r2 = (MR_Integer) 11;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__add_original_weight_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_edt__add_original_weight_7_0_i5);
MR_def_label(mdb__declarative_edt__add_original_weight_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_r2 = (MR_Integer) 12;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_edt__add_original_weight_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_edt__add_original_weight_7_0_i5);
MR_def_label(mdb__declarative_edt__add_original_weight_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module84)
	MR_init_entry1(mdb__declarative_edt__least_skipped_5_0);
	MR_init_label4(mdb__declarative_edt__least_skipped_5_0,2,14,3,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__least_skipped_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_r4, 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__least_skipped_5_0_i2);
MR_def_label(mdb__declarative_edt__least_skipped_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(mdb__declarative_edt__least_skipped_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdb__declarative_edt__least_skipped_5_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_sv(3), 0);
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if (((MR_Integer) MR_tempr2 <= (MR_Integer) MR_tempr3)) {
		MR_GOTO_LAB(mdb__declarative_edt__least_skipped_5_0_i15);
	}
	}
MR_def_label(mdb__declarative_edt__least_skipped_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(mdb__declarative_edt__least_skipped_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(mdb__declarative_edt__least_skipped_5_0_i14);
	}
MR_def_label(mdb__declarative_edt__least_skipped_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__program_representation__arg_pos_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module85)
	MR_init_entry1(__Unify___mdb__declarative_edt__find_origin_response_0_0);
	MR_init_label6(__Unify___mdb__declarative_edt__find_origin_response_0_0,10,96,6,8,98,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_edt__find_origin_response_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__find_origin_response_0_0_i96);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__find_origin_response_0_0_i10);
	}
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_edt__find_origin_response_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__find_origin_response_0_0_i98);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(2, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__find_origin_response_0_0_i98);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 1);
	MR_tempr2 = MR_ctfield(2, MR_tempr3, 1);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__find_origin_response_0_0_i98);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr3, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__find_origin_response_0_0_i98);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 3);
	MR_tempr2 = MR_ctfield(2, MR_tempr3, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__find_origin_response_0_0_i98);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 4);
	MR_tempr2 = MR_ctfield(2, MR_tempr3, 4);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_edt__find_origin_response_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__find_origin_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__find_origin_response_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 2);
	MR_sv(2) = MR_ctfield(1, MR_r1, 3);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 3);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__arg_pos_0_0,
		__Unify___mdb__declarative_edt__find_origin_response_0_0_i6);
MR_def_label(__Unify___mdb__declarative_edt__find_origin_response_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__find_origin_response_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__declarative_edt__find_origin_response_0_0_i8);
MR_def_label(__Unify___mdb__declarative_edt__find_origin_response_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__find_origin_response_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdb__declarative_edt__find_origin_response_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(__Unify___mdb__declarative_edt__find_origin_response_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___mdbcomp__program_representation__arg_pos_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module86)
	MR_init_entry1(__Compare___mdb__declarative_edt__find_origin_response_0_0);
	MR_init_label8(__Compare___mdb__declarative_edt__find_origin_response_0_0,60,195,55,67,86,62,73,27)
	MR_init_label8(__Compare___mdb__declarative_edt__find_origin_response_0_0,235,33,37,41,45,4,101,237)
	MR_init_label4(__Compare___mdb__declarative_edt__find_origin_response_0_0,9,13,17,228)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_edt__find_origin_response_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i27);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i55);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i195);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i195);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i60);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i62);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i101);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i101);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i67);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i195);
	}
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i101);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i101);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i73);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i86);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i101);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i235);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i195);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_ctfield(2, MR_r1, 1);
	MR_sv(7) = MR_ctfield(2, MR_r1, 2);
	MR_sv(6) = MR_ctfield(2, MR_r1, 3);
	MR_sv(5) = MR_ctfield(2, MR_r1, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_edt__find_origin_response_0_0_i33);
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i228);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__declarative_edt__find_origin_response_0_0_i37);
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i228);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_edt__find_origin_response_0_0_i41);
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i228);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_edt__find_origin_response_0_0_i45);
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i228);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i237);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i195);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i195);
	}
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 2);
	MR_sv(4) = MR_ctfield(1, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_edt__find_origin_response_0_0_i9);
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i228);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__arg_pos_0_0,
		__Compare___mdb__declarative_edt__find_origin_response_0_0_i13);
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i228);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__declarative_edt__find_origin_response_0_0_i17);
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__find_origin_response_0_0_i228);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_edt__find_origin_response_0_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module87)
	MR_init_entry1(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0);
	MR_init_label3(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0,6,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_edt__maybe_found_descendent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0_i6);
	}
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_edt__maybe_found_descendent_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module88)
	MR_init_entry1(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0);
	MR_init_label5(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0,10,25,4,27,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_edt__maybe_found_descendent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0_i10);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0_i25);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0_i25);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0_i7);
	}
MR_def_label(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0_i7);
	}
MR_def_label(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__maybe_found_descendent_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_r2 = MR_const_mask_field(MR_r2, 0);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module89)
	MR_init_entry1(__Unify___mdb__declarative_edt__primitive_op_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_edt__primitive_op_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module90)
	MR_init_entry1(__Compare___mdb__declarative_edt__primitive_op_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_edt__primitive_op_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___counter__counter_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___bimap__bimap_2_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module91)
	MR_init_entry1(__Unify___mdb__declarative_edt__search_space_1_0);
	MR_init_label7(__Unify___mdb__declarative_edt__search_space_1_0,2,4,6,8,10,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_edt__search_space_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(13) = MR_r1;
	MR_sv(14) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_edt__search_space_1_0_i2);
MR_def_label(__Unify___mdb__declarative_edt__search_space_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__search_space_1_0_i1);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_edt__search_space_1_0_i4);
MR_def_label(__Unify___mdb__declarative_edt__search_space_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__search_space_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___mdb__declarative_edt__search_space_1_0_i6);
MR_def_label(__Unify___mdb__declarative_edt__search_space_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__search_space_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___mdb__declarative_edt__search_space_1_0_i8);
MR_def_label(__Unify___mdb__declarative_edt__search_space_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__search_space_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___mdb__declarative_edt__search_space_1_0_i10);
MR_def_label(__Unify___mdb__declarative_edt__search_space_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__search_space_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___bimap__bimap_2_0,
		__Unify___mdb__declarative_edt__search_space_1_0_i12);
MR_def_label(__Unify___mdb__declarative_edt__search_space_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__search_space_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, weighting_heuristic);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___mdb__declarative_edt__search_space_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(__Compare___counter__counter_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___bimap__bimap_2_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module92)
	MR_init_entry1(__Compare___mdb__declarative_edt__search_space_1_0);
	MR_init_label7(__Compare___mdb__declarative_edt__search_space_1_0,3,7,11,15,19,23,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_edt__search_space_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_edt__search_space_1_0_i3);
MR_def_label(__Compare___mdb__declarative_edt__search_space_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__search_space_1_0_i32);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_edt__search_space_1_0_i7);
MR_def_label(__Compare___mdb__declarative_edt__search_space_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__search_space_1_0_i32);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___mdb__declarative_edt__search_space_1_0_i11);
MR_def_label(__Compare___mdb__declarative_edt__search_space_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__search_space_1_0_i32);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___mdb__declarative_edt__search_space_1_0_i15);
MR_def_label(__Compare___mdb__declarative_edt__search_space_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__search_space_1_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___mdb__declarative_edt__search_space_1_0_i19);
MR_def_label(__Compare___mdb__declarative_edt__search_space_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__search_space_1_0_i32);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___bimap__bimap_2_0,
		__Compare___mdb__declarative_edt__search_space_1_0_i23);
MR_def_label(__Compare___mdb__declarative_edt__search_space_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__search_space_1_0_i32);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, weighting_heuristic);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__declarative_edt__search_space_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module93)
	MR_init_entry1(__Unify___mdb__declarative_edt__subterm_mode_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_edt__subterm_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module94)
	MR_init_entry1(__Compare___mdb__declarative_edt__subterm_mode_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_edt__subterm_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module95)
	MR_init_entry1(__Unify___mdb__declarative_edt__subterm_origin_1_0);
	MR_init_label8(__Unify___mdb__declarative_edt__subterm_origin_1_0,4,76,8,10,77,16,20,79)
	MR_init_label1(__Unify___mdb__declarative_edt__subterm_origin_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_edt__subterm_origin_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Unify___mdb__declarative_edt__subterm_origin_1_0_i4) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_edt__subterm_origin_1_0_i76) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_edt__subterm_origin_1_0_i77) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_edt__subterm_origin_1_0_i20));
MR_def_label(__Unify___mdb__declarative_edt__subterm_origin_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r3 == MR_r2);
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_edt__subterm_origin_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__subterm_origin_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_edt__subterm_origin_1_0_i8);
MR_def_label(__Unify___mdb__declarative_edt__subterm_origin_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__subterm_origin_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__arg_pos_0_0,
		__Unify___mdb__declarative_edt__subterm_origin_1_0_i10);
MR_def_label(__Unify___mdb__declarative_edt__subterm_origin_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__subterm_origin_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__declarative_edt__subterm_origin_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__subterm_origin_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__arg_pos_0_0,
		__Unify___mdb__declarative_edt__subterm_origin_1_0_i16);
MR_def_label(__Unify___mdb__declarative_edt__subterm_origin_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__subterm_origin_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__declarative_edt__subterm_origin_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__subterm_origin_1_0_i79);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 0);
	MR_tempr4 = MR_r3;
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__subterm_origin_1_0_i79);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__subterm_origin_1_0_i79);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_edt__subterm_origin_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(__Unify___mdb__declarative_edt__subterm_origin_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module96)
	MR_init_entry1(__Compare___mdb__declarative_edt__subterm_origin_1_0);
	MR_init_label8(__Compare___mdb__declarative_edt__subterm_origin_1_0,4,73,5,74,20,23,115,132)
	MR_init_label8(__Compare___mdb__declarative_edt__subterm_origin_1_0,27,31,39,134,47,53,135,62)
	MR_init_label2(__Compare___mdb__declarative_edt__subterm_origin_1_0,66,129)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_edt__subterm_origin_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i4) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i20) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i39) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i53));
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__subterm_origin_1_0_i5);
	}
	if (MR_INT_NE(MR_tag(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__subterm_origin_1_0_i74);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__subterm_origin_1_0_i115);
	}
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__subterm_origin_1_0_i74);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__subterm_origin_1_0_i73);
	}
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i23) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i132) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i115) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i115));
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_edt__subterm_origin_1_0_i27);
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__subterm_origin_1_0_i129);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__arg_pos_0_0,
		__Compare___mdb__declarative_edt__subterm_origin_1_0_i31);
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__subterm_origin_1_0_i129);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i115) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i74) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i134) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i115));
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__arg_pos_0_0,
		__Compare___mdb__declarative_edt__subterm_origin_1_0_i47);
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__subterm_origin_1_0_i129);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i115) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i74) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i74) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__subterm_origin_1_0_i135));
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 0);
	MR_r2 = MR_ctfield(3, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__declarative_edt__subterm_origin_1_0_i62);
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__subterm_origin_1_0_i129);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_edt__subterm_origin_1_0_i66);
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__subterm_origin_1_0_i129);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_edt__subterm_origin_1_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module97)
	MR_init_entry1(__Unify___mdb__declarative_edt__suspect_1_0);
	MR_init_label5(__Unify___mdb__declarative_edt__suspect_1_0,2,4,6,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__declarative_edt__suspect_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_edt__suspect_1_0_i2);
MR_def_label(__Unify___mdb__declarative_edt__suspect_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__suspect_1_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_edt__suspect_1_0_i4);
MR_def_label(__Unify___mdb__declarative_edt__suspect_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__suspect_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdb__declarative_edt__suspect_status_0_0,
		__Unify___mdb__declarative_edt__suspect_1_0_i6);
MR_def_label(__Unify___mdb__declarative_edt__suspect_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__suspect_1_0_i1);
	}
	if ((MR_sv(3) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__suspect_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,10,6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_edt__suspect_1_0_i8);
MR_def_label(__Unify___mdb__declarative_edt__suspect_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__suspect_1_0_i1);
	}
	MR_r1 = (MR_sv(5) == MR_sv(10));
	MR_decr_sp_and_return(12);
MR_def_label(__Unify___mdb__declarative_edt__suspect_1_0,1)
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


MR_BEGIN_MODULE(mdb__declarative_edt_module98)
	MR_init_entry1(__Compare___mdb__declarative_edt__suspect_1_0);
	MR_init_label6(__Compare___mdb__declarative_edt__suspect_1_0,3,7,11,15,19,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__declarative_edt__suspect_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_edt__suspect_1_0_i3);
MR_def_label(__Compare___mdb__declarative_edt__suspect_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_1_0_i27);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_edt__suspect_1_0_i7);
MR_def_label(__Compare___mdb__declarative_edt__suspect_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_1_0_i27);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdb__declarative_edt__suspect_status_0_0,
		__Compare___mdb__declarative_edt__suspect_1_0_i11);
MR_def_label(__Compare___mdb__declarative_edt__suspect_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_1_0_i27);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_edt__suspect_1_0_i15);
MR_def_label(__Compare___mdb__declarative_edt__suspect_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_1_0_i27);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,10,6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_edt__suspect_1_0_i19);
MR_def_label(__Compare___mdb__declarative_edt__suspect_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_1_0_i27);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_edt__suspect_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module99)
	MR_init_entry1(__Unify___mdb__declarative_edt__suspect_id_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_edt__suspect_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module100)
	MR_init_entry1(__Compare___mdb__declarative_edt__suspect_id_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_edt__suspect_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module101)
	MR_init_entry1(__Unify___mdb__declarative_edt__suspect_status_0_0);
	MR_init_label2(__Unify___mdb__declarative_edt__suspect_status_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__declarative_edt__suspect_status_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__suspect_status_0_0_i4);
	}
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_edt__suspect_status_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_edt__suspect_status_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_edt__suspect_status_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module102)
	MR_init_entry1(__Compare___mdb__declarative_edt__suspect_status_0_0);
	MR_init_label8(__Compare___mdb__declarative_edt__suspect_status_0_0,5,16,27,38,49,60,71,81)
	MR_init_label4(__Compare___mdb__declarative_edt__suspect_status_0_0,4,85,91,84)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__declarative_edt__suspect_status_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i27) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i38) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i60) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i71));
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i91);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i81);
	}
	MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i91);
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i85);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91));
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i85);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91));
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i85);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91));
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i85);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91));
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i85);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_edt__suspect_status_0_0_i91));
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i85);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r2),6)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i85);
	}
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i84);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_edt__suspect_status_0_0_i91);
	}
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_edt__suspect_status_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module103)
	MR_init_entry1(__Unify___mdb__declarative_edt__weighting_heuristic_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_edt__weighting_heuristic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module104)
	MR_init_entry1(__Compare___mdb__declarative_edt__weighting_heuristic_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_edt__weighting_heuristic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module105)
	MR_init_entry1(mdb__declarative_edt__IntroducedFrom__pred__revise_root__915__1_6_0);
	MR_init_label1(mdb__declarative_edt__IntroducedFrom__pred__revise_root__915__1_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__IntroducedFrom__pred__revise_root__915__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__IntroducedFrom__pred__revise_root__915__1_6_0_i2);
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__revise_root__915__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mdb__declarative_edt__force_propagate_status_downwards_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module106)
	MR_init_entry1(mdb__declarative_edt__IntroducedFrom__pred__revise_root__930__1_3_0);
	MR_init_label1(mdb__declarative_edt__IntroducedFrom__pred__revise_root__930__1_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__IntroducedFrom__pred__revise_root__930__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__IntroducedFrom__pred__revise_root__930__1_3_0_i2);
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__revise_root__930__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__declarative_edt__suspect_is_leaf_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module107)
	MR_init_entry1(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0);
	MR_init_label4(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0,2,3,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0_i2);
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0_i3);
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0_i4);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0_i1);
	}
	}
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2057__1_3_0,1)
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


MR_BEGIN_MODULE(mdb__declarative_edt_module108)
	MR_init_entry1(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1308__1_4_0);
	MR_init_label1(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1308__1_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1308__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1308__1_4_0_i2);
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1308__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__declarative_edt__lookup_suspect_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module109)
	MR_init_entry1(fn__mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1310__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1310__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module110)
	MR_init_entry1(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1315__1_4_0);
	MR_init_label1(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1315__1_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1315__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1315__1_4_0_i2);
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1315__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_101_120_105_115_116_105_110_103_95_119_101_105_103_104_116_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module111)
	MR_init_entry1(mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1386__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1386__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module112)
	MR_init_entry1(mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1534__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1534__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module113)
	MR_init_entry1(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1909__1_3_0);
	MR_init_label2(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1909__1_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1909__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1909__1_3_0_i2);
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1909__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1909__1_3_0_i3);
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1909__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 6));
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module114)
	MR_init_entry1(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0);
	MR_init_label4(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0,2,3,12,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0_i2);
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__lookup_suspect_3_0,
		mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0_i3);
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0_i6);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0_i6) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0_i12) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0_i6) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0_i12) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0_i12) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0_i12) MR_AND
		MR_LABEL_AP(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0_i6));
	}
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 0);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendent_list__1916__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_edt_module115)
	MR_init_entry1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_101_120_105_115_116_105_110_103_95_119_101_105_103_104_116_95_95_91_49_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_101_120_105_115_116_105_110_103_95_119_101_105_103_104_116_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) MR_ctfield(0, MR_r1, 5));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(mdb__declarative_edt_module116)
	MR_init_entry1(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0);
	MR_init_label8(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0,4,5,6,7,8,9,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r8;
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0_i4);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_edt__calc_suspect_weight_7_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0_i5);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_sv(11) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(10) = MR_ctfield(0, MR_sv(5), 4);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0_i6);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, suspect);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0_i7);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0_i8);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_edt__add_weight_to_ancestors_4_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0_i9);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r8 = MR_sv(9);
	MR_np_localcall_lab(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0,
		f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0_i10);
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdb__declarative_edt_maybe_bunch_0(void)
{
	mdb__declarative_edt_module0();
	mdb__declarative_edt_module1();
	mdb__declarative_edt_module2();
	mdb__declarative_edt_module3();
	mdb__declarative_edt_module4();
	mdb__declarative_edt_module5();
	mdb__declarative_edt_module6();
	mdb__declarative_edt_module7();
	mdb__declarative_edt_module8();
	mdb__declarative_edt_module9();
	mdb__declarative_edt_module10();
	mdb__declarative_edt_module11();
	mdb__declarative_edt_module12();
	mdb__declarative_edt_module13();
	mdb__declarative_edt_module14();
	mdb__declarative_edt_module15();
	mdb__declarative_edt_module16();
	mdb__declarative_edt_module17();
	mdb__declarative_edt_module18();
	mdb__declarative_edt_module19();
	mdb__declarative_edt_module20();
	mdb__declarative_edt_module21();
	mdb__declarative_edt_module22();
	mdb__declarative_edt_module23();
	mdb__declarative_edt_module24();
	mdb__declarative_edt_module25();
	mdb__declarative_edt_module26();
	mdb__declarative_edt_module27();
	mdb__declarative_edt_module28();
	mdb__declarative_edt_module29();
	mdb__declarative_edt_module30();
	mdb__declarative_edt_module31();
	mdb__declarative_edt_module32();
	mdb__declarative_edt_module33();
	mdb__declarative_edt_module34();
	mdb__declarative_edt_module35();
	mdb__declarative_edt_module36();
	mdb__declarative_edt_module37();
	mdb__declarative_edt_module38();
	mdb__declarative_edt_module39();
}

static void mercury__mdb__declarative_edt_maybe_bunch_1(void)
{
	mdb__declarative_edt_module40();
	mdb__declarative_edt_module41();
	mdb__declarative_edt_module42();
	mdb__declarative_edt_module43();
	mdb__declarative_edt_module44();
	mdb__declarative_edt_module45();
	mdb__declarative_edt_module46();
	mdb__declarative_edt_module47();
	mdb__declarative_edt_module48();
	mdb__declarative_edt_module49();
	mdb__declarative_edt_module50();
	mdb__declarative_edt_module51();
	mdb__declarative_edt_module52();
	mdb__declarative_edt_module53();
	mdb__declarative_edt_module54();
	mdb__declarative_edt_module55();
	mdb__declarative_edt_module56();
	mdb__declarative_edt_module57();
	mdb__declarative_edt_module58();
	mdb__declarative_edt_module59();
	mdb__declarative_edt_module60();
	mdb__declarative_edt_module61();
	mdb__declarative_edt_module62();
	mdb__declarative_edt_module63();
	mdb__declarative_edt_module64();
	mdb__declarative_edt_module65();
	mdb__declarative_edt_module66();
	mdb__declarative_edt_module67();
	mdb__declarative_edt_module68();
	mdb__declarative_edt_module69();
	mdb__declarative_edt_module70();
	mdb__declarative_edt_module71();
	mdb__declarative_edt_module72();
	mdb__declarative_edt_module73();
	mdb__declarative_edt_module74();
	mdb__declarative_edt_module75();
	mdb__declarative_edt_module76();
	mdb__declarative_edt_module77();
	mdb__declarative_edt_module78();
	mdb__declarative_edt_module79();
}

static void mercury__mdb__declarative_edt_maybe_bunch_2(void)
{
	mdb__declarative_edt_module80();
	mdb__declarative_edt_module81();
	mdb__declarative_edt_module82();
	mdb__declarative_edt_module83();
	mdb__declarative_edt_module84();
	mdb__declarative_edt_module85();
	mdb__declarative_edt_module86();
	mdb__declarative_edt_module87();
	mdb__declarative_edt_module88();
	mdb__declarative_edt_module89();
	mdb__declarative_edt_module90();
	mdb__declarative_edt_module91();
	mdb__declarative_edt_module92();
	mdb__declarative_edt_module93();
	mdb__declarative_edt_module94();
	mdb__declarative_edt_module95();
	mdb__declarative_edt_module96();
	mdb__declarative_edt_module97();
	mdb__declarative_edt_module98();
	mdb__declarative_edt_module99();
	mdb__declarative_edt_module100();
	mdb__declarative_edt_module101();
	mdb__declarative_edt_module102();
	mdb__declarative_edt_module103();
	mdb__declarative_edt_module104();
	mdb__declarative_edt_module105();
	mdb__declarative_edt_module106();
	mdb__declarative_edt_module107();
	mdb__declarative_edt_module108();
	mdb__declarative_edt_module109();
	mdb__declarative_edt_module110();
	mdb__declarative_edt_module111();
	mdb__declarative_edt_module112();
	mdb__declarative_edt_module113();
	mdb__declarative_edt_module114();
	mdb__declarative_edt_module115();
	mdb__declarative_edt_module116();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__declarative_edt__init(void);
void mercury__mdb__declarative_edt__init_type_tables(void);
void mercury__mdb__declarative_edt__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__declarative_edt__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__declarative_edt__init_complexity_procs(void);
#endif

void mercury__mdb__declarative_edt__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__declarative_edt_maybe_bunch_0();
	mercury__mdb__declarative_edt_maybe_bunch_1();
	mercury__mdb__declarative_edt_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_edt__type_ctor_info_weighting_heuristic_0,
		mdb__declarative_edt__weighting_heuristic_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_edt__type_ctor_info_suspect_status_0,
		mdb__declarative_edt__suspect_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_edt__type_ctor_info_suspect_id_0,
		mdb__declarative_edt__suspect_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_edt__type_ctor_info_suspect_1,
		mdb__declarative_edt__suspect_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_edt__type_ctor_info_subterm_origin_1,
		mdb__declarative_edt__subterm_origin_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_edt__type_ctor_info_subterm_mode_0,
		mdb__declarative_edt__subterm_mode_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_edt__type_ctor_info_search_space_1,
		mdb__declarative_edt__search_space_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_edt__type_ctor_info_primitive_op_type_0,
		mdb__declarative_edt__primitive_op_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_edt__type_ctor_info_maybe_found_descendent_0,
		mdb__declarative_edt__maybe_found_descendent_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_edt__type_ctor_info_find_origin_response_0,
		mdb__declarative_edt__find_origin_response_0_0);
	mercury__mdb__declarative_edt__init_debugger();
}

void mercury__mdb__declarative_edt__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_edt__type_ctor_info_weighting_heuristic_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_edt__type_ctor_info_suspect_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_edt__type_ctor_info_suspect_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_edt__type_ctor_info_suspect_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_edt__type_ctor_info_subterm_origin_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_edt__type_ctor_info_subterm_mode_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_edt__type_ctor_info_search_space_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_edt__type_ctor_info_primitive_op_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_edt__type_ctor_info_maybe_found_descendent_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_edt__type_ctor_info_find_origin_response_0);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_mdb__declarative_edt__type_class_decl_mercury_edt_2);
	}
}


void mercury__mdb__declarative_edt__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__declarative_edt__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__declarative_edt__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
