/*
** Automatically generated from `declarative_execution.m'
** by the Mercury compiler,
** version rotd-2011-09-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__declarative_execution__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.declarative_execution.c"
#include "mdb.declarative_execution.mh"

#line 28 "mdb.declarative_execution.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.declarative_execution.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdb.declarative_execution.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 40 "mdb.declarative_execution.c"
#line 202 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 44 "mdb.declarative_execution.c"
#line 73 "../mdbcomp/mdbcomp.rtti_access.int"
#include "mdbcomp.rtti_access.mh"

#line 48 "mdb.declarative_execution.c"
#line 72 "../library/store.int"
#include "store.mh"

#line 52 "mdb.declarative_execution.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 56 "mdb.declarative_execution.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 60 "mdb.declarative_execution.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 64 "mdb.declarative_execution.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 68 "mdb.declarative_execution.c"
#line 69 "mdb.declarative_execution.c"
#ifndef MDB__DECLARATIVE_EXECUTION_DECL_GUARD
#define MDB__DECLARATIVE_EXECUTION_DECL_GUARD

#line 73 "mdb.declarative_execution.c"
#line 74 "mdb.declarative_execution.c"

#endif
#line 77 "mdb.declarative_execution.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1[2];
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
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0__[],
	mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__[];

extern const MR_TypeClassDeclStruct
	mercury_data_mdb__declarative_execution__type_class_decl_annotated_trace_2;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__declarative_execution__type_ctor_info_event_number_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_goal_status_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_implicit_tree_info_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_sequence_number_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_1,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_id_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_key_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_map_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_store_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_which_headvars_0;
MR_decl_label1(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0, 1)
MR_decl_label3(mdb__declarative_execution__absolute_arg_num_3_0, 3,5,4)
MR_decl_label1(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0, 2)
MR_decl_label2(mdb__declarative_execution__add_trace_atom_arg_value_5_0, 2,3)
MR_decl_label3(mdb__declarative_execution__arg_num_to_head_var_num_4_0, 5,7,3)
MR_decl_label1(mdb__declarative_execution__call_node_bytecode_layout_2_0, 1)
MR_decl_label2(mdb__declarative_execution__call_node_from_id_3_0, 3,2)
MR_decl_label5(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0, 44,10,12,11,2)
MR_decl_label2(mdb__declarative_execution__cond_node_from_id_3_0, 3,2)
MR_decl_label1(mdb__declarative_execution__construct_excp_node_8_0, 2)
MR_decl_label2(mdb__declarative_execution__det_trace_node_from_id_3_0, 3,2)
MR_decl_label3(mdb__declarative_execution__disj_node_from_id_3_0, 3,6,2)
MR_decl_label2(mdb__declarative_execution__exit_node_from_id_3_0, 3,2)
MR_decl_label4(mdb__declarative_execution__find_prev_contour_3_1, 3,6,5,7)
MR_decl_label2(mdb__declarative_execution__first_disj_node_from_id_3_0, 3,2)
MR_decl_label3(mdb__declarative_execution__get_pred_attributes_5_0, 13,4,5)
MR_decl_label1(mdb__declarative_execution__have_cached_proc_defn_rep_2_0, 1)
MR_decl_label3(mdb__declarative_execution__head_var_num_to_arg_num_4_0, 5,7,3)
MR_decl_label7(mdb__declarative_execution__load_trace_node_map_5_0, 2,4,5,3,10,12,13)
MR_decl_label1(mdb__declarative_execution__maybe_filter_headvars_3_0, 3)
MR_decl_label3(mdb__declarative_execution__maybe_redo_node_from_id_3_0, 2,8,1)
MR_decl_label2(mdb__declarative_execution__neg_node_from_id_3_0, 3,2)
MR_decl_label10(mdb__declarative_execution__node_map_4_0, 89,7,9,10,11,12,13,14,15,16)
MR_decl_label2(mdb__declarative_execution__node_map_4_0, 17,3)
MR_decl_label5(mdb__declarative_execution__save_trace_node_store_5_0, 3,4,5,6,7)
MR_decl_label1(mdb__declarative_execution__search_trace_node_store_3_0, 1)
MR_decl_label4(mdb__declarative_execution__select_arg_at_pos_3_0, 26,5,4,7)
MR_decl_label5(mdb__declarative_execution__trace_node_call_3_0, 3,6,4,7,1)
MR_decl_label2(mdb__declarative_execution__trace_node_first_disj_2_0, 3,1)
MR_decl_label4(mdb__declarative_execution__trace_node_seqno_3_0, 26,4,7,1)
MR_decl_label3(mdb__declarative_execution__user_arg_num_3_0, 3,6,5)
MR_decl_label1(fn__mdb__declarative_execution__call_node_get_last_interface_1_0, 2)
MR_decl_label6(fn__mdb__declarative_execution__call_node_set_last_interface_2_0, 2,6,7,11,12,13)
MR_decl_label6(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0, 2,8,9,13,14,15)
MR_decl_label6(fn__mdb__declarative_execution__cond_node_set_status_2_0, 2,6,7,11,12,13)
MR_decl_label2(fn__mdb__declarative_execution__construct_call_node_9_0, 3,2)
MR_decl_label2(fn__mdb__declarative_execution__construct_later_disj_node_4_0, 3,5)
MR_decl_label9(fn__mdb__declarative_execution__find_prev_contour_store_2_0, 3,7,10,9,12,11,13,16,5)
MR_decl_label2(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0, 5,2)
MR_decl_label1(fn__mdb__declarative_execution__get_trace_call_atom_1_0, 2)
MR_decl_label2(fn__mdb__declarative_execution__get_trace_call_atom_1_1, 3,1)
MR_decl_label1(fn__mdb__declarative_execution__get_trace_exit_atom_1_0, 2)
MR_decl_label2(fn__mdb__declarative_execution__get_trace_exit_atom_1_1, 3,1)
MR_decl_label6(fn__mdb__declarative_execution__neg_node_set_status_2_0, 2,6,7,11,12,13)
MR_decl_label10(fn__mdb__declarative_execution__step_in_stratum_2_0, 5,3,8,10,12,14,16,17,18,21)
MR_decl_label6(fn__mdb__declarative_execution__step_in_stratum_2_0, 20,23,22,24,25,26)
MR_decl_label10(fn__mdb__declarative_execution__step_left_in_contour_2_0, 5,6,3,9,11,13,16,15,17,18)
MR_decl_label8(fn__mdb__declarative_execution__step_left_in_contour_2_0, 22,20,25,28,27,29,31,32)
MR_decl_label3(fn__mdb__declarative_execution__step_over_redo_or_call_3_0, 4,2,6)
MR_decl_label10(fn__mdb__declarative_execution__trace_node_path_1_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label3(fn__mdb__declarative_execution__trace_node_path_1_0, 13,41,14)
MR_decl_label10(fn__mdb__declarative_execution__trace_node_port_1_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label3(fn__mdb__declarative_execution__trace_node_port_1_0, 13,14,15)
MR_decl_label1(__Unify___mdb__declarative_execution__implicit_tree_info_0_0, 4)
MR_decl_label3(__Unify___mdb__declarative_execution__trace_atom_0_0, 4,8,1)
MR_decl_label2(__Unify___mdb__declarative_execution__trace_atom_arg_0_0, 6,1)
MR_decl_label10(__Unify___mdb__declarative_execution__trace_node_1_0, 7,9,11,13,15,17,5,21,23,25)
MR_decl_label10(__Unify___mdb__declarative_execution__trace_node_1_0, 27,29,19,33,35,37,31,41,43,39)
MR_decl_label10(__Unify___mdb__declarative_execution__trace_node_1_0, 47,49,45,55,57,59,61,63,53,67)
MR_decl_label10(__Unify___mdb__declarative_execution__trace_node_1_0, 69,71,73,65,77,75,83,85,81,91)
MR_decl_label10(__Unify___mdb__declarative_execution__trace_node_1_0, 93,89,97,99,95,105,107,103,113,209)
MR_decl_label4(__Unify___mdb__declarative_execution__trace_node_1_0, 111,118,120,1)
MR_decl_label1(__Unify___mdb__declarative_execution__trace_node_id_0_0, 6)
MR_decl_label1(__Unify___mdb__declarative_execution__trace_node_key_0_0, 4)
MR_decl_label1(__Unify___mdb__declarative_execution__trace_node_map_0_0, 7)
MR_decl_label1(__Unify___mdb__declarative_execution__trace_node_store_0_0, 4)
MR_decl_label10(__Index___mdb__declarative_execution__trace_node_1_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label3(__Index___mdb__declarative_execution__trace_node_1_0, 13,14,15)
MR_decl_label2(__Compare___mdb__declarative_execution__implicit_tree_info_0_0, 3,2)
MR_decl_label4(__Compare___mdb__declarative_execution__trace_atom_0_0, 3,2,5,21)
MR_decl_label5(__Compare___mdb__declarative_execution__trace_atom_arg_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___mdb__declarative_execution__trace_node_1_0, 3,2,4,5,6,7,13,17,21,25)
MR_decl_label10(__Compare___mdb__declarative_execution__trace_node_1_0, 29,33,37,41,45,10,61,65,69,73)
MR_decl_label10(__Compare___mdb__declarative_execution__trace_node_1_0, 77,81,85,58,99,103,107,111,96,122)
MR_decl_label10(__Compare___mdb__declarative_execution__trace_node_1_0, 126,119,135,139,132,148,152,156,160,164)
MR_decl_label10(__Compare___mdb__declarative_execution__trace_node_1_0, 168,145,181,185,189,193,197,178,209,206)
MR_decl_label10(__Compare___mdb__declarative_execution__trace_node_1_0, 217,221,214,230,234,227,243,247,240,256)
MR_decl_label8(__Compare___mdb__declarative_execution__trace_node_1_0, 260,253,269,266,276,280,618,619)
MR_decl_label2(__Compare___mdb__declarative_execution__trace_node_id_0_0, 3,2)
MR_decl_label2(__Compare___mdb__declarative_execution__trace_node_key_0_0, 3,2)
MR_decl_label2(__Compare___mdb__declarative_execution__trace_node_map_0_0, 3,2)
MR_decl_label2(__Compare___mdb__declarative_execution__trace_node_store_0_0, 3,2)
MR_def_extern_entry(fn__mdb__declarative_execution__get_trace_exit_atom_1_0)
MR_def_extern_entry(fn__mdb__declarative_execution__get_trace_exit_atom_1_1)
MR_def_extern_entry(fn__mdb__declarative_execution__get_trace_call_atom_1_0)
MR_def_extern_entry(fn__mdb__declarative_execution__get_trace_call_atom_1_1)
MR_def_extern_entry(mdb__declarative_execution__get_pred_attributes_5_0)
MR_decl_static(mdb__declarative_execution__call_node_bytecode_layout_2_0)
MR_decl_static(mdb__declarative_execution__have_cached_proc_defn_rep_2_0)
MR_decl_static(mdb__declarative_execution__cache_proc_defn_rep_2_0)
MR_def_extern_entry(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0)
MR_def_extern_entry(mdb__declarative_execution__trace_node_from_id_3_0)
MR_def_extern_entry(mdb__declarative_execution__call_node_from_id_3_0)
MR_def_extern_entry(mdb__declarative_execution__cond_node_from_id_3_0)
MR_def_extern_entry(mdb__declarative_execution__neg_node_from_id_3_0)
MR_def_extern_entry(mdb__declarative_execution__first_disj_node_from_id_3_0)
MR_def_extern_entry(mdb__declarative_execution__exit_node_from_id_3_0)
MR_decl_static(mdb__declarative_execution__find_prev_contour_3_1)
MR_def_extern_entry(fn__mdb__declarative_execution__step_left_in_contour_2_0)
MR_def_extern_entry(mdb__declarative_execution__maybe_redo_node_from_id_3_0)
MR_decl_static(fn__mdb__declarative_execution__step_over_redo_or_call_3_0)
MR_def_extern_entry(fn__mdb__declarative_execution__step_in_stratum_2_0)
MR_def_extern_entry(mdb__declarative_execution__det_trace_node_from_id_3_0)
MR_def_extern_entry(mdb__declarative_execution__disj_node_from_id_3_0)
MR_def_extern_entry(mdb__declarative_execution__load_trace_node_map_5_0)
MR_decl_static(mdb__declarative_execution__search_trace_node_store_3_0)
MR_decl_static(mdb__declarative_execution__node_id_to_key_2_0)
MR_decl_static(mdb__declarative_execution__convert_node_2_0)
MR_decl_static(mdb__declarative_execution__node_map_4_0)
MR_def_extern_entry(mdb__declarative_execution__save_trace_node_store_5_0)
MR_def_extern_entry(mdb__declarative_execution__maybe_filter_headvars_3_0)
MR_def_extern_entry(fn__mdb__declarative_execution__chosen_head_vars_presentation_0_0)
MR_def_extern_entry(mdb__declarative_execution__is_user_visible_arg_1_0)
MR_def_extern_entry(mdb__declarative_execution__select_arg_at_pos_3_0)
MR_decl_static(mdb__declarative_execution__head_var_num_to_arg_num_4_0)
MR_def_extern_entry(mdb__declarative_execution__absolute_arg_num_3_0)
MR_decl_static(mdb__declarative_execution__arg_num_to_head_var_num_4_0)
MR_def_extern_entry(mdb__declarative_execution__user_arg_num_3_0)
MR_decl_static(fn__mdb__declarative_execution__call_node_get_last_interface_1_0)
MR_decl_static(fn__mdb__declarative_execution__call_node_set_last_interface_2_0)
MR_decl_static(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0)
MR_decl_static(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0)
MR_decl_static(fn__mdb__declarative_execution__cond_node_set_status_2_0)
MR_decl_static(fn__mdb__declarative_execution__neg_node_set_status_2_0)
MR_decl_static(fn__mdb__declarative_execution__trace_node_port_1_0)
MR_decl_static(fn__mdb__declarative_execution__trace_node_path_1_0)
MR_decl_static(mdb__declarative_execution__trace_node_call_3_0)
MR_decl_static(mdb__declarative_execution__trace_node_seqno_3_0)
MR_decl_static(mdb__declarative_execution__null_trace_node_id_1_0)
MR_decl_static(mdb__declarative_execution__trace_node_first_disj_2_0)
MR_decl_static(fn__mdb__declarative_execution__step_left_in_contour_store_2_0)
MR_decl_static(fn__mdb__declarative_execution__find_prev_contour_store_2_0)
MR_decl_static(mdb__declarative_execution__print_trace_node_4_0)
MR_decl_static(fn__mdb__declarative_execution__construct_call_node_9_0)
MR_decl_static(fn__mdb__declarative_execution__make_yes_maybe_label_1_0)
MR_decl_static(fn__mdb__declarative_execution__make_no_maybe_label_0_0)
MR_decl_static(fn__mdb__declarative_execution__construct_exit_node_8_0)
MR_decl_static(fn__mdb__declarative_execution__construct_redo_node_5_0)
MR_decl_static(fn__mdb__declarative_execution__construct_fail_node_6_0)
MR_decl_static(mdb__declarative_execution__construct_excp_node_8_0)
MR_decl_static(fn__mdb__declarative_execution__construct_switch_node_2_0)
MR_decl_static(fn__mdb__declarative_execution__construct_first_disj_node_2_0)
MR_decl_static(fn__mdb__declarative_execution__construct_later_disj_node_4_0)
MR_decl_static(fn__mdb__declarative_execution__construct_cond_node_2_0)
MR_decl_static(fn__mdb__declarative_execution__construct_then_node_3_0)
MR_decl_static(fn__mdb__declarative_execution__construct_else_node_3_0)
MR_decl_static(fn__mdb__declarative_execution__construct_neg_node_2_0)
MR_decl_static(fn__mdb__declarative_execution__construct_neg_succ_node_3_0)
MR_decl_static(fn__mdb__declarative_execution__construct_neg_fail_node_3_0)
MR_decl_static(fn__mdb__declarative_execution__init_trace_atom_args_0_0)
MR_decl_static(mdb__declarative_execution__add_trace_atom_arg_value_5_0)
MR_decl_static(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__event_number_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__event_number_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__goal_status_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__goal_status_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__implicit_tree_info_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__implicit_tree_info_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__sequence_number_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__sequence_number_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__suspicion_accumulator_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__suspicion_accumulator_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__trace_atom_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__trace_atom_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__trace_atom_arg_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__trace_atom_arg_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__trace_node_1_0)
MR_def_extern_entry(__Index___mdb__declarative_execution__trace_node_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__trace_node_1_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__trace_node_id_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__trace_node_id_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__trace_node_key_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__trace_node_key_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__trace_node_map_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__trace_node_map_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__trace_node_store_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__trace_node_store_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__which_headvars_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__which_headvars_0_0)
MR_decl_static(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0)
MR_decl_static(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0)

static const struct mercury_type_0 mercury_common_0[28] =
{
{
{
MR_string_const("call_node_maybe_proc_defn_rep", 29),
MR_string_const("cannot interpret proc bytecode", 30)
}
},
{
{
MR_string_const("call_node_from_id", 17),
MR_string_const("not a CALL node", 15)
}
},
{
{
MR_string_const("cond_node_from_id", 17),
MR_string_const("not a COND node", 15)
}
},
{
{
MR_string_const("neg_node_from_id", 16),
MR_string_const("not a NEG node", 14)
}
},
{
{
MR_string_const("first_disj_node_from_id", 23),
MR_string_const("not a first DISJ node", 21)
}
},
{
{
MR_string_const("exit_node_from_id", 17),
MR_string_const("not an EXIT node", 16)
}
},
{
{
MR_string_const("step_left_in_contour", 20),
MR_string_const("failed COND node", 16)
}
},
{
{
MR_string_const("step_left_in_contour", 20),
MR_string_const("unexpected NEGE node", 20)
}
},
{
{
MR_string_const("step_left_in_contour", 20),
MR_string_const("unexpected CALL node", 20)
}
},
{
{
MR_string_const("maybe_redo_node_from_id", 23),
MR_string_const("not a REDO node or NULL", 23)
}
},
{
{
MR_string_const("step_in_stratum", 15),
MR_string_const("failed COND node", 16)
}
},
{
{
MR_string_const("step_in_stratum", 15),
MR_string_const("unexpected CALL node", 20)
}
},
{
{
MR_string_const("step_in_stratum", 15),
MR_string_const("unexpected NEGE node", 20)
}
},
{
{
MR_string_const("det_trace_node_from_id", 22),
MR_string_const("NULL node id", 12)
}
},
{
{
MR_string_const("disj_node_from_id", 17),
MR_string_const("not a DISJ node", 15)
}
},
{
{
MR_string_const("load_trace_node_map", 19),
MR_string_const("unexpected EOF", 14)
}
},
{
{
MR_string_const("head_var_num_to_arg_num", 23),
MR_string_const("nonexistent head_var_num", 24)
}
},
{
{
MR_string_const("arg_num_to_head_var_num", 23),
MR_string_const("nonexistent arg num", 19)
}
},
{
{
MR_string_const("call_node_get_last_interface", 28),
MR_string_const("not a CALL node", 15)
}
},
{
{
MR_string_const("call_node_set_last_interface", 28),
MR_string_const("not a CALL node", 15)
}
},
{
{
MR_string_const("call_node_update_implicit_tree_info", 35),
MR_string_const("not a CALL node", 15)
}
},
{
{
MR_string_const("get_implicit_tree_max_depth", 27),
MR_string_const("not at max depth", 16)
}
},
{
{
MR_string_const("get_implicit_tree_max_depth", 27),
MR_string_const("not a CALL node", 15)
}
},
{
{
MR_string_const("cond_node_set_status", 20),
MR_string_const("not a COND node", 15)
}
},
{
{
MR_string_const("neg_node_set_status", 19),
MR_string_const("not a NEGE node", 15)
}
},
{
{
MR_string_const("find_prev_contour", 17),
MR_string_const("reached CALL node", 17)
}
},
{
{
MR_string_const("find_prev_contour", 17),
MR_string_const("reached COND node", 17)
}
},
{
{
MR_string_const("find_prev_contour", 17),
MR_string_const("reached NEGE node", 17)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
MR_CTOR1_ADDR(mdb__declarative_execution, trace_node),
MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key)
}
},
{
{
MR_CTOR1_ADDR(mdb__declarative_execution, trace_node),
MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_id)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(mdb__declarative_execution, implicit_tree_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_execution__maybe_filter_headvars_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_execution__select_arg_at_pos_3_0_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_execution__maybe_filter_headvars_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_execution__select_arg_at_pos_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg)
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(mdb__declarative_execution__is_user_visible_arg_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(mdb__declarative_execution__is_user_visible_arg_1_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__,
MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_store),
MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_id)
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_event_number_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__event_number_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__event_number_0_0)),
	"mdb.declarative_execution",
	"event_number",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_execution__enum_functor_desc_goal_status_0_0 = {
	"succeeded",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_execution__enum_functor_desc_goal_status_0_1 = {
	"failed",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_execution__enum_functor_desc_goal_status_0_2 = {
	"undecided",
	2
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_execution__enum_value_ordered_goal_status_0[] = {
	&mercury_data_mdb__declarative_execution__enum_functor_desc_goal_status_0_0,
	&mercury_data_mdb__declarative_execution__enum_functor_desc_goal_status_0_1,
	&mercury_data_mdb__declarative_execution__enum_functor_desc_goal_status_0_2
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_execution__enum_name_ordered_goal_status_0[] = {
	&mercury_data_mdb__declarative_execution__enum_functor_desc_goal_status_0_1,
	&mercury_data_mdb__declarative_execution__enum_functor_desc_goal_status_0_0,
	&mercury_data_mdb__declarative_execution__enum_functor_desc_goal_status_0_2
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_goal_status_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_goal_status_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__goal_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__goal_status_0_0)),
	"mdb.declarative_execution",
	"goal_status",
	{ (void *)mercury_data_mdb__declarative_execution__enum_name_ordered_goal_status_0 },
	{ (void *)mercury_data_mdb__declarative_execution__enum_value_ordered_goal_status_0 },
	3,
	4,
	mercury_data_mdb__declarative_execution__functor_number_map_goal_status_0
};

static const MR_NotagFunctorDesc mercury_data_mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 = {
	"implicit_tree_info",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	"ideal_depth"
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_implicit_tree_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__implicit_tree_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__implicit_tree_info_0_0)),
	"mdb.declarative_execution",
	"implicit_tree_info",
	{ (void *)&mercury_data_mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 },
	{ (void *)&mercury_data_mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 },
	1,
	4,
	mercury_data_mdb__declarative_execution__functor_number_map_implicit_tree_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_sequence_number_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__sequence_number_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__sequence_number_0_0)),
	"mdb.declarative_execution",
	"sequence_number",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__suspicion_accumulator_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__suspicion_accumulator_0_0)),
	"mdb.declarative_execution",
	"suspicion_accumulator",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_atom_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_atom_0_0[] = {
	"proc_layout",
	"atom_args"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_atom_0_0 = {
	"atom",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_atom_0_0,
	mercury_data_mdb__declarative_execution__field_names_trace_atom_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_execution__du_stag_ordered_trace_atom_0_0[] = {
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_atom_0_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_execution__du_ptag_ordered_trace_atom_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_execution__du_stag_ordered_trace_atom_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_execution__du_name_ordered_trace_atom_0[] = {
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_atom_0_0
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_trace_atom_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__trace_atom_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__trace_atom_0_0)),
	"mdb.declarative_execution",
	"trace_atom",
	{ (void *)mercury_data_mdb__declarative_execution__du_name_ordered_trace_atom_0 },
	{ (void *)mercury_data_mdb__declarative_execution__du_ptag_ordered_trace_atom_0 },
	1,
	4,
	mercury_data_mdb__declarative_execution__functor_number_map_trace_atom_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__term_rep__type_ctor_info_term_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__term_rep__type_ctor_info_term_rep_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdb__term_rep__type_ctor_info_term_rep_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_atom_arg_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_atom_arg_0_0[] = {
	"prog_visible",
	"prog_vis_headvar_num",
	"arg_value"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0 = {
	"arg_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_atom_arg_0_0,
	mercury_data_mdb__declarative_execution__field_names_trace_atom_arg_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0[] = {
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_execution__du_name_ordered_trace_atom_arg_0[] = {
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_trace_atom_arg_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__trace_atom_arg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__trace_atom_arg_0_0)),
	"mdb.declarative_execution",
	"trace_atom_arg",
	{ (void *)mercury_data_mdb__declarative_execution__du_name_ordered_trace_atom_arg_0 },
	{ (void *)mercury_data_mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0 },
	1,
	4,
	mercury_data_mdb__declarative_execution__functor_number_map_trace_atom_arg_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_implicit_tree_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_execution__type_ctor_info_implicit_tree_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0
}};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_0[] = {
	"call_preceding",
	"call_last_interface",
	"call_atom_args",
	"call_seq",
	"call_event",
	"call_at_max_depth",
	"call_return_label",
	"call_label",
	"call_io_seq_num",
	"call_suspicion"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_0 = {
	"node_call",
	10,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_0,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_1[] = {
	"exit_preceding",
	"exit_call",
	"exit_prev_redo",
	"exit_atom_args",
	"exit_event",
	"exit_label",
	"exit_io_seq_num",
	"exit_suspicion"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_1 = {
	"node_exit",
	8,
	7,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_1,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_2[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_2[] = {
	"redo_preceding",
	"redo_exit",
	"redo_event",
	"redo_label",
	"redo_suspicion"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_2 = {
	"node_redo",
	5,
	3,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_2,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_3[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_3[] = {
	"fail_preceding",
	"fail_call",
	"fail_redo",
	"fail_event",
	"fail_label",
	"fail_suspicion"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_3 = {
	"node_fail",
	6,
	7,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_3,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_4[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdb__term_rep__type_ctor_info_term_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_4[] = {
	"excp_preceding",
	"excp_call",
	"excp_redo",
	"excp_value",
	"excp_event",
	"excp_label",
	"excp_suspicion"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_4 = {
	"node_excp",
	7,
	7,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_4,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_5[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_5[] = {
	"switch_preceding",
	"switch_label"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_5 = {
	"node_switch",
	2,
	1,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_5,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_6[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_6[] = {
	"first_disj_preceding",
	"first_disj_label"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_6 = {
	"node_first_disj",
	2,
	1,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_6,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_6,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_7[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0,
	(MR_PseudoTypeInfo) 1
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_7[] = {
	"later_disj_preceding",
	"later_disj_label",
	"later_disj_first"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_7 = {
	"node_later_disj",
	3,
	5,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_7,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_7,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_goal_status_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_8[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_execution__type_ctor_info_goal_status_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_8[] = {
	"cond_preceding",
	"cond_label",
	"cond_status"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_8 = {
	"node_cond",
	3,
	1,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_8,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_8,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_9[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_9[] = {
	"then_preceding",
	"then_cond",
	"then_label"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_9 = {
	"node_then",
	3,
	3,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_9,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_9,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_10[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_10[] = {
	"else_preceding",
	"else_cond",
	"else_label"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_10 = {
	"node_else",
	3,
	3,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_10,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_10,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_11[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_execution__type_ctor_info_goal_status_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_11[] = {
	"neg_preceding",
	"neg_label",
	"neg_status"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_11 = {
	"node_neg",
	3,
	1,
	MR_SECTAG_REMOTE,
	3,
	8,
	11,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_11,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_12[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_12[] = {
	"neg_succ_preceding",
	"neg_succ_enter",
	"neg_succ_label"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_12 = {
	"node_neg_succ",
	3,
	3,
	MR_SECTAG_REMOTE,
	3,
	9,
	12,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_12,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_12,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_trace_node_1_13[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_trace_node_1_13[] = {
	"neg_fail_preceding",
	"neg_fail_enter",
	"neg_fail_label"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_13 = {
	"node_neg_fail",
	3,
	3,
	MR_SECTAG_REMOTE,
	3,
	10,
	13,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_trace_node_1_13,
	mercury_data_mdb__declarative_execution__field_names_trace_node_1_13,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_execution__du_stag_ordered_trace_node_1_0[] = {
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_execution__du_stag_ordered_trace_node_1_1[] = {
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_execution__du_stag_ordered_trace_node_1_2[] = {
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_2

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_execution__du_stag_ordered_trace_node_1_3[] = {
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_3,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_4,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_5,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_6,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_7,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_8,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_9,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_10,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_11,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_12,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_13

};

const MR_DuPtagLayout mercury_data_mdb__declarative_execution__du_ptag_ordered_trace_node_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_execution__du_stag_ordered_trace_node_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_execution__du_stag_ordered_trace_node_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_execution__du_stag_ordered_trace_node_1_2 },
	{ 11, MR_SECTAG_REMOTE,
	mercury_data_mdb__declarative_execution__du_stag_ordered_trace_node_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_execution__du_name_ordered_trace_node_1[] = {
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_0,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_8,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_10,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_4,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_1,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_3,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_6,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_7,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_11,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_13,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_12,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_2,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_5,
	&mercury_data_mdb__declarative_execution__du_functor_desc_trace_node_1_9
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_trace_node_1[] = {
	0,
	4,
	11,
	5,
	3,
	12,
	6,
	7,
	1,
	13,
	2,
	8,
	10,
	9 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_1 = {
	1,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__trace_node_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__trace_node_1_0)),
	"mdb.declarative_execution",
	"trace_node",
	{ (void *)mercury_data_mdb__declarative_execution__du_name_ordered_trace_node_1 },
	{ (void *)mercury_data_mdb__declarative_execution__du_ptag_ordered_trace_node_1 },
	14,
	4,
	mercury_data_mdb__declarative_execution__functor_number_map_trace_node_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;

static const MR_NotagFunctorDesc mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_id_0 = {
	"id",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_c_pointer_0,
	NULL
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_trace_node_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_id_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__trace_node_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__trace_node_id_0_0)),
	"mdb.declarative_execution",
	"trace_node_id",
	{ (void *)&mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_id_0 },
	{ (void *)&mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_id_0 },
	1,
	4,
	mercury_data_mdb__declarative_execution__functor_number_map_trace_node_id_0
};

static const MR_NotagFunctorDesc mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_key_0 = {
	"key",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_trace_node_key_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__trace_node_key_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__trace_node_key_0_0)),
	"mdb.declarative_execution",
	"trace_node_key",
	{ (void *)&mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_key_0 },
	{ (void *)&mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_key_0 },
	1,
	4,
	mercury_data_mdb__declarative_execution__functor_number_map_trace_node_key_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_key_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
	&mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_1,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_key_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_key_0,
	(MR_TypeInfo) &mercury_data_mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0
}};

static const MR_NotagFunctorDesc mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_map_0 = {
	"map",
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0,
	NULL
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_trace_node_map_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__trace_node_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__trace_node_map_0_0)),
	"mdb.declarative_execution",
	"trace_node_map",
	{ (void *)&mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_map_0 },
	{ (void *)&mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_map_0 },
	1,
	4,
	mercury_data_mdb__declarative_execution__functor_number_map_trace_node_map_0
};

static const MR_NotagFunctorDesc mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_store_0 = {
	"store",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_trace_node_store_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_store_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__trace_node_store_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__trace_node_store_0_0)),
	"mdb.declarative_execution",
	"trace_node_store",
	{ (void *)&mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_store_0 },
	{ (void *)&mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_store_0 },
	1,
	4,
	mercury_data_mdb__declarative_execution__functor_number_map_trace_node_store_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_execution__enum_functor_desc_which_headvars_0_0 = {
	"all_headvars",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__declarative_execution__enum_functor_desc_which_headvars_0_1 = {
	"only_user_headvars",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_execution__enum_value_ordered_which_headvars_0[] = {
	&mercury_data_mdb__declarative_execution__enum_functor_desc_which_headvars_0_0,
	&mercury_data_mdb__declarative_execution__enum_functor_desc_which_headvars_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__declarative_execution__enum_name_ordered_which_headvars_0[] = {
	&mercury_data_mdb__declarative_execution__enum_functor_desc_which_headvars_0_0,
	&mercury_data_mdb__declarative_execution__enum_functor_desc_which_headvars_0_1
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_which_headvars_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_which_headvars_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__which_headvars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__which_headvars_0_0)),
	"mdb.declarative_execution",
	"which_headvars",
	{ (void *)mercury_data_mdb__declarative_execution__enum_name_ordered_which_headvars_0 },
	{ (void *)mercury_data_mdb__declarative_execution__enum_value_ordered_which_headvars_0 },
	2,
	4,
	mercury_data_mdb__declarative_execution__functor_number_map_which_headvars_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 2,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 2,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0))
};

const MR_ConstString mercury_data_mdb__declarative_execution__type_class_id_var_names_annotated_trace_2[] = {
	"S",
	"R",
};

const MR_TypeClassMethod mercury_data_mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2[] = {
	{ "trace_node_from_id", 3, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_mdb__declarative_execution__type_class_id_annotated_trace_2 = {
	"mdb.declarative_execution",
	"annotated_trace",
	2,
	2,
	1,
	mercury_data_mdb__declarative_execution__type_class_id_var_names_annotated_trace_2,
	mercury_data_mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2
};

const MR_TypeClassDeclStruct mercury_data_mdb__declarative_execution__type_class_decl_annotated_trace_2 = {
	&mercury_data_mdb__declarative_execution__type_class_id_annotated_trace_2,
	0,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_execution__select_arg_at_pos_3_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_execution",
"mdb.declarative_execution",
"is_user_visible_arg",
1,
0
},
"mdb.declarative_execution",
"declarative_execution.m",
1500,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_execution__maybe_filter_headvars_3_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_execution",
"mdb.declarative_execution",
"is_user_visible_arg",
1,
0
},
"mdb.declarative_execution",
"declarative_execution.m",
1500,
"12"
};


MR_decl_entry(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module0)
	MR_init_entry1(fn__mdb__declarative_execution__get_trace_exit_atom_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__get_trace_exit_atom_1_0);
	MR_init_label1(fn__mdb__declarative_execution__get_trace_exit_atom_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_trace_exit_atom'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_execution__get_trace_exit_atom_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 3);
	MR_r1 = MR_tfield(1, MR_r2, 5);
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0,
		fn__mdb__declarative_execution__get_trace_exit_atom_1_0_i2);
MR_def_label(fn__mdb__declarative_execution__get_trace_exit_atom_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module1)
	MR_init_entry1(fn__mdb__declarative_execution__get_trace_exit_atom_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__get_trace_exit_atom_1_1);
	MR_init_label2(fn__mdb__declarative_execution__get_trace_exit_atom_1_1,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_trace_exit_atom'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_execution__get_trace_exit_atom_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__get_trace_exit_atom_1_1_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 3);
	MR_r1 = MR_tfield(1, MR_r2, 5);
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0,
		fn__mdb__declarative_execution__get_trace_exit_atom_1_1_i3);
MR_def_label(fn__mdb__declarative_execution__get_trace_exit_atom_1_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__mdb__declarative_execution__get_trace_exit_atom_1_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module2)
	MR_init_entry1(fn__mdb__declarative_execution__get_trace_call_atom_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__get_trace_call_atom_1_0);
	MR_init_label1(fn__mdb__declarative_execution__get_trace_call_atom_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_trace_call_atom'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_execution__get_trace_call_atom_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_r2, 7);
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0,
		fn__mdb__declarative_execution__get_trace_call_atom_1_0_i2);
MR_def_label(fn__mdb__declarative_execution__get_trace_call_atom_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module3)
	MR_init_entry1(fn__mdb__declarative_execution__get_trace_call_atom_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__get_trace_call_atom_1_1);
	MR_init_label2(fn__mdb__declarative_execution__get_trace_call_atom_1_1,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_trace_call_atom'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_execution__get_trace_call_atom_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__get_trace_call_atom_1_1_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_r2, 7);
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0,
		fn__mdb__declarative_execution__get_trace_call_atom_1_1_i3);
MR_def_label(fn__mdb__declarative_execution__get_trace_call_atom_1_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__mdb__declarative_execution__get_trace_call_atom_1_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module4)
	MR_init_entry1(mdb__declarative_execution__get_pred_attributes_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__get_pred_attributes_5_0);
	MR_init_label3(mdb__declarative_execution__get_pred_attributes_5_0,13,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_pred_attributes'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__get_pred_attributes_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__get_pred_attributes_5_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_proceed();
	}
MR_def_label(mdb__declarative_execution__get_pred_attributes_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0,
		mdb__declarative_execution__get_pred_attributes_5_0_i4);
MR_def_label(mdb__declarative_execution__get_pred_attributes_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0,
		mdb__declarative_execution__get_pred_attributes_5_0_i5);
MR_def_label(mdb__declarative_execution__get_pred_attributes_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module5)
	MR_init_entry1(mdb__declarative_execution__call_node_bytecode_layout_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__call_node_bytecode_layout_2_0);
	MR_init_label1(mdb__declarative_execution__call_node_bytecode_layout_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_node_bytecode_layout'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__call_node_bytecode_layout_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_LabelLayout *	CallLabelLayout;
	const MR_ProcLayout *	ProcLayout;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__call_node_bytecode_layout_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	CallLabelLayout = (const MR_LabelLayout *) MR_r1;
{
#line 526 "declarative_execution.m"

    ProcLayout = CallLabelLayout->MR_sll_entry;
    if (ProcLayout->MR_sle_body_bytes != NULL) {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p success\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p failure\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 1824 "mdb.declarative_execution.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_execution__call_node_bytecode_layout_2_0_i1);
	MR_r2 = (MR_Word) ProcLayout;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__call_node_bytecode_layout_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module6)
	MR_init_entry1(mdb__declarative_execution__have_cached_proc_defn_rep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__have_cached_proc_defn_rep_2_0);
	MR_init_label1(mdb__declarative_execution__have_cached_proc_defn_rep_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'have_cached_proc_defn_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__have_cached_proc_defn_rep_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	ProcLayout;
	MR_Word	ProcDefnRep;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__have_cached_proc_defn_rep_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	ProcLayout = (const MR_ProcLayout *) MR_r1;
{
#line 565 "declarative_execution.m"

    ProcDefnRep = MR_lookup_proc_defn_rep(ProcLayout);
    if (ProcDefnRep != 0) {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p success\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p failure\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 1882 "mdb.declarative_execution.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_execution__have_cached_proc_defn_rep_2_0_i1);
	MR_r2 = ProcDefnRep;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__have_cached_proc_defn_rep_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module7)
	MR_init_entry1(mdb__declarative_execution__cache_proc_defn_rep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__cache_proc_defn_rep_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cache_proc_defn_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__cache_proc_defn_rep_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	ProcLayout;
	MR_Word	ProcDefnRep;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__cache_proc_defn_rep_2_0
	ProcLayout = (const MR_ProcLayout *) MR_r1;
	ProcDefnRep = MR_r2;
{
#line 602 "declarative_execution.m"

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_defn_rep: %p %x\n", ProcLayout, ProcDefnRep);
#endif
    MR_insert_proc_defn_rep(ProcLayout, ProcDefnRep);
;}
#line 1929 "mdb.declarative_execution.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__rtti_access__proc_bytecode_bytes_1_0);
MR_decl_entry(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module8)
	MR_init_entry1(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0);
	MR_init_label5(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0,44,10,12,11,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_node_maybe_proc_defn_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 7);
	{
	const MR_LabelLayout *	CallLabelLayout;
	const MR_ProcLayout *	ProcLayout;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	CallLabelLayout = (const MR_LabelLayout *) MR_r3;
{
#line 526 "declarative_execution.m"

    ProcLayout = CallLabelLayout->MR_sll_entry;
    if (ProcLayout->MR_sle_body_bytes != NULL) {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p success\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p failure\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 1983 "mdb.declarative_execution.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0_i2);
	MR_r2 = (MR_Word) ProcLayout;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	const MR_ProcLayout *	ProcLayout;
	MR_Word	ProcDefnRep;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	ProcLayout = (const MR_ProcLayout *) MR_r2;
{
#line 565 "declarative_execution.m"

    ProcDefnRep = MR_lookup_proc_defn_rep(ProcLayout);
    if (ProcDefnRep != 0) {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p success\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p failure\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 2016 "mdb.declarative_execution.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0_i44);
	MR_tempr1 = ProcDefnRep;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__proc_bytecode_bytes_1_0,
		mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0_i10);
MR_def_label(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mdbcomp__program_representation__trace_read_proc_defn_rep_3_0,
		mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0_i12);
MR_def_label(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0_i11);
	}
	{
	const MR_ProcLayout *	ProcLayout;
	MR_Word	ProcDefnRep;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0
	ProcLayout = (const MR_ProcLayout *) MR_sv(2);
	ProcDefnRep = MR_r2;
{
#line 602 "declarative_execution.m"

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_defn_rep: %p %x\n", ProcLayout, ProcDefnRep);
#endif
    MR_insert_proc_defn_rep(ProcLayout, ProcDefnRep);
;}
#line 2060 "mdb.declarative_execution.c"
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(mdb__declarative_execution_module9)
	MR_init_entry1(mdb__declarative_execution__trace_node_from_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__trace_node_from_id_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_node_from_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__trace_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_execution__trace_node_from_id_3_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module10)
	MR_init_entry1(mdb__declarative_execution__call_node_from_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__call_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__call_node_from_id_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_node_from_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__call_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_execution__call_node_from_id_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_execution__call_node_from_id_3_0_i3);
MR_def_label(mdb__declarative_execution__call_node_from_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__call_node_from_id_3_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__call_node_from_id_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__call_node_from_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module11)
	MR_init_entry1(mdb__declarative_execution__cond_node_from_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__cond_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__cond_node_from_id_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cond_node_from_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__cond_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_execution__cond_node_from_id_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_execution__cond_node_from_id_3_0_i3);
MR_def_label(mdb__declarative_execution__cond_node_from_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__cond_node_from_id_3_0_i2);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(mdb__declarative_execution__cond_node_from_id_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__cond_node_from_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module12)
	MR_init_entry1(mdb__declarative_execution__neg_node_from_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__neg_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__neg_node_from_id_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'neg_node_from_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__neg_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_execution__neg_node_from_id_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_execution__neg_node_from_id_3_0_i3);
MR_def_label(mdb__declarative_execution__neg_node_from_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__neg_node_from_id_3_0_i2);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(mdb__declarative_execution__neg_node_from_id_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__neg_node_from_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module13)
	MR_init_entry1(mdb__declarative_execution__first_disj_node_from_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__first_disj_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__first_disj_node_from_id_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'first_disj_node_from_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__first_disj_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_execution__first_disj_node_from_id_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_execution__first_disj_node_from_id_3_0_i3);
MR_def_label(mdb__declarative_execution__first_disj_node_from_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__first_disj_node_from_id_3_0_i2);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(mdb__declarative_execution__first_disj_node_from_id_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__first_disj_node_from_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module14)
	MR_init_entry1(mdb__declarative_execution__exit_node_from_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__exit_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__exit_node_from_id_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'exit_node_from_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__exit_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_execution__exit_node_from_id_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_execution__exit_node_from_id_3_0_i3);
MR_def_label(mdb__declarative_execution__exit_node_from_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__exit_node_from_id_3_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__exit_node_from_id_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__exit_node_from_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module15)
	MR_init_entry1(mdb__declarative_execution__find_prev_contour_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__find_prev_contour_3_1);
	MR_init_label4(mdb__declarative_execution__find_prev_contour_3_1,3,6,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_prev_contour'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__find_prev_contour_3_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__find_prev_contour_3_1_i3);
	}
	MR_r3 = MR_tfield(2, MR_r3, 1);
	MR_np_call_localret_ent(mdb__declarative_execution__exit_node_from_id_3_0,
		mdb__declarative_execution__find_prev_contour_3_1_i6);
MR_def_label(mdb__declarative_execution__find_prev_contour_3_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__find_prev_contour_3_1_i5);
	}
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		mdb__declarative_execution__find_prev_contour_3_1_i6);
MR_def_label(mdb__declarative_execution__find_prev_contour_3_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__find_prev_contour_3_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__neg_node_from_id_3_0,
		mdb__declarative_execution__find_prev_contour_3_1_i7);
MR_def_label(mdb__declarative_execution__find_prev_contour_3_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module16)
	MR_init_entry1(fn__mdb__declarative_execution__step_left_in_contour_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__step_left_in_contour_2_0);
	MR_init_label10(fn__mdb__declarative_execution__step_left_in_contour_2_0,5,6,3,9,11,13,16,15,17,18)
	MR_init_label8(fn__mdb__declarative_execution__step_left_in_contour_2_0,22,20,25,28,27,29,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'step_left_in_contour'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_execution__step_left_in_contour_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i5);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_proceed();
	}
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i6);
	}
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i9);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__cond_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i28);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i11);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i16);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i13);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i16);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i15);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i16);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i17);
	}
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i18);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r3, 3);
	MR_np_call_localret_ent(mdb__declarative_execution__first_disj_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i28);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,8)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i22);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_proceed();
	}
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,10)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i25);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__neg_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i28);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,9)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i27);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__neg_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i28);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i29);
	}
	MR_np_tailcall_ent(mdb__declarative_execution__find_prev_contour_3_1);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i31);
	}
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i32);
	}
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module17)
	MR_init_entry1(mdb__declarative_execution__maybe_redo_node_from_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__maybe_redo_node_from_id_3_0);
	MR_init_label3(mdb__declarative_execution__maybe_redo_node_from_id_3_0,2,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_redo_node_from_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__maybe_redo_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_execution__maybe_redo_node_from_id_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_execution__maybe_redo_node_from_id_3_0_i2);
MR_def_label(mdb__declarative_execution__maybe_redo_node_from_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__maybe_redo_node_from_id_3_0_i1);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__maybe_redo_node_from_id_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_execution__maybe_redo_node_from_id_3_0_i8);
MR_def_label(mdb__declarative_execution__maybe_redo_node_from_id_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__maybe_redo_node_from_id_3_0,1)
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


MR_BEGIN_MODULE(mdb__declarative_execution_module18)
	MR_init_entry1(fn__mdb__declarative_execution__step_over_redo_or_call_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__step_over_redo_or_call_3_0);
	MR_init_label3(fn__mdb__declarative_execution__step_over_redo_or_call_3_0,4,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'step_over_redo_or_call'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__step_over_redo_or_call_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(mdb__declarative_execution__maybe_redo_node_from_id_3_0,
		fn__mdb__declarative_execution__step_over_redo_or_call_3_0_i4);
MR_def_label(fn__mdb__declarative_execution__step_over_redo_or_call_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_over_redo_or_call_3_0_i2);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__mdb__declarative_execution__step_over_redo_or_call_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		fn__mdb__declarative_execution__step_over_redo_or_call_3_0_i6);
MR_def_label(fn__mdb__declarative_execution__step_over_redo_or_call_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module19)
	MR_init_entry1(fn__mdb__declarative_execution__step_in_stratum_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__step_in_stratum_2_0);
	MR_init_label10(fn__mdb__declarative_execution__step_in_stratum_2_0,5,3,8,10,12,14,16,17,18,21)
	MR_init_label6(fn__mdb__declarative_execution__step_in_stratum_2_0,20,23,22,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'step_in_stratum'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_execution__step_in_stratum_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 3);
	if (!((((MR_Integer) MR_tempr1 == (MR_Integer) 0) || ((MR_Integer) MR_tempr1 == (MR_Integer) 2)))) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i5);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_proceed();
	}
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i8);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__cond_node_from_id_3_0,
		fn__mdb__declarative_execution__step_in_stratum_2_0_i21);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(fn__mdb__declarative_execution__step_over_redo_or_call_3_0);
	}
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__mdb__declarative_execution__step_over_redo_or_call_3_0);
	}
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(fn__mdb__declarative_execution__step_over_redo_or_call_3_0);
	}
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i16);
	}
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i17);
	}
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,10)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i18);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__neg_node_from_id_3_0,
		fn__mdb__declarative_execution__step_in_stratum_2_0_i21);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,9)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i20);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__neg_node_from_id_3_0,
		fn__mdb__declarative_execution__step_in_stratum_2_0_i21);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i22);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(2, MR_r3, 1);
	MR_np_call_localret_ent(mdb__declarative_execution__exit_node_from_id_3_0,
		fn__mdb__declarative_execution__step_in_stratum_2_0_i23);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i24);
	}
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i25);
	}
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i26);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module20)
	MR_init_entry1(mdb__declarative_execution__det_trace_node_from_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__det_trace_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__det_trace_node_from_id_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_trace_node_from_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__det_trace_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_execution__det_trace_node_from_id_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_execution__det_trace_node_from_id_3_0_i3);
MR_def_label(mdb__declarative_execution__det_trace_node_from_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__det_trace_node_from_id_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__det_trace_node_from_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,13);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module21)
	MR_init_entry1(mdb__declarative_execution__disj_node_from_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__disj_node_from_id_3_0);
	MR_init_label3(mdb__declarative_execution__disj_node_from_id_3_0,3,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_node_from_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__disj_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_execution__disj_node_from_id_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_execution__disj_node_from_id_3_0_i3);
MR_def_label(mdb__declarative_execution__disj_node_from_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__disj_node_from_id_3_0_i2);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(mdb__declarative_execution__disj_node_from_id_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__disj_node_from_id_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(mdb__declarative_execution__disj_node_from_id_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__disj_node_from_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,14);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_4_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module22)
	MR_init_entry1(mdb__declarative_execution__load_trace_node_map_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__load_trace_node_map_5_0);
	MR_init_label7(mdb__declarative_execution__load_trace_node_map_5_0,2,4,5,3,10,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'load_trace_node_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__load_trace_node_map_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__read_4_0,
		mdb__declarative_execution__load_trace_node_map_5_0_i2);
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__load_trace_node_map_5_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_map);
	MR_np_call_localret_ent(io__read_4_0,
		mdb__declarative_execution__load_trace_node_map_5_0_i10);
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__load_trace_node_map_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_execution__load_trace_node_map_5_0_i3);
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("load_trace_node_map", 19);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_execution__load_trace_node_map_5_0_i3);
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__read_4_0,
		mdb__declarative_execution__load_trace_node_map_5_0_i10);
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__load_trace_node_map_5_0_i12);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__load_trace_node_map_5_0_i13);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("load_trace_node_map", 19);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module23)
	MR_init_entry1(mdb__declarative_execution__search_trace_node_store_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__search_trace_node_store_3_0);
	MR_init_label1(mdb__declarative_execution__search_trace_node_store_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_trace_node_store'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__search_trace_node_store_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Id;
	MR_Word	Node;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__search_trace_node_store_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Id = MR_r2;
{
#line 897 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);
;}
#line 3087 "mdb.declarative_execution.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_execution__search_trace_node_store_3_0_i1);
	MR_r2 = Node;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__search_trace_node_store_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module24)
	MR_init_entry1(mdb__declarative_execution__node_id_to_key_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__node_id_to_key_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'node_id_to_key'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__node_id_to_key_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Id;
	MR_Word	Key;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__node_id_to_key_2_0
	Id = MR_r1;
{
#line 1452 "declarative_execution.m"

    Key = (MR_Integer) Id;
;}
#line 3130 "mdb.declarative_execution.c"
	MR_r1 = Key;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module25)
	MR_init_entry1(mdb__declarative_execution__convert_node_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__convert_node_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_node'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__convert_node_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	N1;
	MR_Word	N2;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__convert_node_2_0
	N1 = MR_r1;
{
#line 1465 "declarative_execution.m"

    N2 = N1;
;}
#line 3165 "mdb.declarative_execution.c"
	MR_r1 = N2;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module26)
	MR_init_entry1(mdb__declarative_execution__node_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__node_map_4_0);
	MR_init_label10(mdb__declarative_execution__node_map_4_0,89,7,9,10,11,12,13,14,15,16)
	MR_init_label2(mdb__declarative_execution__node_map_4_0,17,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'node_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__node_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_execution__node_map_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	Id;
	MR_Word	Node;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__node_map_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Id = MR_r2;
{
#line 897 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);
;}
#line 3213 "mdb.declarative_execution.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i3);
	MR_tempr1 = Node;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Id;
	MR_Word	Key;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__node_map_4_0
	Id = MR_r2;
{
#line 1452 "declarative_execution.m"

    Key = (MR_Integer) Id;
;}
#line 3230 "mdb.declarative_execution.c"
	MR_tempr2 = Key;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	N1;
	MR_Word	N2;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__node_map_4_0
	N1 = MR_tempr1;
{
#line 1465 "declarative_execution.m"

    N2 = N1;
;}
#line 3244 "mdb.declarative_execution.c"
	MR_r4 = N2;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		mdb__declarative_execution__node_map_4_0_i7);
MR_def_label(mdb__declarative_execution__node_map_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i89);
	}
MR_def_label(mdb__declarative_execution__node_map_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i89);
	}
MR_def_label(mdb__declarative_execution__node_map_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i89);
	}
MR_def_label(mdb__declarative_execution__node_map_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i89);
	}
MR_def_label(mdb__declarative_execution__node_map_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i89);
	}
MR_def_label(mdb__declarative_execution__node_map_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i89);
	}
MR_def_label(mdb__declarative_execution__node_map_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i89);
	}
MR_def_label(mdb__declarative_execution__node_map_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i89);
	}
MR_def_label(mdb__declarative_execution__node_map_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i89);
	}
MR_def_label(mdb__declarative_execution__node_map_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i89);
	}
MR_def_label(mdb__declarative_execution__node_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(io__write_4_0);
MR_decl_entry(io__write_string_4_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module27)
	MR_init_entry1(mdb__declarative_execution__save_trace_node_store_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__save_trace_node_store_5_0);
	MR_init_label5(mdb__declarative_execution__save_trace_node_store_5_0,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_trace_node_store'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__save_trace_node_store_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(map__init_1_0,
		mdb__declarative_execution__save_trace_node_store_5_0_i3);
MR_def_label(mdb__declarative_execution__save_trace_node_store_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	Id;
	MR_Word	Key;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__save_trace_node_store_5_0
	Id = MR_sv(2);
{
#line 1452 "declarative_execution.m"

    Key = (MR_Integer) Id;
;}
#line 3447 "mdb.declarative_execution.c"
	MR_tempr1 = Key;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(mdb__declarative_execution__node_map_4_0,
		mdb__declarative_execution__save_trace_node_store_5_0_i4);
MR_def_label(mdb__declarative_execution__save_trace_node_store_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_4_0,
		mdb__declarative_execution__save_trace_node_store_5_0_i5);
MR_def_label(mdb__declarative_execution__save_trace_node_store_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__declarative_execution__save_trace_node_store_5_0_i6);
MR_def_label(mdb__declarative_execution__save_trace_node_store_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_map);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(io__write_4_0,
		mdb__declarative_execution__save_trace_node_store_5_0_i7);
MR_def_label(mdb__declarative_execution__save_trace_node_store_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__filter_2_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module28)
	MR_init_entry1(mdb__declarative_execution__maybe_filter_headvars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__maybe_filter_headvars_3_0);
	MR_init_label1(mdb__declarative_execution__maybe_filter_headvars_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_filter_headvars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__maybe_filter_headvars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__maybe_filter_headvars_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(mdb__declarative_execution__maybe_filter_headvars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__list__filter_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module29)
	MR_init_entry1(fn__mdb__declarative_execution__chosen_head_vars_presentation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__chosen_head_vars_presentation_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'chosen_head_vars_presentation'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_execution__chosen_head_vars_presentation_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module30)
	MR_init_entry1(mdb__declarative_execution__is_user_visible_arg_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__is_user_visible_arg_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_user_visible_arg'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__is_user_visible_arg_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__det_index1_3_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module31)
	MR_init_entry1(mdb__declarative_execution__select_arg_at_pos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__select_arg_at_pos_3_0);
	MR_init_label4(mdb__declarative_execution__select_arg_at_pos_3_0,26,5,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select_arg_at_pos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__select_arg_at_pos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__select_arg_at_pos_3_0_i26);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_np_tailcall_ent(list__det_index1_3_0);
MR_def_label(mdb__declarative_execution__select_arg_at_pos_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__select_arg_at_pos_3_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdb__declarative_execution__select_arg_at_pos_3_0_i5);
MR_def_label(mdb__declarative_execution__select_arg_at_pos_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (((MR_Integer) MR_r1 - (MR_Integer) MR_sv(2)) + (MR_Integer) 1);
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__det_index1_3_0);
MR_def_label(mdb__declarative_execution__select_arg_at_pos_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		mdb__declarative_execution__select_arg_at_pos_3_0_i7);
MR_def_label(mdb__declarative_execution__select_arg_at_pos_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__det_index1_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module32)
	MR_init_entry1(mdb__declarative_execution__head_var_num_to_arg_num_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__head_var_num_to_arg_num_4_0);
	MR_init_label3(mdb__declarative_execution__head_var_num_to_arg_num_4_0,5,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'head_var_num_to_arg_num'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__head_var_num_to_arg_num_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__head_var_num_to_arg_num_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__head_var_num_to_arg_num_4_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_np_localtailcall(mdb__declarative_execution__head_var_num_to_arg_num_4_0);
	}
MR_def_label(mdb__declarative_execution__head_var_num_to_arg_num_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__head_var_num_to_arg_num_4_0_i7);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(mdb__declarative_execution__head_var_num_to_arg_num_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_np_localtailcall(mdb__declarative_execution__head_var_num_to_arg_num_4_0);
MR_def_label(mdb__declarative_execution__head_var_num_to_arg_num_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module33)
	MR_init_entry1(mdb__declarative_execution__absolute_arg_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__absolute_arg_num_3_0);
	MR_init_label3(mdb__declarative_execution__absolute_arg_num_3_0,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'absolute_arg_num'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__absolute_arg_num_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__absolute_arg_num_3_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(mdb__declarative_execution__absolute_arg_num_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__absolute_arg_num_3_0_i4);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdb__declarative_execution__absolute_arg_num_3_0_i5);
MR_def_label(mdb__declarative_execution__absolute_arg_num_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 - (MR_Integer) MR_sv(1)) + (MR_Integer) 1);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__declarative_execution__absolute_arg_num_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(mdb__declarative_execution__head_var_num_to_arg_num_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module34)
	MR_init_entry1(mdb__declarative_execution__arg_num_to_head_var_num_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__arg_num_to_head_var_num_4_0);
	MR_init_label3(mdb__declarative_execution__arg_num_to_head_var_num_4_0,5,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'arg_num_to_head_var_num'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__arg_num_to_head_var_num_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__arg_num_to_head_var_num_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__arg_num_to_head_var_num_4_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_localtailcall(mdb__declarative_execution__arg_num_to_head_var_num_4_0);
	}
MR_def_label(mdb__declarative_execution__arg_num_to_head_var_num_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__arg_num_to_head_var_num_4_0_i7);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(mdb__declarative_execution__arg_num_to_head_var_num_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_np_localtailcall(mdb__declarative_execution__arg_num_to_head_var_num_4_0);
MR_def_label(mdb__declarative_execution__arg_num_to_head_var_num_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,17);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module35)
	MR_init_entry1(mdb__declarative_execution__user_arg_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__user_arg_num_3_0);
	MR_init_label3(mdb__declarative_execution__user_arg_num_3_0,3,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'user_arg_num'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__user_arg_num_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__user_arg_num_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(mdb__declarative_execution__arg_num_to_head_var_num_4_0);
	}
MR_def_label(mdb__declarative_execution__user_arg_num_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__user_arg_num_3_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdb__declarative_execution__user_arg_num_3_0_i6);
MR_def_label(mdb__declarative_execution__user_arg_num_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(1)) + (MR_Integer) 1);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__declarative_execution__arg_num_to_head_var_num_4_0);
	}
MR_def_label(mdb__declarative_execution__user_arg_num_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module36)
	MR_init_entry1(fn__mdb__declarative_execution__call_node_get_last_interface_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__call_node_get_last_interface_1_0);
	MR_init_label1(fn__mdb__declarative_execution__call_node_get_last_interface_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_node_get_last_interface'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__call_node_get_last_interface_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__call_node_get_last_interface_1_0_i2);
	}
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__call_node_get_last_interface_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,18);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(store__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_store__type_ctor_info_store_1;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_store__store__arity1__store__store__arity1__[];
MR_decl_entry(store__new_ref_4_0);
MR_decl_entry(store__arg_ref_5_0);
MR_decl_entry(store__set_ref_value_4_0);
MR_decl_entry(store__extract_ref_value_3_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module37)
	MR_init_entry1(fn__mdb__declarative_execution__call_node_set_last_interface_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__call_node_set_last_interface_2_0);
	MR_init_label6(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,2,6,7,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_node_set_last_interface'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__call_node_set_last_interface_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(store__init_1_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i7);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,19);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i6);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(store__init_1_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i7);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(store, store);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_store__store__arity1__store__store__arity1__;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(store__new_ref_4_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i11);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_id);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_np_call_localret_ent(store__arg_ref_5_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i12);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(store__set_ref_value_4_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i13);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(store__extract_ref_value_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module38)
	MR_init_entry1(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0);
	MR_init_label6(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,2,8,9,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_node_update_implicit_tree_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i2);
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(store__init_1_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i9);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,20);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i8);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(store__init_1_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i9);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(store, store);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_store__store__arity1__store__store__arity1__;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(store__new_ref_4_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i13);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 5;
	MR_np_call_localret_ent(store__arg_ref_5_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i14);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(store__set_ref_value_4_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i15);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(store__extract_ref_value_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module39)
	MR_init_entry1(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0);
	MR_init_label2(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_implicit_tree_ideal_depth'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 5);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,22);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module40)
	MR_init_entry1(fn__mdb__declarative_execution__cond_node_set_status_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__cond_node_set_status_2_0);
	MR_init_label6(fn__mdb__declarative_execution__cond_node_set_status_2_0,2,6,7,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cond_node_set_status'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__cond_node_set_status_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__cond_node_set_status_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(store__init_1_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i7);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,23);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i6);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(store__init_1_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i7);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(store, store);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_store__store__arity1__store__store__arity1__;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(store__new_ref_4_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i11);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, goal_status);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 2;
	MR_np_call_localret_ent(store__arg_ref_5_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i12);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, goal_status);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(store__set_ref_value_4_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i13);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(store__extract_ref_value_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module41)
	MR_init_entry1(fn__mdb__declarative_execution__neg_node_set_status_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__neg_node_set_status_2_0);
	MR_init_label6(fn__mdb__declarative_execution__neg_node_set_status_2_0,2,6,7,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'neg_node_set_status'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__neg_node_set_status_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__neg_node_set_status_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(store__init_1_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i7);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,24);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i6);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(store__init_1_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i7);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(store, store);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_store__store__arity1__store__store__arity1__;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(store__new_ref_4_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i11);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, goal_status);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 2;
	MR_np_call_localret_ent(store__arg_ref_5_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i12);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, goal_status);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(store__set_ref_value_4_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i13);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(store__extract_ref_value_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module42)
	MR_init_entry1(fn__mdb__declarative_execution__trace_node_port_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__trace_node_port_1_0);
	MR_init_label10(fn__mdb__declarative_execution__trace_node_port_1_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label3(fn__mdb__declarative_execution__trace_node_port_1_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_node_port'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__trace_node_port_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i5);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i6);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i7);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i8);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i9);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i10);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i11);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i12);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i13);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i14);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_port_1_0_i15);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module43)
	MR_init_entry1(fn__mdb__declarative_execution__trace_node_path_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__trace_node_path_1_0);
	MR_init_label10(fn__mdb__declarative_execution__trace_node_path_1_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label3(fn__mdb__declarative_execution__trace_node_path_1_0,13,41,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_node_path'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__trace_node_path_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 5);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i5);
	}
	MR_r1 = MR_tfield(2, MR_r1, 3);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i6);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i7);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_r1, 6);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_r1, 5);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i11);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i12);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i13);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i14);
	}
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__trace_node_path_1_0_i41);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module44)
	MR_init_entry1(mdb__declarative_execution__trace_node_call_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__trace_node_call_3_0);
	MR_init_label5(mdb__declarative_execution__trace_node_call_3_0,3,6,4,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_node_call'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__trace_node_call_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_call_3_0_i3);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__trace_node_call_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_call_3_0_i4);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(2, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__exit_node_from_id_3_0,
		mdb__declarative_execution__trace_node_call_3_0_i6);
MR_def_label(mdb__declarative_execution__trace_node_call_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__trace_node_call_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_call_3_0_i7);
	}
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__trace_node_call_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_call_3_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__trace_node_call_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module45)
	MR_init_entry1(mdb__declarative_execution__trace_node_seqno_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__trace_node_seqno_3_0);
	MR_init_label4(mdb__declarative_execution__trace_node_seqno_3_0,26,4,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_node_seqno'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__trace_node_seqno_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_seqno_3_0_i26);
	}
	MR_r2 = MR_tfield(0, MR_r2, 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__trace_node_seqno_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(mdb__declarative_execution__trace_node_call_3_0,
		mdb__declarative_execution__trace_node_seqno_3_0_i4);
MR_def_label(mdb__declarative_execution__trace_node_seqno_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_seqno_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		mdb__declarative_execution__trace_node_seqno_3_0_i7);
MR_def_label(mdb__declarative_execution__trace_node_seqno_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(mdb__declarative_execution__trace_node_seqno_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module46)
	MR_init_entry1(mdb__declarative_execution__null_trace_node_id_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__null_trace_node_id_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'null_trace_node_id'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__null_trace_node_id_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Id;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__null_trace_node_id_1_0
{
#line 1316 "declarative_execution.m"

    Id = (MR_Word) NULL;
;}
#line 4687 "mdb.declarative_execution.c"
	MR_r1 = Id;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module47)
	MR_init_entry1(mdb__declarative_execution__trace_node_first_disj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__trace_node_first_disj_2_0);
	MR_init_label2(mdb__declarative_execution__trace_node_first_disj_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'trace_node_first_disj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__trace_node_first_disj_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_first_disj_2_0_i3);
	}
	{
	MR_Word	Id;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__trace_node_first_disj_2_0
{
#line 1316 "declarative_execution.m"

    Id = (MR_Word) NULL;
;}
#line 4724 "mdb.declarative_execution.c"
	MR_r2 = Id;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__trace_node_first_disj_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_first_disj_2_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__trace_node_first_disj_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module48)
	MR_init_entry1(fn__mdb__declarative_execution__step_left_in_contour_store_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__step_left_in_contour_store_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'step_left_in_contour_store'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__step_left_in_contour_store_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__mdb__declarative_execution__step_left_in_contour_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module49)
	MR_init_entry1(fn__mdb__declarative_execution__find_prev_contour_store_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__find_prev_contour_store_2_0);
	MR_init_label9(fn__mdb__declarative_execution__find_prev_contour_store_2_0,3,7,10,9,12,11,13,16,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_prev_contour_store'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__find_prev_contour_store_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__det_trace_node_from_id_3_0,
		fn__mdb__declarative_execution__find_prev_contour_store_2_0_i3);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		fn__mdb__declarative_execution__find_prev_contour_store_2_0_i12);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__neg_node_from_id_3_0,
		fn__mdb__declarative_execution__find_prev_contour_store_2_0_i10);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(4);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__exit_node_from_id_3_0,
		fn__mdb__declarative_execution__find_prev_contour_store_2_0_i12);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,26);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,27);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module50)
	MR_init_entry1(mdb__declarative_execution__print_trace_node_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__print_trace_node_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_trace_node'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__print_trace_node_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	N1;
	MR_Word	N2;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__print_trace_node_4_0
	N1 = MR_r2;
{
#line 1465 "declarative_execution.m"

    N2 = N1;
;}
#line 4918 "mdb.declarative_execution.c"
	MR_tempr1 = N2;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(io__write_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module51)
	MR_init_entry1(fn__mdb__declarative_execution__construct_call_node_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_call_node_9_0);
	MR_init_label2(fn__mdb__declarative_execution__construct_call_node_9_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_call_node'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_call_node_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__construct_call_node_9_0_i3);
	}
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__mdb__declarative_execution__construct_call_node_9_0_i2);
MR_def_label(fn__mdb__declarative_execution__construct_call_node_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = (MR_Word) MR_TAG_COMMON(1,5,0);
MR_def_label(fn__mdb__declarative_execution__construct_call_node_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	Id;
#define	MR_PROC_LABEL	mercury__fn__mdb__declarative_execution__construct_call_node_9_0
{
#line 1316 "declarative_execution.m"

    Id = (MR_Word) NULL;
;}
#line 4977 "mdb.declarative_execution.c"
	MR_tempr1 = Id;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_tfield(0, MR_tempr2, 3) = MR_r3;
	MR_tfield(0, MR_tempr2, 4) = MR_r4;
	MR_tfield(0, MR_tempr2, 5) = MR_r9;
	MR_tfield(0, MR_tempr2, 6) = MR_r5;
	MR_tfield(0, MR_tempr2, 7) = MR_r6;
	MR_tfield(0, MR_tempr2, 8) = MR_r7;
	MR_tfield(0, MR_tempr2, 9) = MR_r8;
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module52)
	MR_init_entry1(fn__mdb__declarative_execution__make_yes_maybe_label_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__make_yes_maybe_label_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_yes_maybe_label'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__make_yes_maybe_label_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module53)
	MR_init_entry1(fn__mdb__declarative_execution__make_no_maybe_label_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__make_no_maybe_label_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_no_maybe_label'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__make_no_maybe_label_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module54)
	MR_init_entry1(fn__mdb__declarative_execution__construct_exit_node_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_exit_node_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_exit_node'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_exit_node_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 8);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_r4;
	MR_tfield(1, MR_tempr1, 4) = MR_r5;
	MR_tfield(1, MR_tempr1, 5) = MR_r6;
	MR_tfield(1, MR_tempr1, 6) = MR_r7;
	MR_tfield(1, MR_tempr1, 7) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module55)
	MR_init_entry1(fn__mdb__declarative_execution__construct_redo_node_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_redo_node_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_redo_node'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_redo_node_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_tfield(2, MR_tempr1, 3) = MR_r4;
	MR_tfield(2, MR_tempr1, 4) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module56)
	MR_init_entry1(fn__mdb__declarative_execution__construct_fail_node_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_fail_node_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_fail_node'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_fail_node_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_tfield(3, MR_tempr1, 4) = MR_r4;
	MR_tfield(3, MR_tempr1, 5) = MR_r5;
	MR_tfield(3, MR_tempr1, 6) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__term_rep__univ_to_rep_2_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module57)
	MR_init_entry1(mdb__declarative_execution__construct_excp_node_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__construct_excp_node_8_0);
	MR_init_label1(mdb__declarative_execution__construct_excp_node_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_excp_node'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__construct_excp_node_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(mdb__term_rep__univ_to_rep_2_0,
		mdb__declarative_execution__construct_excp_node_8_0_i2);
MR_def_label(mdb__declarative_execution__construct_excp_node_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 8);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_sv(3);
	MR_tfield(3, MR_r2, 4) = MR_r1;
	MR_tfield(3, MR_r2, 5) = MR_sv(4);
	MR_tfield(3, MR_r2, 6) = MR_sv(5);
	MR_tfield(3, MR_r2, 7) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module58)
	MR_init_entry1(fn__mdb__declarative_execution__construct_switch_node_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_switch_node_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_switch_node'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_switch_node_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module59)
	MR_init_entry1(fn__mdb__declarative_execution__construct_first_disj_node_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_first_disj_node_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_first_disj_node'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_first_disj_node_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module60)
	MR_init_entry1(fn__mdb__declarative_execution__construct_later_disj_node_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_later_disj_node_4_0);
	MR_init_label2(fn__mdb__declarative_execution__construct_later_disj_node_4_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_later_disj_node'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_later_disj_node_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdb__declarative_execution__disj_node_from_id_3_0,
		fn__mdb__declarative_execution__construct_later_disj_node_4_0_i3);
MR_def_label(fn__mdb__declarative_execution__construct_later_disj_node_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__construct_later_disj_node_4_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(fn__mdb__declarative_execution__construct_later_disj_node_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module61)
	MR_init_entry1(fn__mdb__declarative_execution__construct_cond_node_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_cond_node_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_cond_node'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_cond_node_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module62)
	MR_init_entry1(fn__mdb__declarative_execution__construct_then_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_then_node_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_then_node'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_then_node_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module63)
	MR_init_entry1(fn__mdb__declarative_execution__construct_else_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_else_node_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_else_node'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_else_node_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module64)
	MR_init_entry1(fn__mdb__declarative_execution__construct_neg_node_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_neg_node_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_neg_node'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_neg_node_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module65)
	MR_init_entry1(fn__mdb__declarative_execution__construct_neg_succ_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_neg_succ_node_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_neg_succ_node'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_neg_succ_node_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module66)
	MR_init_entry1(fn__mdb__declarative_execution__construct_neg_fail_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__construct_neg_fail_node_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_neg_fail_node'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__construct_neg_fail_node_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module67)
	MR_init_entry1(fn__mdb__declarative_execution__init_trace_atom_args_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_execution__init_trace_atom_args_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_trace_atom_args'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__init_trace_atom_args_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module68)
	MR_init_entry1(mdb__declarative_execution__add_trace_atom_arg_value_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__add_trace_atom_arg_value_5_0);
	MR_init_label2(mdb__declarative_execution__add_trace_atom_arg_value_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_trace_atom_arg_value'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__add_trace_atom_arg_value_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(mdb__term_rep__univ_to_rep_2_0,
		mdb__declarative_execution__add_trace_atom_arg_value_5_0_i2);
MR_def_label(mdb__declarative_execution__add_trace_atom_arg_value_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(mdb__declarative_execution__add_trace_atom_arg_value_5_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(mdb__declarative_execution__add_trace_atom_arg_value_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module69)
	MR_init_entry1(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__add_trace_atom_arg_no_value_4_0);
	MR_init_label1(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_trace_atom_arg_no_value'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
MR_def_label(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module70)
	MR_init_entry1(__Unify___mdb__declarative_execution__event_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__event_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__event_number_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module71)
	MR_init_entry1(__Compare___mdb__declarative_execution__event_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__event_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__event_number_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module72)
	MR_init_entry1(__Unify___mdb__declarative_execution__goal_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__goal_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__goal_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module73)
	MR_init_entry1(__Compare___mdb__declarative_execution__goal_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__goal_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__goal_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module74)
	MR_init_entry1(__Unify___mdb__declarative_execution__implicit_tree_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__implicit_tree_info_0_0);
	MR_init_label1(__Unify___mdb__declarative_execution__implicit_tree_info_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__implicit_tree_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__implicit_tree_info_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_execution__implicit_tree_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module75)
	MR_init_entry1(__Compare___mdb__declarative_execution__implicit_tree_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__implicit_tree_info_0_0);
	MR_init_label2(__Compare___mdb__declarative_execution__implicit_tree_info_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__implicit_tree_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__implicit_tree_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_execution__implicit_tree_info_0_0_i2);
MR_def_label(__Compare___mdb__declarative_execution__implicit_tree_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_execution__implicit_tree_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module76)
	MR_init_entry1(__Unify___mdb__declarative_execution__sequence_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__sequence_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__sequence_number_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module77)
	MR_init_entry1(__Compare___mdb__declarative_execution__sequence_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__sequence_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__sequence_number_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module78)
	MR_init_entry1(__Unify___mdb__declarative_execution__suspicion_accumulator_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__suspicion_accumulator_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__suspicion_accumulator_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module79)
	MR_init_entry1(__Compare___mdb__declarative_execution__suspicion_accumulator_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__suspicion_accumulator_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__suspicion_accumulator_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__rtti_access__proc_layout_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module80)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_atom_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__trace_atom_0_0);
	MR_init_label3(__Unify___mdb__declarative_execution__trace_atom_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_atom_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_atom_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__proc_layout_0_0,
		__Unify___mdb__declarative_execution__trace_atom_0_0_i4);
MR_def_label(__Unify___mdb__declarative_execution__trace_atom_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_atom_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_atom_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_execution__trace_atom_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__rtti_access__proc_layout_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module81)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_atom_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__trace_atom_0_0);
	MR_init_label4(__Compare___mdb__declarative_execution__trace_atom_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_atom_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_atom_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_atom_0_0_i2);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__proc_layout_0_0,
		__Compare___mdb__declarative_execution__trace_atom_0_0_i5);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_atom_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module82)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_atom_arg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__trace_atom_arg_0_0);
	MR_init_label2(__Unify___mdb__declarative_execution__trace_atom_arg_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_atom_arg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_atom_arg_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_atom_arg_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_atom_arg_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___mdb__declarative_execution__trace_atom_arg_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_execution__trace_atom_arg_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module83)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_atom_arg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__trace_atom_arg_0_0);
	MR_init_label5(__Compare___mdb__declarative_execution__trace_atom_arg_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_atom_arg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_atom_arg_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_atom_arg_0_0_i2);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_arg_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_arg_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_atom_arg_0_0_i5);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_arg_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_atom_arg_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_atom_arg_0_0_i9);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_arg_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_atom_arg_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_arg_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_decl_entry(__Unify___mdb__term_rep__term_rep_0_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module84)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_node_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__trace_node_1_0);
	MR_init_label10(__Unify___mdb__declarative_execution__trace_node_1_0,7,9,11,13,15,17,5,21,23,25)
	MR_init_label10(__Unify___mdb__declarative_execution__trace_node_1_0,27,29,19,33,35,37,31,41,43,39)
	MR_init_label10(__Unify___mdb__declarative_execution__trace_node_1_0,47,49,45,55,57,59,61,63,53,67)
	MR_init_label10(__Unify___mdb__declarative_execution__trace_node_1_0,69,71,73,65,77,75,83,85,81,91)
	MR_init_label10(__Unify___mdb__declarative_execution__trace_node_1_0,93,89,97,99,95,105,107,103,113,209)
	MR_init_label4(__Unify___mdb__declarative_execution__trace_node_1_0,111,118,120,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_node_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i209);
	}
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(18) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(19) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(18) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(15) = MR_tfield(0, MR_tempr3, 8);
	MR_sv(16) = MR_tfield(0, MR_tempr3, 9);
	MR_sv(17) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(2) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 7);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 8);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 9);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i7);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i9);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i11);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(10) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(11) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, implicit_tree_info);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i13);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__rtti_access, label_layout);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i15);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i17);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(15) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(16) == MR_sv(5));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(18),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i19);
	}
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(10) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(11) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(12) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(13) = MR_tfield(1, MR_tempr1, 6);
	MR_sv(14) = MR_tfield(1, MR_tempr1, 7);
	MR_sv(15) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(16) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(17) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 4);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 5);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 6);
	MR_sv(9) = MR_tfield(1, MR_tempr2, 7);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i21);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i23);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i25);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i27);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(11) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i29);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(13) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(14) == MR_sv(9));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(18),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i31);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(10) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(11) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(12) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(13) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(14) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(15) = MR_tfield(2, MR_tempr2, 4);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i33);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i35);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(1) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i37);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(11) == MR_sv(15));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(18),3,5)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i39);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i41);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i43);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(11));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(18),3,7)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i45);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i47);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i49);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(18),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i53);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(11) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(12) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(13) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(14) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(15) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(16) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(17) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 7);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i55);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i57);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i59);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___mdb__term_rep__term_rep_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i61);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(11) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i63);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(13) == MR_sv(7));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(18),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i65);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(11) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(12) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(13) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(14) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(15) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(16) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(17) = MR_tfield(3, MR_tempr2, 6);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i67);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i69);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i71);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(10) != MR_sv(15))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i73);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(12) == MR_sv(17));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(18),3,3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i75);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i77);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(18),3,4)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i81);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i83);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i85);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(11);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(18),3,8)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i89);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i91);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i93);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(11));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(18),3,10)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i95);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i97);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i99);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(18),3,9)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i103);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i105);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i107);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(18),3,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i111);
	}
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i113);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i118);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i120);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module85)
	MR_init_entry1(__Index___mdb__declarative_execution__trace_node_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___mdb__declarative_execution__trace_node_1_0);
	MR_init_label10(__Index___mdb__declarative_execution__trace_node_1_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label3(__Index___mdb__declarative_execution__trace_node_1_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___mdb__declarative_execution__trace_node_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i5);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i6);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i7);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i8);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i9);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i10);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i11);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i12);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i13);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i14);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(__Index___mdb__declarative_execution__trace_node_1_0_i15);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_decl_entry(__Compare___mdb__term_rep__term_rep_0_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module86)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_node_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__trace_node_1_0);
	MR_init_label10(__Compare___mdb__declarative_execution__trace_node_1_0,3,2,4,5,6,7,13,17,21,25)
	MR_init_label10(__Compare___mdb__declarative_execution__trace_node_1_0,29,33,37,41,45,10,61,65,69,73)
	MR_init_label10(__Compare___mdb__declarative_execution__trace_node_1_0,77,81,85,58,99,103,107,111,96,122)
	MR_init_label10(__Compare___mdb__declarative_execution__trace_node_1_0,126,119,135,139,132,148,152,156,160,164)
	MR_init_label10(__Compare___mdb__declarative_execution__trace_node_1_0,168,145,181,185,189,193,197,178,209,206)
	MR_init_label10(__Compare___mdb__declarative_execution__trace_node_1_0,217,221,214,230,234,227,243,247,240,256)
	MR_init_label8(__Compare___mdb__declarative_execution__trace_node_1_0,260,253,269,266,276,280,618,619)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_node_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i3);
	}
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(16) = MR_r2;
	MR_sv(17) = MR_r3;
	MR_sv(19) = MR_r1;
	MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i2);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Index___mdb__declarative_execution__trace_node_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i4);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Index___mdb__declarative_execution__trace_node_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i5);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(18) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(20);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(18) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(20);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(16),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(17),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(2) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(16);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(1) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(18) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i13);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i17);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i21);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i25);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i29);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, implicit_tree_info);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i33);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__rtti_access, label_layout);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i37);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i41);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i45);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(16),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i58);
	}
	if (MR_PTAG_TESTR(MR_sv(17),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(15) = MR_tfield(1, MR_tempr5, 7);
	MR_sv(14) = MR_tfield(1, MR_tempr5, 6);
	MR_sv(13) = MR_tfield(1, MR_tempr5, 5);
	MR_sv(12) = MR_tfield(1, MR_tempr5, 4);
	MR_sv(11) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(9) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(16);
	MR_sv(8) = MR_tfield(1, MR_tempr6, 7);
	MR_sv(7) = MR_tfield(1, MR_tempr6, 6);
	MR_sv(6) = MR_tfield(1, MR_tempr6, 5);
	MR_sv(1) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(18) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i61);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i65);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i69);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i73);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i77);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i81);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i85);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(15);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(16),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i96);
	}
	if (MR_PTAG_TESTR(MR_sv(17),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(9) = MR_tfield(2, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(2, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(2, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(16);
	MR_sv(1) = MR_tfield(2, MR_tempr6, 4);
	MR_sv(18) = MR_tfield(2, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i99);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i103);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i107);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i111);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(16),3,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i119);
	}
	if (MR_RTAGS_TESTR(MR_sv(17),3,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(18) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(16);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i122);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i126);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(16),3,7)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i132);
	}
	if (MR_RTAGS_TESTR(MR_sv(17),3,7)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(18) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(16);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i135);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i139);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(16),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i145);
	}
	if (MR_RTAGS_TESTR(MR_sv(17),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(13) = MR_tfield(3, MR_tempr5, 7);
	MR_sv(12) = MR_tfield(3, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(16);
	MR_sv(7) = MR_tfield(3, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(3, MR_tempr6, 6);
	MR_sv(1) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(18) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i148);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i152);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i156);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___mdb__term_rep__term_rep_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i160);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i164);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i168);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(13);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(16),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i178);
	}
	if (MR_RTAGS_TESTR(MR_sv(17),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(11) = MR_tfield(3, MR_tempr5, 6);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(16);
	MR_sv(6) = MR_tfield(3, MR_tempr6, 6);
	MR_sv(1) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(18) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i181);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i185);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i189);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i193);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i197);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(11);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(16),3,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i206);
	}
	if (MR_RTAGS_TESTR(MR_sv(17),3,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(16);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i209);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(16),3,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i214);
	}
	if (MR_RTAGS_TESTR(MR_sv(17),3,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(18) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(16);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i217);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i221);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(16),3,8)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i227);
	}
	if (MR_RTAGS_TESTR(MR_sv(17),3,8)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(18) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(16);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i230);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i234);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(16),3,10)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i240);
	}
	if (MR_RTAGS_TESTR(MR_sv(17),3,10)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(18) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(16);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i243);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i247);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(16),3,9)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i253);
	}
	if (MR_RTAGS_TESTR(MR_sv(17),3,9)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(18) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(16);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i256);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i260);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(16),3,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i266);
	}
	if (MR_RTAGS_TESTR(MR_sv(17),3,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(16);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i269);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(17),3,6)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i618);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(17);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(18) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(16);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(16) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i276);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i280);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i619);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,618)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,619)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module87)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_node_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__trace_node_id_0_0);
	MR_init_label1(__Unify___mdb__declarative_execution__trace_node_id_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_node_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_id_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_id_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module88)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_node_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__trace_node_id_0_0);
	MR_init_label2(__Compare___mdb__declarative_execution__trace_node_id_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_node_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_id_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_id_0_0_i2);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_execution__trace_node_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module89)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_node_key_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__trace_node_key_0_0);
	MR_init_label1(__Unify___mdb__declarative_execution__trace_node_key_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_node_key_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_key_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_execution__trace_node_key_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module90)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_node_key_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__trace_node_key_0_0);
	MR_init_label2(__Compare___mdb__declarative_execution__trace_node_key_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_node_key_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_key_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_key_0_0_i2);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_key_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_execution__trace_node_key_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module91)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_node_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__trace_node_map_0_0);
	MR_init_label1(__Unify___mdb__declarative_execution__trace_node_map_0_0,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_node_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_map_0_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_map_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module92)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_node_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__trace_node_map_0_0);
	MR_init_label2(__Compare___mdb__declarative_execution__trace_node_map_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_node_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_map_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_map_0_0_i2);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_map_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_execution__trace_node_map_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module93)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_node_store_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__trace_node_store_0_0);
	MR_init_label1(__Unify___mdb__declarative_execution__trace_node_store_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_node_store_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_store_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_execution__trace_node_store_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module94)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_node_store_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__trace_node_store_0_0);
	MR_init_label2(__Compare___mdb__declarative_execution__trace_node_store_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_node_store_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_store_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_store_0_0_i2);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_store_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_execution__trace_node_store_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module95)
	MR_init_entry1(__Unify___mdb__declarative_execution__which_headvars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_execution__which_headvars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__which_headvars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module96)
	MR_init_entry1(__Compare___mdb__declarative_execution__which_headvars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_execution__which_headvars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__which_headvars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module97)
	MR_init_entry1(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module98)
	MR_init_entry1(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0);
	MR_init_label1(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Id;
	MR_Word	Node;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Id = MR_r2;
{
#line 897 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);
;}
#line 8348 "mdb.declarative_execution.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0_i1);
	MR_r2 = Node;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__mdb__declarative_execution__save_trace_node_store_5_0);

void
MR_DD_save_trace(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3);

void
MR_DD_save_trace(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_execution__save_trace_node_store_5_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_execution__save_trace_node_store_5_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__declarative_execution__add_trace_atom_arg_no_value_4_0);

void
MR_DD_add_trace_atom_arg_no_value(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Word Mercury__argument3, MR_Word * Mercury__argument4);

void
MR_DD_add_trace_atom_arg_no_value(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Word Mercury__argument3, MR_Word * Mercury__argument4)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_execution__add_trace_atom_arg_no_value_4_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_execution__add_trace_atom_arg_no_value_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument4 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__declarative_execution__add_trace_atom_arg_value_5_0);

void
MR_DD_add_trace_atom_arg_value(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word * Mercury__argument5);

void
MR_DD_add_trace_atom_arg_value(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Word * Mercury__argument5)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_execution__add_trace_atom_arg_value_5_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_execution__add_trace_atom_arg_value_5_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument5 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__fn__mdb__declarative_execution__init_trace_atom_args_0_0);

MR_Word
MR_DD_init_trace_atom_args(void);

MR_Word
MR_DD_init_trace_atom_args(void)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__init_trace_atom_args_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__init_trace_atom_args_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_neg_fail_node_3_0);

MR_Word
MR_DD_construct_neg_fail_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, const MR_LabelLayout * Mercury__argument3);

MR_Word
MR_DD_construct_neg_fail_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, const MR_LabelLayout * Mercury__argument3)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_neg_fail_node_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument3, MR_r3);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_neg_fail_node_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_neg_succ_node_3_0);

MR_Word
MR_DD_construct_neg_succ_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, const MR_LabelLayout * Mercury__argument3);

MR_Word
MR_DD_construct_neg_succ_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, const MR_LabelLayout * Mercury__argument3)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_neg_succ_node_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument3, MR_r3);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_neg_succ_node_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_neg_node_2_0);

MR_Word
MR_DD_construct_neg_node(MR_Word Mercury__argument1, const MR_LabelLayout * Mercury__argument2);

MR_Word
MR_DD_construct_neg_node(MR_Word Mercury__argument1, const MR_LabelLayout * Mercury__argument2)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_neg_node_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument2, MR_r2);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_neg_node_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_else_node_3_0);

MR_Word
MR_DD_construct_else_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, const MR_LabelLayout * Mercury__argument3);

MR_Word
MR_DD_construct_else_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, const MR_LabelLayout * Mercury__argument3)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_else_node_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument3, MR_r3);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_else_node_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_then_node_3_0);

MR_Word
MR_DD_construct_then_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, const MR_LabelLayout * Mercury__argument3);

MR_Word
MR_DD_construct_then_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, const MR_LabelLayout * Mercury__argument3)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_then_node_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument3, MR_r3);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_then_node_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_cond_node_2_0);

MR_Word
MR_DD_construct_cond_node(MR_Word Mercury__argument1, const MR_LabelLayout * Mercury__argument2);

MR_Word
MR_DD_construct_cond_node(MR_Word Mercury__argument1, const MR_LabelLayout * Mercury__argument2)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_cond_node_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument2, MR_r2);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_cond_node_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_later_disj_node_4_0);

MR_Word
MR_DD_construct_later_disj_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, const MR_LabelLayout * Mercury__argument3, MR_Word Mercury__argument4);

MR_Word
MR_DD_construct_later_disj_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, const MR_LabelLayout * Mercury__argument3, MR_Word Mercury__argument4)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_later_disj_node_4_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument3, MR_r3);
	MR_r4 = Mercury__argument4;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_later_disj_node_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_first_disj_node_2_0);

MR_Word
MR_DD_construct_first_disj_node(MR_Word Mercury__argument1, const MR_LabelLayout * Mercury__argument2);

MR_Word
MR_DD_construct_first_disj_node(MR_Word Mercury__argument1, const MR_LabelLayout * Mercury__argument2)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_first_disj_node_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument2, MR_r2);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_first_disj_node_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_switch_node_2_0);

MR_Word
MR_DD_construct_switch_node(MR_Word Mercury__argument1, const MR_LabelLayout * Mercury__argument2);

MR_Word
MR_DD_construct_switch_node(MR_Word Mercury__argument1, const MR_LabelLayout * Mercury__argument2)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_switch_node_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument2, MR_r2);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_switch_node_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__mdb__declarative_execution__construct_excp_node_8_0);

void
MR_DD_construct_excp_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Integer Mercury__argument5, const MR_LabelLayout * Mercury__argument6, MR_Integer Mercury__argument7, MR_Word * Mercury__argument8);

void
MR_DD_construct_excp_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Integer Mercury__argument5, const MR_LabelLayout * Mercury__argument6, MR_Integer Mercury__argument7, MR_Word * Mercury__argument8)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_execution__construct_excp_node_8_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument6, MR_r6);
	MR_r7 = Mercury__argument7;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_execution__construct_excp_node_8_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument8 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_fail_node_6_0);

MR_Word
MR_DD_construct_fail_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Integer Mercury__argument4, const MR_LabelLayout * Mercury__argument5, MR_Integer Mercury__argument6);

MR_Word
MR_DD_construct_fail_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Integer Mercury__argument4, const MR_LabelLayout * Mercury__argument5, MR_Integer Mercury__argument6)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_fail_node_6_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument5, MR_r5);
	MR_r6 = Mercury__argument6;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_fail_node_6_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_redo_node_5_0);

MR_Word
MR_DD_construct_redo_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Integer Mercury__argument3, const MR_LabelLayout * Mercury__argument4, MR_Integer Mercury__argument5);

MR_Word
MR_DD_construct_redo_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Integer Mercury__argument3, const MR_LabelLayout * Mercury__argument4, MR_Integer Mercury__argument5)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_redo_node_5_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument4, MR_r4);
	MR_r5 = Mercury__argument5;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_redo_node_5_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_exit_node_8_0);

MR_Word
MR_DD_construct_exit_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Integer Mercury__argument5, const MR_LabelLayout * Mercury__argument6, MR_Integer Mercury__argument7, MR_Integer Mercury__argument8);

MR_Word
MR_DD_construct_exit_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word Mercury__argument4, MR_Integer Mercury__argument5, const MR_LabelLayout * Mercury__argument6, MR_Integer Mercury__argument7, MR_Integer Mercury__argument8)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_exit_node_8_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument6, MR_r6);
	MR_r7 = Mercury__argument7;
	MR_r8 = Mercury__argument8;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_exit_node_8_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__make_no_maybe_label_0_0);

MR_Word
MR_DD_make_no_maybe_label(void);

MR_Word
MR_DD_make_no_maybe_label(void)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__make_no_maybe_label_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__make_no_maybe_label_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__make_yes_maybe_label_1_0);

MR_Word
MR_DD_make_yes_maybe_label(const MR_LabelLayout * Mercury__argument1);

MR_Word
MR_DD_make_yes_maybe_label(const MR_LabelLayout * Mercury__argument1)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__make_yes_maybe_label_1_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument1, MR_r1);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__make_yes_maybe_label_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__construct_call_node_9_0);

MR_Word
MR_DD_construct_call_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Integer Mercury__argument3, MR_Integer Mercury__argument4, MR_Word Mercury__argument5, MR_Word Mercury__argument6, const MR_LabelLayout * Mercury__argument7, MR_Integer Mercury__argument8, MR_Integer Mercury__argument9);

MR_Word
MR_DD_construct_call_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Integer Mercury__argument3, MR_Integer Mercury__argument4, MR_Word Mercury__argument5, MR_Word Mercury__argument6, const MR_LabelLayout * Mercury__argument7, MR_Integer Mercury__argument8, MR_Integer Mercury__argument9)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_call_node_9_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_r6 = Mercury__argument6;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument7, MR_r7);
	MR_r8 = Mercury__argument8;
	MR_r9 = Mercury__argument9;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__construct_call_node_9_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__mdb__declarative_execution__print_trace_node_4_0);

void
MR_DD_print_trace_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2);

void
MR_DD_print_trace_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_execution__print_trace_node_4_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_execution__print_trace_node_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__fn__mdb__declarative_execution__find_prev_contour_store_2_0);

MR_Word
MR_DD_find_prev_contour(MR_Word Mercury__argument1, MR_Word Mercury__argument2);

MR_Word
MR_DD_find_prev_contour(MR_Word Mercury__argument1, MR_Word Mercury__argument2)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__find_prev_contour_store_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__find_prev_contour_store_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__step_left_in_contour_store_2_0);

MR_Word
MR_DD_step_left_in_contour(MR_Word Mercury__argument1, MR_Word Mercury__argument2);

MR_Word
MR_DD_step_left_in_contour(MR_Word Mercury__argument1, MR_Word Mercury__argument2)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__step_left_in_contour_store_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__step_left_in_contour_store_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__mdb__declarative_execution__trace_node_first_disj_2_0);

MR_bool
MR_DD_trace_node_first_disj(MR_Word Mercury__argument1, MR_Word * Mercury__argument2);

MR_bool
MR_DD_trace_node_first_disj(MR_Word Mercury__argument1, MR_Word * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_execution__trace_node_first_disj_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_execution__trace_node_first_disj_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
	*Mercury__argument2 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


MR_declare_static(mercury__mdb__declarative_execution__trace_node_call_3_0);

MR_bool
MR_DD_trace_node_call(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

MR_bool
MR_DD_trace_node_call(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_execution__trace_node_call_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_execution__trace_node_call_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
	*Mercury__argument3 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


MR_declare_static(mercury__mdb__declarative_execution__trace_node_seqno_3_0);

MR_bool
MR_DD_trace_node_seqno(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Integer * Mercury__argument3);

MR_bool
MR_DD_trace_node_seqno(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Integer * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_execution__trace_node_seqno_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_execution__trace_node_seqno_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
	*Mercury__argument3 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__trace_node_path_1_0);

MR_String
MR_DD_trace_node_path(MR_Word Mercury__argument1);

MR_String
MR_DD_trace_node_path(MR_Word Mercury__argument1)
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
	MR_String return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__trace_node_path_1_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__trace_node_path_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__trace_node_port_1_0);

MR_Word
MR_DD_trace_node_port(MR_Word Mercury__argument1);

MR_Word
MR_DD_trace_node_port(MR_Word Mercury__argument1)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__trace_node_port_1_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__trace_node_port_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__neg_node_set_status_2_0);

MR_Word
MR_DD_neg_node_set_status(MR_Word Mercury__argument1, MR_Word Mercury__argument2);

MR_Word
MR_DD_neg_node_set_status(MR_Word Mercury__argument1, MR_Word Mercury__argument2)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__neg_node_set_status_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__neg_node_set_status_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__cond_node_set_status_2_0);

MR_Word
MR_DD_cond_node_set_status(MR_Word Mercury__argument1, MR_Word Mercury__argument2);

MR_Word
MR_DD_cond_node_set_status(MR_Word Mercury__argument1, MR_Word Mercury__argument2)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__cond_node_set_status_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__cond_node_set_status_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0);

MR_Integer
MR_DD_get_implicit_tree_ideal_depth(MR_Word Mercury__argument1);

MR_Integer
MR_DD_get_implicit_tree_ideal_depth(MR_Word Mercury__argument1)
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
	MR_Integer return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0);

MR_Word
MR_DD_call_node_update_implicit_tree_info(MR_Word Mercury__argument1, MR_Integer Mercury__argument2);

MR_Word
MR_DD_call_node_update_implicit_tree_info(MR_Word Mercury__argument1, MR_Integer Mercury__argument2)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__call_node_set_last_interface_2_0);

MR_Word
MR_DD_call_node_set_last_interface(MR_Word Mercury__argument1, MR_Word Mercury__argument2);

MR_Word
MR_DD_call_node_set_last_interface(MR_Word Mercury__argument1, MR_Word Mercury__argument2)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__call_node_set_last_interface_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__call_node_set_last_interface_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__declarative_execution__call_node_get_last_interface_1_0);

MR_Word
MR_DD_call_node_get_last_interface(MR_Word Mercury__argument1);

MR_Word
MR_DD_call_node_get_last_interface(MR_Word Mercury__argument1)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__declarative_execution__call_node_get_last_interface_1_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__declarative_execution__call_node_get_last_interface_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


static void mercury__mdb__declarative_execution_maybe_bunch_0(void)
{
	mdb__declarative_execution_module0();
	mdb__declarative_execution_module1();
	mdb__declarative_execution_module2();
	mdb__declarative_execution_module3();
	mdb__declarative_execution_module4();
	mdb__declarative_execution_module5();
	mdb__declarative_execution_module6();
	mdb__declarative_execution_module7();
	mdb__declarative_execution_module8();
	mdb__declarative_execution_module9();
	mdb__declarative_execution_module10();
	mdb__declarative_execution_module11();
	mdb__declarative_execution_module12();
	mdb__declarative_execution_module13();
	mdb__declarative_execution_module14();
	mdb__declarative_execution_module15();
	mdb__declarative_execution_module16();
	mdb__declarative_execution_module17();
	mdb__declarative_execution_module18();
	mdb__declarative_execution_module19();
	mdb__declarative_execution_module20();
	mdb__declarative_execution_module21();
	mdb__declarative_execution_module22();
	mdb__declarative_execution_module23();
	mdb__declarative_execution_module24();
	mdb__declarative_execution_module25();
	mdb__declarative_execution_module26();
	mdb__declarative_execution_module27();
	mdb__declarative_execution_module28();
	mdb__declarative_execution_module29();
	mdb__declarative_execution_module30();
	mdb__declarative_execution_module31();
	mdb__declarative_execution_module32();
	mdb__declarative_execution_module33();
	mdb__declarative_execution_module34();
	mdb__declarative_execution_module35();
	mdb__declarative_execution_module36();
	mdb__declarative_execution_module37();
	mdb__declarative_execution_module38();
	mdb__declarative_execution_module39();
}

static void mercury__mdb__declarative_execution_maybe_bunch_1(void)
{
	mdb__declarative_execution_module40();
	mdb__declarative_execution_module41();
	mdb__declarative_execution_module42();
	mdb__declarative_execution_module43();
	mdb__declarative_execution_module44();
	mdb__declarative_execution_module45();
	mdb__declarative_execution_module46();
	mdb__declarative_execution_module47();
	mdb__declarative_execution_module48();
	mdb__declarative_execution_module49();
	mdb__declarative_execution_module50();
	mdb__declarative_execution_module51();
	mdb__declarative_execution_module52();
	mdb__declarative_execution_module53();
	mdb__declarative_execution_module54();
	mdb__declarative_execution_module55();
	mdb__declarative_execution_module56();
	mdb__declarative_execution_module57();
	mdb__declarative_execution_module58();
	mdb__declarative_execution_module59();
	mdb__declarative_execution_module60();
	mdb__declarative_execution_module61();
	mdb__declarative_execution_module62();
	mdb__declarative_execution_module63();
	mdb__declarative_execution_module64();
	mdb__declarative_execution_module65();
	mdb__declarative_execution_module66();
	mdb__declarative_execution_module67();
	mdb__declarative_execution_module68();
	mdb__declarative_execution_module69();
	mdb__declarative_execution_module70();
	mdb__declarative_execution_module71();
	mdb__declarative_execution_module72();
	mdb__declarative_execution_module73();
	mdb__declarative_execution_module74();
	mdb__declarative_execution_module75();
	mdb__declarative_execution_module76();
	mdb__declarative_execution_module77();
	mdb__declarative_execution_module78();
	mdb__declarative_execution_module79();
}

static void mercury__mdb__declarative_execution_maybe_bunch_2(void)
{
	mdb__declarative_execution_module80();
	mdb__declarative_execution_module81();
	mdb__declarative_execution_module82();
	mdb__declarative_execution_module83();
	mdb__declarative_execution_module84();
	mdb__declarative_execution_module85();
	mdb__declarative_execution_module86();
	mdb__declarative_execution_module87();
	mdb__declarative_execution_module88();
	mdb__declarative_execution_module89();
	mdb__declarative_execution_module90();
	mdb__declarative_execution_module91();
	mdb__declarative_execution_module92();
	mdb__declarative_execution_module93();
	mdb__declarative_execution_module94();
	mdb__declarative_execution_module95();
	mdb__declarative_execution_module96();
	mdb__declarative_execution_module97();
	mdb__declarative_execution_module98();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__declarative_execution__init(void);
void mercury__mdb__declarative_execution__init_type_tables(void);
void mercury__mdb__declarative_execution__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__declarative_execution__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__declarative_execution__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__declarative_execution__init_threadscope_string_table(void);
#endif

void mercury__mdb__declarative_execution__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__declarative_execution_maybe_bunch_0();
	mercury__mdb__declarative_execution_maybe_bunch_1();
	mercury__mdb__declarative_execution_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_event_number_0,
		mdb__declarative_execution__event_number_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_goal_status_0,
		mdb__declarative_execution__goal_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_implicit_tree_info_0,
		mdb__declarative_execution__implicit_tree_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_sequence_number_0,
		mdb__declarative_execution__sequence_number_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0,
		mdb__declarative_execution__suspicion_accumulator_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_0,
		mdb__declarative_execution__trace_atom_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0,
		mdb__declarative_execution__trace_atom_arg_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_1,
		mdb__declarative_execution__trace_node_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_id_0,
		mdb__declarative_execution__trace_node_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_key_0,
		mdb__declarative_execution__trace_node_key_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_map_0,
		mdb__declarative_execution__trace_node_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_store_0,
		mdb__declarative_execution__trace_node_store_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_which_headvars_0,
		mdb__declarative_execution__which_headvars_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0__, 5) =
			MR_ENTRY_AP(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__, 5) =
			MR_ENTRY_AP(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__mdb__declarative_execution__init_debugger();
}

void mercury__mdb__declarative_execution__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_event_number_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_goal_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_implicit_tree_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_sequence_number_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_key_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_store_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_which_headvars_0);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_mdb__declarative_execution__type_class_decl_annotated_trace_2);
	}
}


void mercury__mdb__declarative_execution__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__declarative_execution__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__declarative_execution);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__declarative_execution__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__declarative_execution__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
