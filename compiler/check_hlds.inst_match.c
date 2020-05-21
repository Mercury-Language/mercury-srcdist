/*
** Automatically generated from `inst_match.m'
** by the Mercury compiler,
** version rotd-2020-05-21
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module check_hlds.inst_match.
// :- implementation.

/*
INIT mercury__check_hlds__inst_match__init
ENDINIT
*/

#include "check_hlds.inst_match.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"



struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s {
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5;
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6;
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8;
  MR_bool check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded;
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13;
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0;
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1;
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23;
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24;
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2;
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32;
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33;
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25;
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26;
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_27;
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_28;
  MR_Box check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_Var_27;
};

struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s {
  MR_Word * check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__InstVar_5;
  MR_Cont check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont;
  void * check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont_env_ptr;
  MR_Word check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__Inst_10;
  MR_Box check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__conv0_Inst_10;
};

struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s {
  MR_Word * check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4;
  MR_Cont check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont;
  void * check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded;
  MR_Word check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8;
  MR_Word check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__TypeInfo_28_28;
  MR_Word check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__Var_27;
  MR_Box check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__conv0_InstVar_4;
};

struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s {
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5;
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6;
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7;
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8;
  MR_bool check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded;
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0;
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1;
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11;
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12;
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2;
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20;
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21;
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13;
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14;
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_15;
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_16;
  MR_Box check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_Var_15;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2;

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0[3];

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0[3];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0[3];

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1;

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_ground_matches_bound_0[2];

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0[2];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0[7];

static const MR_ConstString check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0[7];

static const MR_DuArgLocn check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0[7];

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0[1];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0[3];

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0[1];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0[1];

static const MR_VA_TypeInfo_Struct5 check_hlds__inst_match____vti_pred_5parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__inst_match__type_ctor_info_inst_match_info_0check_hlds__inst_match__type_ctor_info_inst_match_info_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0;

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1;

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0[2];

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0[2];

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0[2];

static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
  MR_Word Expansions_5,
  MR_Word ModuleInfo_6,
  MR_Word Inst_7,
  MR_Word Type_8);

static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
  MR_Word InstA_6,
  MR_Word MaybeType_7,
  MR_Word InstVar_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * InstVar_5,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * InstVar_5,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(
  MR_Word InstName_3,
  MR_Word * InstVar_4,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0(
  MR_Word Inst_3,
  MR_Word * InstVar_4,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_5_p_0(
  MR_Word tscc_proc_1_input_1_InstA_6,
  MR_Word tscc_proc_1_input_2_InstB_7,
  MR_Word tscc_proc_1_input_3_MaybeType_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_3_5_p_0(
  MR_Word tscc_proc_2_input_1_InstA_6,
  MR_Word tscc_proc_2_input_2_InstB_7,
  MR_Word tscc_proc_2_input_3_MaybeType_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeType_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
  MR_Word HOInstInfoA_5,
  MR_Word HOInstInfoB_6,
  MR_Word MaybeType_7,
  MR_Word ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_mt_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word HOInstInfo_5,
  MR_Word MaybeType_6);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_5_p_0(
  MR_Word tscc_proc_1_input_1_InstA_6,
  MR_Word tscc_proc_1_input_2_InstB_7,
  MR_Word tscc_proc_1_input_3_MaybeType_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_5_p_0(
  MR_Word tscc_proc_2_input_1_InstA_6,
  MR_Word tscc_proc_2_input_2_InstB_7,
  MR_Word tscc_proc_2_input_3_MaybeType_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(
  MR_Word tscc_proc_3_input_1_InstA_10,
  MR_Word tscc_proc_3_input_2_InstB_11,
  MR_Word tscc_proc_3_input_3_Type_12,
  MR_Word tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word Type_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeType_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(
  MR_Word Uniq_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(
  MR_Word Uniq_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeType_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho12_6_p_0(
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word Type_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho11_6_p_0(
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word Type_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
  MR_Word InstA_1,
  MR_Word InstB_2);

static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstA_2,
  MR_Word InstB_3);

static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word BoundInsts_2,
  MR_Word Uniq_3,
  MR_Word ModuleInfo_4);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(
  MR_Word HOInstInfoA_6,
  MR_Word HOInstInfoB_7,
  MR_Word MaybeType_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_5_p_0(
  MR_Word tscc_proc_1_input_1_InstA_6,
  MR_Word tscc_proc_1_input_2_InstB_7,
  MR_Word tscc_proc_1_input_3_MaybeType_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_5_p_0(
  MR_Word tscc_proc_2_input_1_InstA_6,
  MR_Word tscc_proc_2_input_2_InstB_7,
  MR_Word tscc_proc_2_input_3_MaybeType_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(
  MR_Word tscc_proc_3_input_1_InstA_10,
  MR_Word tscc_proc_3_input_2_InstB_11,
  MR_Word tscc_proc_3_input_3_Type_12,
  MR_Word tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(
  MR_Word HOInstInfo_5,
  MR_Word MaybeType_6,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_2_5_p_0(
  MR_Word PredInstA_6,
  MR_Word PredInstB_7,
  MR_Word MaybeType_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(
  MR_Word HOInstInfoA_6,
  MR_Word HOInstInfoB_7,
  MR_Word MaybeType_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(
  MR_Word PredInst_5,
  MR_Word MaybeType_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word Type_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(
  MR_Word Inst_5,
  MR_Word * ContainsNonstd_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_30,
  MR_Word * ContainsNonstd_8,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__inst_match__inst_list_contains_nondefault_func_mode_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeType_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho10_6_p_0(
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word Type_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho9_6_p_0(
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word Type_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(
  MR_Word Uniq_4,
  MR_Word BoundInsts_5,
  MR_Word ModuleInfo_6);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(
  MR_Word BoundInsts_4,
  MR_Word Uniq_5,
  MR_Word ModuleInfo_6);

static MR_Word MR_CALL 
check_hlds__inst_match__swap_calculate_sub_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(
  MR_Word Expansions_5,
  MR_Word ModuleInfo_6,
  MR_Word BoundInsts_7,
  MR_Word Type_8);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__inst_match_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_3[2][7];

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_4[1][8];




static /* final */ const MR_Box check_hlds__inst_match_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__inst_match_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__inst_match_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__inst_match_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_3[2][7] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__inst_match_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.inst_match.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0 = {
  (MR_String) "cs_forward",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1 = {
  (MR_String) "cs_reverse",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2 = {
  (MR_String) "cs_none",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0[3] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0[3] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____calculate_sub_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____calculate_sub_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "calculate_sub",
  {     check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_expansions_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_match____Unify____expansions_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____expansions_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "expansions",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0 = {
  (MR_String) "ground_matches_bound_if_complete",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1 = {
  (MR_String) "ground_matches_bound_always",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_ground_matches_bound_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_ground_matches_bound_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "ground_matches_bound",
  {     check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_ground_matches_bound_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_ground_matches_bound_0)
};

static const MR_ConstString check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0[7] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_expansions",
  (MR_String) "imi_maybe_sub",
  (MR_String) "imi_calculate_sub",
  (MR_String) "imi_uniqueness_comparison",
  (MR_String) "imi_any_matches_any",
  (MR_String) "imi_ground_matches_bound"
};

static const MR_DuArgLocn check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 3,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0 = {
  (MR_String) "inst_match_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0,
  check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0,
  check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0
};

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_match_info_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_match_info_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_match_info",
  {     check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0 = {
  (MR_String) "inst_match_inputs",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0
};

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_match_inputs",
  {     check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0
};

static const MR_VA_TypeInfo_Struct5 check_hlds__inst_match____vti_pred_5parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__inst_match__type_ctor_info_inst_match_info_0check_hlds__inst_match__type_ctor_info_inst_match_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_TypeInfo) (&check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0),
    (MR_TypeInfo) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_matches_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_matches_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__inst_match____vti_pred_5parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__inst_match__type_ctor_info_inst_match_info_0check_hlds__inst_match__type_ctor_info_inst_match_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0 = {
  (MR_String) "uc_match",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1 = {
  (MR_String) "uc_instantiated",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0
};

static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "uniqueness_comparison",
  {     check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0
};

static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        parse_tree__prog_data____Compare____mer_inst_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_33 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_34 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_33 < Var_34);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_33 > Var_34);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_35 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_36 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_35 < Var_36);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_35 > Var_36);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;
                MR_Integer Var_37 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_38 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_37 < Var_38);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_37 > Var_38);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult6_21 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Integer Var_39 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_40 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_39 < Var_40);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_39 > Var_40);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                  succeeded = (ArgX7_15 == ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__inst_match__inst_is_complete_for_type_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Var_21;
          MR_Word Var_22;

          check_hlds__type_util__cons_id_arg_types_4_p_0((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8, &Var_21, &Var_22, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1, env_ptr);
        }
        (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_27 = ((MR_Word) ((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_Var_27));
    check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_27, (MR_Integer) 0))));
    (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_27, (MR_Integer) 1))));
    (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25, (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23);
    if ((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
    {
      (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
      (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6));
      }
      (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = mercury__list__map_3_p_5((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32, (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33, (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_28, (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26, (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24);
      if ((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
        check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), &(env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_Var_27, (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7, env_ptr);
        (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(env_ptr);
    (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
    if ((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
      check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1) == 0)
      {
        check_hlds__type_util__cons_id_arg_types_4_p_0((env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8, &(env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23, &(env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4, env_ptr);
        (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
  MR_Word Expansions_5,
  MR_Word ModuleInfo_6,
  MR_Word Inst_7,
  MR_Word Type_8)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s env;

    (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5 = Expansions_5;
    (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6 = ModuleInfo_6;
    (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8 = Type_8;
    while (MR_TRUE)
    {
      MR_Word Name_9;

      // setup for model_semi tailcalls optimized into a loop
      ;
      (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Inst_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if ((env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
      {
        Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1))));
        (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (Name_9)), (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5);
        if ((env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
          (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
        else
        {
          MR_Word ExpandedInst_10;
          MR_Word Var_14;
          MR_Word next_value_of_Expansions_5;
          MR_Word next_value_of_Inst_7;

          check_hlds__mode_util__inst_lookup_3_p_0((env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, Name_9, &ExpandedInst_10);
          Var_14 = mercury__set__insert_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5, ((MR_Box) (Name_9)));
          // direct tailcall eliminated
          ;
          next_value_of_Expansions_5 = Var_14;
          next_value_of_Inst_7 = ExpandedInst_10;
          (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5 = next_value_of_Expansions_5;
          Inst_7 = next_value_of_Inst_7;
          continue;
        }
      }
      else
      {
        MR_Word Var_11;
        MR_Word Var_12;
        MR_Unsigned packed_word_0;

        (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Inst_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if ((env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
        {
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1)));
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 1))) & (MR_Integer) 7);
          Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2))));
          (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 3))));
          check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(&env);
          if ((env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
          {
            check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(&env);
            (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
          }
        }
        else
          (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = (Inst_7 != (MR_Word) ((MR_Unsigned) 4U));
      }
      return (env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded;
      break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
  MR_Word InstA_6,
  MR_Word MaybeType_7,
  MR_Word InstVar_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));

    if ((Var_87 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_20;
      MR_Word InstVarSub_28;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Unsigned packed_word_1;

      InstVarSub_28 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (InstVar_8)), ((MR_Box) (InstA_6)));
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (InstVarSub_28));
      }
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_17 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (packed_word_1);
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word InstVarSub0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_87, (MR_Integer) 0))));
      MR_Word InstB_11;
      MR_Box conv0_InstB_11;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), InstVarSub0_10, ((MR_Box) (InstVar_8)), &conv0_InstB_11);
      if (succeeded)
      {
        InstB_11 = ((MR_Word) (conv0_InstB_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeInfo_77_77;
        MR_Word TypeCtorInfo_78_78;
        MR_Word ModuleInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
        MR_Word Inst_13;
        MR_Word ModuleInfo_14;
        MR_Word InstVarSub_15;
        MR_Word STATE_VARIABLE_Info_22_22;
        MR_Word Var_24;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Unsigned packed_word_3;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Unsigned packed_word_4;

        succeeded = check_hlds__inst_util__inst_merge_6_p_0(InstA_6, InstB_11, MaybeType_7, &Inst_13, ModuleInfo0_12, &ModuleInfo_14);
        if (succeeded)
        {
          Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));
          packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
          {
            STATE_VARIABLE_Info_22_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 0) = ((MR_Box) (ModuleInfo_14));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 1) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 2) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, 3) = (MR_Box) (packed_word_3);
          }
          TypeInfo_77_77 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[0]);
          TypeCtorInfo_78_78 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
          mercury__map__det_update_4_p_0(TypeInfo_77_77, TypeCtorInfo_78_78, ((MR_Box) (InstVar_8)), ((MR_Box) (Inst_13)), InstVarSub0_10, &InstVarSub_15);
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (InstVarSub_15));
          }
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, (MR_Integer) 0))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, (MR_Integer) 1))));
          packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_22_22, (MR_Integer) 3)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_17 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (packed_word_4);
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word Var_26;
        MR_Word InstVarSub_27;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Unsigned packed_word_5;

        mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ((MR_Box) (InstVar_8)), ((MR_Box) (InstA_6)), InstVarSub0_10, &InstVarSub_27);
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (InstVarSub_27));
        }
        Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
        Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
        packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_17 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (packed_word_5);
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * InstVar_5,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Inst_3;
    MR_Word Insts_4;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Inst_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Insts_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      check_hlds__inst_match__inst_contains_inst_var_2_p_0(Inst_3, InstVar_5, cont, cont_env_ptr);
      {
        MR_Word next_value_of_HeadVar__1_1 = Insts_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * InstVar_5,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word BoundInst_3;
    MR_Word BoundInsts_4;
    MR_Word ArgInsts_7;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      BoundInst_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      BoundInsts_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      ArgInsts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_3, (MR_Integer) 1))));
      check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(ArgInsts_7, InstVar_5, cont, cont_env_ptr);
      {
        MR_Word next_value_of_HeadVar__1_1 = BoundInsts_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(
  MR_Word InstName_3,
  MR_Word * InstVar_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    // setup for model_non tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) InstName_3)) {
      case (MR_Integer) 0:
        {
          MR_Word ArgInsts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_3, (MR_Integer) 1))));

          check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(ArgInsts_6, InstVar_4, cont, cont_env_ptr);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_3, (MR_Integer) 1))));
          MR_Word InstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_3, (MR_Integer) 2))));

          check_hlds__inst_match__inst_contains_inst_var_2_p_0(InstA_14, InstVar_4, cont, cont_env_ptr);
          check_hlds__inst_match__inst_contains_inst_var_2_p_0(InstB_15, InstVar_4, cont, cont_env_ptr);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_3, (MR_Integer) 0))));
          MR_Word InstB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_3, (MR_Integer) 1))));

          check_hlds__inst_match__inst_contains_inst_var_2_p_0(InstA_7, InstVar_4, cont, cont_env_ptr);
          check_hlds__inst_match__inst_contains_inst_var_2_p_0(InstB_8, InstVar_4, cont, cont_env_ptr);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_3, (MR_Integer) 0))))) {
          case (MR_Integer) 0:
            {
              MR_Word SubInstName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_3, (MR_Integer) 1))));
              MR_Word next_value_of_InstName_3 = SubInstName_11;

              // direct tailcall eliminated
              ;
              InstName_3 = next_value_of_InstName_3;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubInstName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_3, (MR_Integer) 1))));
              MR_Word next_value_of_InstName_3 = SubInstName_25;

              // direct tailcall eliminated
              ;
              InstName_3 = next_value_of_InstName_3;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubInstName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_3, (MR_Integer) 1))));
              MR_Word next_value_of_InstName_3 = SubInstName_27;

              // direct tailcall eliminated
              ;
              InstName_3 = next_value_of_InstName_3;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInstName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_3, (MR_Integer) 1))));
              MR_Word next_value_of_InstName_3 = SubInstName_28;

              // direct tailcall eliminated
              ;
              InstName_3 = next_value_of_InstName_3;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubInstName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_3, (MR_Integer) 2))));
              MR_Word next_value_of_InstName_3 = SubInstName_32;

              // direct tailcall eliminated
              ;
              InstName_3 = next_value_of_InstName_3;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s *) (env_ptr_arg);

    check_hlds__inst_match__inst_contains_inst_var_2_p_0((env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__Inst_10, (env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__InstVar_5, (env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont, (env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__Inst_10 = ((MR_Word) ((env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__conv0_Inst_10));
    check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_1(env_ptr);
  }
}

void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * InstVar_5,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s env;

    (env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__InstVar_5 = InstVar_5;
    (env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont = cont;
    (env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
    while (MR_TRUE)
    {
      MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
      MR_Word Mode_3;
      MR_Word Modes_4;

      // setup for model_non tailcalls optimized into a loop
      ;
      if (succeeded)
      {
        Mode_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        Modes_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        if (((MR_tag((MR_Word) Mode_3)) == (MR_Integer) 0))
        {
          MR_Word Initial_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_3, (MR_Integer) 0))));
          MR_Word Final_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_3, (MR_Integer) 1))));

          (env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__Inst_10 = Initial_8;
          check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_1(&env);
          (env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__Inst_10 = Final_9;
          check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_1(&env);
        }
        else
        {
          MR_Word Insts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_3, (MR_Integer) 1))));
          MR_Word _Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_3, (MR_Integer) 0))));

          mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__conv0_Inst_10, Insts_12, check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_2, &env);
        }
        {
          MR_Word next_value_of_HeadVar__1_1 = Modes_4;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
      break;
    }
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) (env_ptr_arg);

    *((env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4) = ((MR_Word) ((env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__conv0_InstVar_4));
    check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[0]);
    (env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__TypeInfo_28_28, ((MR_Box) (*((env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4))), ((MR_Box) ((env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__Var_27)));
    if ((env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded)
      ((env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont)((env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) (env_ptr_arg);

    check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, &(env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__Var_27, check_hlds__inst_match__inst_contains_inst_var_2_p_0_3, env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0(
  MR_Word Inst_3,
  MR_Word * InstVar_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s env;

    (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4 = InstVar_4;
    (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont = cont;
    (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
    switch (MR_tag((MR_Word) Inst_3)) {
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 0))))) {
          case (MR_Integer) 0:
            {
              MR_Word InstResults_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 2))));
              MR_Word _Uniq_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 1)));

              (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 3))));
              if ((InstResults_7 == (MR_Word) ((MR_Unsigned) 0U)))
                check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
              else
              if (((MR_tag((MR_Word) InstResults_7)) == (MR_Integer) 1))
              {
                MR_Word InstVarResult_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_7, (MR_Integer) 2))));
                MR_Word Var_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
                MR_Word Var_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_7, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_7, (MR_Integer) 1))));
                MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_7, (MR_Integer) 3))));
                MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstResults_7, (MR_Integer) 4))));
                MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), InstResults_7, (MR_Integer) 0)));

                if ((InstVarResult_12 == (MR_Word) ((MR_Unsigned) 0U)))
                  check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
                else
                {
                  MR_Word InstVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstVarResult_12, (MR_Integer) 0))));

                  mercury__set__member_2_p_1((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), &(env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__conv0_InstVar_4, InstVars_15, check_hlds__inst_match__inst_contains_inst_var_2_p_0_2, &env);
                }
              }
              else
              {
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HOInstInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 2))));
              MR_Word Modes_18;
              MR_Word Var_23;
              MR_Word _Uniq_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 1)));
              MR_Word _PredOrFunc_17;
              MR_Word Var_19;
              MR_Word _Det_20;
              MR_Unsigned packed_word_3;
              MR_Unsigned packed_word_4;

              (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded = (HOInstInfo_16 != (MR_Word) ((MR_Unsigned) 0U));
              if ((env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded)
              {
                Var_23 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_16), (MR_Integer) 1));
                packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
                _PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))) & (MR_Integer) 1);
                Modes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1))));
                Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 2))));
                packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 3)));
                _Det_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 3))) & (MR_Integer) 7);
                check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(Modes_18, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *((env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4) = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 1))));
              ((env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont)((env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 1))));

              check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(InstName_5, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgInsts_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 2))));
              MR_Word _Name_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_3, (MR_Integer) 1))));

              check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(ArgInsts_22, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_3_p_0(
  MR_Word PredInstA_4,
  MR_Word PredInstB_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_21_42;
    MR_Word Info0_12;
    MR_Word Var_25;
    MR_Word PredOrFunc_33;
    MR_Word ModesA_34;
    MR_Word Det_36;
    MR_Word ModesB_37;
    MR_Word MaybeTypes_39;
    MR_Integer Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_13;

    Var_25 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    PredOrFunc_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_4, (MR_Integer) 0))) & (MR_Integer) 1);
    ModesA_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstA_4, (MR_Integer) 1))));
    Det_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_4, (MR_Integer) 3))) & (MR_Integer) 7);
    Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstB_5, (MR_Integer) 0))) & (MR_Integer) 1);
    ModesB_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstB_5, (MR_Integer) 1))));
    Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstB_5, (MR_Integer) 3))) & (MR_Integer) 7);
    succeeded = (PredOrFunc_33 == Var_43);
    if (succeeded)
    {
      succeeded = (Det_36 == Var_44);
      if (succeeded)
      {
        TypeCtorInfo_21_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
        {
          Info0_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Info0_12, 0) = ((MR_Box) (ModuleInfo_6));
          MR_hl_field(MR_mktag(0), Info0_12, 1) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(0), Info0_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Info0_12, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
        }
        Var_40 = mercury__list__length_1_f_0(TypeCtorInfo_21_42, ModesA_34);
        check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0((MR_Word) ((MR_Unsigned) 0U), Var_40, &MaybeTypes_39);
        succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(ModesA_34, ModesB_37, MaybeTypes_39, Info0_12, &Var_13);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PredInst_4)
{
  {
    MR_bool succeeded;
    MR_Word Info_9;
    MR_Word Var_22;
    MR_Word PredOrFunc_29;
    MR_Word ArgModes_30;

    Var_22 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    PredOrFunc_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInst_4, (MR_Integer) 0))) & (MR_Integer) 1);
    ArgModes_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInst_4, (MR_Integer) 1))));
    {
      Info_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_9, 0) = ((MR_Box) (ModuleInfo_3));
      MR_hl_field(MR_mktag(0), Info_9, 1) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Info_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    switch (PredOrFunc_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_21_52;
          MR_Integer Arity_33;
          MR_Word DefaultFunc_34;
          MR_Word PredOrFunc_43;
          MR_Word ModesA_44;
          MR_Word Det_46;
          MR_Word ModesB_47;
          MR_Word MaybeTypes_49;
          MR_Integer Var_50;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_10;

          Arity_33 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_30);
          DefaultFunc_34 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_33);
          PredOrFunc_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInst_4, (MR_Integer) 0))) & (MR_Integer) 1);
          ModesA_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInst_4, (MR_Integer) 1))));
          Det_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInst_4, (MR_Integer) 3))) & (MR_Integer) 7);
          Var_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DefaultFunc_34, (MR_Integer) 0))) & (MR_Integer) 1);
          ModesB_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefaultFunc_34, (MR_Integer) 1))));
          Var_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DefaultFunc_34, (MR_Integer) 3))) & (MR_Integer) 7);
          succeeded = (PredOrFunc_43 == Var_53);
          if (succeeded)
          {
            succeeded = (Det_46 == Var_54);
            if (succeeded)
            {
              TypeCtorInfo_21_52 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
              Var_50 = mercury__list__length_1_f_0(TypeCtorInfo_21_52, ModesA_44);
              check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0((MR_Word) ((MR_Unsigned) 0U), Var_50, &MaybeTypes_49);
              succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(ModesA_44, ModesB_47, MaybeTypes_49, Info_9, &Var_10);
            }
          }
        }
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word HOInstInfo_4)
{
  {
    MR_bool succeeded;
    MR_Word Info_9;
    MR_Word Var_22;

    Var_22 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_9, 0) = ((MR_Box) (ModuleInfo_3));
      MR_hl_field(MR_mktag(0), Info_9, 1) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Info_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    if ((HOInstInfo_4 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word PredInst_29 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_4), (MR_Integer) 1));
      MR_Word PredOrFunc_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInst_29, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgModes_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInst_29, (MR_Integer) 1))));

      switch (PredOrFunc_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer Arity_40;
            MR_Word DefaultFunc_41;
            MR_Word Var_10;

            Arity_40 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_37);
            DefaultFunc_41 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_40);
            succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(PredInst_29, DefaultFunc_41, (MR_Word) ((MR_Unsigned) 0U), Info_9, &Var_10);
          }
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Inst_4)
{
  {
    MR_bool succeeded;
    MR_Word Info_5;
    MR_Word Var_13;
    MR_Word Var_20;
    MR_Word Var_27;
    MR_Word Var_6;

    Var_20 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_5, 0) = ((MR_Box) (ModuleInfo_3));
      MR_hl_field(MR_mktag(0), Info_5, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Info_5, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info_5, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    Var_27 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
    check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(Inst_4, Var_27, &Var_13, Info_5, &Var_6);
    succeeded = ((MR_Integer) 1 == Var_13);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__unique_matches_initial_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        succeeded = (HeadVar__2_2 == (MR_Integer) 3);
        break;
      case (MR_Integer) 4:
        switch (HeadVar__2_2) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 2:
        if (((MR_Unsigned) 29U & (((MR_Integer) 1 << HeadVar__2_2))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (HeadVar__2_2) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_allow_any_any_4_p_0(
  MR_Word InstA_5,
  MR_Word InstB_6,
  MR_Word Type_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word Info0_9;
    MR_Word Var_16;
    MR_Word ThisExpansion_31;
    MR_Word Expansions0_32;
    MR_Word Expansions_33;

    Expansions0_32 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info0_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_9, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Info0_9, 1) = ((MR_Box) (Expansions0_32));
      MR_hl_field(MR_mktag(0), Info0_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info0_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Type_7));
    }
    {
      ThisExpansion_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThisExpansion_31, 0) = ((MR_Box) (InstA_5));
      MR_hl_field(MR_mktag(0), ThisExpansion_31, 1) = ((MR_Box) (InstB_6));
      MR_hl_field(MR_mktag(0), ThisExpansion_31, 2) = ((MR_Box) (Var_16));
    }
    succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_31)), Expansions0_32, &Expansions_33);
    if (succeeded)
    {
      MR_Word ExpandedInstA_34;
      MR_Word ExpandedInstB_35;
      MR_Word STATE_VARIABLE_Info_17_36;
      MR_Word Var_38;
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_9, (MR_Integer) 0))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_9, (MR_Integer) 2))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_9, (MR_Integer) 3)));
      MR_Word Var_10;

      {
        STATE_VARIABLE_Info_17_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_36, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_36, 1) = ((MR_Box) (Expansions_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_36, 2) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_36, 3) = (MR_Box) (packed_word_0);
      }
      check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_46, InstA_5, &ExpandedInstA_34);
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_36, (MR_Integer) 0))));
      check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_38, InstB_6, &ExpandedInstB_35);
      succeeded = check_hlds__inst_match__inst_matches_binding_3_5_p_0(ExpandedInstA_34, ExpandedInstB_35, Var_16, STATE_VARIABLE_Info_17_36, &Var_10);
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_4_p_0(
  MR_Word InstA_5,
  MR_Word InstB_6,
  MR_Word Type_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word Info0_9;
    MR_Word Var_16;
    MR_Word ThisExpansion_31;
    MR_Word Expansions0_32;
    MR_Word Expansions_33;

    Expansions0_32 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info0_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_9, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Info0_9, 1) = ((MR_Box) (Expansions0_32));
      MR_hl_field(MR_mktag(0), Info0_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info0_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Type_7));
    }
    {
      ThisExpansion_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThisExpansion_31, 0) = ((MR_Box) (InstA_5));
      MR_hl_field(MR_mktag(0), ThisExpansion_31, 1) = ((MR_Box) (InstB_6));
      MR_hl_field(MR_mktag(0), ThisExpansion_31, 2) = ((MR_Box) (Var_16));
    }
    succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_31)), Expansions0_32, &Expansions_33);
    if (succeeded)
    {
      MR_Word ExpandedInstA_34;
      MR_Word ExpandedInstB_35;
      MR_Word STATE_VARIABLE_Info_17_36;
      MR_Word Var_38;
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_9, (MR_Integer) 0))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_9, (MR_Integer) 2))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info0_9, (MR_Integer) 3)));
      MR_Word Var_10;

      {
        STATE_VARIABLE_Info_17_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_36, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_36, 1) = ((MR_Box) (Expansions_33));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_36, 2) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_36, 3) = (MR_Box) (packed_word_0);
      }
      check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_46, InstA_5, &ExpandedInstA_34);
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_36, (MR_Integer) 0))));
      check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_38, InstB_6, &ExpandedInstB_35);
      succeeded = check_hlds__inst_match__inst_matches_binding_3_5_p_0(ExpandedInstA_34, ExpandedInstB_35, Var_16, STATE_VARIABLE_Info_17_36, &Var_10);
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_5_p_0(
  MR_Word tscc_proc_1_input_1_InstA_6,
  MR_Word tscc_proc_1_input_2_InstB_7,
  MR_Word tscc_proc_1_input_3_MaybeType_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16)
{
  {
    MR_Word tscc_proc_2_input_1_InstA_6;
    MR_Word tscc_proc_2_input_2_InstB_7;
    MR_Word tscc_proc_2_input_3_MaybeType_8;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_16;

    // The code for TSCC PROC 1: pred check_hlds.inst_match.inst_matches_binding_mt/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_binding_mt/5-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_binding_3/5-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word InstA_6 = tscc_proc_1_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_1_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_1_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
      MR_Word STATE_VARIABLE_Info_16;
      MR_bool succeeded = MR_TRUE;
      MR_Word ThisExpansion_10;
      MR_Word Expansions0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1))));
      MR_Word Expansions_12;

      {
        ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 0) = ((MR_Box) (InstA_6));
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 1) = ((MR_Box) (InstB_7));
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 2) = ((MR_Box) (MaybeType_8));
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_10)), Expansions0_11, &Expansions_12);
      if (succeeded)
      {
        MR_Word ExpandedInstA_13;
        MR_Word ExpandedInstB_14;
        MR_Word STATE_VARIABLE_Info_17_17;
        MR_Word Var_19;
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
        MR_Word next_value_of_tscc_proc_2_input_1_InstA_6;
        MR_Word next_value_of_tscc_proc_2_input_2_InstB_7;
        MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8;
        MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;

        {
          STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (Expansions_12));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 3) = (MR_Box) (packed_word_1);
        }
        check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_27, InstA_6, &ExpandedInstA_13);
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
        check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_19, InstB_7, &ExpandedInstB_14);
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_2_input_1_InstA_6 = ExpandedInstA_13;
        next_value_of_tscc_proc_2_input_2_InstB_7 = ExpandedInstB_14;
        next_value_of_tscc_proc_2_input_3_MaybeType_8 = MaybeType_8;
        next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = STATE_VARIABLE_Info_17_17;
        tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
        tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
        tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
        tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
        goto top_of_proc_2;
      }
      else
      {
        STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
        succeeded = MR_TRUE;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_16;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_6 = tscc_proc_2_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_2_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_2_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_41 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
      MR_Word STATE_VARIABLE_Info_42;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) InstA_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(InstA_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = (InstB_7 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 1))));
            MR_Word Var_170 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word Var_177 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
            MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) InstB_7)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word UniqB_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word HOInstInfoB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                  switch (Var_177) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word NextInstA_15;
                        MR_Word NextInstB_16;
                        MR_Word Var_66;
                        MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                        MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                        MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                        succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_182, Var_170, Var_169, &NextInstA_15);
                        if (succeeded)
                        {
                          Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                          succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_66, UniqB_12, HOInstInfoB_13, &NextInstB_16);
                          if (succeeded)
                          {
                            // direct tailcall eliminated
                            ;
                            next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_15;
                            next_value_of_tscc_proc_1_input_2_InstB_7 = NextInstB_16;
                            next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                            next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                            tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                            tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                            tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                            tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                            goto top_of_proc_1;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(Var_169, HOInstInfoB_13, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word NextInstA_74;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_182, Var_170, Var_169, &NextInstA_74);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_74;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NextInstA_71;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_182, Var_170, Var_169, &NextInstA_71);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_71;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 3))));
                MR_Word Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                      MR_Word UniqB_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word HOInstInfoB_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                      MR_Word NextInstB_80;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_57, UniqB_78, HOInstInfoB_79, &NextInstB_80);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_6;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = NextInstB_80;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word BoundInstsB_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));

                          succeeded = check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(Var_171, BoundInstsB_32, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word Var_53;
                          MR_Word Var_54;
                          MR_Word Var_166;

                          succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                            succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(Var_172, Var_171, MaybeType_8, Var_53);
                            if (succeeded)
                            {
                              Var_54 = (MR_Integer) 0;
                              check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_166, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                              succeeded = (Var_54 == Var_166);
                            }
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word UniqB_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word HOInstInfoB_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                      MR_Word NextInstB_77;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_189, UniqB_75, HOInstInfoB_76, &NextInstB_77);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_6;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = NextInstB_77;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word TypeCtorInfo_163_163;
                          MR_Word InstResultsB_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word Type_36;
                          MR_Word Var_48;
                          MR_Word Var_50;
                          MR_Word Var_51;
                          MR_Word BoundInstsB_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                          MR_Word Var_167;

                          succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(InstResultsB_35, BoundInstsB_90, MaybeType_8, Var_189);
                          if (succeeded)
                          {
                            Var_48 = (MR_Integer) 0;
                            check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstB_7, &Var_167, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                            succeeded = (Var_48 == Var_167);
                            if (succeeded)
                            {
                              succeeded = (MaybeType_8 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Type_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
                                TypeCtorInfo_163_163 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                                Var_50 = mercury__set__init_0_f_0(TypeCtorInfo_163_163);
                                Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42, (MR_Integer) 0))));
                                succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(Var_50, Var_51, BoundInstsB_90, Type_36);
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word HOInstInfoB_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));

                          succeeded = check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(Var_174, HOInstInfoB_94, MaybeType_8, Var_189);
                          if (succeeded)
                          {
                            STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word TypeCtorInfo_164_164;
                MR_Word TypeInfo_165_165;
                MR_Word Name_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));
                MR_Word ArgsA_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word ArgsB_39;
                MR_Word MaybeTypes_40;
                MR_Integer Var_43;
                MR_Word Var_44;
                MR_Word Var_168;

                succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));
                  ArgsB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_37, Var_168);
                  if (succeeded)
                  {
                    TypeCtorInfo_164_164 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                    Var_43 = mercury__list__length_1_f_0(TypeCtorInfo_164_164, ArgsA_38);
                    Var_44 = (MR_Word) ((MR_Unsigned) 0U);
                    TypeInfo_165_165 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[1]);
                    mercury__list__duplicate_3_p_0(TypeInfo_165_165, Var_43, ((MR_Box) (Var_44)), &MaybeTypes_40);
                    succeeded = check_hlds__inst_match__inst_list_matches_binding_5_p_0(ArgsA_38, ArgsB_39, MaybeTypes_40, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                  }
                }
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_42;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_16 = tscc_output_1_STATE_VARIABLE_Info_16;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_3_5_p_0(
  MR_Word tscc_proc_2_input_1_InstA_6,
  MR_Word tscc_proc_2_input_2_InstB_7,
  MR_Word tscc_proc_2_input_3_MaybeType_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16)
{
  {
    MR_Word tscc_proc_1_input_1_InstA_6;
    MR_Word tscc_proc_1_input_2_InstB_7;
    MR_Word tscc_proc_1_input_3_MaybeType_8;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_16;

    // The code for TSCC PROC 2: pred check_hlds.inst_match.inst_matches_binding_3/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_binding_mt/5-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_binding_3/5-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word InstA_6 = tscc_proc_1_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_1_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_1_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
      MR_Word STATE_VARIABLE_Info_16;
      MR_bool succeeded = MR_TRUE;
      MR_Word ThisExpansion_10;
      MR_Word Expansions0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1))));
      MR_Word Expansions_12;

      {
        ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 0) = ((MR_Box) (InstA_6));
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 1) = ((MR_Box) (InstB_7));
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 2) = ((MR_Box) (MaybeType_8));
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_10)), Expansions0_11, &Expansions_12);
      if (succeeded)
      {
        MR_Word ExpandedInstA_13;
        MR_Word ExpandedInstB_14;
        MR_Word STATE_VARIABLE_Info_17_17;
        MR_Word Var_19;
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
        MR_Word next_value_of_tscc_proc_2_input_1_InstA_6;
        MR_Word next_value_of_tscc_proc_2_input_2_InstB_7;
        MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8;
        MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;

        {
          STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (Expansions_12));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 3) = (MR_Box) (packed_word_1);
        }
        check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_27, InstA_6, &ExpandedInstA_13);
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
        check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_19, InstB_7, &ExpandedInstB_14);
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_2_input_1_InstA_6 = ExpandedInstA_13;
        next_value_of_tscc_proc_2_input_2_InstB_7 = ExpandedInstB_14;
        next_value_of_tscc_proc_2_input_3_MaybeType_8 = MaybeType_8;
        next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = STATE_VARIABLE_Info_17_17;
        tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
        tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
        tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
        tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
        goto top_of_proc_2;
      }
      else
      {
        STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
        succeeded = MR_TRUE;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_16;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_6 = tscc_proc_2_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_2_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_2_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_41 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
      MR_Word STATE_VARIABLE_Info_42;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) InstA_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(InstA_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = (InstB_7 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 1))));
            MR_Word Var_170 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word Var_177 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
            MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) InstB_7)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word UniqB_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word HOInstInfoB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                  switch (Var_177) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word NextInstA_15;
                        MR_Word NextInstB_16;
                        MR_Word Var_66;
                        MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                        MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                        MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                        succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_182, Var_170, Var_169, &NextInstA_15);
                        if (succeeded)
                        {
                          Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                          succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_66, UniqB_12, HOInstInfoB_13, &NextInstB_16);
                          if (succeeded)
                          {
                            // direct tailcall eliminated
                            ;
                            next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_15;
                            next_value_of_tscc_proc_1_input_2_InstB_7 = NextInstB_16;
                            next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                            next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                            tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                            tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                            tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                            tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                            goto top_of_proc_1;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(Var_169, HOInstInfoB_13, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word NextInstA_74;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_182, Var_170, Var_169, &NextInstA_74);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_74;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NextInstA_71;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_182, Var_170, Var_169, &NextInstA_71);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_71;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 3))));
                MR_Word Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                      MR_Word UniqB_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word HOInstInfoB_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                      MR_Word NextInstB_80;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_57, UniqB_78, HOInstInfoB_79, &NextInstB_80);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_6;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = NextInstB_80;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word BoundInstsB_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));

                          succeeded = check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(Var_171, BoundInstsB_32, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word Var_53;
                          MR_Word Var_54;
                          MR_Word Var_166;

                          succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                            succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(Var_172, Var_171, MaybeType_8, Var_53);
                            if (succeeded)
                            {
                              Var_54 = (MR_Integer) 0;
                              check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_166, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                              succeeded = (Var_54 == Var_166);
                            }
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word UniqB_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word HOInstInfoB_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                      MR_Word NextInstB_77;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_189, UniqB_75, HOInstInfoB_76, &NextInstB_77);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_6;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = NextInstB_77;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word TypeCtorInfo_163_163;
                          MR_Word InstResultsB_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word Type_36;
                          MR_Word Var_48;
                          MR_Word Var_50;
                          MR_Word Var_51;
                          MR_Word BoundInstsB_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                          MR_Word Var_167;

                          succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(InstResultsB_35, BoundInstsB_90, MaybeType_8, Var_189);
                          if (succeeded)
                          {
                            Var_48 = (MR_Integer) 0;
                            check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstB_7, &Var_167, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                            succeeded = (Var_48 == Var_167);
                            if (succeeded)
                            {
                              succeeded = (MaybeType_8 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Type_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
                                TypeCtorInfo_163_163 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                                Var_50 = mercury__set__init_0_f_0(TypeCtorInfo_163_163);
                                Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42, (MR_Integer) 0))));
                                succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(Var_50, Var_51, BoundInstsB_90, Type_36);
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word HOInstInfoB_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));

                          succeeded = check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(Var_174, HOInstInfoB_94, MaybeType_8, Var_189);
                          if (succeeded)
                          {
                            STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word TypeCtorInfo_164_164;
                MR_Word TypeInfo_165_165;
                MR_Word Name_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));
                MR_Word ArgsA_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word ArgsB_39;
                MR_Word MaybeTypes_40;
                MR_Integer Var_43;
                MR_Word Var_44;
                MR_Word Var_168;

                succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));
                  ArgsB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_37, Var_168);
                  if (succeeded)
                  {
                    TypeCtorInfo_164_164 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                    Var_43 = mercury__list__length_1_f_0(TypeCtorInfo_164_164, ArgsA_38);
                    Var_44 = (MR_Word) ((MR_Unsigned) 0U);
                    TypeInfo_165_165 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[1]);
                    mercury__list__duplicate_3_p_0(TypeInfo_165_165, Var_43, ((MR_Box) (Var_44)), &MaybeTypes_40);
                    succeeded = check_hlds__inst_match__inst_list_matches_binding_5_p_0(ArgsA_38, ArgsB_39, MaybeTypes_40, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                  }
                }
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_42;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_16 = tscc_output_1_STATE_VARIABLE_Info_16;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeType_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word X_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Y_13;
      MR_Word Ys_14;
      MR_Word ConsIdX_17;
      MR_Word ArgsX_18;
      MR_Word ConsIdY_19;
      MR_Word ArgsY_20;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ConsIdX_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 0))));
        ArgsX_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 1))));
        ConsIdY_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0))));
        ArgsY_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1))));
        succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdX_17, ConsIdY_19);
        if (succeeded)
        {
          MR_Word MaybeTypes_21;
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
          MR_Integer Var_25;
          MR_Word STATE_VARIABLE_Info_26_26;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

          Var_25 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgsX_18);
          check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(Var_24, MaybeType_3, ConsIdX_17, Var_25, &MaybeTypes_21);
          succeeded = check_hlds__inst_match__inst_list_matches_binding_5_p_0(ArgsX_18, ArgsY_20, MaybeTypes_21, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_26_26);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Xs_12;
            next_value_of_HeadVar__2_2 = Ys_14;
            next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_26_26;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
            continue;
          }
        }
        else
        {
          MR_Word QNameA_39;
          MR_Integer ArityA_40;
          MR_Word QNameB_42;
          MR_Integer ArityB_43;
          MR_Word next_value_of_HeadVar__2_2;

          succeeded = ((((MR_tag((MR_Word) ConsIdX_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            QNameA_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsIdX_17, (MR_Integer) 1))));
            ArityA_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdX_17, (MR_Integer) 2))));
            succeeded = ((((MR_tag((MR_Word) ConsIdY_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              QNameB_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsIdY_19, (MR_Integer) 1))));
              ArityB_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdY_19, (MR_Integer) 2))));
            }
          }
          if (succeeded)
          {
            MR_String NameA_45;
            MR_String NameB_47;
            MR_Word O_49;

            if (((MR_tag((MR_Word) QNameA_39)) == (MR_Integer) 1))
              NameA_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), QNameA_39, (MR_Integer) 1))));
            else
              NameA_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), QNameA_39, (MR_Integer) 0))));
            if (((MR_tag((MR_Word) QNameB_42)) == (MR_Integer) 1))
              NameB_47 = ((MR_String) ((MR_hl_field(MR_mktag(1), QNameB_42, (MR_Integer) 1))));
            else
              NameB_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), QNameB_42, (MR_Integer) 0))));
            mercury__private_builtin__builtin_compare_string_3_p_0(&O_49, NameA_45, NameB_47);
            switch (O_49) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                succeeded = (ArityA_40 > ArityB_43);
                break;
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
            }
          }
          else
          {
            MR_Word Var_53;

            parse_tree__prog_data____Compare____cons_id_0_0(&Var_53, ConsIdX_17, ConsIdY_19);
            succeeded = ((MR_Integer) 2 == Var_53);
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = Ys_14;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word ArgA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgsA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgB_11;
      MR_Word ArgsB_12;
      MR_Word MaybeType_13;
      MR_Word MaybeTypes_14;
      MR_Word STATE_VARIABLE_Info_18_18;
      MR_Word ThisExpansion_26;
      MR_Word Expansions0_27;
      MR_Word Expansions_28;
      MR_Word TypeCtorInfo_7_63;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgsB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          MaybeTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          Expansions0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
          {
            ThisExpansion_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ThisExpansion_26, 0) = ((MR_Box) (ArgA_9));
            MR_hl_field(MR_mktag(0), ThisExpansion_26, 1) = ((MR_Box) (ArgB_11));
            MR_hl_field(MR_mktag(0), ThisExpansion_26, 2) = ((MR_Box) (MaybeType_13));
          }
          TypeCtorInfo_7_63 = (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
          succeeded = mercury__set_tree234__insert_new_3_p_0(TypeCtorInfo_7_63, ((MR_Box) (ThisExpansion_26)), Expansions0_27, &Expansions_28);
          if (succeeded)
          {
            MR_Word ExpandedInstA_29;
            MR_Word ExpandedInstB_30;
            MR_Word STATE_VARIABLE_Info_17_31;
            MR_Word Var_33;
            MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
            MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));

            {
              STATE_VARIABLE_Info_17_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_31, 0) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_31, 1) = ((MR_Box) (Expansions_28));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_31, 2) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_31, 3) = (MR_Box) (packed_word_1);
            }
            check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_41, ArgA_9, &ExpandedInstA_29);
            Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_31, (MR_Integer) 0))));
            check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(Var_33, ArgB_11, &ExpandedInstB_30);
            succeeded = check_hlds__inst_match__inst_matches_binding_3_5_p_0(ExpandedInstA_29, ExpandedInstB_30, MaybeType_13, STATE_VARIABLE_Info_17_31, &STATE_VARIABLE_Info_18_18);
          }
          else
          {
            STATE_VARIABLE_Info_18_18 = STATE_VARIABLE_Info_0_4;
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ArgsA_10;
            next_value_of_HeadVar__2_2 = ArgsB_12;
            next_value_of_HeadVar__3_3 = MaybeTypes_14;
            next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_18_18;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
  MR_Word HOInstInfoA_5,
  MR_Word HOInstInfoB_6,
  MR_Word MaybeType_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;

    if ((HOInstInfoB_6 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_mt_3_p_0(ModuleInfo_8, HOInstInfoA_5, MaybeType_7);
    else
    {
      MR_Word Var_19 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_6), (MR_Integer) 1));

      if ((HOInstInfoA_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeCtorInfo_18_18;
        MR_Word TypeCtorInfo_2_75;
        MR_Word TypeCtorInfo_21_91;
        MR_Word ArgModes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
        MR_Integer Arity_13;
        MR_Word PredInstA_14;
        MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Info0_61;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_74;
        MR_Word PredOrFunc_82;
        MR_Word ModesA_83;
        MR_Word Det_85;
        MR_Word ModesB_86;
        MR_Word MaybeTypes_88;
        MR_Integer Var_89;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_62;

        succeeded = (Var_15 == (MR_Integer) 1);
        if (succeeded)
        {
          TypeCtorInfo_18_18 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
          Arity_13 = mercury__list__length_1_f_0(TypeCtorInfo_18_18, ArgModes_10);
          PredInstA_14 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_13);
          Var_63 = (MR_Word) ((MR_Unsigned) 0U);
          Var_64 = (MR_Integer) 2;
          Var_65 = (MR_Integer) 0;
          Var_66 = (MR_Integer) 1;
          Var_67 = (MR_Integer) 0;
          TypeCtorInfo_2_75 = (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
          Var_74 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_2_75);
          PredOrFunc_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_14, (MR_Integer) 0))) & (MR_Integer) 1);
          ModesA_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstA_14, (MR_Integer) 1))));
          Det_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_14, (MR_Integer) 3))) & (MR_Integer) 7);
          Var_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))) & (MR_Integer) 1);
          ModesB_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
          Var_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 3))) & (MR_Integer) 7);
          succeeded = (PredOrFunc_82 == Var_92);
          if (succeeded)
          {
            succeeded = (Det_85 == Var_93);
            if (succeeded)
            {
              TypeCtorInfo_21_91 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
              {
                Info0_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Info0_61, 0) = ((MR_Box) (ModuleInfo_8));
                MR_hl_field(MR_mktag(0), Info0_61, 1) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(0), Info0_61, 2) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(0), Info0_61, 3) = (MR_Box) (((((MR_Unsigned) (Var_64) << 3)) | (((((MR_Unsigned) (Var_65) << 2)) | (((((MR_Unsigned) (Var_66) << 1)) | (MR_Unsigned) (Var_67)))))));
              }
              Var_89 = mercury__list__length_1_f_0(TypeCtorInfo_21_91, ModesA_83);
              check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(MaybeType_7, Var_89, &MaybeTypes_88);
              succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(ModesA_83, ModesB_86, MaybeTypes_88, Info0_61, &Var_62);
            }
          }
        }
      }
      else
      {
        MR_Word TypeCtorInfo_21_54;
        MR_Word PredInstA_17 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_5), (MR_Integer) 1));
        MR_Word Info0_24;
        MR_Word Var_37;
        MR_Word PredOrFunc_45;
        MR_Word ModesA_46;
        MR_Word Det_48;
        MR_Word ModesB_49;
        MR_Word MaybeTypes_51;
        MR_Integer Var_52;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_25;

        Var_37 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
        PredOrFunc_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_17, (MR_Integer) 0))) & (MR_Integer) 1);
        ModesA_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstA_17, (MR_Integer) 1))));
        Det_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_17, (MR_Integer) 3))) & (MR_Integer) 7);
        Var_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))) & (MR_Integer) 1);
        ModesB_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
        Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 3))) & (MR_Integer) 7);
        succeeded = (PredOrFunc_45 == Var_55);
        if (succeeded)
        {
          succeeded = (Det_48 == Var_56);
          if (succeeded)
          {
            TypeCtorInfo_21_54 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
            {
              Info0_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Info0_24, 0) = ((MR_Box) (ModuleInfo_8));
              MR_hl_field(MR_mktag(0), Info0_24, 1) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), Info0_24, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), Info0_24, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
            }
            Var_52 = mercury__list__length_1_f_0(TypeCtorInfo_21_54, ModesA_46);
            check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(MaybeType_7, Var_52, &MaybeTypes_51);
            succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(ModesA_46, ModesB_49, MaybeTypes_51, Info0_24, &Var_25);
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_mt_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word HOInstInfo_5,
  MR_Word MaybeType_6)
{
  {
    MR_bool succeeded;
    MR_Word Info_7;
    MR_Word Var_20;

    Var_20 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_7, 0) = ((MR_Box) (ModuleInfo_4));
      MR_hl_field(MR_mktag(0), Info_7, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Info_7, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info_7, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    if ((HOInstInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word PredInst_27 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_5), (MR_Integer) 1));
      MR_Word PredOrFunc_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInst_27, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgModes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInst_27, (MR_Integer) 1))));

      switch (PredOrFunc_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer Arity_38;
            MR_Word DefaultFunc_39;
            MR_Word Var_8;

            Arity_38 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_35);
            DefaultFunc_39 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_38);
            succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(PredInst_27, DefaultFunc_39, MaybeType_6, Info_7, &Var_8);
          }
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_is_at_least_as_instantiated_4_p_0(
  MR_Word InstA_5,
  MR_Word InstB_6,
  MR_Word Type_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word Info0_9;
    MR_Word Var_16;
    MR_Word Var_23;
    MR_Word Var_10;

    Var_23 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info0_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_9, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Info0_9, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Info0_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info0_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Type_7));
    }
    succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(InstA_5, InstB_6, Var_16, Info0_9, &Var_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_typed_4_p_0(
  MR_Word InstA_5,
  MR_Word InstB_6,
  MR_Word Type_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_match__inst_matches_final_gmb_5_p_0(InstA_5, InstB_6, Type_7, ModuleInfo_8, (MR_Integer) 0);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_gmb_5_p_0(
  MR_Word InstA_6,
  MR_Word InstB_7,
  MR_Word Type_8,
  MR_Word ModuleInfo_9,
  MR_Word GroundMatchesBound_10)
{
  {
    MR_bool succeeded;
    MR_Word Info0_11;
    MR_Word Var_17;
    MR_Word Var_24;
    MR_Word Var_12;

    Var_24 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info0_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_11, 0) = ((MR_Box) (ModuleInfo_9));
      MR_hl_field(MR_mktag(0), Info0_11, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Info0_11, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info0_11, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (GroundMatchesBound_10)))))));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Type_8));
    }
    succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(InstA_6, InstB_7, Var_17, Info0_11, &Var_12);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_p_0(
  MR_Word InstA_4,
  MR_Word InstB_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_bool succeeded;
    MR_Word Info0_7;
    MR_Word Var_21;
    MR_Word Var_8;

    Var_21 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info0_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_7, 0) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Info0_7, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Info0_7, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info0_7, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(InstA_4, InstB_5, (MR_Word) ((MR_Unsigned) 0U), Info0_7, &Var_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word Type_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_Sub_0_17,
  MR_Word * STATE_VARIABLE_Sub_18)
{
  {
    MR_bool succeeded;
    MR_Word Info0_13;
    MR_Word Info_14;
    MR_Word Var_19;
    MR_Word Var_24;
    MR_Word Var_29;
    MR_Word Var_46;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (STATE_VARIABLE_Sub_0_17));
    }
    Var_46 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info0_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_13, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_15));
      MR_hl_field(MR_mktag(0), Info0_13, 1) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Info0_13, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Info0_13, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Type_10));
    }
    succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(InstA_8, InstB_9, Var_24, Info0_13, &Info_14);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 2))));
      succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_Sub_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(
  MR_Word InstA_5,
  MR_Word InstB_6,
  MR_Word Type_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word Info0_9;
    MR_Word Var_16;
    MR_Word Var_23;
    MR_Word Var_10;

    Var_23 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info0_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_9, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Info0_9, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Info0_9, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info0_9, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Type_7));
    }
    succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(InstA_5, InstB_6, Var_16, Info0_9, &Var_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_sub_7_p_0(
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word Type_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_Sub_0_16,
  MR_Word * STATE_VARIABLE_Sub_17)
{
  {
    MR_bool succeeded;
    MR_Word MaybeSub_13;
    MR_Word Var_19;
    MR_Word Info0_32;
    MR_Word Info_33;
    MR_Word Var_38;
    MR_Word Var_59;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (STATE_VARIABLE_Sub_0_16));
    }
    Var_59 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info0_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_32, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14));
      MR_hl_field(MR_mktag(0), Info0_32, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Info0_32, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Info0_32, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Type_10));
    }
    succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(InstA_8, InstB_9, Var_38, Info0_32, &Info_33);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_33, (MR_Integer) 0))));
      MaybeSub_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_33, (MR_Integer) 2))));
      if ((MaybeSub_13 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_sub\'/7", (MR_String) "missing inst_var_sub");
      else
        *STATE_VARIABLE_Sub_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSub_13, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_p_0(
  MR_Word InstA_5,
  MR_Word InstB_6,
  MR_Word Type_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word Info0_21;
    MR_Word Var_27;
    MR_Word Var_48;
    MR_Word Info_22;

    Var_48 = mercury__set_tree234__init_0_f_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0));
    {
      Info0_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_21, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Info0_21, 1) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Info0_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info0_21, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Type_7));
    }
    succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(InstA_5, InstB_6, Var_27, Info0_21, &Info_22);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_17);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_5_p_0(
  MR_Word tscc_proc_1_input_1_InstA_6,
  MR_Word tscc_proc_1_input_2_InstB_7,
  MR_Word tscc_proc_1_input_3_MaybeType_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16)
{
  {
    MR_Word tscc_proc_2_input_1_InstA_6;
    MR_Word tscc_proc_2_input_2_InstB_7;
    MR_Word tscc_proc_2_input_3_MaybeType_8;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48;
    MR_Word tscc_proc_3_input_1_InstA_10;
    MR_Word tscc_proc_3_input_2_InstB_11;
    MR_Word tscc_proc_3_input_3_Type_12;
    MR_Word tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_16;

    // The code for TSCC PROC 1: pred check_hlds.inst_match.inst_matches_initial_mt/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_initial_mt/5-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_initial_4/5-0
    ;
    // proc 3 in TSCC: pred check_hlds.inst_match.handle_inst_var_subs_2__ho6/7-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word InstA_6 = tscc_proc_1_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_1_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_1_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
      MR_Word STATE_VARIABLE_Info_16;
      MR_bool succeeded = MR_TRUE;
      MR_Word ThisExpansion_10;
      MR_Word Expansions0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1))));
      MR_Word Expansions_12;

      {
        ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 0) = ((MR_Box) (InstA_6));
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 1) = ((MR_Box) (InstB_7));
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 2) = ((MR_Box) (MaybeType_8));
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_10)), Expansions0_11, &Expansions_12);
      if (succeeded)
      {
        MR_Word ExpandedInstA_13;
        MR_Word ExpandedInstB_14;
        MR_Word STATE_VARIABLE_Info_17_17;
        MR_Word Var_19;
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
        MR_Word CalculateSub_72;
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));

        {
          STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (Expansions_12));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 3) = (MR_Box) (packed_word_1);
        }
        check_hlds__inst_util__inst_expand_3_p_0(Var_29, InstA_6, &ExpandedInstA_13);
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
        check_hlds__inst_util__inst_expand_3_p_0(Var_19, InstB_7, &ExpandedInstB_14);
        CalculateSub_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
        switch (CalculateSub_72) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_tscc_proc_3_input_1_InstA_10 = ExpandedInstA_13;
              MR_Word next_value_of_tscc_proc_3_input_2_InstB_11 = ExpandedInstB_14;
              MR_Word next_value_of_tscc_proc_3_input_3_Type_12 = MaybeType_8;
              MR_Word next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_17_17;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_InstA_10 = next_value_of_tscc_proc_3_input_1_InstA_10;
              tscc_proc_3_input_2_InstB_11 = next_value_of_tscc_proc_3_input_2_InstB_11;
              tscc_proc_3_input_3_Type_12 = next_value_of_tscc_proc_3_input_3_Type_12;
              tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
              goto top_of_proc_3;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = ExpandedInstA_13;
              MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = ExpandedInstB_14;
              MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = MaybeType_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = STATE_VARIABLE_Info_17_17;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
              tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
              tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
              tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(ExpandedInstB_14, ExpandedInstA_13, MaybeType_8, STATE_VARIABLE_Info_17_17, &STATE_VARIABLE_Info_16);
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
        succeeded = MR_TRUE;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_16;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_6 = tscc_proc_2_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_2_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_2_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_48 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48;
      MR_Word STATE_VARIABLE_Info_49;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) InstA_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(InstA_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = (InstB_7 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 1))));
            MR_Word Var_248 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) InstB_7)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word UniqB_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word HOInstInfoB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                  MR_Word Var_92 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
                  MR_Word Var_128 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);

                  succeeded = (Var_92 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_128, Var_248, UniqB_12);
                    if (succeeded)
                      succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(Var_247, HOInstInfoB_13, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                      MR_Word NextInstA_99;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_88, Var_248, Var_247, &NextInstA_99);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_99;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_48;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NextInstA_18;
                      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_90, Var_248, Var_247, &NextInstA_18);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_18;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_48;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_249 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 3))));
                MR_Word Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_251 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstB_7)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                      MR_Word Var_83;
                      MR_Word Var_84;
                      MR_Word Var_86;
                      MR_Word UniqB_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word Var_154;
                      MR_Word Var_241;

                      succeeded = (Var_82 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_83 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                        succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_83, Var_251, UniqB_101);
                        if (succeeded)
                        {
                          Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                          Var_84 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                          succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(Var_84, Var_249, UniqB_101, Var_154);
                          if (succeeded)
                          {
                            Var_86 = (MR_Integer) 0;
                            check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_241, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                            succeeded = (Var_86 == Var_241);
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word BoundInstsB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                          MR_Word UniqB_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);

                          succeeded = check_hlds__inst_match__same_addr_insts_2_p_0(InstA_6, InstB_7);
                          if (succeeded)
                            succeeded = (Var_250 == (MR_Word) ((MR_Unsigned) 4U));
                          if (succeeded)
                          {
                            STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            MR_Word Var_80 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);

                            succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_80, Var_251, UniqB_103);
                            if (succeeded)
                              succeeded = check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(Var_249, BoundInstsB_29, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word Var_74;
                          MR_Word Var_75;
                          MR_Word Var_76;
                          MR_Word Var_78;
                          MR_Word UniqB_106 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word Var_184;
                          MR_Word Var_242;

                          succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_74 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                            succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_74, Var_251, UniqB_106);
                            if (succeeded)
                            {
                              Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(Var_250, Var_249, MaybeType_8, Var_75);
                              if (succeeded)
                              {
                                Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                                Var_76 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                                succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(Var_76, Var_249, UniqB_106, Var_184);
                                if (succeeded)
                                {
                                  Var_78 = (MR_Integer) 0;
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_242, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                                  succeeded = (Var_78 == Var_242);
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                          MR_Word Var_71;
                          MR_Word Var_243;
                          MR_Word Var_260;

                          succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(Var_250, Var_249, (MR_Word) ((MR_Unsigned) 0U), Var_68);
                          if (succeeded)
                          {
                            Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                            switch (Var_251) {
                              default:
                                succeeded = MR_FALSE;
                                break;
                              case (MR_Integer) 2:
                                succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(Var_249, Var_260);
                                break;
                              case (MR_Integer) 1:
                                succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(Var_249, Var_260);
                                break;
                            }
                            if (succeeded)
                            {
                              Var_71 = (MR_Integer) 0;
                              check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_243, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                              succeeded = (Var_71 == Var_243);
                            }
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_253 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstB_7)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                      MR_Word UniqB_113 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word HOInstInfoB_114 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                      succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_65, Var_253, UniqB_113);
                      if (succeeded)
                        succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(Var_252, HOInstInfoB_114, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word TypeCtorInfo_238_238;
                          MR_Word Type_36;
                          MR_Word Var_60;
                          MR_Word Var_61;
                          MR_Word Var_62;
                          MR_Word UniqB_117 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word BoundInstsB_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));

                          succeeded = (MaybeType_8 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Type_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
                            Var_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                            succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_60, Var_253, UniqB_117);
                            if (succeeded)
                            {
                              TypeCtorInfo_238_238 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                              Var_61 = mercury__set__init_0_f_0(TypeCtorInfo_238_238);
                              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(Var_61, Var_62, BoundInstsB_119, Type_36);
                              if (succeeded)
                                succeeded = check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(Var_253, BoundInstsB_119, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                          MR_Word UniqB_122 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word HOInstInfoB_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));

                          succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_58, Var_253, UniqB_122);
                          if (succeeded)
                            succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(Var_252, HOInstInfoB_123, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_String Var_56;
                          MR_String Var_57;

                          succeeded = (Var_252 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_56 = (MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_4\'/5";
                            Var_57 = (MR_String) "inst_matches_initial(ground, abstract_inst) == \?\?";
                            mercury__require__unexpected_2_p_0(Var_56, Var_57);
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstB_7)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                      succeeded = (Var_53 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word TypeCtorInfo_239_239;
                          MR_Word TypeInfo_240_240;
                          MR_Word ArgsB_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word MaybeTypes_47;
                          MR_Integer Var_50;
                          MR_Word Var_51;
                          MR_Word Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));

                          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_246, Var_244);
                          if (succeeded)
                          {
                            TypeCtorInfo_239_239 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                            Var_50 = mercury__list__length_1_f_0(TypeCtorInfo_239_239, Var_245);
                            Var_51 = (MR_Word) ((MR_Unsigned) 0U);
                            TypeInfo_240_240 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[1]);
                            mercury__list__duplicate_3_p_0(TypeInfo_240_240, Var_50, ((MR_Box) (Var_51)), &MaybeTypes_47);
                            succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(Var_245, ArgsB_46, MaybeTypes_47, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_49;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word InstA_10 = tscc_proc_3_input_1_InstA_10;
      MR_Word InstB_11 = tscc_proc_3_input_2_InstB_11;
      MR_Word Type_12 = tscc_proc_3_input_3_Type_12;
      MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
      MR_Word STATE_VARIABLE_Info_24;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstB_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
      MR_Word InstVarsB_14;
      MR_Word SubInstB_15;

      if (succeeded)
      {
        InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
        SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
        {
          MR_Word ModuleInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
          MR_Word UnifyInst_17;
          MR_Word ModuleInfo_19;
          MR_Word STATE_VARIABLE_Info_27_27;
          MR_Word STATE_VARIABLE_Info_28_28;
          MR_Word Var_41;
          MR_Word _Det_18;
          MR_Word Var_40;
          MR_Unsigned packed_word_31;
          MR_Word UnifySubInst_20;
          MR_Word TypeInfo_47_47;
          MR_Word Var_46;

          succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, InstA_10, SubInstB_15, (MR_Integer) 1, &UnifyInst_17, &_Det_18, ModuleInfo0_16, &ModuleInfo_19);
          if (succeeded)
          {
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
            Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
            packed_word_31 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
            {
              STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 3) = (MR_Box) (packed_word_31);
            }
            if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_27_27;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Var_57;
              MR_Box conv1_STATE_VARIABLE_Info_28_28;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (UnifyInst_17));
                MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Type_12));
              }
              succeeded = mercury__set__fold_4_p_3((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0), Var_57, InstVarsB_14, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv1_STATE_VARIABLE_Info_28_28);
              if (succeeded)
              {
                STATE_VARIABLE_Info_28_28 = ((MR_Word) (conv1_STATE_VARIABLE_Info_28_28));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) UnifyInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 1))));
                UnifySubInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 2))));
                TypeInfo_47_47 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (InstVarsB_14)), ((MR_Box) (Var_46)));
              }
              if (succeeded)
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifySubInst_20;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifyInst_17;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
            }
          }
        }
      }
      else
      {
        MR_Word SubInstA_22;

        succeeded = ((((MR_tag((MR_Word) InstA_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          SubInstA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_22;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_11;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_23;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
            tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
            tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
            goto top_of_proc_1;
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = InstA_10;
          MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = InstB_11;
          MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = Type_12;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = STATE_VARIABLE_Info_0_23;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
          tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
          tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48;
          goto top_of_proc_2;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_24;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_16 = tscc_output_1_STATE_VARIABLE_Info_16;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_5_p_0(
  MR_Word tscc_proc_2_input_1_InstA_6,
  MR_Word tscc_proc_2_input_2_InstB_7,
  MR_Word tscc_proc_2_input_3_MaybeType_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16)
{
  {
    MR_Word tscc_proc_1_input_1_InstA_6;
    MR_Word tscc_proc_1_input_2_InstB_7;
    MR_Word tscc_proc_1_input_3_MaybeType_8;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
    MR_Word tscc_proc_3_input_1_InstA_10;
    MR_Word tscc_proc_3_input_2_InstB_11;
    MR_Word tscc_proc_3_input_3_Type_12;
    MR_Word tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_16;

    // The code for TSCC PROC 2: pred check_hlds.inst_match.inst_matches_initial_4/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_initial_mt/5-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_initial_4/5-0
    ;
    // proc 3 in TSCC: pred check_hlds.inst_match.handle_inst_var_subs_2__ho6/7-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word InstA_6 = tscc_proc_1_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_1_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_1_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
      MR_Word STATE_VARIABLE_Info_16;
      MR_bool succeeded = MR_TRUE;
      MR_Word ThisExpansion_10;
      MR_Word Expansions0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1))));
      MR_Word Expansions_12;

      {
        ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 0) = ((MR_Box) (InstA_6));
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 1) = ((MR_Box) (InstB_7));
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 2) = ((MR_Box) (MaybeType_8));
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_10)), Expansions0_11, &Expansions_12);
      if (succeeded)
      {
        MR_Word ExpandedInstA_13;
        MR_Word ExpandedInstB_14;
        MR_Word STATE_VARIABLE_Info_17_17;
        MR_Word Var_19;
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
        MR_Word CalculateSub_72;
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));

        {
          STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (Expansions_12));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 3) = (MR_Box) (packed_word_1);
        }
        check_hlds__inst_util__inst_expand_3_p_0(Var_29, InstA_6, &ExpandedInstA_13);
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
        check_hlds__inst_util__inst_expand_3_p_0(Var_19, InstB_7, &ExpandedInstB_14);
        CalculateSub_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
        switch (CalculateSub_72) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_tscc_proc_3_input_1_InstA_10 = ExpandedInstA_13;
              MR_Word next_value_of_tscc_proc_3_input_2_InstB_11 = ExpandedInstB_14;
              MR_Word next_value_of_tscc_proc_3_input_3_Type_12 = MaybeType_8;
              MR_Word next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_17_17;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_InstA_10 = next_value_of_tscc_proc_3_input_1_InstA_10;
              tscc_proc_3_input_2_InstB_11 = next_value_of_tscc_proc_3_input_2_InstB_11;
              tscc_proc_3_input_3_Type_12 = next_value_of_tscc_proc_3_input_3_Type_12;
              tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
              goto top_of_proc_3;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = ExpandedInstA_13;
              MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = ExpandedInstB_14;
              MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = MaybeType_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = STATE_VARIABLE_Info_17_17;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
              tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
              tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
              tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(ExpandedInstB_14, ExpandedInstA_13, MaybeType_8, STATE_VARIABLE_Info_17_17, &STATE_VARIABLE_Info_16);
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
        succeeded = MR_TRUE;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_16;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_6 = tscc_proc_2_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_2_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_2_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_48 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48;
      MR_Word STATE_VARIABLE_Info_49;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) InstA_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(InstA_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = (InstB_7 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 1))));
            MR_Word Var_248 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) InstB_7)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word UniqB_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word HOInstInfoB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                  MR_Word Var_92 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
                  MR_Word Var_128 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);

                  succeeded = (Var_92 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_128, Var_248, UniqB_12);
                    if (succeeded)
                      succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(Var_247, HOInstInfoB_13, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                      MR_Word NextInstA_99;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_88, Var_248, Var_247, &NextInstA_99);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_99;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_48;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NextInstA_18;
                      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_90, Var_248, Var_247, &NextInstA_18);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_18;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_48;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_249 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 3))));
                MR_Word Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_251 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstB_7)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                      MR_Word Var_83;
                      MR_Word Var_84;
                      MR_Word Var_86;
                      MR_Word UniqB_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word Var_154;
                      MR_Word Var_241;

                      succeeded = (Var_82 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_83 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                        succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_83, Var_251, UniqB_101);
                        if (succeeded)
                        {
                          Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                          Var_84 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                          succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(Var_84, Var_249, UniqB_101, Var_154);
                          if (succeeded)
                          {
                            Var_86 = (MR_Integer) 0;
                            check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_241, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                            succeeded = (Var_86 == Var_241);
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word BoundInstsB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                          MR_Word UniqB_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);

                          succeeded = check_hlds__inst_match__same_addr_insts_2_p_0(InstA_6, InstB_7);
                          if (succeeded)
                            succeeded = (Var_250 == (MR_Word) ((MR_Unsigned) 4U));
                          if (succeeded)
                          {
                            STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            MR_Word Var_80 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);

                            succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_80, Var_251, UniqB_103);
                            if (succeeded)
                              succeeded = check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(Var_249, BoundInstsB_29, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word Var_74;
                          MR_Word Var_75;
                          MR_Word Var_76;
                          MR_Word Var_78;
                          MR_Word UniqB_106 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word Var_184;
                          MR_Word Var_242;

                          succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_74 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                            succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_74, Var_251, UniqB_106);
                            if (succeeded)
                            {
                              Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(Var_250, Var_249, MaybeType_8, Var_75);
                              if (succeeded)
                              {
                                Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                                Var_76 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                                succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(Var_76, Var_249, UniqB_106, Var_184);
                                if (succeeded)
                                {
                                  Var_78 = (MR_Integer) 0;
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_242, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                                  succeeded = (Var_78 == Var_242);
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                          MR_Word Var_71;
                          MR_Word Var_243;
                          MR_Word Var_260;

                          succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(Var_250, Var_249, (MR_Word) ((MR_Unsigned) 0U), Var_68);
                          if (succeeded)
                          {
                            Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                            switch (Var_251) {
                              default:
                                succeeded = MR_FALSE;
                                break;
                              case (MR_Integer) 2:
                                succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(Var_249, Var_260);
                                break;
                              case (MR_Integer) 1:
                                succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(Var_249, Var_260);
                                break;
                            }
                            if (succeeded)
                            {
                              Var_71 = (MR_Integer) 0;
                              check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_243, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                              succeeded = (Var_71 == Var_243);
                            }
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_253 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstB_7)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                      MR_Word UniqB_113 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word HOInstInfoB_114 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                      succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_65, Var_253, UniqB_113);
                      if (succeeded)
                        succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(Var_252, HOInstInfoB_114, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word TypeCtorInfo_238_238;
                          MR_Word Type_36;
                          MR_Word Var_60;
                          MR_Word Var_61;
                          MR_Word Var_62;
                          MR_Word UniqB_117 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word BoundInstsB_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));

                          succeeded = (MaybeType_8 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Type_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
                            Var_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                            succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_60, Var_253, UniqB_117);
                            if (succeeded)
                            {
                              TypeCtorInfo_238_238 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                              Var_61 = mercury__set__init_0_f_0(TypeCtorInfo_238_238);
                              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(Var_61, Var_62, BoundInstsB_119, Type_36);
                              if (succeeded)
                                succeeded = check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(Var_253, BoundInstsB_119, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                          MR_Word UniqB_122 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word HOInstInfoB_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));

                          succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_58, Var_253, UniqB_122);
                          if (succeeded)
                            succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(Var_252, HOInstInfoB_123, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_String Var_56;
                          MR_String Var_57;

                          succeeded = (Var_252 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_56 = (MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_4\'/5";
                            Var_57 = (MR_String) "inst_matches_initial(ground, abstract_inst) == \?\?";
                            mercury__require__unexpected_2_p_0(Var_56, Var_57);
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstB_7)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                      succeeded = (Var_53 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word TypeCtorInfo_239_239;
                          MR_Word TypeInfo_240_240;
                          MR_Word ArgsB_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word MaybeTypes_47;
                          MR_Integer Var_50;
                          MR_Word Var_51;
                          MR_Word Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));

                          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_246, Var_244);
                          if (succeeded)
                          {
                            TypeCtorInfo_239_239 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                            Var_50 = mercury__list__length_1_f_0(TypeCtorInfo_239_239, Var_245);
                            Var_51 = (MR_Word) ((MR_Unsigned) 0U);
                            TypeInfo_240_240 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[1]);
                            mercury__list__duplicate_3_p_0(TypeInfo_240_240, Var_50, ((MR_Box) (Var_51)), &MaybeTypes_47);
                            succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(Var_245, ArgsB_46, MaybeTypes_47, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_49;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word InstA_10 = tscc_proc_3_input_1_InstA_10;
      MR_Word InstB_11 = tscc_proc_3_input_2_InstB_11;
      MR_Word Type_12 = tscc_proc_3_input_3_Type_12;
      MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
      MR_Word STATE_VARIABLE_Info_24;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstB_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
      MR_Word InstVarsB_14;
      MR_Word SubInstB_15;

      if (succeeded)
      {
        InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
        SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
        {
          MR_Word ModuleInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
          MR_Word UnifyInst_17;
          MR_Word ModuleInfo_19;
          MR_Word STATE_VARIABLE_Info_27_27;
          MR_Word STATE_VARIABLE_Info_28_28;
          MR_Word Var_41;
          MR_Word _Det_18;
          MR_Word Var_40;
          MR_Unsigned packed_word_31;
          MR_Word UnifySubInst_20;
          MR_Word TypeInfo_47_47;
          MR_Word Var_46;

          succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, InstA_10, SubInstB_15, (MR_Integer) 1, &UnifyInst_17, &_Det_18, ModuleInfo0_16, &ModuleInfo_19);
          if (succeeded)
          {
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
            Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
            packed_word_31 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
            {
              STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 3) = (MR_Box) (packed_word_31);
            }
            if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_27_27;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Var_57;
              MR_Box conv1_STATE_VARIABLE_Info_28_28;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (UnifyInst_17));
                MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Type_12));
              }
              succeeded = mercury__set__fold_4_p_3((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0), Var_57, InstVarsB_14, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv1_STATE_VARIABLE_Info_28_28);
              if (succeeded)
              {
                STATE_VARIABLE_Info_28_28 = ((MR_Word) (conv1_STATE_VARIABLE_Info_28_28));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) UnifyInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 1))));
                UnifySubInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 2))));
                TypeInfo_47_47 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (InstVarsB_14)), ((MR_Box) (Var_46)));
              }
              if (succeeded)
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifySubInst_20;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifyInst_17;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
            }
          }
        }
      }
      else
      {
        MR_Word SubInstA_22;

        succeeded = ((((MR_tag((MR_Word) InstA_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          SubInstA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_22;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_11;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_23;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
            tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
            tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
            goto top_of_proc_1;
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = InstA_10;
          MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = InstB_11;
          MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = Type_12;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = STATE_VARIABLE_Info_0_23;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
          tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
          tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48;
          goto top_of_proc_2;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_24;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_16 = tscc_output_1_STATE_VARIABLE_Info_16;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(
  MR_Word tscc_proc_3_input_1_InstA_10,
  MR_Word tscc_proc_3_input_2_InstB_11,
  MR_Word tscc_proc_3_input_3_Type_12,
  MR_Word tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16)
{
  {
    MR_Word tscc_proc_1_input_1_InstA_6;
    MR_Word tscc_proc_1_input_2_InstB_7;
    MR_Word tscc_proc_1_input_3_MaybeType_8;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
    MR_Word tscc_proc_2_input_1_InstA_6;
    MR_Word tscc_proc_2_input_2_InstB_7;
    MR_Word tscc_proc_2_input_3_MaybeType_8;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_16;

    // The code for TSCC PROC 3: pred check_hlds.inst_match.handle_inst_var_subs_2__ho6/7-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_initial_mt/5-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_initial_4/5-0
    ;
    // proc 3 in TSCC: pred check_hlds.inst_match.handle_inst_var_subs_2__ho6/7-0
    ;
    ;
    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word InstA_6 = tscc_proc_1_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_1_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_1_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
      MR_Word STATE_VARIABLE_Info_16;
      MR_bool succeeded = MR_TRUE;
      MR_Word ThisExpansion_10;
      MR_Word Expansions0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1))));
      MR_Word Expansions_12;

      {
        ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 0) = ((MR_Box) (InstA_6));
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 1) = ((MR_Box) (InstB_7));
        MR_hl_field(MR_mktag(0), ThisExpansion_10, 2) = ((MR_Box) (MaybeType_8));
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_10)), Expansions0_11, &Expansions_12);
      if (succeeded)
      {
        MR_Word ExpandedInstA_13;
        MR_Word ExpandedInstB_14;
        MR_Word STATE_VARIABLE_Info_17_17;
        MR_Word Var_19;
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
        MR_Word CalculateSub_72;
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));

        {
          STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (Expansions_12));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 3) = (MR_Box) (packed_word_1);
        }
        check_hlds__inst_util__inst_expand_3_p_0(Var_29, InstA_6, &ExpandedInstA_13);
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
        check_hlds__inst_util__inst_expand_3_p_0(Var_19, InstB_7, &ExpandedInstB_14);
        CalculateSub_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
        switch (CalculateSub_72) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_tscc_proc_3_input_1_InstA_10 = ExpandedInstA_13;
              MR_Word next_value_of_tscc_proc_3_input_2_InstB_11 = ExpandedInstB_14;
              MR_Word next_value_of_tscc_proc_3_input_3_Type_12 = MaybeType_8;
              MR_Word next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_17_17;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_InstA_10 = next_value_of_tscc_proc_3_input_1_InstA_10;
              tscc_proc_3_input_2_InstB_11 = next_value_of_tscc_proc_3_input_2_InstB_11;
              tscc_proc_3_input_3_Type_12 = next_value_of_tscc_proc_3_input_3_Type_12;
              tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
              goto top_of_proc_3;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = ExpandedInstA_13;
              MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = ExpandedInstB_14;
              MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = MaybeType_8;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = STATE_VARIABLE_Info_17_17;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
              tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
              tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
              tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(ExpandedInstB_14, ExpandedInstA_13, MaybeType_8, STATE_VARIABLE_Info_17_17, &STATE_VARIABLE_Info_16);
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
        succeeded = MR_TRUE;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_16;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_6 = tscc_proc_2_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_2_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_2_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_48 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48;
      MR_Word STATE_VARIABLE_Info_49;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) InstA_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(InstA_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = (InstB_7 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 1))));
            MR_Word Var_248 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) InstB_7)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word UniqB_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word HOInstInfoB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                  MR_Word Var_92 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
                  MR_Word Var_128 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);

                  succeeded = (Var_92 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_128, Var_248, UniqB_12);
                    if (succeeded)
                      succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(Var_247, HOInstInfoB_13, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                      MR_Word NextInstA_99;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_88, Var_248, Var_247, &NextInstA_99);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_99;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_48;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NextInstA_18;
                      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_90, Var_248, Var_247, &NextInstA_18);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_18;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_48;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_249 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 3))));
                MR_Word Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_251 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstB_7)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                      MR_Word Var_83;
                      MR_Word Var_84;
                      MR_Word Var_86;
                      MR_Word UniqB_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word Var_154;
                      MR_Word Var_241;

                      succeeded = (Var_82 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_83 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                        succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_83, Var_251, UniqB_101);
                        if (succeeded)
                        {
                          Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                          Var_84 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                          succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(Var_84, Var_249, UniqB_101, Var_154);
                          if (succeeded)
                          {
                            Var_86 = (MR_Integer) 0;
                            check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_241, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                            succeeded = (Var_86 == Var_241);
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word BoundInstsB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                          MR_Word UniqB_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);

                          succeeded = check_hlds__inst_match__same_addr_insts_2_p_0(InstA_6, InstB_7);
                          if (succeeded)
                            succeeded = (Var_250 == (MR_Word) ((MR_Unsigned) 4U));
                          if (succeeded)
                          {
                            STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            MR_Word Var_80 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);

                            succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_80, Var_251, UniqB_103);
                            if (succeeded)
                              succeeded = check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(Var_249, BoundInstsB_29, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word Var_74;
                          MR_Word Var_75;
                          MR_Word Var_76;
                          MR_Word Var_78;
                          MR_Word UniqB_106 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word Var_184;
                          MR_Word Var_242;

                          succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_74 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                            succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_74, Var_251, UniqB_106);
                            if (succeeded)
                            {
                              Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(Var_250, Var_249, MaybeType_8, Var_75);
                              if (succeeded)
                              {
                                Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                                Var_76 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                                succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(Var_76, Var_249, UniqB_106, Var_184);
                                if (succeeded)
                                {
                                  Var_78 = (MR_Integer) 0;
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_242, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                                  succeeded = (Var_78 == Var_242);
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                          MR_Word Var_71;
                          MR_Word Var_243;
                          MR_Word Var_260;

                          succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(Var_250, Var_249, (MR_Word) ((MR_Unsigned) 0U), Var_68);
                          if (succeeded)
                          {
                            Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                            switch (Var_251) {
                              default:
                                succeeded = MR_FALSE;
                                break;
                              case (MR_Integer) 2:
                                succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(Var_249, Var_260);
                                break;
                              case (MR_Integer) 1:
                                succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(Var_249, Var_260);
                                break;
                            }
                            if (succeeded)
                            {
                              Var_71 = (MR_Integer) 0;
                              check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_243, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                              succeeded = (Var_71 == Var_243);
                            }
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_253 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstB_7)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                      MR_Word UniqB_113 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word HOInstInfoB_114 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                      succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_65, Var_253, UniqB_113);
                      if (succeeded)
                        succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(Var_252, HOInstInfoB_114, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word TypeCtorInfo_238_238;
                          MR_Word Type_36;
                          MR_Word Var_60;
                          MR_Word Var_61;
                          MR_Word Var_62;
                          MR_Word UniqB_117 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word BoundInstsB_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));

                          succeeded = (MaybeType_8 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Type_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
                            Var_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                            succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_60, Var_253, UniqB_117);
                            if (succeeded)
                            {
                              TypeCtorInfo_238_238 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                              Var_61 = mercury__set__init_0_f_0(TypeCtorInfo_238_238);
                              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(Var_61, Var_62, BoundInstsB_119, Type_36);
                              if (succeeded)
                                succeeded = check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(Var_253, BoundInstsB_119, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 3))) >> 2)) & (MR_Integer) 1);
                          MR_Word UniqB_122 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word HOInstInfoB_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));

                          succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(Var_58, Var_253, UniqB_122);
                          if (succeeded)
                            succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(Var_252, HOInstInfoB_123, MaybeType_8, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_String Var_56;
                          MR_String Var_57;

                          succeeded = (Var_252 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_56 = (MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_4\'/5";
                            Var_57 = (MR_String) "inst_matches_initial(ground, abstract_inst) == \?\?";
                            mercury__require__unexpected_2_p_0(Var_56, Var_57);
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstB_7)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                      succeeded = (Var_53 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word TypeCtorInfo_239_239;
                          MR_Word TypeInfo_240_240;
                          MR_Word ArgsB_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word MaybeTypes_47;
                          MR_Integer Var_50;
                          MR_Word Var_51;
                          MR_Word Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));

                          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_246, Var_244);
                          if (succeeded)
                          {
                            TypeCtorInfo_239_239 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                            Var_50 = mercury__list__length_1_f_0(TypeCtorInfo_239_239, Var_245);
                            Var_51 = (MR_Word) ((MR_Unsigned) 0U);
                            TypeInfo_240_240 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[1]);
                            mercury__list__duplicate_3_p_0(TypeInfo_240_240, Var_50, ((MR_Box) (Var_51)), &MaybeTypes_47);
                            succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(Var_245, ArgsB_46, MaybeTypes_47, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_49);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_49;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word InstA_10 = tscc_proc_3_input_1_InstA_10;
      MR_Word InstB_11 = tscc_proc_3_input_2_InstB_11;
      MR_Word Type_12 = tscc_proc_3_input_3_Type_12;
      MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
      MR_Word STATE_VARIABLE_Info_24;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstB_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
      MR_Word InstVarsB_14;
      MR_Word SubInstB_15;

      if (succeeded)
      {
        InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
        SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
        {
          MR_Word ModuleInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
          MR_Word UnifyInst_17;
          MR_Word ModuleInfo_19;
          MR_Word STATE_VARIABLE_Info_27_27;
          MR_Word STATE_VARIABLE_Info_28_28;
          MR_Word Var_41;
          MR_Word _Det_18;
          MR_Word Var_40;
          MR_Unsigned packed_word_31;
          MR_Word UnifySubInst_20;
          MR_Word TypeInfo_47_47;
          MR_Word Var_46;

          succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, InstA_10, SubInstB_15, (MR_Integer) 1, &UnifyInst_17, &_Det_18, ModuleInfo0_16, &ModuleInfo_19);
          if (succeeded)
          {
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
            Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
            packed_word_31 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
            {
              STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 3) = (MR_Box) (packed_word_31);
            }
            if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_27_27;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Var_57;
              MR_Box conv1_STATE_VARIABLE_Info_28_28;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (UnifyInst_17));
                MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Type_12));
              }
              succeeded = mercury__set__fold_4_p_3((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0), Var_57, InstVarsB_14, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv1_STATE_VARIABLE_Info_28_28);
              if (succeeded)
              {
                STATE_VARIABLE_Info_28_28 = ((MR_Word) (conv1_STATE_VARIABLE_Info_28_28));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) UnifyInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 1))));
                UnifySubInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 2))));
                TypeInfo_47_47 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (InstVarsB_14)), ((MR_Box) (Var_46)));
              }
              if (succeeded)
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifySubInst_20;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifyInst_17;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
            }
          }
        }
      }
      else
      {
        MR_Word SubInstA_22;

        succeeded = ((((MR_tag((MR_Word) InstA_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          SubInstA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_22;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_11;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_23;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
            tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
            tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
            goto top_of_proc_1;
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = InstA_10;
          MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = InstB_11;
          MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = Type_12;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = STATE_VARIABLE_Info_0_23;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
          tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
          tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_48;
          goto top_of_proc_2;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_24;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_16 = tscc_output_1_STATE_VARIABLE_Info_16;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_17);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word Type_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) InstB_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word InstVarsB_14;
    MR_Word SubInstB_15;

    if (succeeded)
    {
      InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
      SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
      {
        MR_Word ModuleInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
        MR_Word UnifyInst_17;
        MR_Word ModuleInfo_19;
        MR_Word STATE_VARIABLE_Info_27_27;
        MR_Word STATE_VARIABLE_Info_28_28;
        MR_Word Var_41;
        MR_Word _Det_18;
        MR_Word Var_40;
        MR_Unsigned packed_word_1;
        MR_Word UnifySubInst_20;
        MR_Word TypeInfo_47_47;
        MR_Word Var_46;

        succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, InstA_10, SubInstB_15, (MR_Integer) 1, &UnifyInst_17, &_Det_18, ModuleInfo0_16, &ModuleInfo_19);
        if (succeeded)
        {
          Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
          {
            STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (ModuleInfo_19));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 3) = (MR_Box) (packed_word_1);
          }
          if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_27_27;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_69;
            MR_Box conv1_STATE_VARIABLE_Info_28_28;

            {
              Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (UnifyInst_17));
              MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (Type_12));
            }
            succeeded = mercury__set__fold_4_p_3((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0), Var_69, InstVarsB_14, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv1_STATE_VARIABLE_Info_28_28);
            if (succeeded)
            {
              STATE_VARIABLE_Info_28_28 = ((MR_Word) (conv1_STATE_VARIABLE_Info_28_28));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) UnifyInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 1))));
              UnifySubInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 2))));
              TypeInfo_47_47 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (InstVarsB_14)), ((MR_Box) (Var_46)));
            }
            if (succeeded)
              succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(InstA_10, UnifySubInst_20, Type_12, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_24);
            else
              succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(InstA_10, UnifyInst_17, Type_12, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_24);
          }
        }
      }
    }
    else
    {
      MR_Word SubInstA_22;

      succeeded = ((((MR_tag((MR_Word) InstA_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        SubInstA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
        succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(SubInstA_22, InstB_11, Type_12, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
      }
      else
        succeeded = check_hlds__inst_match__unswap__ho11_6_p_0(InstA_10, InstB_11, Type_12, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word X_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Y_11;
      MR_Word Ys_12;
      MR_Word MaybeType_13;
      MR_Word MaybeTypes_14;
      MR_Word STATE_VARIABLE_Info_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Y_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Ys_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          MaybeTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(X_9, Y_11, MaybeType_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Xs_10;
            next_value_of_HeadVar__2_2 = Ys_12;
            next_value_of_HeadVar__3_3 = MaybeTypes_14;
            next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_18_18;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeType_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word X_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Y_13;
      MR_Word Ys_14;
      MR_Word ConsIdX_17;
      MR_Word ArgsX_18;
      MR_Word ConsIdY_19;
      MR_Word ArgsY_20;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ConsIdX_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 0))));
        ArgsX_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 1))));
        ConsIdY_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0))));
        ArgsY_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1))));
        succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdX_17, ConsIdY_19);
        if (succeeded)
        {
          MR_Word MaybeTypes_21;
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
          MR_Integer Var_25;
          MR_Word STATE_VARIABLE_Info_26_26;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

          Var_25 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgsX_18);
          check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(Var_24, MaybeType_3, ConsIdX_17, Var_25, &MaybeTypes_21);
          succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(ArgsX_18, ArgsY_20, MaybeTypes_21, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_26_26);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Xs_12;
            next_value_of_HeadVar__2_2 = Ys_14;
            next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_26_26;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
            continue;
          }
        }
        else
        {
          MR_Word QNameA_39;
          MR_Integer ArityA_40;
          MR_Word QNameB_42;
          MR_Integer ArityB_43;
          MR_Word next_value_of_HeadVar__2_2;

          succeeded = ((((MR_tag((MR_Word) ConsIdX_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            QNameA_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsIdX_17, (MR_Integer) 1))));
            ArityA_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdX_17, (MR_Integer) 2))));
            succeeded = ((((MR_tag((MR_Word) ConsIdY_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              QNameB_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsIdY_19, (MR_Integer) 1))));
              ArityB_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdY_19, (MR_Integer) 2))));
            }
          }
          if (succeeded)
          {
            MR_String NameA_45;
            MR_String NameB_47;
            MR_Word O_49;

            if (((MR_tag((MR_Word) QNameA_39)) == (MR_Integer) 1))
              NameA_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), QNameA_39, (MR_Integer) 1))));
            else
              NameA_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), QNameA_39, (MR_Integer) 0))));
            if (((MR_tag((MR_Word) QNameB_42)) == (MR_Integer) 1))
              NameB_47 = ((MR_String) ((MR_hl_field(MR_mktag(1), QNameB_42, (MR_Integer) 1))));
            else
              NameB_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), QNameB_42, (MR_Integer) 0))));
            mercury__private_builtin__builtin_compare_string_3_p_0(&O_49, NameA_45, NameB_47);
            switch (O_49) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                succeeded = (ArityA_40 > ArityB_43);
                break;
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
            }
          }
          else
          {
            MR_Word Var_53;

            parse_tree__prog_data____Compare____cons_id_0_0(&Var_53, ConsIdX_17, ConsIdY_19);
            succeeded = ((MR_Integer) 2 == Var_53);
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = Ys_14;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(
  MR_Word Uniq_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Inst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word MaybeType_13;
      MR_Word MaybeTypes_14;
      MR_Word Ground_16;
      MR_Word Var_19;
      MR_Word STATE_VARIABLE_Info_20_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MaybeType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MaybeTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        Var_19 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Ground_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Ground_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Ground_16, 1) = (MR_Box) ((MR_Unsigned) (Uniq_1));
          MR_hl_field(MR_mktag(3), Ground_16, 2) = ((MR_Box) (Var_19));
        }
        succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(Ground_16, Inst_11, MaybeType_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_20_20);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Insts_12;
          next_value_of_HeadVar__3_3 = MaybeTypes_14;
          next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_20_20;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(
  MR_Word Uniq_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeType_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BoundInst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_12, (MR_Integer) 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_12, (MR_Integer) 1))));
      MR_Word MaybeTypes_18;
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
      MR_Integer Var_22;
      MR_Word STATE_VARIABLE_Info_23_23;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      Var_22 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_17);
      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(Var_21, MaybeType_3, ConsId_16, Var_22, &MaybeTypes_18);
      succeeded = check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(Uniq_1, Args_17, MaybeTypes_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_23_23);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = BoundInsts_13;
        next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_23_23;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho12_6_p_0(
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word Type_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word CalculateSub_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
    MR_Word STATE_VARIABLE_Info_15_15;
    MR_Word Var_16;
    MR_Word STATE_VARIABLE_Info_17_17;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Unsigned packed_word_1;

    switch (CalculateSub_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Var_16 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        Var_16 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        Var_16 = (MR_Integer) 0;
        break;
    }
    {
      STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 3) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 24U)))) | (((MR_Unsigned) (Var_16) << 3))));
    }
    succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(InstB_9, InstA_8, Type_10, STATE_VARIABLE_Info_15_15, &STATE_VARIABLE_Info_17_17);
    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 1))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 2))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 24U)))) | (((MR_Unsigned) (CalculateSub_12) << 3))));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho11_6_p_0(
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word Type_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word CalculateSub_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
    MR_Word STATE_VARIABLE_Info_15_15;
    MR_Word Var_16;
    MR_Word STATE_VARIABLE_Info_17_17;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Unsigned packed_word_1;

    switch (CalculateSub_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Var_16 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        Var_16 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        Var_16 = (MR_Integer) 0;
        break;
    }
    {
      STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 3) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 24U)))) | (((MR_Unsigned) (Var_16) << 3))));
    }
    succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(InstB_9, InstA_8, Type_10, STATE_VARIABLE_Info_15_15, &STATE_VARIABLE_Info_17_17);
    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 1))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 2))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 24U)))) | (((MR_Unsigned) (CalculateSub_12) << 3))));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
  MR_Word InstA_1,
  MR_Word InstB_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL check_hlds__inst_match__same_addr_insts_2_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA = InstA_1 ;
	InstB = InstB_2 ;
		{

    SUCCESS_INDICATOR = ((void *) InstA == (void *) InstB);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstA_2,
  MR_Word InstB_3)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (InstB_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            succeeded = (InstA_2 == (MR_Integer) 3);
            break;
          case (MR_Integer) 4:
            switch (InstA_2) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 2:
            if (((MR_Unsigned) 29U & (((MR_Integer) 1 << InstA_2))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (InstA_2) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (InstA_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            succeeded = (InstB_3 == (MR_Integer) 3);
            break;
          case (MR_Integer) 4:
            switch (InstB_3) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 2:
            if (((MR_Unsigned) 29U & (((MR_Integer) 1 << InstB_3))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (InstB_3) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word BoundInsts_2,
  MR_Word Uniq_3,
  MR_Word ModuleInfo_4)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          succeeded = (Uniq_3 == (MR_Integer) 0);
          if (succeeded)
            succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_p_0(BoundInsts_2, ModuleInfo_4);
          else
          {
            succeeded = (Uniq_3 == (MR_Integer) 2);
            if (succeeded)
              succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_p_0(BoundInsts_2, ModuleInfo_4);
            else
              succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          succeeded = (Uniq_3 == (MR_Integer) 1);
          if (succeeded)
            succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(BoundInsts_2, ModuleInfo_4);
          else
          {
            succeeded = (Uniq_3 == (MR_Integer) 2);
            if (succeeded)
              succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(BoundInsts_2, ModuleInfo_4);
            else
              succeeded = MR_TRUE;
          }
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(
  MR_Word HOInstInfoA_6,
  MR_Word HOInstInfoB_7,
  MR_Word MaybeType_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;

    if ((HOInstInfoB_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HOInstInfoA_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word PredInst_67 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_6), (MR_Integer) 1));
        MR_Word PredOrFunc_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInst_67, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word ArgModes_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInst_67, (MR_Integer) 1))));

        switch (PredOrFunc_74) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer Arity_78;
              MR_Word DefaultFunc_79;

              Arity_78 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_75);
              DefaultFunc_79 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_78);
              succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(PredInst_67, DefaultFunc_79, MaybeType_8, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
            }
            break;
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
              succeeded = MR_TRUE;
            }
            break;
        }
      }
    else
    {
      MR_Word Var_25 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_7), (MR_Integer) 1));

      if ((HOInstInfoA_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeCtorInfo_24_24;
        MR_Word TypeCtorInfo_21_59;
        MR_Word ArgModes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
        MR_Integer Arity_14;
        MR_Word PredInstA_15;
        MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word PredOrFunc_50;
        MR_Word ModesA_51;
        MR_Word Det_53;
        MR_Word ModesB_54;
        MR_Word MaybeTypes_56;
        MR_Integer Var_57;
        MR_Word Var_60;
        MR_Word Var_61;

        succeeded = (Var_19 == (MR_Integer) 1);
        if (succeeded)
        {
          TypeCtorInfo_24_24 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
          Arity_14 = mercury__list__length_1_f_0(TypeCtorInfo_24_24, ArgModes_11);
          PredInstA_15 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_14);
          PredOrFunc_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_15, (MR_Integer) 0))) & (MR_Integer) 1);
          ModesA_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstA_15, (MR_Integer) 1))));
          Det_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_15, (MR_Integer) 3))) & (MR_Integer) 7);
          Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))) & (MR_Integer) 1);
          ModesB_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
          Var_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 3))) & (MR_Integer) 7);
          succeeded = (PredOrFunc_50 == Var_60);
          if (succeeded)
          {
            succeeded = (Det_53 == Var_61);
            if (succeeded)
            {
              TypeCtorInfo_21_59 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
              Var_57 = mercury__list__length_1_f_0(TypeCtorInfo_21_59, ModesA_51);
              check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(MaybeType_8, Var_57, &MaybeTypes_56);
              succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(ModesA_51, ModesB_54, MaybeTypes_56, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
            }
          }
        }
      }
      else
      {
        MR_Word TypeCtorInfo_21_41;
        MR_Word PredInstA_23 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_6), (MR_Integer) 1));
        MR_Word PredOrFunc_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_23, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word ModesA_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstA_23, (MR_Integer) 1))));
        MR_Word Det_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_23, (MR_Integer) 3))) & (MR_Integer) 7);
        MR_Word ModesB_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
        MR_Word MaybeTypes_38;
        MR_Integer Var_39;
        MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 3))) & (MR_Integer) 7);

        succeeded = (PredOrFunc_32 == Var_42);
        if (succeeded)
        {
          succeeded = (Det_35 == Var_43);
          if (succeeded)
          {
            TypeCtorInfo_21_41 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
            Var_39 = mercury__list__length_1_f_0(TypeCtorInfo_21_41, ModesA_33);
            check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(MaybeType_8, Var_39, &MaybeTypes_38);
            succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(ModesA_33, ModesB_36, MaybeTypes_38, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_17);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_5_p_0(
  MR_Word tscc_proc_1_input_1_InstA_6,
  MR_Word tscc_proc_1_input_2_InstB_7,
  MR_Word tscc_proc_1_input_3_MaybeType_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16)
{
  {
    MR_Word tscc_proc_2_input_1_InstA_6;
    MR_Word tscc_proc_2_input_2_InstB_7;
    MR_Word tscc_proc_2_input_3_MaybeType_8;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
    MR_Word tscc_proc_3_input_1_InstA_10;
    MR_Word tscc_proc_3_input_2_InstB_11;
    MR_Word tscc_proc_3_input_3_Type_12;
    MR_Word tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_16;

    // The code for TSCC PROC 1: pred check_hlds.inst_match.inst_matches_final_mt/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_final_mt/5-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_final_3/5-0
    ;
    // proc 3 in TSCC: pred check_hlds.inst_match.handle_inst_var_subs_2__ho8/7-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word InstA_6 = tscc_proc_1_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_1_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_1_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
      MR_Word STATE_VARIABLE_Info_16;
      MR_bool succeeded = MR_TRUE;

      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstA_6, InstB_7);
      if (succeeded)
      {
        STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word ThisExpansion_10;
        MR_Word Expansions0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1))));
        MR_Word Expansions_12;

        {
          ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ThisExpansion_10, 0) = ((MR_Box) (InstA_6));
          MR_hl_field(MR_mktag(0), ThisExpansion_10, 1) = ((MR_Box) (InstB_7));
          MR_hl_field(MR_mktag(0), ThisExpansion_10, 2) = ((MR_Box) (MaybeType_8));
        }
        succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_10)), Expansions0_11, &Expansions_12);
        if (succeeded)
        {
          MR_Word ExpandedInstA_13;
          MR_Word ExpandedInstB_14;
          MR_Word STATE_VARIABLE_Info_17_17;
          MR_Word Var_19;
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
          MR_Word CalculateSub_73;
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));

          {
            STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (Expansions_12));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 3) = (MR_Box) (packed_word_1);
          }
          check_hlds__inst_util__inst_expand_3_p_0(Var_29, InstA_6, &ExpandedInstA_13);
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
          check_hlds__inst_util__inst_expand_3_p_0(Var_19, InstB_7, &ExpandedInstB_14);
          CalculateSub_73 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
          switch (CalculateSub_73) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_tscc_proc_3_input_1_InstA_10 = ExpandedInstA_13;
                MR_Word next_value_of_tscc_proc_3_input_2_InstB_11 = ExpandedInstB_14;
                MR_Word next_value_of_tscc_proc_3_input_3_Type_12 = MaybeType_8;
                MR_Word next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_17_17;

                // direct tailcall eliminated
                ;
                tscc_proc_3_input_1_InstA_10 = next_value_of_tscc_proc_3_input_1_InstA_10;
                tscc_proc_3_input_2_InstB_11 = next_value_of_tscc_proc_3_input_2_InstB_11;
                tscc_proc_3_input_3_Type_12 = next_value_of_tscc_proc_3_input_3_Type_12;
                tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
                goto top_of_proc_3;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = ExpandedInstA_13;
                MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = ExpandedInstB_14;
                MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = MaybeType_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = STATE_VARIABLE_Info_17_17;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
                tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
                tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(ExpandedInstB_14, ExpandedInstA_13, MaybeType_8, STATE_VARIABLE_Info_17_17, &STATE_VARIABLE_Info_16);
              break;
          }
        }
        else
        {
          STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
          succeeded = MR_TRUE;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_16;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_6 = tscc_proc_2_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_2_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_2_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_41 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
      MR_Word STATE_VARIABLE_Info_42;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) InstA_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(InstA_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              if ((InstB_7 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                succeeded = MR_TRUE;
              }
              else
              if (((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 2))
              {
                MR_Word Uniq_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);

                switch (Uniq_20) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 4:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                {
                  STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                  succeeded = MR_TRUE;
                }
              }
              else
                succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 1))));
            MR_Word Var_157 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) InstB_7)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word UniqB_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word HOInstInfoB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                  succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(Var_156, HOInstInfoB_13, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                  if (succeeded)
                    succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_157, UniqB_12);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                      MR_Word NextInstA_76;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_67, Var_157, Var_156, &NextInstA_76);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_76;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NextInstA_16;
                      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_69, Var_157, Var_156, &NextInstA_16);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_16;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 3))));
                MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_160 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                      MR_Word Var_63;
                      MR_Word Var_64;
                      MR_Word Var_65;
                      MR_Word UniqB_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word Var_150;

                      succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_160, UniqB_78);
                        if (succeeded)
                        {
                          Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                          succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(Var_158, UniqB_78, Var_63);
                          if (succeeded)
                          {
                            Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                            succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(Var_159, Var_158, Var_64);
                            if (succeeded)
                            {
                              Var_65 = (MR_Integer) 0;
                              check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_150, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                              succeeded = (Var_65 == Var_150);
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word BoundInstsB_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                          MR_Word UniqB_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);

                          succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_160, UniqB_80);
                          if (succeeded)
                            succeeded = check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(Var_158, BoundInstsB_26, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word Var_57;
                          MR_Word Var_58;
                          MR_Word Var_59;
                          MR_Word UniqB_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word Var_151;

                          succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_160, UniqB_83);
                            if (succeeded)
                            {
                              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(Var_159, Var_158, MaybeType_8, Var_57);
                              if (succeeded)
                              {
                                Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                                succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(Var_158, UniqB_83, Var_58);
                                if (succeeded)
                                {
                                  Var_59 = (MR_Integer) 0;
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_151, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                                  succeeded = (Var_59 == Var_151);
                                }
                              }
                            }
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_162 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word UniqB_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word HOInstInfoB_89 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                      succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(Var_161, HOInstInfoB_89, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                      if (succeeded)
                        succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_162, UniqB_88);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word InstResultsB_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word ModuleInfo_28;
                          MR_Word STATE_VARIABLE_Info_51_51;
                          MR_Word Var_52;
                          MR_Word UniqB_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word BoundInstsB_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                          MR_Word Var_152;

                          succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(Var_161, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_51_51);
                          if (succeeded)
                          {
                            succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_162, UniqB_92);
                            if (succeeded)
                            {
                              ModuleInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(InstResultsB_27, BoundInstsB_93, MaybeType_8, ModuleInfo_28);
                              if (succeeded)
                              {
                                succeeded = check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(Var_162, BoundInstsB_93, ModuleInfo_28);
                                if (succeeded)
                                {
                                  Var_52 = (MR_Integer) 0;
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstB_7, &Var_152, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_42);
                                  succeeded = (Var_52 == Var_152);
                                  if (succeeded)
                                  {
                                    {
                                      MR_Word TypeCtorInfo_146_146;
                                      MR_Word Type_29;
                                      MR_Word Var_54;

                                      succeeded = (MaybeType_8 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Type_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
                                        TypeCtorInfo_146_146 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                                        Var_54 = mercury__set__init_0_f_0(TypeCtorInfo_146_146);
                                        succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(Var_54, ModuleInfo_28, BoundInstsB_93, Type_29);
                                      }
                                    }
                                    if (!(succeeded))
                                    {
                                      MR_Word GroundMatchesBound_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42, (MR_Integer) 3))) & (MR_Integer) 1);

                                      succeeded = (GroundMatchesBound_30 == (MR_Integer) 1);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word UniqB_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word HOInstInfoB_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));

                          succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(Var_161, HOInstInfoB_97, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                          if (succeeded)
                            succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_162, UniqB_96);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word InstVarsA_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));
                MR_Word SubInstA_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word InstVarsB_39;
                MR_Word SubInstB_40;

                succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  InstVarsB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));
                  SubInstB_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                    succeeded = mercury__set__subset_2_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), InstVarsB_39, InstVarsA_37);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_38;
                      next_value_of_tscc_proc_1_input_2_InstB_7 = SubInstB_40;
                      next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                      next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                      tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                      tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                      tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                      goto top_of_proc_1;
                    }
                  }
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_38;
                  MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                  MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                  MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                  tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                  tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                  tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));

                if (((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 2))
                {
                  MR_Word Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                  succeeded = (Var_48 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                else
                if (((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
                {
                  MR_Word TypeCtorInfo_147_147;
                  MR_Word TypeInfo_148_148;
                  MR_Word ArgsB_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                  MR_Word MaybeTypes_36;
                  MR_Integer Var_45;
                  MR_Word Var_46;
                  MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));

                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_155, Var_153);
                  if (succeeded)
                  {
                    TypeCtorInfo_147_147 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                    Var_45 = mercury__list__length_1_f_0(TypeCtorInfo_147_147, Var_154);
                    Var_46 = (MR_Word) ((MR_Unsigned) 0U);
                    TypeInfo_148_148 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[1]);
                    mercury__list__duplicate_3_p_0(TypeInfo_148_148, Var_45, ((MR_Box) (Var_46)), &MaybeTypes_36);
                    succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(Var_154, ArgsB_35, MaybeTypes_36, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                  }
                }
                else
                  succeeded = MR_FALSE;
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_42;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word InstA_10 = tscc_proc_3_input_1_InstA_10;
      MR_Word InstB_11 = tscc_proc_3_input_2_InstB_11;
      MR_Word Type_12 = tscc_proc_3_input_3_Type_12;
      MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
      MR_Word STATE_VARIABLE_Info_24;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstB_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
      MR_Word InstVarsB_14;
      MR_Word SubInstB_15;

      if (succeeded)
      {
        InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
        SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
        {
          MR_Word ModuleInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
          MR_Word UnifyInst_17;
          MR_Word ModuleInfo_19;
          MR_Word STATE_VARIABLE_Info_27_27;
          MR_Word STATE_VARIABLE_Info_28_28;
          MR_Word Var_41;
          MR_Word _Det_18;
          MR_Word Var_40;
          MR_Unsigned packed_word_25;
          MR_Word UnifySubInst_20;
          MR_Word TypeInfo_47_47;
          MR_Word Var_46;

          succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, InstA_10, SubInstB_15, (MR_Integer) 1, &UnifyInst_17, &_Det_18, ModuleInfo0_16, &ModuleInfo_19);
          if (succeeded)
          {
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
            Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
            packed_word_25 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
            {
              STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 3) = (MR_Box) (packed_word_25);
            }
            if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_27_27;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Var_57;
              MR_Box conv1_STATE_VARIABLE_Info_28_28;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (UnifyInst_17));
                MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Type_12));
              }
              succeeded = mercury__set__fold_4_p_3((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0), Var_57, InstVarsB_14, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv1_STATE_VARIABLE_Info_28_28);
              if (succeeded)
              {
                STATE_VARIABLE_Info_28_28 = ((MR_Word) (conv1_STATE_VARIABLE_Info_28_28));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) UnifyInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 1))));
                UnifySubInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 2))));
                TypeInfo_47_47 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (InstVarsB_14)), ((MR_Box) (Var_46)));
              }
              if (succeeded)
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifySubInst_20;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifyInst_17;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
            }
          }
        }
      }
      else
      {
        MR_Word SubInstA_22;

        succeeded = ((((MR_tag((MR_Word) InstA_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          SubInstA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_22;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_11;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_23;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
            tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
            tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
            goto top_of_proc_1;
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = InstA_10;
          MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = InstB_11;
          MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = Type_12;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = STATE_VARIABLE_Info_0_23;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
          tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
          tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
          goto top_of_proc_2;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_24;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_16 = tscc_output_1_STATE_VARIABLE_Info_16;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_5_p_0(
  MR_Word tscc_proc_2_input_1_InstA_6,
  MR_Word tscc_proc_2_input_2_InstB_7,
  MR_Word tscc_proc_2_input_3_MaybeType_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16)
{
  {
    MR_Word tscc_proc_1_input_1_InstA_6;
    MR_Word tscc_proc_1_input_2_InstB_7;
    MR_Word tscc_proc_1_input_3_MaybeType_8;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
    MR_Word tscc_proc_3_input_1_InstA_10;
    MR_Word tscc_proc_3_input_2_InstB_11;
    MR_Word tscc_proc_3_input_3_Type_12;
    MR_Word tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_16;

    // The code for TSCC PROC 2: pred check_hlds.inst_match.inst_matches_final_3/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_final_mt/5-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_final_3/5-0
    ;
    // proc 3 in TSCC: pred check_hlds.inst_match.handle_inst_var_subs_2__ho8/7-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word InstA_6 = tscc_proc_1_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_1_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_1_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
      MR_Word STATE_VARIABLE_Info_16;
      MR_bool succeeded = MR_TRUE;

      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstA_6, InstB_7);
      if (succeeded)
      {
        STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word ThisExpansion_10;
        MR_Word Expansions0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1))));
        MR_Word Expansions_12;

        {
          ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ThisExpansion_10, 0) = ((MR_Box) (InstA_6));
          MR_hl_field(MR_mktag(0), ThisExpansion_10, 1) = ((MR_Box) (InstB_7));
          MR_hl_field(MR_mktag(0), ThisExpansion_10, 2) = ((MR_Box) (MaybeType_8));
        }
        succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_10)), Expansions0_11, &Expansions_12);
        if (succeeded)
        {
          MR_Word ExpandedInstA_13;
          MR_Word ExpandedInstB_14;
          MR_Word STATE_VARIABLE_Info_17_17;
          MR_Word Var_19;
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
          MR_Word CalculateSub_73;
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));

          {
            STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (Expansions_12));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 3) = (MR_Box) (packed_word_1);
          }
          check_hlds__inst_util__inst_expand_3_p_0(Var_29, InstA_6, &ExpandedInstA_13);
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
          check_hlds__inst_util__inst_expand_3_p_0(Var_19, InstB_7, &ExpandedInstB_14);
          CalculateSub_73 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
          switch (CalculateSub_73) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_tscc_proc_3_input_1_InstA_10 = ExpandedInstA_13;
                MR_Word next_value_of_tscc_proc_3_input_2_InstB_11 = ExpandedInstB_14;
                MR_Word next_value_of_tscc_proc_3_input_3_Type_12 = MaybeType_8;
                MR_Word next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_17_17;

                // direct tailcall eliminated
                ;
                tscc_proc_3_input_1_InstA_10 = next_value_of_tscc_proc_3_input_1_InstA_10;
                tscc_proc_3_input_2_InstB_11 = next_value_of_tscc_proc_3_input_2_InstB_11;
                tscc_proc_3_input_3_Type_12 = next_value_of_tscc_proc_3_input_3_Type_12;
                tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
                goto top_of_proc_3;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = ExpandedInstA_13;
                MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = ExpandedInstB_14;
                MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = MaybeType_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = STATE_VARIABLE_Info_17_17;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
                tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
                tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(ExpandedInstB_14, ExpandedInstA_13, MaybeType_8, STATE_VARIABLE_Info_17_17, &STATE_VARIABLE_Info_16);
              break;
          }
        }
        else
        {
          STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
          succeeded = MR_TRUE;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_16;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_6 = tscc_proc_2_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_2_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_2_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_41 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
      MR_Word STATE_VARIABLE_Info_42;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) InstA_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(InstA_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              if ((InstB_7 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                succeeded = MR_TRUE;
              }
              else
              if (((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 2))
              {
                MR_Word Uniq_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);

                switch (Uniq_20) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 4:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                {
                  STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                  succeeded = MR_TRUE;
                }
              }
              else
                succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 1))));
            MR_Word Var_157 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) InstB_7)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word UniqB_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word HOInstInfoB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                  succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(Var_156, HOInstInfoB_13, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                  if (succeeded)
                    succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_157, UniqB_12);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                      MR_Word NextInstA_76;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_67, Var_157, Var_156, &NextInstA_76);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_76;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NextInstA_16;
                      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_69, Var_157, Var_156, &NextInstA_16);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_16;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 3))));
                MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_160 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                      MR_Word Var_63;
                      MR_Word Var_64;
                      MR_Word Var_65;
                      MR_Word UniqB_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word Var_150;

                      succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_160, UniqB_78);
                        if (succeeded)
                        {
                          Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                          succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(Var_158, UniqB_78, Var_63);
                          if (succeeded)
                          {
                            Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                            succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(Var_159, Var_158, Var_64);
                            if (succeeded)
                            {
                              Var_65 = (MR_Integer) 0;
                              check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_150, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                              succeeded = (Var_65 == Var_150);
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word BoundInstsB_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                          MR_Word UniqB_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);

                          succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_160, UniqB_80);
                          if (succeeded)
                            succeeded = check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(Var_158, BoundInstsB_26, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word Var_57;
                          MR_Word Var_58;
                          MR_Word Var_59;
                          MR_Word UniqB_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word Var_151;

                          succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_160, UniqB_83);
                            if (succeeded)
                            {
                              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(Var_159, Var_158, MaybeType_8, Var_57);
                              if (succeeded)
                              {
                                Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                                succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(Var_158, UniqB_83, Var_58);
                                if (succeeded)
                                {
                                  Var_59 = (MR_Integer) 0;
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_151, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                                  succeeded = (Var_59 == Var_151);
                                }
                              }
                            }
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_162 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word UniqB_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word HOInstInfoB_89 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                      succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(Var_161, HOInstInfoB_89, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                      if (succeeded)
                        succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_162, UniqB_88);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word InstResultsB_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word ModuleInfo_28;
                          MR_Word STATE_VARIABLE_Info_51_51;
                          MR_Word Var_52;
                          MR_Word UniqB_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word BoundInstsB_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                          MR_Word Var_152;

                          succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(Var_161, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_51_51);
                          if (succeeded)
                          {
                            succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_162, UniqB_92);
                            if (succeeded)
                            {
                              ModuleInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(InstResultsB_27, BoundInstsB_93, MaybeType_8, ModuleInfo_28);
                              if (succeeded)
                              {
                                succeeded = check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(Var_162, BoundInstsB_93, ModuleInfo_28);
                                if (succeeded)
                                {
                                  Var_52 = (MR_Integer) 0;
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstB_7, &Var_152, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_42);
                                  succeeded = (Var_52 == Var_152);
                                  if (succeeded)
                                  {
                                    {
                                      MR_Word TypeCtorInfo_146_146;
                                      MR_Word Type_29;
                                      MR_Word Var_54;

                                      succeeded = (MaybeType_8 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Type_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
                                        TypeCtorInfo_146_146 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                                        Var_54 = mercury__set__init_0_f_0(TypeCtorInfo_146_146);
                                        succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(Var_54, ModuleInfo_28, BoundInstsB_93, Type_29);
                                      }
                                    }
                                    if (!(succeeded))
                                    {
                                      MR_Word GroundMatchesBound_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42, (MR_Integer) 3))) & (MR_Integer) 1);

                                      succeeded = (GroundMatchesBound_30 == (MR_Integer) 1);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word UniqB_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word HOInstInfoB_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));

                          succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(Var_161, HOInstInfoB_97, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                          if (succeeded)
                            succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_162, UniqB_96);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word InstVarsA_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));
                MR_Word SubInstA_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word InstVarsB_39;
                MR_Word SubInstB_40;

                succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  InstVarsB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));
                  SubInstB_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                    succeeded = mercury__set__subset_2_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), InstVarsB_39, InstVarsA_37);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_38;
                      next_value_of_tscc_proc_1_input_2_InstB_7 = SubInstB_40;
                      next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                      next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                      tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                      tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                      tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                      goto top_of_proc_1;
                    }
                  }
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_38;
                  MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                  MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                  MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                  tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                  tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                  tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));

                if (((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 2))
                {
                  MR_Word Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                  succeeded = (Var_48 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                else
                if (((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
                {
                  MR_Word TypeCtorInfo_147_147;
                  MR_Word TypeInfo_148_148;
                  MR_Word ArgsB_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                  MR_Word MaybeTypes_36;
                  MR_Integer Var_45;
                  MR_Word Var_46;
                  MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));

                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_155, Var_153);
                  if (succeeded)
                  {
                    TypeCtorInfo_147_147 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                    Var_45 = mercury__list__length_1_f_0(TypeCtorInfo_147_147, Var_154);
                    Var_46 = (MR_Word) ((MR_Unsigned) 0U);
                    TypeInfo_148_148 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[1]);
                    mercury__list__duplicate_3_p_0(TypeInfo_148_148, Var_45, ((MR_Box) (Var_46)), &MaybeTypes_36);
                    succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(Var_154, ArgsB_35, MaybeTypes_36, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                  }
                }
                else
                  succeeded = MR_FALSE;
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_42;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word InstA_10 = tscc_proc_3_input_1_InstA_10;
      MR_Word InstB_11 = tscc_proc_3_input_2_InstB_11;
      MR_Word Type_12 = tscc_proc_3_input_3_Type_12;
      MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
      MR_Word STATE_VARIABLE_Info_24;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstB_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
      MR_Word InstVarsB_14;
      MR_Word SubInstB_15;

      if (succeeded)
      {
        InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
        SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
        {
          MR_Word ModuleInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
          MR_Word UnifyInst_17;
          MR_Word ModuleInfo_19;
          MR_Word STATE_VARIABLE_Info_27_27;
          MR_Word STATE_VARIABLE_Info_28_28;
          MR_Word Var_41;
          MR_Word _Det_18;
          MR_Word Var_40;
          MR_Unsigned packed_word_25;
          MR_Word UnifySubInst_20;
          MR_Word TypeInfo_47_47;
          MR_Word Var_46;

          succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, InstA_10, SubInstB_15, (MR_Integer) 1, &UnifyInst_17, &_Det_18, ModuleInfo0_16, &ModuleInfo_19);
          if (succeeded)
          {
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
            Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
            packed_word_25 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
            {
              STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 3) = (MR_Box) (packed_word_25);
            }
            if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_27_27;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Var_57;
              MR_Box conv1_STATE_VARIABLE_Info_28_28;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (UnifyInst_17));
                MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Type_12));
              }
              succeeded = mercury__set__fold_4_p_3((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0), Var_57, InstVarsB_14, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv1_STATE_VARIABLE_Info_28_28);
              if (succeeded)
              {
                STATE_VARIABLE_Info_28_28 = ((MR_Word) (conv1_STATE_VARIABLE_Info_28_28));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) UnifyInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 1))));
                UnifySubInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 2))));
                TypeInfo_47_47 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (InstVarsB_14)), ((MR_Box) (Var_46)));
              }
              if (succeeded)
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifySubInst_20;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifyInst_17;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
            }
          }
        }
      }
      else
      {
        MR_Word SubInstA_22;

        succeeded = ((((MR_tag((MR_Word) InstA_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          SubInstA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_22;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_11;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_23;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
            tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
            tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
            goto top_of_proc_1;
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = InstA_10;
          MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = InstB_11;
          MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = Type_12;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = STATE_VARIABLE_Info_0_23;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
          tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
          tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
          goto top_of_proc_2;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_24;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_16 = tscc_output_1_STATE_VARIABLE_Info_16;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(
  MR_Word tscc_proc_3_input_1_InstA_10,
  MR_Word tscc_proc_3_input_2_InstB_11,
  MR_Word tscc_proc_3_input_3_Type_12,
  MR_Word tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_16)
{
  {
    MR_Word tscc_proc_1_input_1_InstA_6;
    MR_Word tscc_proc_1_input_2_InstB_7;
    MR_Word tscc_proc_1_input_3_MaybeType_8;
    MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
    MR_Word tscc_proc_2_input_1_InstA_6;
    MR_Word tscc_proc_2_input_2_InstB_7;
    MR_Word tscc_proc_2_input_3_MaybeType_8;
    MR_Word tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
    MR_bool tscc_output_succeeded;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_16;

    // The code for TSCC PROC 3: pred check_hlds.inst_match.handle_inst_var_subs_2__ho8/7-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred check_hlds.inst_match.inst_matches_final_mt/5-0
    ;
    // proc 2 in TSCC: pred check_hlds.inst_match.inst_matches_final_3/5-0
    ;
    // proc 3 in TSCC: pred check_hlds.inst_match.handle_inst_var_subs_2__ho8/7-0
    ;
    ;
    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word InstA_6 = tscc_proc_1_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_1_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_1_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_15 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
      MR_Word STATE_VARIABLE_Info_16;
      MR_bool succeeded = MR_TRUE;

      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstA_6, InstB_7);
      if (succeeded)
      {
        STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word ThisExpansion_10;
        MR_Word Expansions0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1))));
        MR_Word Expansions_12;

        {
          ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ThisExpansion_10, 0) = ((MR_Box) (InstA_6));
          MR_hl_field(MR_mktag(0), ThisExpansion_10, 1) = ((MR_Box) (InstB_7));
          MR_hl_field(MR_mktag(0), ThisExpansion_10, 2) = ((MR_Box) (MaybeType_8));
        }
        succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0), ((MR_Box) (ThisExpansion_10)), Expansions0_11, &Expansions_12);
        if (succeeded)
        {
          MR_Word ExpandedInstA_13;
          MR_Word ExpandedInstB_14;
          MR_Word STATE_VARIABLE_Info_17_17;
          MR_Word Var_19;
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
          MR_Word CalculateSub_73;
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));

          {
            STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (Expansions_12));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 3) = (MR_Box) (packed_word_1);
          }
          check_hlds__inst_util__inst_expand_3_p_0(Var_29, InstA_6, &ExpandedInstA_13);
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
          check_hlds__inst_util__inst_expand_3_p_0(Var_19, InstB_7, &ExpandedInstB_14);
          CalculateSub_73 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
          switch (CalculateSub_73) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_tscc_proc_3_input_1_InstA_10 = ExpandedInstA_13;
                MR_Word next_value_of_tscc_proc_3_input_2_InstB_11 = ExpandedInstB_14;
                MR_Word next_value_of_tscc_proc_3_input_3_Type_12 = MaybeType_8;
                MR_Word next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = STATE_VARIABLE_Info_17_17;

                // direct tailcall eliminated
                ;
                tscc_proc_3_input_1_InstA_10 = next_value_of_tscc_proc_3_input_1_InstA_10;
                tscc_proc_3_input_2_InstB_11 = next_value_of_tscc_proc_3_input_2_InstB_11;
                tscc_proc_3_input_3_Type_12 = next_value_of_tscc_proc_3_input_3_Type_12;
                tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23 = next_value_of_tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
                goto top_of_proc_3;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = ExpandedInstA_13;
                MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = ExpandedInstB_14;
                MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = MaybeType_8;
                MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = STATE_VARIABLE_Info_17_17;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
                tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
                tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
                tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 1:
              succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(ExpandedInstB_14, ExpandedInstA_13, MaybeType_8, STATE_VARIABLE_Info_17_17, &STATE_VARIABLE_Info_16);
              break;
          }
        }
        else
        {
          STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
          succeeded = MR_TRUE;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_16;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word InstA_6 = tscc_proc_2_input_1_InstA_6;
      MR_Word InstB_7 = tscc_proc_2_input_2_InstB_7;
      MR_Word MaybeType_8 = tscc_proc_2_input_3_MaybeType_8;
      MR_Word STATE_VARIABLE_Info_0_41 = tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
      MR_Word STATE_VARIABLE_Info_42;
      MR_bool succeeded = MR_TRUE;

      switch (MR_tag((MR_Word) InstA_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(InstA_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              if ((InstB_7 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                succeeded = MR_TRUE;
              }
              else
              if (((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 2))
              {
                MR_Word Uniq_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);

                switch (Uniq_20) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 4:
                    succeeded = MR_TRUE;
                    break;
                }
                if (succeeded)
                {
                  STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                  succeeded = MR_TRUE;
                }
              }
              else
                succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 1))));
            MR_Word Var_157 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstA_6, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) InstB_7)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word UniqB_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word HOInstInfoB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                  succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(Var_156, HOInstInfoB_13, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                  if (succeeded)
                    succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_157, UniqB_12);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                      MR_Word NextInstA_76;
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_67, Var_157, Var_156, &NextInstA_76);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_76;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NextInstA_16;
                      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                      MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                      succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(MaybeType_8, Var_69, Var_157, Var_156, &NextInstA_16);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_1_input_1_InstA_6 = NextInstA_16;
                        next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                        next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                        next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                        tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                        tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                        tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                        tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 3))));
                MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_160 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));
                      MR_Word Var_63;
                      MR_Word Var_64;
                      MR_Word Var_65;
                      MR_Word UniqB_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word Var_150;

                      succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_160, UniqB_78);
                        if (succeeded)
                        {
                          Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                          succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(Var_158, UniqB_78, Var_63);
                          if (succeeded)
                          {
                            Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                            succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(Var_159, Var_158, Var_64);
                            if (succeeded)
                            {
                              Var_65 = (MR_Integer) 0;
                              check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_150, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                              succeeded = (Var_65 == Var_150);
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word BoundInstsB_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                          MR_Word UniqB_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);

                          succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_160, UniqB_80);
                          if (succeeded)
                            succeeded = check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(Var_158, BoundInstsB_26, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word Var_57;
                          MR_Word Var_58;
                          MR_Word Var_59;
                          MR_Word UniqB_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word Var_151;

                          succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_160, UniqB_83);
                            if (succeeded)
                            {
                              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(Var_159, Var_158, MaybeType_8, Var_57);
                              if (succeeded)
                              {
                                Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
                                succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(Var_158, UniqB_83, Var_58);
                                if (succeeded)
                                {
                                  Var_59 = (MR_Integer) 0;
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstA_6, &Var_151, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                                  succeeded = (Var_59 == Var_151);
                                }
                              }
                            }
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_162 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))) & (MR_Integer) 7);

                switch (MR_tag((MR_Word) InstB_7)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word UniqB_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word HOInstInfoB_89 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                      succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(Var_161, HOInstInfoB_89, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                      if (succeeded)
                        succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_162, UniqB_88);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word InstResultsB_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                          MR_Word ModuleInfo_28;
                          MR_Word STATE_VARIABLE_Info_51_51;
                          MR_Word Var_52;
                          MR_Word UniqB_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word BoundInstsB_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 3))));
                          MR_Word Var_152;

                          succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(Var_161, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_51_51);
                          if (succeeded)
                          {
                            succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_162, UniqB_92);
                            if (succeeded)
                            {
                              ModuleInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_51_51, (MR_Integer) 0))));
                              succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(InstResultsB_27, BoundInstsB_93, MaybeType_8, ModuleInfo_28);
                              if (succeeded)
                              {
                                succeeded = check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(Var_162, BoundInstsB_93, ModuleInfo_28);
                                if (succeeded)
                                {
                                  Var_52 = (MR_Integer) 0;
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(InstB_7, &Var_152, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_42);
                                  succeeded = (Var_52 == Var_152);
                                  if (succeeded)
                                  {
                                    {
                                      MR_Word TypeCtorInfo_146_146;
                                      MR_Word Type_29;
                                      MR_Word Var_54;

                                      succeeded = (MaybeType_8 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Type_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
                                        TypeCtorInfo_146_146 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                                        Var_54 = mercury__set__init_0_f_0(TypeCtorInfo_146_146);
                                        succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(Var_54, ModuleInfo_28, BoundInstsB_93, Type_29);
                                      }
                                    }
                                    if (!(succeeded))
                                    {
                                      MR_Word GroundMatchesBound_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_42, (MR_Integer) 3))) & (MR_Integer) 1);

                                      succeeded = (GroundMatchesBound_30 == (MR_Integer) 1);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word UniqB_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))) & (MR_Integer) 7);
                          MR_Word HOInstInfoB_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));

                          succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(Var_161, HOInstInfoB_97, MaybeType_8, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                          if (succeeded)
                            succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(Var_162, UniqB_96);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word InstVarsA_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));
                MR_Word SubInstA_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word InstVarsB_39;
                MR_Word SubInstB_40;

                succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  InstVarsB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));
                  SubInstB_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_InstA_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_InstB_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;

                    succeeded = mercury__set__subset_2_p_0((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), InstVarsB_39, InstVarsA_37);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_38;
                      next_value_of_tscc_proc_1_input_2_InstB_7 = SubInstB_40;
                      next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                      next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;
                      tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                      tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                      tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                      tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                      goto top_of_proc_1;
                    }
                  }
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_38;
                  MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_7;
                  MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = MaybeType_8;
                  MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_41;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                  tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                  tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                  tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                  goto top_of_proc_1;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 2))));
                MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_6, (MR_Integer) 1))));

                if (((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 2))
                {
                  MR_Word Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstB_7, (MR_Integer) 1))));

                  succeeded = (Var_48 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                else
                if (((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
                {
                  MR_Word TypeCtorInfo_147_147;
                  MR_Word TypeInfo_148_148;
                  MR_Word ArgsB_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 2))));
                  MR_Word MaybeTypes_36;
                  MR_Integer Var_45;
                  MR_Word Var_46;
                  MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_7, (MR_Integer) 1))));

                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_155, Var_153);
                  if (succeeded)
                  {
                    TypeCtorInfo_147_147 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
                    Var_45 = mercury__list__length_1_f_0(TypeCtorInfo_147_147, Var_154);
                    Var_46 = (MR_Word) ((MR_Unsigned) 0U);
                    TypeInfo_148_148 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[1]);
                    mercury__list__duplicate_3_p_0(TypeInfo_148_148, Var_45, ((MR_Box) (Var_46)), &MaybeTypes_36);
                    succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(Var_154, ArgsB_35, MaybeTypes_36, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_42);
                  }
                }
                else
                  succeeded = MR_FALSE;
              }
              break;
          }
          break;
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_42;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word InstA_10 = tscc_proc_3_input_1_InstA_10;
      MR_Word InstB_11 = tscc_proc_3_input_2_InstB_11;
      MR_Word Type_12 = tscc_proc_3_input_3_Type_12;
      MR_Word STATE_VARIABLE_Info_0_23 = tscc_proc_3_input_4_STATE_VARIABLE_Info_0_23;
      MR_Word STATE_VARIABLE_Info_24;
      MR_bool succeeded = ((((MR_tag((MR_Word) InstB_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
      MR_Word InstVarsB_14;
      MR_Word SubInstB_15;

      if (succeeded)
      {
        InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
        SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
        {
          MR_Word ModuleInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
          MR_Word UnifyInst_17;
          MR_Word ModuleInfo_19;
          MR_Word STATE_VARIABLE_Info_27_27;
          MR_Word STATE_VARIABLE_Info_28_28;
          MR_Word Var_41;
          MR_Word _Det_18;
          MR_Word Var_40;
          MR_Unsigned packed_word_25;
          MR_Word UnifySubInst_20;
          MR_Word TypeInfo_47_47;
          MR_Word Var_46;

          succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, InstA_10, SubInstB_15, (MR_Integer) 1, &UnifyInst_17, &_Det_18, ModuleInfo0_16, &ModuleInfo_19);
          if (succeeded)
          {
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
            Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
            packed_word_25 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
            {
              STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (ModuleInfo_19));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 3) = (MR_Box) (packed_word_25);
            }
            if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_27_27;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Var_57;
              MR_Box conv1_STATE_VARIABLE_Info_28_28;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (UnifyInst_17));
                MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (Type_12));
              }
              succeeded = mercury__set__fold_4_p_3((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0), Var_57, InstVarsB_14, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv1_STATE_VARIABLE_Info_28_28);
              if (succeeded)
              {
                STATE_VARIABLE_Info_28_28 = ((MR_Word) (conv1_STATE_VARIABLE_Info_28_28));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) UnifyInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 1))));
                UnifySubInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 2))));
                TypeInfo_47_47 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (InstVarsB_14)), ((MR_Box) (Var_46)));
              }
              if (succeeded)
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifySubInst_20;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
              else
              {
                MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = InstA_10;
                MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = UnifyInst_17;
                MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
                MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_28_28;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
                tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
                tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
                tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
                goto top_of_proc_1;
              }
            }
          }
        }
      }
      else
      {
        MR_Word SubInstA_22;

        succeeded = ((((MR_tag((MR_Word) InstA_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          SubInstA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
          {
            MR_Word next_value_of_tscc_proc_1_input_1_InstA_6 = SubInstA_22;
            MR_Word next_value_of_tscc_proc_1_input_2_InstB_7 = InstB_11;
            MR_Word next_value_of_tscc_proc_1_input_3_MaybeType_8 = Type_12;
            MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = STATE_VARIABLE_Info_0_23;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_InstA_6 = next_value_of_tscc_proc_1_input_1_InstA_6;
            tscc_proc_1_input_2_InstB_7 = next_value_of_tscc_proc_1_input_2_InstB_7;
            tscc_proc_1_input_3_MaybeType_8 = next_value_of_tscc_proc_1_input_3_MaybeType_8;
            tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_15;
            goto top_of_proc_1;
          }
        }
        else
        {
          MR_Word next_value_of_tscc_proc_2_input_1_InstA_6 = InstA_10;
          MR_Word next_value_of_tscc_proc_2_input_2_InstB_7 = InstB_11;
          MR_Word next_value_of_tscc_proc_2_input_3_MaybeType_8 = Type_12;
          MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = STATE_VARIABLE_Info_0_23;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_InstA_6 = next_value_of_tscc_proc_2_input_1_InstA_6;
          tscc_proc_2_input_2_InstB_7 = next_value_of_tscc_proc_2_input_2_InstB_7;
          tscc_proc_2_input_3_MaybeType_8 = next_value_of_tscc_proc_2_input_3_MaybeType_8;
          tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_Info_0_41;
          goto top_of_proc_2;
        }
      }
      tscc_output_succeeded = succeeded;
      tscc_output_1_STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_24;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_16 = tscc_output_1_STATE_VARIABLE_Info_16;
    return tscc_output_succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(
  MR_Word HOInstInfo_5,
  MR_Word MaybeType_6,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_bool succeeded;

    if ((HOInstInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word PredInst_8 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_5), (MR_Integer) 1));
      MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInst_8, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgModes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInst_8, (MR_Integer) 1))));

      switch (PredOrFunc_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer Arity_21;
            MR_Word DefaultFunc_22;

            Arity_21 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_18);
            DefaultFunc_22 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_21);
            succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(PredInst_8, DefaultFunc_22, MaybeType_6, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
          }
          break;
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_2_5_p_0(
  MR_Word PredInstA_6,
  MR_Word PredInstB_7,
  MR_Word MaybeType_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_21_21;
    MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_6, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ModesA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstA_6, (MR_Integer) 1))));
    MR_Word Det_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_6, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word ModesB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstB_7, (MR_Integer) 1))));
    MR_Word MaybeTypes_16;
    MR_Integer Var_19;
    MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstB_7, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstB_7, (MR_Integer) 3))) & (MR_Integer) 7);

    succeeded = (PredOrFunc_10 == Var_22);
    if (succeeded)
    {
      succeeded = (Det_13 == Var_23);
      if (succeeded)
      {
        TypeCtorInfo_21_21 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
        Var_19 = mercury__list__length_1_f_0(TypeCtorInfo_21_21, ModesA_11);
        check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(MaybeType_8, Var_19, &MaybeTypes_16);
        succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(ModesA_11, ModesB_14, MaybeTypes_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(
  MR_Word HOInstInfoA_6,
  MR_Word HOInstInfoB_7,
  MR_Word MaybeType_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;

    if ((HOInstInfoB_7 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HOInstInfoA_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word PredInst_67 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_6), (MR_Integer) 1));

        succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(PredInst_67, MaybeType_8, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
      }
    else
    {
      MR_Word Var_25 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_7), (MR_Integer) 1));

      if ((HOInstInfoA_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeCtorInfo_24_24;
        MR_Word TypeCtorInfo_21_59;
        MR_Word ArgModes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
        MR_Integer Arity_14;
        MR_Word PredInstA_15;
        MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word PredOrFunc_50;
        MR_Word ModesA_51;
        MR_Word Det_53;
        MR_Word ModesB_54;
        MR_Word MaybeTypes_56;
        MR_Integer Var_57;
        MR_Word Var_60;
        MR_Word Var_61;

        succeeded = (Var_19 == (MR_Integer) 1);
        if (succeeded)
        {
          TypeCtorInfo_24_24 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
          Arity_14 = mercury__list__length_1_f_0(TypeCtorInfo_24_24, ArgModes_11);
          PredInstA_15 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_14);
          PredOrFunc_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_15, (MR_Integer) 0))) & (MR_Integer) 1);
          ModesA_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstA_15, (MR_Integer) 1))));
          Det_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_15, (MR_Integer) 3))) & (MR_Integer) 7);
          Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))) & (MR_Integer) 1);
          ModesB_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
          Var_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 3))) & (MR_Integer) 7);
          succeeded = (PredOrFunc_50 == Var_60);
          if (succeeded)
          {
            succeeded = (Det_53 == Var_61);
            if (succeeded)
            {
              TypeCtorInfo_21_59 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
              Var_57 = mercury__list__length_1_f_0(TypeCtorInfo_21_59, ModesA_51);
              check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(MaybeType_8, Var_57, &MaybeTypes_56);
              succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(ModesA_51, ModesB_54, MaybeTypes_56, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
            }
          }
        }
      }
      else
      {
        MR_Word TypeCtorInfo_21_41;
        MR_Word PredInstA_23 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_6), (MR_Integer) 1));
        MR_Word PredOrFunc_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_23, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word ModesA_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstA_23, (MR_Integer) 1))));
        MR_Word Det_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstA_23, (MR_Integer) 3))) & (MR_Integer) 7);
        MR_Word ModesB_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
        MR_Word MaybeTypes_38;
        MR_Integer Var_39;
        MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 3))) & (MR_Integer) 7);

        succeeded = (PredOrFunc_32 == Var_42);
        if (succeeded)
        {
          succeeded = (Det_35 == Var_43);
          if (succeeded)
          {
            TypeCtorInfo_21_41 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
            Var_39 = mercury__list__length_1_f_0(TypeCtorInfo_21_41, ModesA_33);
            check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(MaybeType_8, Var_39, &MaybeTypes_38);
            succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(ModesA_33, ModesB_36, MaybeTypes_38, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(
  MR_Word PredInst_5,
  MR_Word MaybeType_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;
    MR_Word PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInst_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgModes_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInst_5, (MR_Integer) 1))));

    switch (PredOrFunc_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_21_33;
          MR_Integer Arity_12;
          MR_Word DefaultFunc_13;
          MR_Word PredOrFunc_24;
          MR_Word ModesA_25;
          MR_Word Det_27;
          MR_Word ModesB_28;
          MR_Word MaybeTypes_30;
          MR_Integer Var_31;
          MR_Word Var_34;
          MR_Word Var_35;

          Arity_12 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_9);
          DefaultFunc_13 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_12);
          PredOrFunc_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInst_5, (MR_Integer) 0))) & (MR_Integer) 1);
          ModesA_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInst_5, (MR_Integer) 1))));
          Det_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInst_5, (MR_Integer) 3))) & (MR_Integer) 7);
          Var_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DefaultFunc_13, (MR_Integer) 0))) & (MR_Integer) 1);
          ModesB_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefaultFunc_13, (MR_Integer) 1))));
          Var_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DefaultFunc_13, (MR_Integer) 3))) & (MR_Integer) 7);
          succeeded = (PredOrFunc_24 == Var_34);
          if (succeeded)
          {
            succeeded = (Det_27 == Var_35);
            if (succeeded)
            {
              TypeCtorInfo_21_33 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
              Var_31 = mercury__list__length_1_f_0(TypeCtorInfo_21_33, ModesA_25);
              check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(MaybeType_6, Var_31, &MaybeTypes_30);
              succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(ModesA_25, ModesB_28, MaybeTypes_30, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_17);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(
  MR_Word InstA_10,
  MR_Word InstB_11,
  MR_Word Type_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) InstB_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word InstVarsB_14;
    MR_Word SubInstB_15;

    if (succeeded)
    {
      InstVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 1))));
      SubInstB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstB_11, (MR_Integer) 2))));
      {
        MR_Word ModuleInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
        MR_Word UnifyInst_17;
        MR_Word ModuleInfo_19;
        MR_Word STATE_VARIABLE_Info_27_27;
        MR_Word STATE_VARIABLE_Info_28_28;
        MR_Word Var_41;
        MR_Word _Det_18;
        MR_Word Var_40;
        MR_Unsigned packed_word_1;
        MR_Word UnifySubInst_20;
        MR_Word TypeInfo_47_47;
        MR_Word Var_46;

        succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, InstA_10, SubInstB_15, (MR_Integer) 1, &UnifyInst_17, &_Det_18, ModuleInfo0_16, &ModuleInfo_19);
        if (succeeded)
        {
          Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1))));
          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
          {
            STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (ModuleInfo_19));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 3) = (MR_Box) (packed_word_1);
          }
          if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_27_27;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Var_69;
            MR_Box conv1_STATE_VARIABLE_Info_28_28;

            {
              Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (UnifyInst_17));
              MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (Type_12));
            }
            succeeded = mercury__set__fold_4_p_3((MR_Word) (&check_hlds__inst_match_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0), Var_69, InstVarsB_14, ((MR_Box) (STATE_VARIABLE_Info_27_27)), &conv1_STATE_VARIABLE_Info_28_28);
            if (succeeded)
            {
              STATE_VARIABLE_Info_28_28 = ((MR_Word) (conv1_STATE_VARIABLE_Info_28_28));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) UnifyInst_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 1))));
              UnifySubInst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnifyInst_17, (MR_Integer) 2))));
              TypeInfo_47_47 = (MR_Word) (&check_hlds__inst_match_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (InstVarsB_14)), ((MR_Box) (Var_46)));
            }
            if (succeeded)
              succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(InstA_10, UnifySubInst_20, Type_12, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_24);
            else
              succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(InstA_10, UnifyInst_17, Type_12, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_24);
          }
        }
      }
    }
    else
    {
      MR_Word SubInstA_22;

      succeeded = ((((MR_tag((MR_Word) InstA_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        SubInstA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstA_10, (MR_Integer) 2))));
        succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(SubInstA_22, InstB_11, Type_12, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
      }
      else
        succeeded = check_hlds__inst_match__unswap__ho9_6_p_0(InstA_10, InstB_11, Type_12, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(
  MR_Word Inst_5,
  MR_Word * ContainsNonstd_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Var_10;

    Var_10 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
    check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(Inst_5, Var_10, ContainsNonstd_6, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(
  MR_Word Inst_6,
  MR_Word STATE_VARIABLE_Expansions_0_30,
  MR_Word * ContainsNonstd_8,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ContainsNonstd_8 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
        }
        break;
      case (MR_Integer) 1:
        {
          *ContainsNonstd_8 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
        }
        break;
      case (MR_Integer) 2:
        {
          *ContainsNonstd_8 = (MR_Integer) 0;
          *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) InstResults_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults_13)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(BoundInsts_14, STATE_VARIABLE_Expansions_0_30, ContainsNonstd_8, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
                      break;
                    case (MR_Integer) 1:
                      {
                        *ContainsNonstd_8 = (MR_Integer) 0;
                        *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(BoundInsts_14, STATE_VARIABLE_Expansions_0_30, ContainsNonstd_8, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word HOInstInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_Info_41_41;

              if ((HOInstInfo_11 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_Info_41_41 = STATE_VARIABLE_Info_0_31;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word PredInst_57 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_11), (MR_Integer) 1));

                succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(PredInst_57, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_41_41);
              }
              if (succeeded)
              {
                *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_41_41;
                *ContainsNonstd_8 = (MR_Integer) 0;
              }
              else
              {
                *ContainsNonstd_8 = (MR_Integer) 1;
                *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_match.inst_contains_nondefault_func_mode_2\'/5", (MR_String) "uninstantiated inst parameter");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubInst_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_Inst_6 = SubInst_43;

              // direct tailcall eliminated
              ;
              Inst_6 = next_value_of_Inst_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));

              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_22)), STATE_VARIABLE_Expansions_0_30);
              if (succeeded)
              {
                *ContainsNonstd_8 = (MR_Integer) 0;
                *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
              }
              else
              {
                MR_Word SubInst_23;
                MR_Word STATE_VARIABLE_Expansions_34_34;
                MR_Word Var_35;
                MR_Word next_value_of_Inst_6;
                MR_Word next_value_of_STATE_VARIABLE_Expansions_0_30;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_22)), STATE_VARIABLE_Expansions_0_30, &STATE_VARIABLE_Expansions_34_34);
                Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_31, (MR_Integer) 0))));
                check_hlds__mode_util__inst_lookup_3_p_0(Var_35, InstName_22, &SubInst_23);
                // direct tailcall eliminated
                ;
                next_value_of_Inst_6 = SubInst_23;
                next_value_of_STATE_VARIABLE_Expansions_0_30 = STATE_VARIABLE_Expansions_34_34;
                Inst_6 = next_value_of_Inst_6;
                STATE_VARIABLE_Expansions_0_30 = next_value_of_STATE_VARIABLE_Expansions_0_30;
                continue;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              *ContainsNonstd_8 = (MR_Integer) 0;
              *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word ModeA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ModeAs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModeB_11;
      MR_Word ModeBs_12;
      MR_Word MaybeType_13;
      MR_Word MaybeTypes_14;
      MR_Word ModuleInfo_16;
      MR_Word InitialA_17;
      MR_Word FinalA0_18;
      MR_Word InitialB_19;
      MR_Word FinalB_20;
      MR_Word FinalA_21;
      MR_Word STATE_VARIABLE_Info_25_25;
      MR_Word STATE_VARIABLE_Info_26_26;
      MR_Word CalculateSub_40;
      MR_Word STATE_VARIABLE_Info_9_41;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_Info_11_43;
      MR_Word Var_60;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Unsigned packed_word_2;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Unsigned packed_word_3;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ModeB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ModeBs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          MaybeTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
          check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_16, ModeA_9, &InitialA_17, &FinalA0_18);
          check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_16, ModeB_11, &InitialB_19, &FinalB_20);
          CalculateSub_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
          Var_42 = check_hlds__inst_match__swap_calculate_sub_1_f_0(CalculateSub_40);
          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
          Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 1))));
          Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 2))));
          packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
          {
            STATE_VARIABLE_Info_9_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_41, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_41, 1) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_41, 2) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_9_41, 3) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 24U)))) | (((MR_Unsigned) (Var_42) << 3))));
          }
          succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(InitialB_19, InitialA_17, MaybeType_13, STATE_VARIABLE_Info_9_41, &STATE_VARIABLE_Info_11_43);
          if (succeeded)
          {
            Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_43, (MR_Integer) 0))));
            Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_43, (MR_Integer) 1))));
            Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_43, (MR_Integer) 2))));
            packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_11_43, (MR_Integer) 3)));
            {
              STATE_VARIABLE_Info_25_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_25_25, 0) = ((MR_Box) (Var_58));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_25_25, 1) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_25_25, 2) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_25_25, 3) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 24U)))) | (((MR_Unsigned) (CalculateSub_40) << 3))));
            }
            if ((Var_60 == (MR_Word) ((MR_Unsigned) 0U)))
              FinalA_21 = FinalA0_18;
            else
            {
              MR_Word Subst_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0))));

              parse_tree__prog_mode__inst_apply_substitution_3_p_0(Subst_68, FinalA0_18, &FinalA_21);
            }
            succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(FinalA_21, FinalB_20, MaybeType_13, STATE_VARIABLE_Info_25_25, &STATE_VARIABLE_Info_26_26);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = ModeAs_10;
              next_value_of_HeadVar__2_2 = ModeBs_12;
              next_value_of_HeadVar__3_3 = MaybeTypes_14;
              next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_26_26;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
              continue;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    }
    else
    {
      MR_Word BoundInst_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_10, (MR_Integer) 1))));
      MR_Word HeadContainsNonstd_17;
      MR_Word STATE_VARIABLE_Info_20_20;

      check_hlds__inst_match__inst_list_contains_nondefault_func_mode_5_p_0(ArgInsts_16, HeadVar__2_2, &HeadContainsNonstd_17, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_20_20);
      switch (HeadContainsNonstd_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = BoundInsts_11;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_20_20;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__3_3 = (MR_Integer) 1;
            *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_20_20;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_list_contains_nondefault_func_mode_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    }
    else
    {
      MR_Word Inst_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadContainsNonstd_15;
      MR_Word STATE_VARIABLE_Info_18_18;

      check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(Inst_10, HeadVar__2_2, &HeadContainsNonstd_15, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
      switch (HeadContainsNonstd_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Insts_11;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_18_18;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__3_3 = (MR_Integer) 1;
            *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_18_18;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeType_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word X_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Xs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Y_13;
      MR_Word Ys_14;
      MR_Word ConsIdX_17;
      MR_Word ArgsX_18;
      MR_Word ConsIdY_19;
      MR_Word ArgsY_20;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ConsIdX_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 0))));
        ArgsX_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), X_11, (MR_Integer) 1))));
        ConsIdY_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 0))));
        ArgsY_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Y_13, (MR_Integer) 1))));
        succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsIdX_17, ConsIdY_19);
        if (succeeded)
        {
          MR_Word MaybeTypes_21;
          MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_4, (MR_Integer) 0))));
          MR_Integer Var_25;
          MR_Word STATE_VARIABLE_Info_26_26;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

          Var_25 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgsX_18);
          check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(Var_24, MaybeType_3, ConsIdX_17, Var_25, &MaybeTypes_21);
          succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(ArgsX_18, ArgsY_20, MaybeTypes_21, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_26_26);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Xs_12;
            next_value_of_HeadVar__2_2 = Ys_14;
            next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_26_26;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
            continue;
          }
        }
        else
        {
          MR_Word QNameA_39;
          MR_Integer ArityA_40;
          MR_Word QNameB_42;
          MR_Integer ArityB_43;
          MR_Word next_value_of_HeadVar__2_2;

          succeeded = ((((MR_tag((MR_Word) ConsIdX_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            QNameA_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsIdX_17, (MR_Integer) 1))));
            ArityA_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdX_17, (MR_Integer) 2))));
            succeeded = ((((MR_tag((MR_Word) ConsIdY_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              QNameB_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsIdY_19, (MR_Integer) 1))));
              ArityB_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsIdY_19, (MR_Integer) 2))));
            }
          }
          if (succeeded)
          {
            MR_String NameA_45;
            MR_String NameB_47;
            MR_Word O_49;

            if (((MR_tag((MR_Word) QNameA_39)) == (MR_Integer) 1))
              NameA_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), QNameA_39, (MR_Integer) 1))));
            else
              NameA_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), QNameA_39, (MR_Integer) 0))));
            if (((MR_tag((MR_Word) QNameB_42)) == (MR_Integer) 1))
              NameB_47 = ((MR_String) ((MR_hl_field(MR_mktag(1), QNameB_42, (MR_Integer) 1))));
            else
              NameB_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), QNameB_42, (MR_Integer) 0))));
            mercury__private_builtin__builtin_compare_string_3_p_0(&O_49, NameA_45, NameB_47);
            switch (O_49) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                succeeded = (ArityA_40 > ArityB_43);
                break;
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
            }
          }
          else
          {
            MR_Word Var_53;

            parse_tree__prog_data____Compare____cons_id_0_0(&Var_53, ConsIdX_17, ConsIdY_19);
            succeeded = ((MR_Integer) 2 == Var_53);
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = Ys_14;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word ArgA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgsA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgB_11;
      MR_Word ArgsB_12;
      MR_Word MaybeType_13;
      MR_Word MaybeTypes_14;
      MR_Word STATE_VARIABLE_Info_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgsB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          MaybeTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(ArgA_9, ArgB_11, MaybeType_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ArgsA_10;
            next_value_of_HeadVar__2_2 = ArgsB_12;
            next_value_of_HeadVar__3_3 = MaybeTypes_14;
            next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_18_18;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho10_6_p_0(
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word Type_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word CalculateSub_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
    MR_Word STATE_VARIABLE_Info_15_15;
    MR_Word Var_16;
    MR_Word STATE_VARIABLE_Info_17_17;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Unsigned packed_word_1;

    switch (CalculateSub_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Var_16 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        Var_16 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        Var_16 = (MR_Integer) 0;
        break;
    }
    {
      STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 3) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 24U)))) | (((MR_Unsigned) (Var_16) << 3))));
    }
    succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(InstB_9, InstA_8, Type_10, STATE_VARIABLE_Info_15_15, &STATE_VARIABLE_Info_17_17);
    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 1))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 2))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 24U)))) | (((MR_Unsigned) (CalculateSub_12) << 3))));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho9_6_p_0(
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word Type_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word CalculateSub_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))) >> 3)) & (MR_Integer) 3);
    MR_Word STATE_VARIABLE_Info_15_15;
    MR_Word Var_16;
    MR_Word STATE_VARIABLE_Info_17_17;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Unsigned packed_word_1;

    switch (CalculateSub_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Var_16 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        Var_16 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        Var_16 = (MR_Integer) 0;
        break;
    }
    {
      STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 3) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 24U)))) | (((MR_Unsigned) (Var_16) << 3))));
    }
    succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(InstB_9, InstA_8, Type_10, STATE_VARIABLE_Info_15_15, &STATE_VARIABLE_Info_17_17);
    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 1))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 2))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, (MR_Integer) 3)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 24U)))) | (((MR_Unsigned) (CalculateSub_12) << 3))));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(
  MR_Word Uniq_4,
  MR_Word BoundInsts_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_bool succeeded = (Uniq_4 == (MR_Integer) 0);

    if (succeeded)
      succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_p_0(BoundInsts_5, ModuleInfo_6);
    else
    {
      succeeded = (Uniq_4 == (MR_Integer) 2);
      if (succeeded)
        succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_p_0(BoundInsts_5, ModuleInfo_6);
      else
        succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(
  MR_Word BoundInsts_4,
  MR_Word Uniq_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_bool succeeded = (Uniq_5 == (MR_Integer) 1);

    if (succeeded)
      succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(BoundInsts_4, ModuleInfo_6);
    else
    {
      succeeded = (Uniq_5 == (MR_Integer) 2);
      if (succeeded)
        succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(BoundInsts_4, ModuleInfo_6);
      else
        succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__unique_matches_final_2_p_0(
  MR_Word A_3,
  MR_Word B_4)
{
  {
    MR_bool succeeded;

    switch (A_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        succeeded = (B_4 == (MR_Integer) 3);
        break;
      case (MR_Integer) 4:
        switch (B_4) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 2:
        if (((MR_Unsigned) 29U & (((MR_Integer) 1 << B_4))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (B_4) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_match__swap_calculate_sub_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__inst_match__inst_is_complete_for_type_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Var_9;
          MR_Word Var_10;

          check_hlds__type_util__cons_id_arg_types_4_p_0((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8, &Var_9, &Var_10, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1, env_ptr);
        }
        (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_15 = ((MR_Word) ((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_Var_15));
    check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_15, (MR_Integer) 0))));
    (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_15, (MR_Integer) 1))));
    (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13, (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11);
    if ((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
    {
      (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
      (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6));
      }
      (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = mercury__list__map_3_p_5((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20, (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21, (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_16, (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14, (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12);
      if ((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
        check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), &(env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_Var_15, (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7, env_ptr);
        (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(env_ptr);
    (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = !((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded);
    if ((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1) == 0)
      {
        check_hlds__type_util__cons_id_arg_types_4_p_0((env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8, &(env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11, &(env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4, env_ptr);
        (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(
  MR_Word Expansions_5,
  MR_Word ModuleInfo_6,
  MR_Word BoundInsts_7,
  MR_Word Type_8)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s env;

    (env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5 = Expansions_5;
    (env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6 = ModuleInfo_6;
    (env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7 = BoundInsts_7;
    (env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8 = Type_8;
    check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(&env);
    if ((env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
    {
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(&env);
      (env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = !((env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded);
    }
    return (env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_match____Unify____calculate_sub_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_match____Compare____calculate_sub_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_match____Unify____expansions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_match____Compare____expansions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_match____Unify____ground_matches_bound_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_match____Compare____ground_matches_bound_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_match____Unify____inst_match_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_match____Compare____inst_match_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_match____Unify____inst_match_inputs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_match____Compare____inst_match_inputs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_match____Unify____inst_matches_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_match____Compare____inst_matches_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_match____Unify____uniqueness_comparison_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_match____Compare____uniqueness_comparison_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__inst_match__init(void)
{
}

void mercury__check_hlds__inst_match__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_expansions_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_ground_matches_bound_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_matches_pred_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0);
}

void mercury__check_hlds__inst_match__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_match__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_match.
