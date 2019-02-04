/*
** Automatically generated from `declarative_execution.m'
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
INIT mercury__mdb__declarative_execution__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "mdb.declarative_execution.c"
#include "mdb.declarative_execution.mh"

#line 27 "mdb.declarative_execution.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 31 "mdb.declarative_execution.c"
#line 27 "../mdbcomp/mdbcomp.rtti_access.int"
#include "mdbcomp.rtti_access.mh"

#line 35 "mdb.declarative_execution.c"
#line 520 "../library/io.int"
#include "io.mh"

#line 39 "mdb.declarative_execution.c"
#line 526 "../library/io.int"
#include "string.mh"

#line 43 "mdb.declarative_execution.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "mdb.declarative_execution.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 51 "mdb.declarative_execution.c"
#line 28 "../library/array.int2"
#include "array.mh"

#line 55 "mdb.declarative_execution.c"
#line 56 "mdb.declarative_execution.c"
#ifndef MDB__DECLARATIVE_EXECUTION_DECL_GUARD
#define MDB__DECLARATIVE_EXECUTION_DECL_GUARD

#line 60 "mdb.declarative_execution.c"
#line 61 "mdb.declarative_execution.c"

#endif
#line 64 "mdb.declarative_execution.c"


struct mercury_type_0 {
	MR_String f1[2];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
static const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[3];
};
static const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
};
static const struct mercury_type_6 mercury_common_6[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0__[],
	mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__[];

extern const MR_TypeClassDeclStruct
	mercury_data_mdb__declarative_execution__type_class_decl_annotated_trace_2;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__declarative_execution__type_ctor_info_which_headvars_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_store_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_map_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_key_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_id_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_1,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_sequence_number_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__declarative_execution__type_ctor_info_read_proc_rep_info_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_implicit_tree_info_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_goal_status_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_event_number_0,
	mercury_data_mdb__declarative_execution__type_ctor_info_bytecode_0;
MR_decl_label1(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0, 1)
MR_decl_label3(mdb__declarative_execution__absolute_arg_num_3_0, 21,6,4)
MR_decl_label1(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0, 2)
MR_decl_label2(mdb__declarative_execution__add_trace_atom_arg_value_5_0, 2,3)
MR_decl_label3(mdb__declarative_execution__arg_num_to_head_var_num_4_0, 3,6,8)
MR_decl_label1(mdb__declarative_execution__call_node_bytecode_layout_2_0, 1)
MR_decl_label2(mdb__declarative_execution__call_node_from_id_3_0, 3,2)
MR_decl_label3(mdb__declarative_execution__call_node_maybe_proc_rep_2_0, 29,9,2)
MR_decl_label2(mdb__declarative_execution__cond_node_from_id_3_0, 3,2)
MR_decl_label1(mdb__declarative_execution__construct_excp_node_8_0, 2)
MR_decl_label2(mdb__declarative_execution__det_trace_node_from_id_3_0, 3,2)
MR_decl_label3(mdb__declarative_execution__disj_node_from_id_3_0, 3,6,2)
MR_decl_label2(mdb__declarative_execution__exit_node_from_id_3_0, 3,2)
MR_decl_label6(mdb__declarative_execution__find_prev_contour_3_1, 19,20,8,18,9,3)
MR_decl_label2(mdb__declarative_execution__first_disj_node_from_id_3_0, 3,2)
MR_decl_label3(mdb__declarative_execution__get_pred_attributes_5_0, 13,4,5)
MR_decl_label1(mdb__declarative_execution__have_cached_proc_rep_2_0, 1)
MR_decl_label3(mdb__declarative_execution__head_var_num_to_arg_num_4_0, 3,6,8)
MR_decl_label7(mdb__declarative_execution__load_trace_node_map_5_0, 2,6,5,3,9,13,12)
MR_decl_label1(mdb__declarative_execution__maybe_filter_headvars_3_0, 3)
MR_decl_label3(mdb__declarative_execution__maybe_redo_node_from_id_3_0, 2,7,1)
MR_decl_label2(mdb__declarative_execution__neg_node_from_id_3_0, 3,2)
MR_decl_label4(mdb__declarative_execution__node_map_4_0, 38,6,23,3)
MR_decl_label6(mdb__declarative_execution__read_atomic_info_8_0, 4,2,7,8,10,11)
MR_decl_label8(mdb__declarative_execution__read_goal_7_0, 2,4,7,8,9,10,11,12)
MR_decl_label8(mdb__declarative_execution__read_goal_7_0, 13,14,15,16,17,18,19,20)
MR_decl_label8(mdb__declarative_execution__read_goal_7_0, 21,23,27,28,29,30,31,32)
MR_decl_label8(mdb__declarative_execution__read_goal_7_0, 34,35,36,37,39,40,41,42)
MR_decl_label8(mdb__declarative_execution__read_goal_7_0, 44,45,46,47,49,50,51,53)
MR_decl_label8(mdb__declarative_execution__read_goal_7_0, 54,55,57,58,59,61,62,64)
MR_decl_label8(mdb__declarative_execution__read_goal_7_0, 65,66,68,69,70,71,73,74)
MR_decl_label8(mdb__declarative_execution__read_goal_7_0, 75,76,78,79,80,81,83,84)
MR_decl_label2(mdb__declarative_execution__read_goal_7_0, 85,3)
MR_decl_label3(mdb__declarative_execution__read_goals_2_8_0, 3,4,2)
MR_decl_label6(mdb__declarative_execution__read_maybe_vars_2_6_0, 6,3,7,11,12,2)
MR_decl_label6(mdb__declarative_execution__read_proc_rep_3_0, 4,2,7,8,9,10)
MR_decl_label1(mdb__declarative_execution__read_var_5_0, 3)
MR_decl_label3(mdb__declarative_execution__read_vars_2_6_0, 4,5,2)
MR_decl_label5(mdb__declarative_execution__save_trace_node_store_5_0, 2,3,4,5,6)
MR_decl_label1(mdb__declarative_execution__search_trace_node_store_3_0, 1)
MR_decl_label4(mdb__declarative_execution__select_arg_at_pos_3_0, 7,5,6,4)
MR_decl_label5(mdb__declarative_execution__trace_node_call_3_0, 9,7,4,6,1)
MR_decl_label2(mdb__declarative_execution__trace_node_first_disj_2_0, 3,1)
MR_decl_label4(mdb__declarative_execution__trace_node_seqno_3_0, 19,4,6,1)
MR_decl_label3(mdb__declarative_execution__user_arg_num_3_0, 22,7,4)
MR_decl_label1(fn__mdb__declarative_execution__call_node_get_last_interface_1_0, 2)
MR_decl_label6(fn__mdb__declarative_execution__call_node_set_last_interface_2_0, 2,5,6,7,8,9)
MR_decl_label6(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0, 2,5,6,7,8,9)
MR_decl_label6(fn__mdb__declarative_execution__cond_node_set_status_2_0, 2,5,6,7,8,9)
MR_decl_label2(fn__mdb__declarative_execution__construct_call_node_9_0, 3,2)
MR_decl_label2(fn__mdb__declarative_execution__construct_later_disj_node_4_0, 2,4)
MR_decl_label8(fn__mdb__declarative_execution__find_prev_contour_store_2_0, 2,16,7,8,9,10,12,14)
MR_decl_label2(fn__mdb__declarative_execution__find_prev_contour_store_2_0, 15,4)
MR_decl_label2(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0, 5,2)
MR_decl_label1(fn__mdb__declarative_execution__get_trace_call_atom_1_0, 2)
MR_decl_label2(fn__mdb__declarative_execution__get_trace_call_atom_1_1, 3,1)
MR_decl_label1(fn__mdb__declarative_execution__get_trace_exit_atom_1_0, 2)
MR_decl_label2(fn__mdb__declarative_execution__get_trace_exit_atom_1_1, 3,1)
MR_decl_label6(fn__mdb__declarative_execution__neg_node_set_status_2_0, 2,5,6,7,8,9)
MR_decl_label8(fn__mdb__declarative_execution__step_in_stratum_2_0, 4,6,48,9,10,13,18,19)
MR_decl_label6(fn__mdb__declarative_execution__step_in_stratum_2_0, 23,51,26,52,53,31)
MR_decl_label8(fn__mdb__declarative_execution__step_left_in_contour_2_0, 4,53,10,56,57,14,58,19)
MR_decl_label8(fn__mdb__declarative_execution__step_left_in_contour_2_0, 20,59,27,39,28,60,33,54)
MR_decl_label3(fn__mdb__declarative_execution__step_over_redo_or_call_3_0, 4,2,6)
MR_decl_label6(fn__mdb__declarative_execution__trace_node_path_1_0, 4,7,8,9,16,18)
MR_decl_label8(fn__mdb__declarative_execution__trace_node_port_1_0, 4,5,6,7,8,9,10,12)
MR_decl_label6(fn__mdb__declarative_execution__trace_node_port_1_0, 13,14,15,16,17,18)
MR_decl_label1(__Unify___mdb__declarative_execution__read_proc_rep_info_0_0, 1)
MR_decl_label2(__Unify___mdb__declarative_execution__trace_atom_0_0, 2,1)
MR_decl_label1(__Unify___mdb__declarative_execution__trace_atom_arg_0_0, 1)
MR_decl_label8(__Unify___mdb__declarative_execution__trace_node_1_0, 4,6,8,10,12,14,16,18)
MR_decl_label8(__Unify___mdb__declarative_execution__trace_node_1_0, 20,22,24,26,28,30,32,34)
MR_decl_label8(__Unify___mdb__declarative_execution__trace_node_1_0, 36,38,39,41,43,45,47,49)
MR_decl_label8(__Unify___mdb__declarative_execution__trace_node_1_0, 51,53,55,57,59,61,63,67)
MR_decl_label8(__Unify___mdb__declarative_execution__trace_node_1_0, 69,73,75,77,81,83,85,87)
MR_decl_label8(__Unify___mdb__declarative_execution__trace_node_1_0, 89,91,95,97,99,103,105,107)
MR_decl_label7(__Unify___mdb__declarative_execution__trace_node_1_0, 109,111,113,117,119,121,1)
MR_decl_label8(__Index___mdb__declarative_execution__trace_node_1_0, 4,5,6,7,8,9,10,11)
MR_decl_label7(__Index___mdb__declarative_execution__trace_node_1_0, 12,13,14,15,16,17,18)
MR_decl_label2(__Compare___mdb__declarative_execution__read_proc_rep_info_0_0, 3,7)
MR_decl_label2(__Compare___mdb__declarative_execution__trace_atom_0_0, 3,7)
MR_decl_label3(__Compare___mdb__declarative_execution__trace_atom_arg_0_0, 3,7,12)
MR_decl_label8(__Compare___mdb__declarative_execution__trace_node_1_0, 2,3,4,5,9,12,16,20)
MR_decl_label8(__Compare___mdb__declarative_execution__trace_node_1_0, 24,28,32,36,40,44,57,60)
MR_decl_label8(__Compare___mdb__declarative_execution__trace_node_1_0, 64,68,72,76,80,84,95,98)
MR_decl_label8(__Compare___mdb__declarative_execution__trace_node_1_0, 102,106,110,118,119,122,126,130)
MR_decl_label8(__Compare___mdb__declarative_execution__trace_node_1_0, 134,138,147,150,154,158,162,166)
MR_decl_label8(__Compare___mdb__declarative_execution__trace_node_1_0, 170,180,183,188,191,196,199,203)
MR_decl_label8(__Compare___mdb__declarative_execution__trace_node_1_0, 209,212,216,222,225,229,235,238)
MR_decl_label8(__Compare___mdb__declarative_execution__trace_node_1_0, 242,248,251,255,261,264,268,274)
MR_decl_label4(__Compare___mdb__declarative_execution__trace_node_1_0, 277,281,6,290)
MR_def_extern_entry(fn__mdb__declarative_execution__get_trace_exit_atom_1_0)
MR_def_extern_entry(fn__mdb__declarative_execution__get_trace_exit_atom_1_1)
MR_def_extern_entry(fn__mdb__declarative_execution__get_trace_call_atom_1_0)
MR_def_extern_entry(fn__mdb__declarative_execution__get_trace_call_atom_1_1)
MR_def_extern_entry(mdb__declarative_execution__get_pred_attributes_5_0)
MR_decl_static(mdb__declarative_execution__call_node_bytecode_layout_2_0)
MR_decl_static(mdb__declarative_execution__lookup_proc_bytecode_2_0)
MR_decl_static(mdb__declarative_execution__have_cached_proc_rep_2_0)
MR_decl_static(mdb__declarative_execution__cache_proc_rep_2_0)
MR_decl_static(mdb__declarative_execution__read_byte_4_0)
MR_decl_static(mdb__declarative_execution__read_short_4_0)
MR_decl_static(mdb__declarative_execution__read_var_5_0)
MR_decl_static(mdb__declarative_execution__read_vars_2_6_0)
MR_decl_static(mdb__declarative_execution__read_vars_5_0)
MR_decl_static(mdb__declarative_execution__read_string_5_0)
MR_decl_static(mdb__declarative_execution__read_atomic_info_8_0)
MR_decl_static(mdb__declarative_execution__read_maybe_vars_2_6_0)
MR_decl_static(mdb__declarative_execution__read_maybe_vars_5_0)
MR_decl_static(mdb__declarative_execution__read_method_num_4_0)
MR_decl_static(mdb__declarative_execution__read_cons_id_5_0)
MR_decl_static(mdb__declarative_execution__read_goal_7_0)
MR_decl_static(mdb__declarative_execution__read_goals_7_0)
MR_decl_static(mdb__declarative_execution__read_goals_2_8_0)
MR_decl_static(mdb__declarative_execution__read_int32_4_0)
MR_decl_static(mdb__declarative_execution__read_proc_rep_3_0)
MR_def_extern_entry(mdb__declarative_execution__call_node_maybe_proc_rep_2_0)
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
MR_decl_static(__Unify___mdb__declarative_execution__bytecode_0_0)
MR_decl_static(__Compare___mdb__declarative_execution__bytecode_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__event_number_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__event_number_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__goal_status_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__goal_status_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_execution__implicit_tree_info_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_execution__implicit_tree_info_0_0)
MR_decl_static(__Unify___mdb__declarative_execution__read_proc_rep_info_0_0)
MR_decl_static(__Compare___mdb__declarative_execution__read_proc_rep_info_0_0)
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
MR_decl_static(mdb__declarative_execution__IntroducedFrom__pred__read_proc_rep__1552__1_2_0)

static const struct mercury_type_0 mercury_common_0[28] =
{
{
{
MR_string_const("read_maybe_vars_2", 17),
MR_string_const("invalid yes or no flag", 22)
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
MR_string_const("unexpected CALL node", 20)
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
MR_string_const("maybe_redo_node_from_id", 23),
MR_string_const("not a REDO node or NULL", 23)
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
MR_string_const("failed COND node", 16)
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
MR_string_const("reached COND node", 17)
}
},
{
{
MR_string_const("find_prev_contour", 17),
MR_string_const("reached NEGE node", 17)
}
},
{
{
MR_string_const("find_prev_contour", 17),
MR_string_const("reached CALL node", 17)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_execution__read_proc_rep_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_execution__read_proc_rep_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
static const struct mercury_type_2 mercury_common_2[3] =
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
static const struct mercury_type_3 mercury_common_3[2] =
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

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(mdb__declarative_execution__is_user_visible_arg_1_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(mdb__declarative_execution__is_user_visible_arg_1_0),
0
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__,
MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_store),
MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_id)
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
0
},
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
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_store_0 = {
	"store",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_trace_node_store_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_store_0 = {
	0,
	13,
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
	13,
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

static const MR_NotagFunctorDesc mercury_data_mdb__declarative_execution__notag_functor_desc_trace_node_key_0 = {
	"key",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_trace_node_key_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
	0,
	13,
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
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0
}};
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
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__term_rep__type_ctor_info_term_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__term_rep__type_ctor_info_term_rep_0;

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
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

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
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0;
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
	13,
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

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0 = {
	0,
	13,
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

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_sequence_number_0 = {
	0,
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_execution__field_types_read_proc_rep_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_mdb__declarative_execution__field_names_read_proc_rep_info_0_0[] = {
	"limit",
	"filename"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_execution__du_functor_desc_read_proc_rep_info_0_0 = {
	"read_proc_rep_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_execution__field_types_read_proc_rep_info_0_0,
	mercury_data_mdb__declarative_execution__field_names_read_proc_rep_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_execution__du_stag_ordered_read_proc_rep_info_0_0[] = {
	&mercury_data_mdb__declarative_execution__du_functor_desc_read_proc_rep_info_0_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_execution__du_ptag_ordered_read_proc_rep_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_execution__du_stag_ordered_read_proc_rep_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_execution__du_name_ordered_read_proc_rep_info_0[] = {
	&mercury_data_mdb__declarative_execution__du_functor_desc_read_proc_rep_info_0_0
};

const MR_Integer mercury_data_mdb__declarative_execution__functor_number_map_read_proc_rep_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_read_proc_rep_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__read_proc_rep_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__read_proc_rep_info_0_0)),
	"mdb.declarative_execution",
	"read_proc_rep_info",
	{ (void *)mercury_data_mdb__declarative_execution__du_name_ordered_read_proc_rep_info_0 },
	{ (void *)mercury_data_mdb__declarative_execution__du_ptag_ordered_read_proc_rep_info_0 },
	1,
	4,
	mercury_data_mdb__declarative_execution__functor_number_map_read_proc_rep_info_0
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
	13,
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
	13,
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

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_event_number_0 = {
	0,
	13,
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

const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_execution__type_ctor_info_bytecode_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_STABLE_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_execution__bytecode_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_execution__bytecode_0_0)),
	"mdb.declarative_execution",
	"bytecode",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
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
mercury_data__closure_layout__mdb__declarative_execution__read_proc_rep_3_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_execution",
"mdb.declarative_execution",
"lambda_declarative_execution_m_1552",
2,
0
},
"mdb.declarative_execution",
"declarative_execution.m",
1552,
"d1;c4;q;c9;"
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
1450,
"d1;c4;d2;c3;"
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
1450,
"d1;c4;d2;c3;"
};

MR_decl_entry(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module0)
	MR_init_entry1(fn__mdb__declarative_execution__get_trace_exit_atom_1_0);
	MR_init_label1(fn__mdb__declarative_execution__get_trace_exit_atom_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_execution__get_trace_exit_atom_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 3);
	MR_r1 = MR_ctfield(1, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0,
		fn__mdb__declarative_execution__get_trace_exit_atom_1_0_i2);
MR_def_label(fn__mdb__declarative_execution__get_trace_exit_atom_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module1)
	MR_init_entry1(fn__mdb__declarative_execution__get_trace_exit_atom_1_1);
	MR_init_label2(fn__mdb__declarative_execution__get_trace_exit_atom_1_1,3,1)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 3);
	MR_r1 = MR_ctfield(1, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0,
		fn__mdb__declarative_execution__get_trace_exit_atom_1_1_i3);
MR_def_label(fn__mdb__declarative_execution__get_trace_exit_atom_1_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
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
	MR_init_label1(fn__mdb__declarative_execution__get_trace_call_atom_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_execution__get_trace_call_atom_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0,
		fn__mdb__declarative_execution__get_trace_call_atom_1_0_i2);
MR_def_label(fn__mdb__declarative_execution__get_trace_call_atom_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module3)
	MR_init_entry1(fn__mdb__declarative_execution__get_trace_call_atom_1_1);
	MR_init_label2(fn__mdb__declarative_execution__get_trace_call_atom_1_1,3,1)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0,
		fn__mdb__declarative_execution__get_trace_call_atom_1_1_i3);
MR_def_label(fn__mdb__declarative_execution__get_trace_call_atom_1_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
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
	MR_init_label3(mdb__declarative_execution__get_pred_attributes_5_0,13,4,5)
MR_BEGIN_CODE

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
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_proceed();
	}
MR_def_label(mdb__declarative_execution__get_pred_attributes_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0,
		mdb__declarative_execution__get_pred_attributes_5_0_i4);
MR_def_label(mdb__declarative_execution__get_pred_attributes_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0,
		mdb__declarative_execution__get_pred_attributes_5_0_i5);
MR_def_label(mdb__declarative_execution__get_pred_attributes_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module5)
	MR_init_entry1(mdb__declarative_execution__call_node_bytecode_layout_2_0);
	MR_init_label1(mdb__declarative_execution__call_node_bytecode_layout_2_0,1)
MR_BEGIN_CODE

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
#line 520 "declarative_execution.m"

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
#line 1946 "mdb.declarative_execution.c"
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
	MR_init_entry1(mdb__declarative_execution__lookup_proc_bytecode_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__lookup_proc_bytecode_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	ProcLayout;
	const MR_uint_least8_t *	ByteCode;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__lookup_proc_bytecode_2_0
	ProcLayout = (const MR_ProcLayout *) MR_r1;
{
#line 543 "declarative_execution.m"

    ByteCode = ProcLayout->MR_sle_body_bytes;
#ifdef MR_DEBUG_PROC_REP
    printf("lookup_proc_bytecode: %p %p\n", ProcLayout, ByteCode);
#endif
;}
#line 1989 "mdb.declarative_execution.c"
	MR_r1 = (MR_Word) ByteCode;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module7)
	MR_init_entry1(mdb__declarative_execution__have_cached_proc_rep_2_0);
	MR_init_label1(mdb__declarative_execution__have_cached_proc_rep_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__have_cached_proc_rep_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	ProcLayout;
	MR_Word	ProcRep;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__have_cached_proc_rep_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	ProcLayout = (const MR_ProcLayout *) MR_r1;
{
#line 560 "declarative_execution.m"

    ProcRep = MR_lookup_proc_rep(ProcLayout);
    if (ProcRep != 0) {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_rep: %p success\n",
            ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_rep: %p failure\n",
            ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 2038 "mdb.declarative_execution.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_execution__have_cached_proc_rep_2_0_i1);
	MR_r2 = ProcRep;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__have_cached_proc_rep_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module8)
	MR_init_entry1(mdb__declarative_execution__cache_proc_rep_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__cache_proc_rep_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	ProcLayout;
	MR_Word	ProcRep;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__cache_proc_rep_2_0
	ProcLayout = (const MR_ProcLayout *) MR_r1;
	ProcRep = MR_r2;
{
#line 585 "declarative_execution.m"

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_rep: %p %x\n", ProcLayout, ProcRep);
#endif
    MR_insert_proc_rep(ProcLayout, ProcRep);
;}
#line 2082 "mdb.declarative_execution.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module9)
	MR_init_entry1(mdb__declarative_execution__read_byte_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_byte_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_byte_4_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r2;
{
#line 1829 "declarative_execution.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 2117 "mdb.declarative_execution.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module10)
	MR_init_entry1(mdb__declarative_execution__read_short_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_short_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_short_4_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r2;
{
#line 1839 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 2154 "mdb.declarative_execution.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module11)
	MR_init_entry1(mdb__declarative_execution__read_var_5_0);
	MR_init_label1(mdb__declarative_execution__read_var_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_var_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_var_5_0_i3);
	}
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_var_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r3;
{
#line 1829 "declarative_execution.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 2195 "mdb.declarative_execution.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(mdb__declarative_execution__read_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_var_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r3;
{
#line 1839 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 2217 "mdb.declarative_execution.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module12)
	MR_init_entry1(mdb__declarative_execution__read_vars_2_6_0);
	MR_init_label3(mdb__declarative_execution__read_vars_2_6_0,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_vars_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_vars_2_6_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_vars_2_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_vars_2_6_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r4;
{
#line 1829 "declarative_execution.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 2265 "mdb.declarative_execution.c"
	MR_r4 = Pos;
	MR_tempr1 = Value;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdb__declarative_execution__read_vars_2_6_0,
		mdb__declarative_execution__read_vars_2_6_0_i5);
MR_def_label(mdb__declarative_execution__read_vars_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_vars_2_6_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r4;
{
#line 1839 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 2293 "mdb.declarative_execution.c"
	MR_r4 = Pos;
	MR_tempr1 = Value;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdb__declarative_execution__read_vars_2_6_0,
		mdb__declarative_execution__read_vars_2_6_0_i5);
MR_def_label(mdb__declarative_execution__read_vars_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdb__declarative_execution__read_vars_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module13)
	MR_init_entry1(mdb__declarative_execution__read_vars_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_vars_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r3;
{
#line 1839 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 2349 "mdb.declarative_execution.c"
	MR_r4 = Pos;
	MR_r3 = Value;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(mdb__declarative_execution__read_vars_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module14)
	MR_init_entry1(mdb__declarative_execution__read_string_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_string_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	const MR_LabelLayout *	Label;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_String	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_string_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Label = (const MR_LabelLayout *) MR_r2;
	Pos0 = MR_r3;
{
#line 1861 "declarative_execution.m"

    int         offset;
    const char  *str;

    offset = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
    str = Label->MR_sll_entry->MR_sle_module_layout->MR_ml_string_table
        + offset;
    MR_make_aligned_string(Value, str);
;}
#line 2395 "mdb.declarative_execution.c"
	MR_r1 = Pos;
	MR_r2 = (MR_Word) Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__program_representation__determinism_representation_2_1);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module15)
	MR_init_entry1(mdb__declarative_execution__read_atomic_info_8_0);
	MR_init_label6(mdb__declarative_execution__read_atomic_info_8_0,4,2,7,8,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_atomic_info_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_atomic_info_8_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r4;
{
#line 1829 "declarative_execution.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 2439 "mdb.declarative_execution.c"
	MR_tempr1 = Pos;
	MR_tempr2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__determinism_representation_2_1,
		mdb__declarative_execution__read_atomic_info_8_0_i4);
MR_def_label(mdb__declarative_execution__read_atomic_info_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_atomic_info_8_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(mdb__declarative_execution__read_atomic_info_8_0_i7);
MR_def_label(mdb__declarative_execution__read_atomic_info_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_tempr5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_string_const("read_atomic_info: bad detism", 28);
	}
	MR_np_call_localret_ent(require__error_1_0,
		mdb__declarative_execution__read_atomic_info_8_0_i7);
MR_def_label(mdb__declarative_execution__read_atomic_info_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	const MR_LabelLayout *	Label;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_String	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_atomic_info_8_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Label = (const MR_LabelLayout *) MR_sv(3);
	Pos0 = MR_sv(6);
{
#line 1861 "declarative_execution.m"

    int         offset;
    const char  *str;

    offset = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
    str = Label->MR_sll_entry->MR_sle_module_layout->MR_ml_string_table
        + offset;
    MR_make_aligned_string(Value, str);
;}
#line 2503 "mdb.declarative_execution.c"
	MR_r5 = Pos;
	MR_r6 = (MR_Word) Value;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r6, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_atomic_info_8_0_i8);
	}
	MR_sv(2) = MR_ctfield(0, MR_sv(4), 1);
	MR_r3 = MR_r5;
	MR_GOTO_LAB(mdb__declarative_execution__read_atomic_info_8_0_i10);
MR_def_label(mdb__declarative_execution__read_atomic_info_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r6;
	MR_r3 = MR_r5;
MR_def_label(mdb__declarative_execution__read_atomic_info_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_atomic_info_8_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r3;
{
#line 1839 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 2536 "mdb.declarative_execution.c"
	MR_tempr1 = Pos;
	MR_tempr2 = Value;
#undef	MR_PROC_LABEL
	}
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_atomic_info_8_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_tempr1;
{
#line 1839 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 2555 "mdb.declarative_execution.c"
	MR_r4 = Pos;
	MR_r3 = Value;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr2;
	}
	MR_np_call_localret_ent(mdb__declarative_execution__read_vars_2_6_0,
		mdb__declarative_execution__read_atomic_info_8_0_i11);
MR_def_label(mdb__declarative_execution__read_atomic_info_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module16)
	MR_init_entry1(mdb__declarative_execution__read_maybe_vars_2_6_0);
	MR_init_label6(mdb__declarative_execution__read_maybe_vars_2_6_0,6,3,7,11,12,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_maybe_vars_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_maybe_vars_2_6_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_maybe_vars_2_6_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r4;
{
#line 1829 "declarative_execution.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 2617 "mdb.declarative_execution.c"
	MR_r5 = Pos;
	MR_r6 = Value;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_maybe_vars_2_6_0_i3);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_maybe_vars_2_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_maybe_vars_2_6_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r5;
{
#line 1829 "declarative_execution.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 2644 "mdb.declarative_execution.c"
	MR_r4 = Pos;
	MR_tempr1 = Value;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdb__declarative_execution__read_maybe_vars_2_6_0,
		mdb__declarative_execution__read_maybe_vars_2_6_0_i12);
MR_def_label(mdb__declarative_execution__read_maybe_vars_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_maybe_vars_2_6_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r5;
{
#line 1839 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 2673 "mdb.declarative_execution.c"
	MR_r4 = Pos;
	MR_tempr1 = Value;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(mdb__declarative_execution__read_maybe_vars_2_6_0,
		mdb__declarative_execution__read_maybe_vars_2_6_0_i12);
MR_def_label(mdb__declarative_execution__read_maybe_vars_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_maybe_vars_2_6_0_i7);
	}
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r5;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_np_localcall_lab(mdb__declarative_execution__read_maybe_vars_2_6_0,
		mdb__declarative_execution__read_maybe_vars_2_6_0_i12);
MR_def_label(mdb__declarative_execution__read_maybe_vars_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_execution__read_maybe_vars_2_6_0_i11);
MR_def_label(mdb__declarative_execution__read_maybe_vars_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mdb__declarative_execution__read_maybe_vars_2_6_0,
		mdb__declarative_execution__read_maybe_vars_2_6_0_i12);
MR_def_label(mdb__declarative_execution__read_maybe_vars_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdb__declarative_execution__read_maybe_vars_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module17)
	MR_init_entry1(mdb__declarative_execution__read_maybe_vars_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_maybe_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_maybe_vars_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r3;
{
#line 1839 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 2755 "mdb.declarative_execution.c"
	MR_r4 = Pos;
	MR_r3 = Value;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(mdb__declarative_execution__read_maybe_vars_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module18)
	MR_init_entry1(mdb__declarative_execution__read_method_num_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_method_num_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_method_num_4_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r2;
{
#line 1839 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 2792 "mdb.declarative_execution.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module19)
	MR_init_entry1(mdb__declarative_execution__read_cons_id_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_cons_id_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	const MR_LabelLayout *	Label;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_String	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_cons_id_5_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Label = (const MR_LabelLayout *) MR_r2;
	Pos0 = MR_r3;
{
#line 1861 "declarative_execution.m"

    int         offset;
    const char  *str;

    offset = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
    str = Label->MR_sll_entry->MR_sle_module_layout->MR_ml_string_table
        + offset;
    MR_make_aligned_string(Value, str);
;}
#line 2838 "mdb.declarative_execution.c"
	MR_r1 = Pos;
	MR_r2 = (MR_Word) Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__byte_to_goal_type_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module20)
	MR_init_entry1(mdb__declarative_execution__read_goal_7_0);
	MR_init_label8(mdb__declarative_execution__read_goal_7_0,2,4,7,8,9,10,11,12)
	MR_init_label8(mdb__declarative_execution__read_goal_7_0,13,14,15,16,17,18,19,20)
	MR_init_label8(mdb__declarative_execution__read_goal_7_0,21,23,27,28,29,30,31,32)
	MR_init_label8(mdb__declarative_execution__read_goal_7_0,34,35,36,37,39,40,41,42)
	MR_init_label8(mdb__declarative_execution__read_goal_7_0,44,45,46,47,49,50,51,53)
	MR_init_label8(mdb__declarative_execution__read_goal_7_0,54,55,57,58,59,61,62,64)
	MR_init_label8(mdb__declarative_execution__read_goal_7_0,65,66,68,69,70,71,73,74)
	MR_init_label8(mdb__declarative_execution__read_goal_7_0,75,76,78,79,80,81,83,84)
	MR_init_label2(mdb__declarative_execution__read_goal_7_0,85,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(mdb__declarative_execution__read_byte_4_0,
		mdb__declarative_execution__read_goal_7_0_i2);
MR_def_label(mdb__declarative_execution__read_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__byte_to_goal_type_1_0,
		mdb__declarative_execution__read_goal_7_0_i4);
MR_def_label(mdb__declarative_execution__read_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_goal_7_0_i3);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i7) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i9) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i11) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i13) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i17) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i19) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i29) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i34) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i39) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i44) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i49) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i53) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i57) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i61) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i64) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i68) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i73) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i78) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__read_goal_7_0_i83));
MR_def_label(mdb__declarative_execution__read_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_execution__read_goals_7_0,
		mdb__declarative_execution__read_goal_7_0_i8);
MR_def_label(mdb__declarative_execution__read_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_execution__read_goals_7_0,
		mdb__declarative_execution__read_goal_7_0_i10);
MR_def_label(mdb__declarative_execution__read_goal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_execution__read_goals_7_0,
		mdb__declarative_execution__read_goal_7_0_i12);
MR_def_label(mdb__declarative_execution__read_goal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(mdb__declarative_execution__read_goal_7_0,
		mdb__declarative_execution__read_goal_7_0_i14);
MR_def_label(mdb__declarative_execution__read_goal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(mdb__declarative_execution__read_goal_7_0,
		mdb__declarative_execution__read_goal_7_0_i15);
MR_def_label(mdb__declarative_execution__read_goal_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(mdb__declarative_execution__read_goal_7_0,
		mdb__declarative_execution__read_goal_7_0_i16);
MR_def_label(mdb__declarative_execution__read_goal_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(mdb__declarative_execution__read_goal_7_0,
		mdb__declarative_execution__read_goal_7_0_i18);
MR_def_label(mdb__declarative_execution__read_goal_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_byte_4_0,
		mdb__declarative_execution__read_goal_7_0_i20);
MR_def_label(mdb__declarative_execution__read_goal_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_goal_7_0_i21);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_sv(1) = (MR_Integer) 1;
	MR_np_localcall_lab(mdb__declarative_execution__read_goal_7_0,
		mdb__declarative_execution__read_goal_7_0_i28);
MR_def_label(mdb__declarative_execution__read_goal_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_goal_7_0_i23);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_localcall_lab(mdb__declarative_execution__read_goal_7_0,
		mdb__declarative_execution__read_goal_7_0_i28);
MR_def_label(mdb__declarative_execution__read_goal_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("read_goal: bad maybe_cut", 24);
	}
	MR_np_call_localret_ent(require__error_1_0,
		mdb__declarative_execution__read_goal_7_0_i27);
MR_def_label(mdb__declarative_execution__read_goal_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mdb__declarative_execution__read_goal_7_0,
		mdb__declarative_execution__read_goal_7_0_i28);
MR_def_label(mdb__declarative_execution__read_goal_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i30);
MR_def_label(mdb__declarative_execution__read_goal_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_execution__read_cons_id_5_0,
		mdb__declarative_execution__read_goal_7_0_i31);
MR_def_label(mdb__declarative_execution__read_goal_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_vars_5_0,
		mdb__declarative_execution__read_goal_7_0_i32);
MR_def_label(mdb__declarative_execution__read_goal_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i35);
MR_def_label(mdb__declarative_execution__read_goal_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_execution__read_cons_id_5_0,
		mdb__declarative_execution__read_goal_7_0_i36);
MR_def_label(mdb__declarative_execution__read_goal_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_vars_5_0,
		mdb__declarative_execution__read_goal_7_0_i37);
MR_def_label(mdb__declarative_execution__read_goal_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i40);
MR_def_label(mdb__declarative_execution__read_goal_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_execution__read_cons_id_5_0,
		mdb__declarative_execution__read_goal_7_0_i41);
MR_def_label(mdb__declarative_execution__read_goal_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_maybe_vars_5_0,
		mdb__declarative_execution__read_goal_7_0_i42);
MR_def_label(mdb__declarative_execution__read_goal_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i45);
MR_def_label(mdb__declarative_execution__read_goal_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_execution__read_cons_id_5_0,
		mdb__declarative_execution__read_goal_7_0_i46);
MR_def_label(mdb__declarative_execution__read_goal_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_maybe_vars_5_0,
		mdb__declarative_execution__read_goal_7_0_i47);
MR_def_label(mdb__declarative_execution__read_goal_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i50);
MR_def_label(mdb__declarative_execution__read_goal_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i51);
MR_def_label(mdb__declarative_execution__read_goal_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i54);
MR_def_label(mdb__declarative_execution__read_goal_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i55);
MR_def_label(mdb__declarative_execution__read_goal_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i58);
MR_def_label(mdb__declarative_execution__read_goal_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i59);
MR_def_label(mdb__declarative_execution__read_goal_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_vars_5_0,
		mdb__declarative_execution__read_goal_7_0_i62);
MR_def_label(mdb__declarative_execution__read_goal_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i65);
MR_def_label(mdb__declarative_execution__read_goal_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_vars_5_0,
		mdb__declarative_execution__read_goal_7_0_i66);
MR_def_label(mdb__declarative_execution__read_goal_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_var_5_0,
		mdb__declarative_execution__read_goal_7_0_i69);
MR_def_label(mdb__declarative_execution__read_goal_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_method_num_4_0,
		mdb__declarative_execution__read_goal_7_0_i70);
MR_def_label(mdb__declarative_execution__read_goal_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_vars_5_0,
		mdb__declarative_execution__read_goal_7_0_i71);
MR_def_label(mdb__declarative_execution__read_goal_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_string_5_0,
		mdb__declarative_execution__read_goal_7_0_i74);
MR_def_label(mdb__declarative_execution__read_goal_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_execution__read_string_5_0,
		mdb__declarative_execution__read_goal_7_0_i75);
MR_def_label(mdb__declarative_execution__read_goal_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_vars_5_0,
		mdb__declarative_execution__read_goal_7_0_i76);
MR_def_label(mdb__declarative_execution__read_goal_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_string_5_0,
		mdb__declarative_execution__read_goal_7_0_i79);
MR_def_label(mdb__declarative_execution__read_goal_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_execution__read_string_5_0,
		mdb__declarative_execution__read_goal_7_0_i80);
MR_def_label(mdb__declarative_execution__read_goal_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_vars_5_0,
		mdb__declarative_execution__read_goal_7_0_i81);
MR_def_label(mdb__declarative_execution__read_goal_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_execution__read_string_5_0,
		mdb__declarative_execution__read_goal_7_0_i84);
MR_def_label(mdb__declarative_execution__read_goal_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__read_vars_5_0,
		mdb__declarative_execution__read_goal_7_0_i85);
MR_def_label(mdb__declarative_execution__read_goal_7_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(mdb__declarative_execution__read_atomic_info_8_0);
	}
MR_def_label(mdb__declarative_execution__read_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("read_goal: invalid goal type", 28);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module21)
	MR_init_entry1(mdb__declarative_execution__read_goals_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_goals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_goals_7_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_r4;
{
#line 1839 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 3602 "mdb.declarative_execution.c"
	MR_r4 = Pos;
	MR_r6 = Value;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(mdb__declarative_execution__read_goals_2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module22)
	MR_init_entry1(mdb__declarative_execution__read_goals_2_8_0);
	MR_init_label3(mdb__declarative_execution__read_goals_2_8_0,3,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_goals_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r6,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_goals_2_8_0_i2);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(mdb__declarative_execution__read_goal_7_0,
		mdb__declarative_execution__read_goals_2_8_0_i3);
MR_def_label(mdb__declarative_execution__read_goals_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_np_localcall_lab(mdb__declarative_execution__read_goals_2_8_0,
		mdb__declarative_execution__read_goals_2_8_0_i4);
MR_def_label(mdb__declarative_execution__read_goals_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdb__declarative_execution__read_goals_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module23)
	MR_init_entry1(mdb__declarative_execution__read_int32_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_int32_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_int32_4_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r2;
{
#line 1849 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
;}
#line 3696 "mdb.declarative_execution.c"
	MR_r1 = Pos;
	MR_r2 = Value;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__program_representation__var_num_rep_byte_2_1);
MR_decl_entry(require__require_2_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module24)
	MR_init_entry1(mdb__declarative_execution__read_proc_rep_3_0);
	MR_init_label6(mdb__declarative_execution__read_proc_rep_3_0,4,2,7,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__read_proc_rep_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_proc_rep_3_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = (MR_Integer) 0;
{
#line 1849 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
;}
#line 3741 "mdb.declarative_execution.c"
	MR_tempr1 = Pos;
	MR_tempr2 = Value;
#undef	MR_PROC_LABEL
	}
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_proc_rep_3_0
	Bytecode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_tempr1;
{
#line 1829 "declarative_execution.m"

    Value = Bytecode[Pos0];
    Pos = Pos0 + 1;
;}
#line 3760 "mdb.declarative_execution.c"
	MR_tempr1 = Pos;
	MR_tempr3 = Value;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__var_num_rep_byte_2_1,
		mdb__declarative_execution__read_proc_rep_3_0_i4);
MR_def_label(mdb__declarative_execution__read_proc_rep_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__read_proc_rep_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(mdb__declarative_execution__read_proc_rep_3_0_i7);
MR_def_label(mdb__declarative_execution__read_proc_rep_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_r1 = (MR_Word) MR_string_const("read_var_num_rep: unknown var_num_rep", 37);
	}
	MR_np_call_localret_ent(require__error_1_0,
		mdb__declarative_execution__read_proc_rep_3_0_i7);
MR_def_label(mdb__declarative_execution__read_proc_rep_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	const MR_uint_least8_t *	Bytecode;
	const MR_LabelLayout *	Label;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_String	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_proc_rep_3_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Label = (const MR_LabelLayout *) MR_sv(2);
	Pos0 = MR_sv(4);
{
#line 1861 "declarative_execution.m"

    int         offset;
    const char  *str;

    offset = (Bytecode[Pos0] << 24) + (Bytecode[Pos0+1] << 16) +
        (Bytecode[Pos0+2] << 8) + Bytecode[Pos0+3];
    Pos = Pos0 + 4;
    str = Label->MR_sll_entry->MR_sle_module_layout->MR_ml_string_table
        + offset;
    MR_make_aligned_string(Value, str);
;}
#line 3820 "mdb.declarative_execution.c"
	MR_tempr1 = Pos;
	MR_tempr2 = (MR_Word) Value;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	{
	const MR_uint_least8_t *	Bytecode;
	MR_Integer	Pos0;
	MR_Integer	Pos;
	MR_Integer	Value;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__read_proc_rep_3_0
	Bytecode = (const MR_uint_least8_t *) MR_r2;
	Pos0 = MR_tempr1;
{
#line 1839 "declarative_execution.m"

    Value = (Bytecode[Pos0] << 8) + Bytecode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 3843 "mdb.declarative_execution.c"
	MR_r4 = Pos;
	MR_r3 = Value;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	}
	MR_np_call_localret_ent(mdb__declarative_execution__read_vars_2_6_0,
		mdb__declarative_execution__read_proc_rep_3_0_i8);
MR_def_label(mdb__declarative_execution__read_proc_rep_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__read_goal_7_0,
		mdb__declarative_execution__read_proc_rep_3_0_i9);
MR_def_label(mdb__declarative_execution__read_proc_rep_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_execution__IntroducedFrom__pred__read_proc_rep__1552__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 4) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("read_proc_rep: limit mismatch", 29);
	}
	MR_np_call_localret_ent(require__require_2_0,
		mdb__declarative_execution__read_proc_rep_3_0_i10);
MR_def_label(mdb__declarative_execution__read_proc_rep_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module25)
	MR_init_entry1(mdb__declarative_execution__call_node_maybe_proc_rep_2_0);
	MR_init_label3(mdb__declarative_execution__call_node_maybe_proc_rep_2_0,29,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__call_node_maybe_proc_rep_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r2, 7);
	{
	const MR_LabelLayout *	CallLabelLayout;
	const MR_ProcLayout *	ProcLayout;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__call_node_maybe_proc_rep_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	CallLabelLayout = (const MR_LabelLayout *) MR_r3;
{
#line 520 "declarative_execution.m"

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
#line 3933 "mdb.declarative_execution.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_execution__call_node_maybe_proc_rep_2_0_i2);
	MR_r2 = (MR_Word) ProcLayout;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	const MR_ProcLayout *	ProcLayout;
	MR_Word	ProcRep;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__call_node_maybe_proc_rep_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	ProcLayout = (const MR_ProcLayout *) MR_r2;
{
#line 560 "declarative_execution.m"

    ProcRep = MR_lookup_proc_rep(ProcLayout);
    if (ProcRep != 0) {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_rep: %p success\n",
            ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_rep: %p failure\n",
            ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 3968 "mdb.declarative_execution.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__declarative_execution__call_node_maybe_proc_rep_2_0_i29);
	MR_tempr1 = ProcRep;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(mdb__declarative_execution__call_node_maybe_proc_rep_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	const MR_ProcLayout *	ProcLayout;
	const MR_uint_least8_t *	ByteCode;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__call_node_maybe_proc_rep_2_0
	ProcLayout = (const MR_ProcLayout *) MR_r2;
{
#line 543 "declarative_execution.m"

    ByteCode = ProcLayout->MR_sle_body_bytes;
#ifdef MR_DEBUG_PROC_REP
    printf("lookup_proc_bytecode: %p %p\n", ProcLayout, ByteCode);
#endif
;}
#line 3996 "mdb.declarative_execution.c"
	MR_r1 = (MR_Word) ByteCode;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mdb__declarative_execution__read_proc_rep_3_0,
		mdb__declarative_execution__call_node_maybe_proc_rep_2_0_i9);
MR_def_label(mdb__declarative_execution__call_node_maybe_proc_rep_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	ProcLayout;
	MR_Word	ProcRep;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__call_node_maybe_proc_rep_2_0
	ProcLayout = (const MR_ProcLayout *) MR_sv(2);
	ProcRep = MR_r1;
{
#line 585 "declarative_execution.m"

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_rep: %p %x\n", ProcLayout, ProcRep);
#endif
    MR_insert_proc_rep(ProcLayout, ProcRep);
;}
#line 4020 "mdb.declarative_execution.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__declarative_execution__call_node_maybe_proc_rep_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(mdb__declarative_execution_module26)
	MR_init_entry1(mdb__declarative_execution__trace_node_from_id_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__trace_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_execution__trace_node_from_id_3_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module27)
	MR_init_entry1(mdb__declarative_execution__call_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__call_node_from_id_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__call_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
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


MR_BEGIN_MODULE(mdb__declarative_execution_module28)
	MR_init_entry1(mdb__declarative_execution__cond_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__cond_node_from_id_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__cond_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
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


MR_BEGIN_MODULE(mdb__declarative_execution_module29)
	MR_init_entry1(mdb__declarative_execution__neg_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__neg_node_from_id_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__neg_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
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


MR_BEGIN_MODULE(mdb__declarative_execution_module30)
	MR_init_entry1(mdb__declarative_execution__first_disj_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__first_disj_node_from_id_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__first_disj_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
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


MR_BEGIN_MODULE(mdb__declarative_execution_module31)
	MR_init_entry1(mdb__declarative_execution__exit_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__exit_node_from_id_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__exit_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
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

MR_declare_entry(MR_do_not_reached);

MR_BEGIN_MODULE(mdb__declarative_execution_module32)
	MR_init_entry1(mdb__declarative_execution__find_prev_contour_3_1);
	MR_init_label6(mdb__declarative_execution__find_prev_contour_3_1,19,20,8,18,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__find_prev_contour_3_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(mdb__declarative_execution__find_prev_contour_3_1_i18);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(mdb__declarative_execution__find_prev_contour_3_1_i19) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__find_prev_contour_3_1_i3) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__find_prev_contour_3_1_i3) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__find_prev_contour_3_1_i3) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__find_prev_contour_3_1_i3) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__find_prev_contour_3_1_i3) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__find_prev_contour_3_1_i3) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__find_prev_contour_3_1_i3) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__find_prev_contour_3_1_i3) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__find_prev_contour_3_1_i3) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__find_prev_contour_3_1_i20));
MR_def_label(mdb__declarative_execution__find_prev_contour_3_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		mdb__declarative_execution__find_prev_contour_3_1_i9);
MR_def_label(mdb__declarative_execution__find_prev_contour_3_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__neg_node_from_id_3_0,
		mdb__declarative_execution__find_prev_contour_3_1_i8);
MR_def_label(mdb__declarative_execution__find_prev_contour_3_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__find_prev_contour_3_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(2, MR_r3, 1);
	MR_np_call_localret_ent(mdb__declarative_execution__exit_node_from_id_3_0,
		mdb__declarative_execution__find_prev_contour_3_1_i9);
MR_def_label(mdb__declarative_execution__find_prev_contour_3_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__find_prev_contour_3_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tailcall(MR_ENTRY(MR_do_not_reached),
		MR_ENTRY_AP(mdb__declarative_execution__find_prev_contour_3_1));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module33)
	MR_init_entry1(fn__mdb__declarative_execution__step_left_in_contour_2_0);
	MR_init_label8(fn__mdb__declarative_execution__step_left_in_contour_2_0,4,53,10,56,57,14,58,19)
	MR_init_label8(fn__mdb__declarative_execution__step_left_in_contour_2_0,20,59,27,39,28,60,33,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_execution__step_left_in_contour_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i53) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i54) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i10));
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i14);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i56) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i57) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i39) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i39) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i58) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i19) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i39) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i59) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i27) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i60) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_left_in_contour_2_0_i54));
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i14);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i14);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 3);
	MR_np_call_localret_ent(mdb__declarative_execution__first_disj_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i33);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r4 = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__cond_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i33);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r3, 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_left_in_contour_2_0_i28);
	}
	}
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__neg_node_from_id_3_0,
		fn__mdb__declarative_execution__step_left_in_contour_2_0_i33);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__mdb__declarative_execution__step_left_in_contour_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mdb__declarative_execution__find_prev_contour_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module34)
	MR_init_entry1(mdb__declarative_execution__maybe_redo_node_from_id_3_0);
	MR_init_label3(mdb__declarative_execution__maybe_redo_node_from_id_3_0,2,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__maybe_redo_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_execution__maybe_redo_node_from_id_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_execution__maybe_redo_node_from_id_3_0_i2);
MR_def_label(mdb__declarative_execution__maybe_redo_node_from_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_execution__maybe_redo_node_from_id_3_0_i1);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__maybe_redo_node_from_id_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_execution__maybe_redo_node_from_id_3_0_i7);
MR_def_label(mdb__declarative_execution__maybe_redo_node_from_id_3_0,7)
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


MR_BEGIN_MODULE(mdb__declarative_execution_module35)
	MR_init_entry1(fn__mdb__declarative_execution__step_over_redo_or_call_3_0);
	MR_init_label3(fn__mdb__declarative_execution__step_over_redo_or_call_3_0,4,2,6)
MR_BEGIN_CODE

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
	MR_r1 = MR_ctfield(2, MR_r2, 0);
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
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module36)
	MR_init_entry1(fn__mdb__declarative_execution__step_in_stratum_2_0);
	MR_init_label8(fn__mdb__declarative_execution__step_in_stratum_2_0,4,6,48,9,10,13,18,19)
	MR_init_label6(fn__mdb__declarative_execution__step_in_stratum_2_0,23,51,26,52,53,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_execution__step_in_stratum_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i6) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i48) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i10));
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__mdb__declarative_execution__step_over_redo_or_call_3_0);
	}
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(2, MR_r3, 1);
	MR_np_call_localret_ent(mdb__declarative_execution__exit_node_from_id_3_0,
		fn__mdb__declarative_execution__step_in_stratum_2_0_i9);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i13) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i13) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i23) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i23) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i23) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i18) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i23) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i51) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i26) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i52) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__step_in_stratum_2_0_i53));
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(fn__mdb__declarative_execution__step_over_redo_or_call_3_0);
	}
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r4 = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__step_in_stratum_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__cond_node_from_id_3_0,
		fn__mdb__declarative_execution__step_in_stratum_2_0_i31);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__neg_node_from_id_3_0,
		fn__mdb__declarative_execution__step_in_stratum_2_0_i31);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	MR_np_call_localret_ent(mdb__declarative_execution__neg_node_from_id_3_0,
		fn__mdb__declarative_execution__step_in_stratum_2_0_i31);
MR_def_label(fn__mdb__declarative_execution__step_in_stratum_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module37)
	MR_init_entry1(mdb__declarative_execution__det_trace_node_from_id_3_0);
	MR_init_label2(mdb__declarative_execution__det_trace_node_from_id_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__det_trace_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
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


MR_BEGIN_MODULE(mdb__declarative_execution_module38)
	MR_init_entry1(mdb__declarative_execution__disj_node_from_id_3_0);
	MR_init_label3(mdb__declarative_execution__disj_node_from_id_3_0,3,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__disj_node_from_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
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

MR_BEGIN_MODULE(mdb__declarative_execution_module39)
	MR_init_entry1(mdb__declarative_execution__load_trace_node_map_5_0);
	MR_init_label7(mdb__declarative_execution__load_trace_node_map_5_0,2,6,5,3,9,13,12)
MR_BEGIN_CODE

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
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__load_trace_node_map_5_0_i5);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__load_trace_node_map_5_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_execution__load_trace_node_map_5_0_i3);
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("load_trace_node_map", 19);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_execution__load_trace_node_map_5_0_i3);
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_map);
	MR_np_call_localret_ent(io__read_4_0,
		mdb__declarative_execution__load_trace_node_map_5_0_i9);
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__read_4_0,
		mdb__declarative_execution__load_trace_node_map_5_0_i9);
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__load_trace_node_map_5_0_i12);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
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
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
MR_def_label(mdb__declarative_execution__load_trace_node_map_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module40)
	MR_init_entry1(mdb__declarative_execution__search_trace_node_store_3_0);
	MR_init_label1(mdb__declarative_execution__search_trace_node_store_3_0,1)
MR_BEGIN_CODE

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
#line 839 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);
;}
#line 4903 "mdb.declarative_execution.c"
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


MR_BEGIN_MODULE(mdb__declarative_execution_module41)
	MR_init_entry1(mdb__declarative_execution__node_id_to_key_2_0);
MR_BEGIN_CODE

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
#line 1401 "declarative_execution.m"

    Key = (MR_Integer) Id;
;}
#line 4943 "mdb.declarative_execution.c"
	MR_r1 = Key;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module42)
	MR_init_entry1(mdb__declarative_execution__convert_node_2_0);
MR_BEGIN_CODE

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
#line 1414 "declarative_execution.m"

    N2 = N1;
;}
#line 4975 "mdb.declarative_execution.c"
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

MR_BEGIN_MODULE(mdb__declarative_execution_module43)
	MR_init_entry1(mdb__declarative_execution__node_map_4_0);
	MR_init_label4(mdb__declarative_execution__node_map_4_0,38,6,23,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__node_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_execution__node_map_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Id;
	MR_Word	Node;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__node_map_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Id = MR_r2;
{
#line 839 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);
;}
#line 5019 "mdb.declarative_execution.c"
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
#line 1401 "declarative_execution.m"

    Key = (MR_Integer) Id;
;}
#line 5036 "mdb.declarative_execution.c"
	MR_r4 = Key;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	N1;
	MR_Word	N2;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__node_map_4_0
	N1 = MR_tempr1;
{
#line 1414 "declarative_execution.m"

    N2 = N1;
;}
#line 5050 "mdb.declarative_execution.c"
	MR_r5 = N2;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		mdb__declarative_execution__node_map_4_0_i6);
MR_def_label(mdb__declarative_execution__node_map_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_EQ(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i23);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_const_mask_field(MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i38);
	}
MR_def_label(mdb__declarative_execution__node_map_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__declarative_execution__node_map_4_0_i38);
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

MR_BEGIN_MODULE(mdb__declarative_execution_module44)
	MR_init_entry1(mdb__declarative_execution__save_trace_node_store_5_0);
	MR_init_label5(mdb__declarative_execution__save_trace_node_store_5_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__save_trace_node_store_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(map__init_1_0,
		mdb__declarative_execution__save_trace_node_store_5_0_i2);
MR_def_label(mdb__declarative_execution__save_trace_node_store_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Id;
	MR_Word	Key;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__save_trace_node_store_5_0
	Id = MR_sv(3);
{
#line 1401 "declarative_execution.m"

    Key = (MR_Integer) Id;
;}
#line 5131 "mdb.declarative_execution.c"
	MR_tempr1 = Key;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__node_map_4_0,
		mdb__declarative_execution__save_trace_node_store_5_0_i3);
MR_def_label(mdb__declarative_execution__save_trace_node_store_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_4_0,
		mdb__declarative_execution__save_trace_node_store_5_0_i4);
MR_def_label(mdb__declarative_execution__save_trace_node_store_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__declarative_execution__save_trace_node_store_5_0_i5);
MR_def_label(mdb__declarative_execution__save_trace_node_store_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_map);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(io__write_4_0,
		mdb__declarative_execution__save_trace_node_store_5_0_i6);
MR_def_label(mdb__declarative_execution__save_trace_node_store_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__filter_2_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module45)
	MR_init_entry1(mdb__declarative_execution__maybe_filter_headvars_3_0);
	MR_init_label1(mdb__declarative_execution__maybe_filter_headvars_3_0,3)
MR_BEGIN_CODE

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
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_tailcall_ent(fn__list__filter_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module46)
	MR_init_entry1(fn__mdb__declarative_execution__chosen_head_vars_presentation_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module47)
	MR_init_entry1(mdb__declarative_execution__is_user_visible_arg_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__is_user_visible_arg_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__index1_det_3_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module48)
	MR_init_entry1(mdb__declarative_execution__select_arg_at_pos_3_0);
	MR_init_label4(mdb__declarative_execution__select_arg_at_pos_3_0,7,5,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__select_arg_at_pos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__select_arg_at_pos_3_0_i4);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__select_arg_at_pos_3_0_i5);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_np_call_localret_ent(fn__list__filter_2_0,
		mdb__declarative_execution__select_arg_at_pos_3_0_i7);
MR_def_label(mdb__declarative_execution__select_arg_at_pos_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__index1_det_3_0);
MR_def_label(mdb__declarative_execution__select_arg_at_pos_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdb__declarative_execution__select_arg_at_pos_3_0_i6);
MR_def_label(mdb__declarative_execution__select_arg_at_pos_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (((MR_Integer) MR_r1 - (MR_Integer) MR_sv(2)) + (MR_Integer) 1);
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__index1_det_3_0);
MR_def_label(mdb__declarative_execution__select_arg_at_pos_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_np_tailcall_ent(list__index1_det_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module49)
	MR_init_entry1(mdb__declarative_execution__head_var_num_to_arg_num_4_0);
	MR_init_label3(mdb__declarative_execution__head_var_num_to_arg_num_4_0,3,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__head_var_num_to_arg_num_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__head_var_num_to_arg_num_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_execution__head_var_num_to_arg_num_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__head_var_num_to_arg_num_4_0_i6);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_np_localtailcall(mdb__declarative_execution__head_var_num_to_arg_num_4_0);
	}
MR_def_label(mdb__declarative_execution__head_var_num_to_arg_num_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__head_var_num_to_arg_num_4_0_i8);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(mdb__declarative_execution__head_var_num_to_arg_num_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_np_localtailcall(mdb__declarative_execution__head_var_num_to_arg_num_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module50)
	MR_init_entry1(mdb__declarative_execution__absolute_arg_num_3_0);
	MR_init_label3(mdb__declarative_execution__absolute_arg_num_3_0,21,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__absolute_arg_num_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__absolute_arg_num_3_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__absolute_arg_num_3_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(mdb__declarative_execution__head_var_num_to_arg_num_4_0);
	}
MR_def_label(mdb__declarative_execution__absolute_arg_num_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdb__declarative_execution__absolute_arg_num_3_0_i6);
MR_def_label(mdb__declarative_execution__absolute_arg_num_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 - (MR_Integer) MR_sv(1)) + (MR_Integer) 1);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__declarative_execution__absolute_arg_num_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module51)
	MR_init_entry1(mdb__declarative_execution__arg_num_to_head_var_num_4_0);
	MR_init_label3(mdb__declarative_execution__arg_num_to_head_var_num_4_0,3,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__arg_num_to_head_var_num_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__arg_num_to_head_var_num_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,17);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_execution__arg_num_to_head_var_num_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__arg_num_to_head_var_num_4_0_i6);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_localtailcall(mdb__declarative_execution__arg_num_to_head_var_num_4_0);
	}
MR_def_label(mdb__declarative_execution__arg_num_to_head_var_num_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__arg_num_to_head_var_num_4_0_i8);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(mdb__declarative_execution__arg_num_to_head_var_num_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_np_localtailcall(mdb__declarative_execution__arg_num_to_head_var_num_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module52)
	MR_init_entry1(mdb__declarative_execution__user_arg_num_3_0);
	MR_init_label3(mdb__declarative_execution__user_arg_num_3_0,22,7,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_execution__user_arg_num_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__user_arg_num_3_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__user_arg_num_3_0_i22);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
MR_def_label(mdb__declarative_execution__user_arg_num_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdb__declarative_execution__user_arg_num_3_0_i7);
MR_def_label(mdb__declarative_execution__user_arg_num_3_0,7)
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
MR_def_label(mdb__declarative_execution__user_arg_num_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(mdb__declarative_execution__arg_num_to_head_var_num_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module53)
	MR_init_entry1(fn__mdb__declarative_execution__call_node_get_last_interface_1_0);
	MR_init_label1(fn__mdb__declarative_execution__call_node_get_last_interface_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__call_node_get_last_interface_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__call_node_get_last_interface_1_0_i2);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 1);
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

MR_decl_entry(store__new_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_store__type_ctor_info_store_1;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_store__store__arity1__store__store__arity1__[];
MR_decl_entry(store__new_ref_4_0);
MR_decl_entry(store__arg_ref_5_0);
MR_decl_entry(store__set_ref_value_4_0);
MR_decl_entry(store__extract_ref_value_3_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module54)
	MR_init_entry1(fn__mdb__declarative_execution__call_node_set_last_interface_2_0);
	MR_init_label6(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,2,5,6,7,8,9)
MR_BEGIN_CODE

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
	MR_np_call_localret_ent(store__new_1_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i6);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,19);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i5);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(store__new_1_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i6);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,6)
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
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(store__new_ref_4_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i7);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_id);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_np_call_localret_ent(store__arg_ref_5_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i8);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_id);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(store__set_ref_value_4_0,
		fn__mdb__declarative_execution__call_node_set_last_interface_2_0_i9);
MR_def_label(fn__mdb__declarative_execution__call_node_set_last_interface_2_0,9)
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


MR_BEGIN_MODULE(mdb__declarative_execution_module55)
	MR_init_entry1(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0);
	MR_init_label6(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,2,5,6,7,8,9)
MR_BEGIN_CODE

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
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_np_call_localret_ent(store__new_1_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i6);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,20);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i5);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(store__new_1_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i6);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,6)
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
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(store__new_ref_4_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i7);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Integer) 5;
	MR_np_call_localret_ent(store__arg_ref_5_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i8);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(store__set_ref_value_4_0,
		fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0_i9);
MR_def_label(fn__mdb__declarative_execution__call_node_update_implicit_tree_info_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(store__extract_ref_value_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module56)
	MR_init_entry1(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0);
	MR_init_label2(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0_i2);
	}
	MR_r3 = MR_ctfield(0, MR_r1, 5);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__get_implicit_tree_ideal_depth_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_proceed();
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


MR_BEGIN_MODULE(mdb__declarative_execution_module57)
	MR_init_entry1(fn__mdb__declarative_execution__cond_node_set_status_2_0);
	MR_init_label6(fn__mdb__declarative_execution__cond_node_set_status_2_0,2,5,6,7,8,9)
MR_BEGIN_CODE

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
	MR_np_call_localret_ent(store__new_1_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i6);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,23);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i5);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(store__new_1_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i6);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,6)
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
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(store__new_ref_4_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i7);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, goal_status);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 2;
	MR_np_call_localret_ent(store__arg_ref_5_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i8);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, goal_status);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(store__set_ref_value_4_0,
		fn__mdb__declarative_execution__cond_node_set_status_2_0_i9);
MR_def_label(fn__mdb__declarative_execution__cond_node_set_status_2_0,9)
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


MR_BEGIN_MODULE(mdb__declarative_execution_module58)
	MR_init_entry1(fn__mdb__declarative_execution__neg_node_set_status_2_0);
	MR_init_label6(fn__mdb__declarative_execution__neg_node_set_status_2_0,2,5,6,7,8,9)
MR_BEGIN_CODE

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
	MR_np_call_localret_ent(store__new_1_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i6);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,24);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i5);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(store__new_1_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i6);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,6)
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
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(store__new_ref_4_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i7);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, goal_status);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 2;
	MR_np_call_localret_ent(store__arg_ref_5_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i8);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, goal_status);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(store__set_ref_value_4_0,
		fn__mdb__declarative_execution__neg_node_set_status_2_0_i9);
MR_def_label(fn__mdb__declarative_execution__neg_node_set_status_2_0,9)
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


MR_BEGIN_MODULE(mdb__declarative_execution_module59)
	MR_init_entry1(fn__mdb__declarative_execution__trace_node_port_1_0);
	MR_init_label8(fn__mdb__declarative_execution__trace_node_port_1_0,4,5,6,7,8,9,10,12)
	MR_init_label6(fn__mdb__declarative_execution__trace_node_port_1_0,13,14,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__trace_node_port_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i5) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i6) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i7));
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i8) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i9) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i10) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i12) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i12) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i13) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i14) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i15) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i16) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i17) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_port_1_0_i18));
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(fn__mdb__declarative_execution__trace_node_port_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module60)
	MR_init_entry1(fn__mdb__declarative_execution__trace_node_path_1_0);
	MR_init_label6(fn__mdb__declarative_execution__trace_node_path_1_0,4,7,8,9,16,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__trace_node_path_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i8) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i18) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i7));
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 7);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i8) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i9) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i16) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i16) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i16) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i16) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i18) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i18) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i16) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i18) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__trace_node_path_1_0_i18));
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 5);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 6);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_def_label(fn__mdb__declarative_execution__trace_node_path_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 3);
	MR_np_tailcall_ent(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module61)
	MR_init_entry1(mdb__declarative_execution__trace_node_call_3_0);
	MR_init_label5(mdb__declarative_execution__trace_node_call_3_0,9,7,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__trace_node_call_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,3)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_call_3_0_i4);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_call_3_0_i7);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_call_3_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r3 = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__exit_node_from_id_3_0,
		mdb__declarative_execution__trace_node_call_3_0_i9);
MR_def_label(mdb__declarative_execution__trace_node_call_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__declarative_execution__trace_node_call_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__trace_node_call_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(mdb__declarative_execution__trace_node_call_3_0_i6) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__trace_node_call_3_0_i6) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__trace_node_call_3_0_i1) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__trace_node_call_3_0_i1) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__trace_node_call_3_0_i1) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__trace_node_call_3_0_i1) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__trace_node_call_3_0_i1) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__trace_node_call_3_0_i1) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__trace_node_call_3_0_i1) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__trace_node_call_3_0_i1) MR_AND
		MR_LABEL_AP(mdb__declarative_execution__trace_node_call_3_0_i1));
MR_def_label(mdb__declarative_execution__trace_node_call_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 2);
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


MR_BEGIN_MODULE(mdb__declarative_execution_module62)
	MR_init_entry1(mdb__declarative_execution__trace_node_seqno_3_0);
	MR_init_label4(mdb__declarative_execution__trace_node_seqno_3_0,19,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__trace_node_seqno_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__trace_node_seqno_3_0_i19);
	}
	MR_r2 = MR_ctfield(0, MR_r2, 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__declarative_execution__trace_node_seqno_3_0,19)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		mdb__declarative_execution__trace_node_seqno_3_0_i6);
MR_def_label(mdb__declarative_execution__trace_node_seqno_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 3);
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


MR_BEGIN_MODULE(mdb__declarative_execution_module63)
	MR_init_entry1(mdb__declarative_execution__null_trace_node_id_1_0);
MR_BEGIN_CODE

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
#line 1264 "declarative_execution.m"

    Id = (MR_Word) NULL;
;}
#line 6210 "mdb.declarative_execution.c"
	MR_r1 = Id;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module64)
	MR_init_entry1(mdb__declarative_execution__trace_node_first_disj_2_0);
	MR_init_label2(mdb__declarative_execution__trace_node_first_disj_2_0,3,1)
MR_BEGIN_CODE

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
#line 1264 "declarative_execution.m"

    Id = (MR_Word) NULL;
;}
#line 6244 "mdb.declarative_execution.c"
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
	MR_r2 = MR_ctfield(3, MR_r1, 3);
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


MR_BEGIN_MODULE(mdb__declarative_execution_module65)
	MR_init_entry1(fn__mdb__declarative_execution__step_left_in_contour_store_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__step_left_in_contour_store_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_np_tailcall_ent(fn__mdb__declarative_execution__step_left_in_contour_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module66)
	MR_init_entry1(fn__mdb__declarative_execution__find_prev_contour_store_2_0);
	MR_init_label8(fn__mdb__declarative_execution__find_prev_contour_store_2_0,2,16,7,8,9,10,12,14)
	MR_init_label2(fn__mdb__declarative_execution__find_prev_contour_store_2_0,15,4)
MR_BEGIN_CODE

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
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_execution__det_trace_node_from_id_3_0,
		fn__mdb__declarative_execution__find_prev_contour_store_2_0_i2);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,3)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i7);
	}
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i16);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__exit_node_from_id_3_0,
		fn__mdb__declarative_execution__find_prev_contour_store_2_0_i9);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,27);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i8) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i10) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i12) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i4) MR_AND
		MR_LABEL_AP(fn__mdb__declarative_execution__find_prev_contour_store_2_0_i14));
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__call_node_from_id_3_0,
		fn__mdb__declarative_execution__find_prev_contour_store_2_0_i9);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,25);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,26);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(mdb__declarative_execution__neg_node_from_id_3_0,
		fn__mdb__declarative_execution__find_prev_contour_store_2_0_i15);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_decr_sp_and_return(4);
MR_def_label(fn__mdb__declarative_execution__find_prev_contour_store_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module67)
	MR_init_entry1(mdb__declarative_execution__print_trace_node_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__print_trace_node_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	N1;
	MR_Word	N2;
#define	MR_PROC_LABEL	mercury__mdb__declarative_execution__print_trace_node_4_0
	N1 = MR_r2;
{
#line 1414 "declarative_execution.m"

    N2 = N1;
;}
#line 6430 "mdb.declarative_execution.c"
	MR_tempr1 = N2;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(io__write_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module68)
	MR_init_entry1(fn__mdb__declarative_execution__construct_call_node_9_0);
	MR_init_label2(fn__mdb__declarative_execution__construct_call_node_9_0,3,2)
MR_BEGIN_CODE

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
	MR_r9 = (MR_Word) MR_TAG_COMMON(1,6,0);
MR_def_label(fn__mdb__declarative_execution__construct_call_node_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	Id;
#define	MR_PROC_LABEL	mercury__fn__mdb__declarative_execution__construct_call_node_9_0
{
#line 1264 "declarative_execution.m"

    Id = (MR_Word) NULL;
;}
#line 6485 "mdb.declarative_execution.c"
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


MR_BEGIN_MODULE(mdb__declarative_execution_module69)
	MR_init_entry1(fn__mdb__declarative_execution__make_yes_maybe_label_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_execution__make_yes_maybe_label_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module70)
	MR_init_entry1(fn__mdb__declarative_execution__make_no_maybe_label_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module71)
	MR_init_entry1(fn__mdb__declarative_execution__construct_exit_node_8_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module72)
	MR_init_entry1(fn__mdb__declarative_execution__construct_redo_node_5_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module73)
	MR_init_entry1(fn__mdb__declarative_execution__construct_fail_node_6_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(mdb__declarative_execution_module74)
	MR_init_entry1(mdb__declarative_execution__construct_excp_node_8_0);
	MR_init_label1(mdb__declarative_execution__construct_excp_node_8_0,2)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module75)
	MR_init_entry1(fn__mdb__declarative_execution__construct_switch_node_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module76)
	MR_init_entry1(fn__mdb__declarative_execution__construct_first_disj_node_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module77)
	MR_init_entry1(fn__mdb__declarative_execution__construct_later_disj_node_4_0);
	MR_init_label2(fn__mdb__declarative_execution__construct_later_disj_node_4_0,2,4)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_execution__disj_node_from_id_3_0,
		fn__mdb__declarative_execution__construct_later_disj_node_4_0_i2);
MR_def_label(fn__mdb__declarative_execution__construct_later_disj_node_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__mdb__declarative_execution__construct_later_disj_node_4_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(fn__mdb__declarative_execution__construct_later_disj_node_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module78)
	MR_init_entry1(fn__mdb__declarative_execution__construct_cond_node_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module79)
	MR_init_entry1(fn__mdb__declarative_execution__construct_then_node_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module80)
	MR_init_entry1(fn__mdb__declarative_execution__construct_else_node_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module81)
	MR_init_entry1(fn__mdb__declarative_execution__construct_neg_node_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module82)
	MR_init_entry1(fn__mdb__declarative_execution__construct_neg_succ_node_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module83)
	MR_init_entry1(fn__mdb__declarative_execution__construct_neg_fail_node_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module84)
	MR_init_entry1(fn__mdb__declarative_execution__init_trace_atom_args_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module85)
	MR_init_entry1(mdb__declarative_execution__add_trace_atom_arg_value_5_0);
	MR_init_label2(mdb__declarative_execution__add_trace_atom_arg_value_5_0,2,3)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(mdb__declarative_execution__add_trace_atom_arg_value_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module86)
	MR_init_entry1(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0);
	MR_init_label1(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
	}
MR_def_label(mdb__declarative_execution__add_trace_atom_arg_no_value_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module87)
	MR_init_entry1(__Unify___mdb__declarative_execution__bytecode_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__declarative_execution__bytecode_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module88)
	MR_init_entry1(__Compare___mdb__declarative_execution__bytecode_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__declarative_execution__bytecode_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module89)
	MR_init_entry1(__Unify___mdb__declarative_execution__event_number_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(mdb__declarative_execution_module90)
	MR_init_entry1(__Compare___mdb__declarative_execution__event_number_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module91)
	MR_init_entry1(__Unify___mdb__declarative_execution__goal_status_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module92)
	MR_init_entry1(__Compare___mdb__declarative_execution__goal_status_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module93)
	MR_init_entry1(__Unify___mdb__declarative_execution__implicit_tree_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__implicit_tree_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module94)
	MR_init_entry1(__Compare___mdb__declarative_execution__implicit_tree_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__implicit_tree_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module95)
	MR_init_entry1(__Unify___mdb__declarative_execution__read_proc_rep_info_0_0);
	MR_init_label1(__Unify___mdb__declarative_execution__read_proc_rep_info_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__declarative_execution__read_proc_rep_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__read_proc_rep_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_execution__read_proc_rep_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module96)
	MR_init_entry1(__Compare___mdb__declarative_execution__read_proc_rep_info_0_0);
	MR_init_label2(__Compare___mdb__declarative_execution__read_proc_rep_info_0_0,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__declarative_execution__read_proc_rep_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__read_proc_rep_info_0_0_i3);
MR_def_label(__Compare___mdb__declarative_execution__read_proc_rep_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__read_proc_rep_info_0_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__declarative_execution__read_proc_rep_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module97)
	MR_init_entry1(__Unify___mdb__declarative_execution__sequence_number_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module98)
	MR_init_entry1(__Compare___mdb__declarative_execution__sequence_number_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module99)
	MR_init_entry1(__Unify___mdb__declarative_execution__suspicion_accumulator_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module100)
	MR_init_entry1(__Compare___mdb__declarative_execution__suspicion_accumulator_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(mdb__declarative_execution_module101)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_atom_0_0);
	MR_init_label2(__Unify___mdb__declarative_execution__trace_atom_0_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_atom_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__proc_layout_0_0,
		__Unify___mdb__declarative_execution__trace_atom_0_0_i2);
MR_def_label(__Unify___mdb__declarative_execution__trace_atom_0_0,2)
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
MR_def_label(__Unify___mdb__declarative_execution__trace_atom_0_0,1)
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

MR_decl_entry(__Compare___mdbcomp__rtti_access__proc_layout_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module102)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_atom_0_0);
	MR_init_label2(__Compare___mdb__declarative_execution__trace_atom_0_0,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_atom_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__proc_layout_0_0,
		__Compare___mdb__declarative_execution__trace_atom_0_0_i3);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_atom_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module103)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_atom_arg_0_0);
	MR_init_label1(__Unify___mdb__declarative_execution__trace_atom_arg_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_atom_arg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_atom_arg_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_atom_arg_0_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___mdb__declarative_execution__trace_atom_arg_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module104)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_atom_arg_0_0);
	MR_init_label3(__Compare___mdb__declarative_execution__trace_atom_arg_0_0,3,7,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_atom_arg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_atom_arg_0_0_i3);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_arg_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_atom_arg_0_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_atom_arg_0_0_i7);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_arg_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_atom_arg_0_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_atom_arg_0_0,12)
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

MR_BEGIN_MODULE(mdb__declarative_execution_module105)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_node_1_0);
	MR_init_label8(__Unify___mdb__declarative_execution__trace_node_1_0,4,6,8,10,12,14,16,18)
	MR_init_label8(__Unify___mdb__declarative_execution__trace_node_1_0,20,22,24,26,28,30,32,34)
	MR_init_label8(__Unify___mdb__declarative_execution__trace_node_1_0,36,38,39,41,43,45,47,49)
	MR_init_label8(__Unify___mdb__declarative_execution__trace_node_1_0,51,53,55,57,59,61,63,67)
	MR_init_label8(__Unify___mdb__declarative_execution__trace_node_1_0,69,73,75,77,81,83,85,87)
	MR_init_label8(__Unify___mdb__declarative_execution__trace_node_1_0,89,91,95,97,99,103,105,107)
	MR_init_label7(__Unify___mdb__declarative_execution__trace_node_1_0,109,111,113,117,119,121,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_node_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i4) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i18) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i30) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i38));
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_tempr2 = MR_r3;
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(18) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(19) = MR_r1;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i6);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i8);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i10);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(3) != MR_sv(12))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(4) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, implicit_tree_info);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i12);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__rtti_access, label_layout);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i14);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i16);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(8) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(9) == MR_sv(18));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 7);
	MR_tempr2 = MR_r3;
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(10) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(11) = MR_ctfield(1, MR_tempr2, 4);
	MR_sv(12) = MR_ctfield(1, MR_tempr2, 5);
	MR_sv(13) = MR_ctfield(1, MR_tempr2, 6);
	MR_sv(14) = MR_ctfield(1, MR_tempr2, 7);
	MR_sv(19) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i22);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i24);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i26);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(4) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i28);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(6) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(7) == MR_sv(14));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 4);
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(2, MR_tempr2, 4);
	MR_sv(19) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i32);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i34);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i36);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i39) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i49) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i61) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i67) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i73) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i81) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i87) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i95) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i103) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i109) MR_AND
		MR_LABEL_AP(__Unify___mdb__declarative_execution__trace_node_1_0_i117));
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 6);
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(9) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(10) = MR_ctfield(3, MR_tempr2, 6);
	MR_sv(19) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i41);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i43);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i45);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(3) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i47);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(5) == MR_sv(10));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 7);
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(9) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(11) = MR_ctfield(3, MR_tempr2, 6);
	MR_sv(12) = MR_ctfield(3, MR_tempr2, 7);
	MR_sv(19) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i51);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i53);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i55);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___mdb__term_rep__term_rep_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i57);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	if ((MR_sv(4) != MR_sv(10))) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i59);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(12));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r2, 2);
	MR_sv(2) = MR_ctfield(3, MR_r3, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i63);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r2, 2);
	MR_sv(2) = MR_ctfield(3, MR_r3, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i69);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(19) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i75);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i77);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i83);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i85);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(19) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i89);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i91);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(19) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i97);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i99);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,8)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i105);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i107);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(20);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,9)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(19) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i111);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i113);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,10)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(19) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i119);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__declarative_execution__trace_node_1_0_i121);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_execution__trace_node_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Unify___mdb__declarative_execution__trace_node_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module106)
	MR_init_entry1(__Index___mdb__declarative_execution__trace_node_1_0);
	MR_init_label8(__Index___mdb__declarative_execution__trace_node_1_0,4,5,6,7,8,9,10,11)
	MR_init_label7(__Index___mdb__declarative_execution__trace_node_1_0,12,13,14,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___mdb__declarative_execution__trace_node_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i4) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i5) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i6) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i7));
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i8) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i9) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i10) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i11) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i12) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i13) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i14) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i15) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i16) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i17) MR_AND
		MR_LABEL_AP(__Index___mdb__declarative_execution__trace_node_1_0_i18));
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___mdb__declarative_execution__trace_node_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
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

MR_BEGIN_MODULE(mdb__declarative_execution_module107)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_node_1_0);
	MR_init_label8(__Compare___mdb__declarative_execution__trace_node_1_0,2,3,4,5,9,12,16,20)
	MR_init_label8(__Compare___mdb__declarative_execution__trace_node_1_0,24,28,32,36,40,44,57,60)
	MR_init_label8(__Compare___mdb__declarative_execution__trace_node_1_0,64,68,72,76,80,84,95,98)
	MR_init_label8(__Compare___mdb__declarative_execution__trace_node_1_0,102,106,110,118,119,122,126,130)
	MR_init_label8(__Compare___mdb__declarative_execution__trace_node_1_0,134,138,147,150,154,158,162,166)
	MR_init_label8(__Compare___mdb__declarative_execution__trace_node_1_0,170,180,183,188,191,196,199,203)
	MR_init_label8(__Compare___mdb__declarative_execution__trace_node_1_0,209,212,216,222,225,229,235,238)
	MR_init_label8(__Compare___mdb__declarative_execution__trace_node_1_0,242,248,251,255,261,264,268,274)
	MR_init_label4(__Compare___mdb__declarative_execution__trace_node_1_0,277,281,6,290)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_node_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(19) = MR_r1;
	MR_np_call_localret_ent(__Index___mdb__declarative_execution__trace_node_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i2);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Index___mdb__declarative_execution__trace_node_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i3);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(20);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i5);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(20);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i9) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i57) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i95) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i118));
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(18) = MR_ctfield(0, MR_tempr4, 9);
	MR_sv(17) = MR_ctfield(0, MR_tempr4, 8);
	MR_sv(16) = MR_ctfield(0, MR_tempr4, 7);
	MR_sv(15) = MR_ctfield(0, MR_tempr4, 6);
	MR_sv(14) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(13) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(12) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(10) = MR_ctfield(0, MR_tempr4, 1);
	MR_tempr5 = MR_r4;
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(0, MR_tempr5, 0);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i12);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i16);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i20);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i24);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i28);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, implicit_tree_info);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i32);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__rtti_access, label_layout);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i36);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i40);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i44);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(18);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(14) = MR_ctfield(1, MR_tempr4, 7);
	MR_sv(13) = MR_ctfield(1, MR_tempr4, 6);
	MR_sv(12) = MR_ctfield(1, MR_tempr4, 5);
	MR_sv(11) = MR_ctfield(1, MR_tempr4, 4);
	MR_sv(10) = MR_ctfield(1, MR_tempr4, 3);
	MR_sv(9) = MR_ctfield(1, MR_tempr4, 2);
	MR_sv(8) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r4;
	MR_sv(7) = MR_ctfield(1, MR_tempr5, 7);
	MR_sv(6) = MR_ctfield(1, MR_tempr5, 6);
	MR_sv(5) = MR_ctfield(1, MR_tempr5, 5);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 4);
	MR_sv(3) = MR_ctfield(1, MR_tempr5, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(1, MR_tempr5, 0);
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i60);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i64);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i68);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_atom_arg);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i72);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i76);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i80);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i84);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(8) = MR_ctfield(2, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(2, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(2, MR_tempr4, 2);
	MR_sv(5) = MR_ctfield(2, MR_tempr4, 1);
	MR_tempr5 = MR_r4;
	MR_sv(4) = MR_ctfield(2, MR_tempr5, 4);
	MR_sv(3) = MR_ctfield(2, MR_tempr5, 3);
	MR_tempr1 = MR_ctfield(2, MR_tempr5, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr5, 1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(2, MR_tempr5, 0);
	MR_r3 = MR_ctfield(2, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i98);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i102);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i106);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i110);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i119) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i147) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i180) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i188) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i196) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i209) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i222) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i235) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i248) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i261) MR_AND
		MR_LABEL_AP(__Compare___mdb__declarative_execution__trace_node_1_0_i274));
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i122);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i126);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i130);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i134);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i138);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(12) = MR_ctfield(3, MR_tempr4, 7);
	MR_sv(11) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(10) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(9) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_sv(6) = MR_ctfield(3, MR_tempr5, 7);
	MR_sv(5) = MR_ctfield(3, MR_tempr5, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr5, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i150);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i154);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i158);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___mdb__term_rep__term_rep_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i162);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i166);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i170);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i183);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i191);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i199);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i203);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i212);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i216);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i225);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i229);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i238);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i242);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i251);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i255);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i264);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i268);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_ctfield(3, MR_tempr5, 2);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_ctfield(3, MR_tempr5, 1);
	MR_r3 = MR_ctfield(3, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i277);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__declarative_execution__trace_node_1_0_i281);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_execution__trace_node_1_0_i290);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(20);
	MR_decr_sp(20);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___mdb__declarative_execution__trace_node_1_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module108)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_node_id_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_node_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module109)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_node_id_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_node_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module110)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_node_key_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_node_key_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module111)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_node_key_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_node_key_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module112)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_node_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_node_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdb__declarative_execution_module113)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_node_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_node_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module114)
	MR_init_entry1(__Unify___mdb__declarative_execution__trace_node_store_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_execution__trace_node_store_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module115)
	MR_init_entry1(__Compare___mdb__declarative_execution__trace_node_store_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_execution__trace_node_store_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module116)
	MR_init_entry1(__Unify___mdb__declarative_execution__which_headvars_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mdb__declarative_execution_module117)
	MR_init_entry1(__Compare___mdb__declarative_execution__which_headvars_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(mdb__declarative_execution_module118)
	MR_init_entry1(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_execution, trace_node_key);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(map__search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_execution_module119)
	MR_init_entry1(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0);
	MR_init_label1(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0,1)
MR_BEGIN_CODE

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
#line 839 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);
;}
#line 9517 "mdb.declarative_execution.c"
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


MR_BEGIN_MODULE(mdb__declarative_execution_module120)
	MR_init_entry1(mdb__declarative_execution__IntroducedFrom__pred__read_proc_rep__1552__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_execution__IntroducedFrom__pred__read_proc_rep__1552__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__mdb__declarative_execution__read_proc_rep_3_0);

void
MR_DD_trace_read_rep(const MR_uint_least8_t * Mercury__argument1, const MR_LabelLayout * Mercury__argument2, MR_Word * Mercury__argument3);

void
MR_DD_trace_read_rep(const MR_uint_least8_t * Mercury__argument1, const MR_LabelLayout * Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__declarative_execution__read_proc_rep_3_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_uint_least8_t *, Mercury__argument1, MR_r1);
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument2, MR_r2);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__declarative_execution__read_proc_rep_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument3 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


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
	mdb__declarative_execution_module99();
	mdb__declarative_execution_module100();
	mdb__declarative_execution_module101();
	mdb__declarative_execution_module102();
	mdb__declarative_execution_module103();
	mdb__declarative_execution_module104();
	mdb__declarative_execution_module105();
	mdb__declarative_execution_module106();
	mdb__declarative_execution_module107();
	mdb__declarative_execution_module108();
	mdb__declarative_execution_module109();
	mdb__declarative_execution_module110();
	mdb__declarative_execution_module111();
	mdb__declarative_execution_module112();
	mdb__declarative_execution_module113();
	mdb__declarative_execution_module114();
	mdb__declarative_execution_module115();
	mdb__declarative_execution_module116();
	mdb__declarative_execution_module117();
	mdb__declarative_execution_module118();
	mdb__declarative_execution_module119();
}

static void mercury__mdb__declarative_execution_maybe_bunch_3(void)
{
	mdb__declarative_execution_module120();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__declarative_execution__init(void);
void mercury__mdb__declarative_execution__init_type_tables(void);
void mercury__mdb__declarative_execution__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__declarative_execution__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__declarative_execution__init_complexity_procs(void);
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
	mercury__mdb__declarative_execution_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_which_headvars_0,
		mdb__declarative_execution__which_headvars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_store_0,
		mdb__declarative_execution__trace_node_store_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_map_0,
		mdb__declarative_execution__trace_node_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_key_0,
		mdb__declarative_execution__trace_node_key_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_id_0,
		mdb__declarative_execution__trace_node_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_1,
		mdb__declarative_execution__trace_node_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0,
		mdb__declarative_execution__trace_atom_arg_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_0,
		mdb__declarative_execution__trace_atom_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0,
		mdb__declarative_execution__suspicion_accumulator_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_sequence_number_0,
		mdb__declarative_execution__sequence_number_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_read_proc_rep_info_0,
		mdb__declarative_execution__read_proc_rep_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_implicit_tree_info_0,
		mdb__declarative_execution__implicit_tree_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_goal_status_0,
		mdb__declarative_execution__goal_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_event_number_0,
		mdb__declarative_execution__event_number_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_execution__type_ctor_info_bytecode_0,
		mdb__declarative_execution__bytecode_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0__, 5) =
			MR_ENTRY_AP(mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__, 5) =
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
		&mercury_data_mdb__declarative_execution__type_ctor_info_which_headvars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_store_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_key_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_node_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_arg_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_trace_atom_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_sequence_number_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_read_proc_rep_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_implicit_tree_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_goal_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_event_number_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_execution__type_ctor_info_bytecode_0);
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

void mercury__mdb__declarative_execution__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__declarative_execution__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
