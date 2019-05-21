/*
** Automatically generated from `inst_match.m'
** by the Mercury compiler,
** version rotd-2017-07-25
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module check_hlds.inst_match. */
/* :- implementation. */

/*
INIT mercury__check_hlds__inst_match__init
ENDINIT
*/

#include "check_hlds.inst_match.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



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

struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s {
  MR_Word * check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__InstVar_5;
  MR_Cont check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont;
  void * check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont_env_ptr;
  MR_Word check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__Inst_10;
  MR_Box check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__conv0_Inst_10;
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
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
  MR_Word check_hlds__inst_match__HeadVar__2_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0(
  MR_Word check_hlds__inst_match__HeadVar__2_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(
  void * check_hlds__inst_match__env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
  MR_Word check_hlds__inst_match__Expansions_5,
  MR_Word check_hlds__inst_match__ModuleInfo_6,
  MR_Word check_hlds__inst_match__Inst_7,
  MR_Word check_hlds__inst_match__Type_8);

static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__MaybeType_7,
  MR_Word check_hlds__inst_match__InstVar_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word * check_hlds__inst_match__InstVar_5,
  MR_Cont check_hlds__inst_match__cont,
  void * check_hlds__inst_match__cont_env_ptr);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word * check_hlds__inst_match__InstVar_5,
  MR_Cont check_hlds__inst_match__cont,
  void * check_hlds__inst_match__cont_env_ptr);

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_2(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_3(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0(
  MR_Word check_hlds__inst_match__Inst_3,
  MR_Word * check_hlds__inst_match__InstVar_4,
  MR_Cont check_hlds__inst_match__cont,
  void * check_hlds__inst_match__cont_env_ptr);

static void MR_CALL 
check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(
  MR_Word check_hlds__inst_match__InstName_3,
  MR_Word * check_hlds__inst_match__InstVar_4,
  MR_Cont check_hlds__inst_match__cont,
  void * check_hlds__inst_match__cont_env_ptr);

static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_1(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_2(
  void * check_hlds__inst_match__env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__MaybeType_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_3_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
  MR_Word check_hlds__inst_match__HOInstInfoA_5,
  MR_Word check_hlds__inst_match__HOInstInfoB_6,
  MR_Word check_hlds__inst_match__MaybeType_7,
  MR_Word check_hlds__inst_match__ModuleInfo_8);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_mt_3_p_0(
  MR_Word check_hlds__inst_match__ModuleInfo_4,
  MR_Word check_hlds__inst_match__HOInstInfo_5,
  MR_Word check_hlds__inst_match__MaybeType_6);

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho12_6_p_0(
  MR_Word check_hlds__inst_match__InstA_8,
  MR_Word check_hlds__inst_match__InstB_9,
  MR_Word check_hlds__inst_match__Type_10,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho11_6_p_0(
  MR_Word check_hlds__inst_match__InstA_8,
  MR_Word check_hlds__inst_match__InstB_9,
  MR_Word check_hlds__inst_match__Type_10,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(
  MR_Word check_hlds__inst_match__InstA_10,
  MR_Word check_hlds__inst_match__InstB_11,
  MR_Word check_hlds__inst_match__Type_12,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(
  MR_Word check_hlds__inst_match__InstA_10,
  MR_Word check_hlds__inst_match__InstB_11,
  MR_Word check_hlds__inst_match__Type_12,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__MaybeType_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(
  MR_Word check_hlds__inst_match__Uniq_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(
  MR_Word check_hlds__inst_match__Uniq_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__MaybeType_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_48,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_49);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
  MR_Word check_hlds__inst_match__InstA_1,
  MR_Word check_hlds__inst_match__InstB_2);

static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__BoundInsts_2,
  MR_Word check_hlds__inst_match__Uniq_3,
  MR_Word check_hlds__inst_match__ModuleInfo_4);

static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__InstA_2,
  MR_Word check_hlds__inst_match__InstB_3);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17);

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho10_6_p_0(
  MR_Word check_hlds__inst_match__InstA_8,
  MR_Word check_hlds__inst_match__InstB_9,
  MR_Word check_hlds__inst_match__Type_10,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho9_6_p_0(
  MR_Word check_hlds__inst_match__InstA_8,
  MR_Word check_hlds__inst_match__InstB_9,
  MR_Word check_hlds__inst_match__Type_10,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(
  MR_Word check_hlds__inst_match__InstA_10,
  MR_Word check_hlds__inst_match__InstB_11,
  MR_Word check_hlds__inst_match__Type_12,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(
  MR_Word check_hlds__inst_match__InstA_10,
  MR_Word check_hlds__inst_match__InstB_11,
  MR_Word check_hlds__inst_match__Type_12,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_2_5_p_0(
  MR_Word check_hlds__inst_match__PredInstA_6,
  MR_Word check_hlds__inst_match__PredInstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(
  MR_Word check_hlds__inst_match__PredInst_5,
  MR_Word check_hlds__inst_match__MaybeType_6,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_15);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(
  MR_Word check_hlds__inst_match__HOInstInfo_5,
  MR_Word check_hlds__inst_match__MaybeType_6,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_9,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_10);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word * check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__inst_match__inst_list_contains_nondefault_func_mode_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word * check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(
  MR_Word check_hlds__inst_match__Inst_6,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30,
  MR_Word * check_hlds__inst_match__ContainsNonstd_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_31,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_32);

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(
  MR_Word check_hlds__inst_match__Inst_5,
  MR_Word * check_hlds__inst_match__ContainsNonstd_6,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_9);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__MaybeType_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42);

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(
  MR_Word check_hlds__inst_match__Uniq_4,
  MR_Word check_hlds__inst_match__BoundInsts_5,
  MR_Word check_hlds__inst_match__ModuleInfo_6);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(
  MR_Word check_hlds__inst_match__BoundInsts_4,
  MR_Word check_hlds__inst_match__Uniq_5,
  MR_Word check_hlds__inst_match__ModuleInfo_6);

static MR_Word MR_CALL 
check_hlds__inst_match__swap_calculate_sub_1_f_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4(
  void * check_hlds__inst_match__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(
  void * check_hlds__inst_match__env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(
  MR_Word check_hlds__inst_match__Expansions_5,
  MR_Word check_hlds__inst_match__ModuleInfo_6,
  MR_Word check_hlds__inst_match__BoundInsts_7,
  MR_Word check_hlds__inst_match__Type_8);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.inst_match.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0 = {
  (MR_String) "cs_forward",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1 = {
  (MR_String) "cs_reverse",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2 = {
  (MR_String) "cs_none",
  (MR_Integer) 2
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____calculate_sub_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____calculate_sub_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "calculate_sub",
  {     check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_expansions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_match____Unify____expansions_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____expansions_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "expansions",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0 = {
  (MR_String) "ground_matches_bound_if_complete",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1 = {
  (MR_String) "ground_matches_bound_always",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "ground_matches_bound",
  {     check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_ground_matches_bound_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_ground_matches_bound_0
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
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0 = {
  (MR_String) "inst_match_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0,
  check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0,
  check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0
};

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_match_info_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_match_info_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_match_info",
  {     check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0 = {
  (MR_String) "inst_match_inputs",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0
};

static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_match_inputs",
  {     check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0
};

static const MR_VA_TypeInfo_Struct5 check_hlds__inst_match____vti_pred_5parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__inst_match__type_ctor_info_inst_match_info_0check_hlds__inst_match__type_ctor_info_inst_match_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_TypeInfo) &check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0,
    (MR_TypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_matches_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_matches_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__inst_match____vti_pred_5parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__inst_match__type_ctor_info_inst_match_info_0check_hlds__inst_match__type_ctor_info_inst_match_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0 = {
  (MR_String) "uc_match",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1 = {
  (MR_String) "uc_instantiated",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "uniqueness_comparison",
  {     check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0
};

static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Integer check_hlds__inst_match__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
    MR_Integer check_hlds__inst_match__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__Cast_HeadVar1_4, check_hlds__inst_match__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
  MR_Word check_hlds__inst_match__HeadVar__2_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_1 == check_hlds__inst_match__HeadVar__2_2);

    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Cast_HeadVar1_4 = check_hlds__inst_match__HeadVar__2_2;
    MR_Word check_hlds__inst_match__Cast_HeadVar2_5 = check_hlds__inst_match__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_3[0], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Cast_HeadVar1_3 = check_hlds__inst_match__HeadVar__1_1;
    MR_Word check_hlds__inst_match__Cast_HeadVar2_4 = check_hlds__inst_match__HeadVar__2_2;

    {
      check_hlds__inst_match__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) check_hlds__inst_match__Cast_HeadVar1_3, (MR_Word) check_hlds__inst_match__Cast_HeadVar2_4);
    }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Integer check_hlds__inst_match__CastX_12 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
    MR_Integer check_hlds__inst_match__CastY_13 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_12 == check_hlds__inst_match__CastY_13);
    if (check_hlds__inst_match__succeeded)
      *check_hlds__inst_match__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__inst_match__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__Var_10;

        {
          parse_tree__prog_data____Compare____mer_inst_0_0(&check_hlds__inst_match__Var_10, check_hlds__inst_match__ArgX1_4, check_hlds__inst_match__ArgY1_5);
        }
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_10 == (MR_Integer) 0);
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
        if (check_hlds__inst_match__succeeded)
          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__Var_10;
        else
          {
            MR_Word check_hlds__inst_match__Var_11;

            {
              parse_tree__prog_data____Compare____mer_inst_0_0(&check_hlds__inst_match__Var_11, check_hlds__inst_match__ArgX2_6, check_hlds__inst_match__ArgY2_7);
            }
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_11 == (MR_Integer) 0);
            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
            if (check_hlds__inst_match__succeeded)
              *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[1], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__ArgX3_8)), ((MR_Box) (check_hlds__inst_match__ArgY3_9)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Integer check_hlds__inst_match__CastX_9 = (MR_Integer) check_hlds__inst_match__HeadVar__1_1;
    MR_Integer check_hlds__inst_match__CastY_10 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;

    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_9 == check_hlds__inst_match__CastY_10);
    if (check_hlds__inst_match__succeeded)
      check_hlds__inst_match__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__inst_match__TypeInfo_13_13;
        MR_Word check_hlds__inst_match__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));

        {
          check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__ArgX1_3, check_hlds__inst_match__ArgY1_4);
        }
        if (check_hlds__inst_match__succeeded)
          {
            {
              check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__ArgX2_5, check_hlds__inst_match__ArgY2_6);
            }
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__TypeInfo_13_13 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
                {
                  check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_13_13, ((MR_Box) (check_hlds__inst_match__ArgX3_7)), ((MR_Box) (check_hlds__inst_match__ArgY3_8)));
                }
              }
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Integer check_hlds__inst_match__CastX_24 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
    MR_Integer check_hlds__inst_match__CastY_25 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_24 == check_hlds__inst_match__CastY_25);
    if (check_hlds__inst_match__succeeded)
      *check_hlds__inst_match__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__inst_match__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__ArgX4_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
        MR_Word check_hlds__inst_match__ArgY4_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 3);
        MR_Word check_hlds__inst_match__ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__ArgX6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__ArgY6_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_18;

        {
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__inst_match__Var_18, check_hlds__inst_match__ArgX1_4, check_hlds__inst_match__ArgY1_5);
        }
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_18 == (MR_Integer) 0);
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
        if (check_hlds__inst_match__succeeded)
          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__Var_18;
        else
          {
            MR_Word check_hlds__inst_match__Var_19;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], &check_hlds__inst_match__Var_19, ((MR_Box) (check_hlds__inst_match__ArgX2_6)), ((MR_Box) (check_hlds__inst_match__ArgY2_7)));
            }
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_19 == (MR_Integer) 0);
            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
            if (check_hlds__inst_match__succeeded)
              *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__Var_19;
            else
              {
                MR_Word check_hlds__inst_match__Var_20;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[3], &check_hlds__inst_match__Var_20, ((MR_Box) (check_hlds__inst_match__ArgX3_8)), ((MR_Box) (check_hlds__inst_match__ArgY3_9)));
                }
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_20 == (MR_Integer) 0);
                check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
                if (check_hlds__inst_match__succeeded)
                  *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__Var_20;
                else
                  {
                    MR_Word check_hlds__inst_match__Var_21;
                    MR_Integer check_hlds__inst_match__Var_33 = (MR_Integer) check_hlds__inst_match__ArgX4_10;
                    MR_Integer check_hlds__inst_match__Var_34 = (MR_Integer) check_hlds__inst_match__ArgY4_11;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_match__Var_21, check_hlds__inst_match__Var_33, check_hlds__inst_match__Var_34);
                    }
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_21 == (MR_Integer) 0);
                    check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
                    if (check_hlds__inst_match__succeeded)
                      *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__Var_21;
                    else
                      {
                        MR_Word check_hlds__inst_match__Var_22;
                        MR_Integer check_hlds__inst_match__Var_35 = (MR_Integer) check_hlds__inst_match__ArgX5_12;
                        MR_Integer check_hlds__inst_match__Var_36 = (MR_Integer) check_hlds__inst_match__ArgY5_13;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_match__Var_22, check_hlds__inst_match__Var_35, check_hlds__inst_match__Var_36);
                        }
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_22 == (MR_Integer) 0);
                        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
                        if (check_hlds__inst_match__succeeded)
                          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__Var_22;
                        else
                          {
                            MR_Word check_hlds__inst_match__Var_23;
                            MR_Integer check_hlds__inst_match__Var_37 = (MR_Integer) check_hlds__inst_match__ArgX6_14;
                            MR_Integer check_hlds__inst_match__Var_38 = (MR_Integer) check_hlds__inst_match__ArgY6_15;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_match__Var_23, check_hlds__inst_match__Var_37, check_hlds__inst_match__Var_38);
                            }
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_23 == (MR_Integer) 0);
                            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
                            if (check_hlds__inst_match__succeeded)
                              *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__Var_23;
                            else
                              {
                                MR_Integer check_hlds__inst_match__Var_39 = (MR_Integer) check_hlds__inst_match__ArgX7_16;
                                MR_Integer check_hlds__inst_match__Var_40 = (MR_Integer) check_hlds__inst_match__ArgY7_17;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__Var_39, check_hlds__inst_match__Var_40);
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
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Integer check_hlds__inst_match__CastX_17 = (MR_Integer) check_hlds__inst_match__HeadVar__1_1;
    MR_Integer check_hlds__inst_match__CastY_18 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;

    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_17 == check_hlds__inst_match__CastY_18);
    if (check_hlds__inst_match__succeeded)
      check_hlds__inst_match__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__inst_match__TypeInfo_20_20;
        MR_Word check_hlds__inst_match__TypeInfo_21_21;
        MR_Word check_hlds__inst_match__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__ArgX4_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 3);
        MR_Word check_hlds__inst_match__ArgY4_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
        MR_Word check_hlds__inst_match__ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__ArgX6_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__ArgY6_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

        {
          check_hlds__inst_match__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__inst_match__ArgX1_3, check_hlds__inst_match__ArgY1_4);
        }
        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match__TypeInfo_20_20 = (MR_Word) &check_hlds__inst_match_scalar_common_1[2];
            {
              check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_20_20, ((MR_Box) (check_hlds__inst_match__ArgX2_5)), ((MR_Box) (check_hlds__inst_match__ArgY2_6)));
            }
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__TypeInfo_21_21 = (MR_Word) &check_hlds__inst_match_scalar_common_1[3];
                {
                  check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_21_21, ((MR_Box) (check_hlds__inst_match__ArgX3_7)), ((MR_Box) (check_hlds__inst_match__ArgY3_8)));
                }
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArgX4_9 == check_hlds__inst_match__ArgY4_10);
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArgX5_11 == check_hlds__inst_match__ArgY5_12);
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArgX6_13 == check_hlds__inst_match__ArgY6_14);
                            if (check_hlds__inst_match__succeeded)
                              check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArgX7_15 == check_hlds__inst_match__ArgY7_16);
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Integer check_hlds__inst_match__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
    MR_Integer check_hlds__inst_match__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__Cast_HeadVar1_4, check_hlds__inst_match__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0(
  MR_Word check_hlds__inst_match__HeadVar__2_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_1 == check_hlds__inst_match__HeadVar__2_2);

    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Cast_HeadVar1_4 = check_hlds__inst_match__HeadVar__2_2;
    MR_Word check_hlds__inst_match__Cast_HeadVar2_5 = check_hlds__inst_match__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Cast_HeadVar1_3 = check_hlds__inst_match__HeadVar__1_1;
    MR_Word check_hlds__inst_match__Cast_HeadVar2_4 = check_hlds__inst_match__HeadVar__2_2;

    {
      check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_4)));
    }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Integer check_hlds__inst_match__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
    MR_Integer check_hlds__inst_match__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__Cast_HeadVar1_4, check_hlds__inst_match__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0(
  MR_Word check_hlds__inst_match__HeadVar__2_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_1 == check_hlds__inst_match__HeadVar__2_2);

    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_complete_for_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word check_hlds__inst_match__Var_21;
          MR_Word check_hlds__inst_match__Var_22;

          {
            check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8, &check_hlds__inst_match__Var_21, &check_hlds__inst_match__Var_22, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1, check_hlds__inst_match__env_ptr);
          }
        }
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_27 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_Var_27);
    {
      check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(check_hlds__inst_match__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_27, (MR_Integer) 0)));
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_27, (MR_Integer) 1)));
    {
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23);
    }
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
      {
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_28 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6));
        }
        {
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = mercury__list__map_3_p_5((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Var_28, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24);
        }
        if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
          {
            check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(check_hlds__inst_match__env_ptr);
          }
      }
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_Var_27, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7, check_hlds__inst_match__env_ptr);
          }
        }
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    {
      check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(check_hlds__inst_match__env_ptr);
    }
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
      {
        check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(check_hlds__inst_match__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1) == 0)
      {
        {
          check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4, check_hlds__inst_match__env_ptr);
        }
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
  MR_Word check_hlds__inst_match__Expansions_5,
  MR_Word check_hlds__inst_match__ModuleInfo_6,
  MR_Word check_hlds__inst_match__Inst_7,
  MR_Word check_hlds__inst_match__Type_8)
{
  {
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s check_hlds__inst_match__env;

    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__Expansions_5;
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6 = check_hlds__inst_match__ModuleInfo_6;
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8 = check_hlds__inst_match__Type_8;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        {
          MR_Word check_hlds__inst_match__Name_9;

          (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
            {
              check_hlds__inst_match__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 1)));
              {
                (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_match__Name_9)), (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5);
              }
              if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
                (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
              else
                {
                  MR_Word check_hlds__inst_match__ExpandedInst_10;
                  MR_Word check_hlds__inst_match__Var_14;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, check_hlds__inst_match__Name_9, &check_hlds__inst_match__ExpandedInst_10);
                  }
                  {
                    check_hlds__inst_match__Var_14 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5, ((MR_Box) (check_hlds__inst_match__Name_9)));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_match__next_value_of_Expansions_5 = check_hlds__inst_match__Var_14;
                    MR_Word check_hlds__inst_match__next_value_of_Inst_7 = check_hlds__inst_match__ExpandedInst_10;

                    check_hlds__inst_match__Inst_7 = check_hlds__inst_match__next_value_of_Inst_7;
                    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__next_value_of_Expansions_5;
                  }
                  continue;
                }
            }
          else
            {
              MR_Word check_hlds__inst_match__Var_11;
              MR_Word check_hlds__inst_match__Var_12;

              (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
                {
                  check_hlds__inst_match__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 1)));
                  check_hlds__inst_match__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 2)));
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 3)));
                  {
                    check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(&check_hlds__inst_match__env);
                  }
                  if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
                    {
                      {
                        check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(&check_hlds__inst_match__env);
                      }
                      (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
                    }
                }
              else
                {
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = (check_hlds__inst_match__Inst_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
                }
            }
          return (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded;
        }
        break;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__MaybeType_7,
  MR_Word check_hlds__inst_match__InstVar_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    MR_Word check_hlds__inst_match__Var_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_86 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
    MR_Word check_hlds__inst_match__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    MR_Word check_hlds__inst_match__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));

    if ((check_hlds__inst_match__Var_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__inst_match__Var_20;
        MR_Word check_hlds__inst_match__InstVarSub_28;
        MR_Word check_hlds__inst_match__Var_68;
        MR_Word check_hlds__inst_match__Var_69;
        MR_Word check_hlds__inst_match__Var_71;
        MR_Word check_hlds__inst_match__Var_72;
        MR_Word check_hlds__inst_match__Var_73;
        MR_Word check_hlds__inst_match__Var_74;
        MR_Word check_hlds__inst_match__Var_70;

        {
          check_hlds__inst_match__InstVarSub_28 = mercury__map__singleton_2_f_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__InstA_6)));
        }
        {
          check_hlds__inst_match__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_20, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_28));
        }
        check_hlds__inst_match__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
        check_hlds__inst_match__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
        check_hlds__inst_match__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
        check_hlds__inst_match__Var_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__Var_68));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__Var_69));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__Var_20));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__Var_71 | ((((check_hlds__inst_match__Var_72 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_73 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_74 << (MR_Integer) 4)))))))));
        }
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_match__InstVarSub0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_87, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__InstB_11;
        MR_Box check_hlds__inst_match__conv0_InstB_11;

        {
          check_hlds__inst_match__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__InstVarSub0_10, ((MR_Box) (check_hlds__inst_match__InstVar_8)), &check_hlds__inst_match__conv0_InstB_11);
        }
        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match__InstB_11 = ((MR_Word) check_hlds__inst_match__conv0_InstB_11);
            check_hlds__inst_match__succeeded = MR_TRUE;
          }
        if (check_hlds__inst_match__succeeded)
          {
            MR_Word check_hlds__inst_match__TypeInfo_77_77;
            MR_Word check_hlds__inst_match__TypeCtorInfo_78_78;
            MR_Word check_hlds__inst_match__ModuleInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__Inst_13;
            MR_Word check_hlds__inst_match__ModuleInfo_14;
            MR_Word check_hlds__inst_match__InstVarSub_15;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_22_22;
            MR_Word check_hlds__inst_match__Var_24;
            MR_Word check_hlds__inst_match__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
            MR_Word check_hlds__inst_match__Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
            MR_Word check_hlds__inst_match__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word check_hlds__inst_match__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word check_hlds__inst_match__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word check_hlds__inst_match__Var_42;
            MR_Word check_hlds__inst_match__Var_43;
            MR_Word check_hlds__inst_match__Var_44;
            MR_Word check_hlds__inst_match__Var_45;
            MR_Word check_hlds__inst_match__Var_46;
            MR_Word check_hlds__inst_match__Var_47;
            MR_Word check_hlds__inst_match__Var_41;
            MR_Word check_hlds__inst_match__Var_48;
            MR_Word check_hlds__inst_match__Var_49;
            MR_Word check_hlds__inst_match__Var_51;
            MR_Word check_hlds__inst_match__Var_52;
            MR_Word check_hlds__inst_match__Var_53;
            MR_Word check_hlds__inst_match__Var_54;
            MR_Word check_hlds__inst_match__Var_50;

            {
              check_hlds__inst_match__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_11, check_hlds__inst_match__MaybeType_7, &check_hlds__inst_match__Inst_13, check_hlds__inst_match__ModuleInfo0_12, &check_hlds__inst_match__ModuleInfo_14);
            }
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
                check_hlds__inst_match__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
                check_hlds__inst_match__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
                check_hlds__inst_match__Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
                check_hlds__inst_match__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                check_hlds__inst_match__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                check_hlds__inst_match__Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                {
                  check_hlds__inst_match__STATE_VARIABLE_Info_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_14));
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 1) = ((MR_Box) (check_hlds__inst_match__Var_42));
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 2) = ((MR_Box) (check_hlds__inst_match__Var_43));
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 3) = ((MR_Box) ((check_hlds__inst_match__Var_44 | ((((check_hlds__inst_match__Var_45 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_46 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_47 << (MR_Integer) 4)))))))));
                }
                check_hlds__inst_match__TypeInfo_77_77 = (MR_Word) &check_hlds__inst_match_scalar_common_1[0];
                check_hlds__inst_match__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                {
                  mercury__map__det_update_4_p_0(check_hlds__inst_match__TypeInfo_77_77, check_hlds__inst_match__TypeCtorInfo_78_78, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__Inst_13)), check_hlds__inst_match__InstVarSub0_10, &check_hlds__inst_match__InstVarSub_15);
                }
                {
                  check_hlds__inst_match__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_24, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_15));
                }
                check_hlds__inst_match__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 0)));
                check_hlds__inst_match__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 1)));
                check_hlds__inst_match__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 2)));
                check_hlds__inst_match__Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) & (MR_Integer) 3);
                check_hlds__inst_match__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                check_hlds__inst_match__Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                check_hlds__inst_match__Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__Var_48));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__Var_49));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__Var_24));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__Var_51 | ((((check_hlds__inst_match__Var_52 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_53 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_54 << (MR_Integer) 4)))))))));
                }
                check_hlds__inst_match__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word check_hlds__inst_match__Var_26;
            MR_Word check_hlds__inst_match__InstVarSub_27;
            MR_Word check_hlds__inst_match__Var_55;
            MR_Word check_hlds__inst_match__Var_56;
            MR_Word check_hlds__inst_match__Var_58;
            MR_Word check_hlds__inst_match__Var_59;
            MR_Word check_hlds__inst_match__Var_60;
            MR_Word check_hlds__inst_match__Var_61;
            MR_Word check_hlds__inst_match__Var_57;

            {
              mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__InstA_6)), check_hlds__inst_match__InstVarSub0_10, &check_hlds__inst_match__InstVarSub_27);
            }
            {
              check_hlds__inst_match__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_26, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_27));
            }
            check_hlds__inst_match__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
            check_hlds__inst_match__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
            check_hlds__inst_match__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
            check_hlds__inst_match__Var_58 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
            check_hlds__inst_match__Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            check_hlds__inst_match__Var_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            check_hlds__inst_match__Var_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__Var_55));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__Var_56));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__Var_26));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__Var_58 | ((((check_hlds__inst_match__Var_59 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_60 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_61 << (MR_Integer) 4)))))))));
            }
            check_hlds__inst_match__succeeded = MR_TRUE;
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word * check_hlds__inst_match__InstVar_5,
  MR_Cont check_hlds__inst_match__cont,
  void * check_hlds__inst_match__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__inst_match__Inst_3;
        MR_Word check_hlds__inst_match__Insts_4;

        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__inst_match__Insts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
            {
              check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__Inst_3, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
            }
            {
              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__Insts_4;

                check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
              }
              continue;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word * check_hlds__inst_match__InstVar_5,
  MR_Cont check_hlds__inst_match__cont,
  void * check_hlds__inst_match__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__inst_match__BoundInst_3;
        MR_Word check_hlds__inst_match__BoundInsts_4;
        MR_Word check_hlds__inst_match__ArgInsts_7;
        MR_Word check_hlds__inst_match___Functor_6;

        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match__BoundInst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__inst_match__BoundInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
            check_hlds__inst_match___Functor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_3, (MR_Integer) 0)));
            check_hlds__inst_match__ArgInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_3, (MR_Integer) 1)));
            {
              check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_7, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
            }
            {
              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__BoundInsts_4;

                check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
              }
              continue;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_2(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    *((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4) = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__conv0_InstVar_4);
    {
      check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(check_hlds__inst_match__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_3(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) &check_hlds__inst_match_scalar_common_1[0];
    {
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__TypeInfo_28_28, ((MR_Box) (*((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4))), ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__Var_27)));
    }
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded)
      {
        ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont)((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    {
      check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__Var_27, check_hlds__inst_match__inst_contains_inst_var_2_p_0_3, check_hlds__inst_match__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0(
  MR_Word check_hlds__inst_match__Inst_3,
  MR_Word * check_hlds__inst_match__InstVar_4,
  MR_Cont check_hlds__inst_match__cont,
  void * check_hlds__inst_match__cont_env_ptr)
{
  {
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s check_hlds__inst_match__env;

    (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4 = check_hlds__inst_match__InstVar_4;
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont = check_hlds__inst_match__cont;
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr = check_hlds__inst_match__cont_env_ptr;
    switch (MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) {
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) {
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_match__InstResults_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match___Uniq_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

              (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 3)));
              if ((check_hlds__inst_match__InstResults_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
                }
              else
              if (((MR_tag((MR_Word) check_hlds__inst_match__InstResults_7)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word check_hlds__inst_match__InstVarResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 3)));
                  MR_Word check_hlds__inst_match__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 0)));
                  MR_Word check_hlds__inst_match__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_match__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_match__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 4)));
                  MR_Word check_hlds__inst_match__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 5)));

                  if ((check_hlds__inst_match__InstVarResult_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
                    }
                  else
                    {
                      MR_Word check_hlds__inst_match__InstVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstVarResult_12, (MR_Integer) 0)));

                      {
                        mercury__set__member_2_p_1((MR_Word) &check_hlds__inst_match_scalar_common_1[0], &(check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__conv0_InstVar_4, check_hlds__inst_match__InstVars_15, check_hlds__inst_match__inst_contains_inst_var_2_p_0_2, &check_hlds__inst_match__env);
                      }
                    }
                }
              else
                {
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_match__HOInstInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__Modes_18;
              MR_Word check_hlds__inst_match__Var_23;
              MR_Word check_hlds__inst_match___Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));
              MR_Word check_hlds__inst_match___PredOrFunc_17;
              MR_Word check_hlds__inst_match__Var_19;
              MR_Word check_hlds__inst_match___Det_20;

              (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HOInstInfo_16)) == (MR_mktag((MR_Integer) 1)));
              if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded)
                {
                  check_hlds__inst_match__Var_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_16), (MR_Integer) 1);
                  check_hlds__inst_match___PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_23, (MR_Integer) 0)));
                  check_hlds__inst_match__Modes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_23, (MR_Integer) 1)));
                  check_hlds__inst_match__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_23, (MR_Integer) 2)));
                  check_hlds__inst_match___Det_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_23, (MR_Integer) 3)));
                  {
                    check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(check_hlds__inst_match__Modes_18, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              *((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4) = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));
              {
                ((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont)((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__inst_match__InstName_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

              {
                check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(check_hlds__inst_match__InstName_5, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__inst_match__ArgInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match___Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

              {
                check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_22, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(
  MR_Word check_hlds__inst_match__InstName_3,
  MR_Word * check_hlds__inst_match__InstVar_4,
  MR_Cont check_hlds__inst_match__cont,
  void * check_hlds__inst_match__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_match__InstName_3)) {
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_match__ArgInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
              MR_Word check_hlds__inst_match___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));

              {
                check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_6, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_match__InstA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__InstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 3)));
              MR_Word check_hlds__inst_match___Live_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));
              MR_Word check_hlds__inst_match___Real_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

              {
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstA_14, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
              {
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstB_15, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__inst_match__InstA_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));
              MR_Word check_hlds__inst_match__InstB_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

              {
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstA_7, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
              {
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstB_8, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 0)))) {
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_match__SubInstName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_match___Uniq_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word check_hlds__inst_match___Live_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) & (MR_Integer) 7);
                  MR_Word check_hlds__inst_match___Real_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_match__next_value_of_InstName_3 = check_hlds__inst_match__SubInstName_11;

                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__next_value_of_InstName_3;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__inst_match__SubInstName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_match___Live_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) & (MR_Integer) 7);
                  MR_Word check_hlds__inst_match___Real_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word check_hlds__inst_match___Uniq_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_match__next_value_of_InstName_3 = check_hlds__inst_match__SubInstName_25;

                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__next_value_of_InstName_3;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__inst_match__SubInstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_match__next_value_of_InstName_3 = check_hlds__inst_match__SubInstName_27;

                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__next_value_of_InstName_3;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_match__SubInstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_match__next_value_of_InstName_3 = check_hlds__inst_match__SubInstName_28;

                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__next_value_of_InstName_3;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__inst_match__SubInstName_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_match___Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_match__next_value_of_InstName_3 = check_hlds__inst_match__SubInstName_32;

                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__next_value_of_InstName_3;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_1(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    {
      check_hlds__inst_match__inst_contains_inst_var_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__Inst_10, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__InstVar_5, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_2(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__Inst_10 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__conv0_Inst_10);
    {
      check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_1(check_hlds__inst_match__env_ptr);
    }
  }
}

void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word * check_hlds__inst_match__InstVar_5,
  MR_Cont check_hlds__inst_match__cont,
  void * check_hlds__inst_match__cont_env_ptr)
{
  {
    struct check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0_s check_hlds__inst_match__env;

    (check_hlds__inst_match__env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__InstVar_5 = check_hlds__inst_match__InstVar_5;
    (check_hlds__inst_match__env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont = check_hlds__inst_match__cont;
    (check_hlds__inst_match__env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__cont_env_ptr = check_hlds__inst_match__cont_env_ptr;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        {
          MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
          MR_Word check_hlds__inst_match__Mode_3;
          MR_Word check_hlds__inst_match__Modes_4;

          if (check_hlds__inst_match__succeeded)
            {
              check_hlds__inst_match__Mode_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
              check_hlds__inst_match__Modes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
              {
                if (((MR_tag((MR_Word) check_hlds__inst_match__Mode_3)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word check_hlds__inst_match__Initial_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Mode_3, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__Final_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Mode_3, (MR_Integer) 1)));

                    (check_hlds__inst_match__env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__Inst_10 = check_hlds__inst_match__Initial_8;
                    {
                      check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_1(&check_hlds__inst_match__env);
                    }
                    (check_hlds__inst_match__env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__Inst_10 = check_hlds__inst_match__Final_9;
                    {
                      check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_1(&check_hlds__inst_match__env);
                    }
                  }
                else
                  {
                    MR_Word check_hlds__inst_match__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__Mode_3, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match___Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__Mode_3, (MR_Integer) 0)));

                    {
                      mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(check_hlds__inst_match__env).check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_env_0__conv0_Inst_10, check_hlds__inst_match__Insts_12, check_hlds__inst_match__mode_list_contains_inst_var_2_p_0_2, &check_hlds__inst_match__env);
                    }
                  }
              }
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__Modes_4;

                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            }
        }
        break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_3_p_0(
  MR_Word check_hlds__inst_match__PredInstA_4,
  MR_Word check_hlds__inst_match__PredInstB_5,
  MR_Word check_hlds__inst_match__ModuleInfo_6)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__TypeCtorInfo_21_42;
    MR_Word check_hlds__inst_match__Info0_12;
    MR_Word check_hlds__inst_match__Var_25;
    MR_Word check_hlds__inst_match__PredOrFunc_33;
    MR_Word check_hlds__inst_match__ModesA_34;
    MR_Word check_hlds__inst_match__Det_36;
    MR_Word check_hlds__inst_match__ModesB_37;
    MR_Word check_hlds__inst_match__MaybeTypes_39;
    MR_Integer check_hlds__inst_match__Var_40;
    MR_Word check_hlds__inst_match__Var_43;
    MR_Word check_hlds__inst_match__Var_44;
    MR_Word check_hlds__inst_match___MaybeArgRegsA_35;
    MR_Word check_hlds__inst_match___MaybeArgRegsB_38;
    MR_Word check_hlds__inst_match__Var_13;

    {
      check_hlds__inst_match__Var_25 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    check_hlds__inst_match__PredOrFunc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 0)));
    check_hlds__inst_match__ModesA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 1)));
    check_hlds__inst_match___MaybeArgRegsA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 2)));
    check_hlds__inst_match__Det_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 3)));
    check_hlds__inst_match__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 0)));
    check_hlds__inst_match__ModesB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 1)));
    check_hlds__inst_match___MaybeArgRegsB_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 2)));
    check_hlds__inst_match__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 3)));
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_33 == check_hlds__inst_match__Var_43);
    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_36 == check_hlds__inst_match__Var_44);
        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match__TypeCtorInfo_21_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
            {
              check_hlds__inst_match__Info0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_6));
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 1) = ((MR_Box) (check_hlds__inst_match__Var_25));
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
            }
            {
              check_hlds__inst_match__Var_40 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_42, check_hlds__inst_match__ModesA_34);
            }
            {
              check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__Var_40, &check_hlds__inst_match__MaybeTypes_39);
            }
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_34, check_hlds__inst_match__ModesB_37, check_hlds__inst_match__MaybeTypes_39, check_hlds__inst_match__Info0_12, &check_hlds__inst_match__Var_13);
            }
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_2_p_0(
  MR_Word check_hlds__inst_match__ModuleInfo_3,
  MR_Word check_hlds__inst_match__PredInst_4)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info_9;
    MR_Word check_hlds__inst_match__Var_22;
    MR_Word check_hlds__inst_match__PredOrFunc_29;
    MR_Word check_hlds__inst_match__ArgModes_30;
    MR_Word check_hlds__inst_match__Var_31;
    MR_Word check_hlds__inst_match__Var_32;

    {
      check_hlds__inst_match__Var_22 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    check_hlds__inst_match__PredOrFunc_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 0)));
    check_hlds__inst_match__ArgModes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 1)));
    check_hlds__inst_match__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 2)));
    check_hlds__inst_match__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 3)));
    {
      check_hlds__inst_match__Info_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_3));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 1) = ((MR_Box) (check_hlds__inst_match__Var_22));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    switch (check_hlds__inst_match__PredOrFunc_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_match__TypeCtorInfo_21_52;
          MR_Integer check_hlds__inst_match__Arity_33;
          MR_Word check_hlds__inst_match__DefaultFunc_34;
          MR_Word check_hlds__inst_match__PredOrFunc_43;
          MR_Word check_hlds__inst_match__ModesA_44;
          MR_Word check_hlds__inst_match__Det_46;
          MR_Word check_hlds__inst_match__ModesB_47;
          MR_Word check_hlds__inst_match__MaybeTypes_49;
          MR_Integer check_hlds__inst_match__Var_50;
          MR_Word check_hlds__inst_match__Var_53;
          MR_Word check_hlds__inst_match__Var_54;
          MR_Word check_hlds__inst_match___MaybeArgRegsA_45;
          MR_Word check_hlds__inst_match___MaybeArgRegsB_48;
          MR_Word check_hlds__inst_match__Var_10;

          {
            check_hlds__inst_match__Arity_33 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__inst_match__ArgModes_30);
          }
          {
            check_hlds__inst_match__DefaultFunc_34 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_33);
          }
          check_hlds__inst_match__PredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 0)));
          check_hlds__inst_match__ModesA_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 1)));
          check_hlds__inst_match___MaybeArgRegsA_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 2)));
          check_hlds__inst_match__Det_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 3)));
          check_hlds__inst_match__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__DefaultFunc_34, (MR_Integer) 0)));
          check_hlds__inst_match__ModesB_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__DefaultFunc_34, (MR_Integer) 1)));
          check_hlds__inst_match___MaybeArgRegsB_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__DefaultFunc_34, (MR_Integer) 2)));
          check_hlds__inst_match__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__DefaultFunc_34, (MR_Integer) 3)));
          check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_43 == check_hlds__inst_match__Var_53);
          if (check_hlds__inst_match__succeeded)
            {
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_46 == check_hlds__inst_match__Var_54);
              if (check_hlds__inst_match__succeeded)
                {
                  check_hlds__inst_match__TypeCtorInfo_21_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                  {
                    check_hlds__inst_match__Var_50 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_52, check_hlds__inst_match__ModesA_44);
                  }
                  {
                    check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__Var_50, &check_hlds__inst_match__MaybeTypes_49);
                  }
                  {
                    check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_44, check_hlds__inst_match__ModesB_47, check_hlds__inst_match__MaybeTypes_49, check_hlds__inst_match__Info_9, &check_hlds__inst_match__Var_10);
                  }
                }
            }
        }
        break;
      case (MR_Integer) 0:
        check_hlds__inst_match__succeeded = MR_TRUE;
        break;
    }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_2_p_0(
  MR_Word check_hlds__inst_match__ModuleInfo_3,
  MR_Word check_hlds__inst_match__HOInstInfo_4)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info_9;
    MR_Word check_hlds__inst_match__Var_22;

    {
      check_hlds__inst_match__Var_22 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_3));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 1) = ((MR_Box) (check_hlds__inst_match__Var_22));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    if ((check_hlds__inst_match__HOInstInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__inst_match__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__inst_match__PredInst_29 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_4), (MR_Integer) 1);
        MR_Word check_hlds__inst_match__PredOrFunc_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_29, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__ArgModes_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_29, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_29, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_29, (MR_Integer) 3)));

        switch (check_hlds__inst_match__PredOrFunc_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer check_hlds__inst_match__Arity_40;
              MR_Word check_hlds__inst_match__DefaultFunc_41;
              MR_Word check_hlds__inst_match__Var_10;

              {
                check_hlds__inst_match__Arity_40 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__inst_match__ArgModes_37);
              }
              {
                check_hlds__inst_match__DefaultFunc_41 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_40);
              }
              {
                check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(check_hlds__inst_match__PredInst_29, check_hlds__inst_match__DefaultFunc_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__Info_9, &check_hlds__inst_match__Var_10);
              }
            }
            break;
          case (MR_Integer) 0:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
        }
      }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(
  MR_Word check_hlds__inst_match__ModuleInfo_3,
  MR_Word check_hlds__inst_match__Inst_4)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info_5;
    MR_Word check_hlds__inst_match__Var_13;
    MR_Word check_hlds__inst_match__Var_20;
    MR_Word check_hlds__inst_match__Var_27;
    MR_Word check_hlds__inst_match__Var_6;

    {
      check_hlds__inst_match__Var_20 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_5, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_3));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_5, 1) = ((MR_Box) (check_hlds__inst_match__Var_20));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_5, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_5, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__Var_27 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
    }
    {
      check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(check_hlds__inst_match__Inst_4, check_hlds__inst_match__Var_27, &check_hlds__inst_match__Var_13, check_hlds__inst_match__Info_5, &check_hlds__inst_match__Var_6);
    }
    check_hlds__inst_match__succeeded = ((MR_Integer) 1 == check_hlds__inst_match__Var_13);
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_allow_any_any_4_p_0(
  MR_Word check_hlds__inst_match__InstA_5,
  MR_Word check_hlds__inst_match__InstB_6,
  MR_Word check_hlds__inst_match__Type_7,
  MR_Word check_hlds__inst_match__ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info0_9;
    MR_Word check_hlds__inst_match__Var_16;
    MR_Word check_hlds__inst_match__ThisExpansion_31;
    MR_Word check_hlds__inst_match__Expansions0_32;
    MR_Word check_hlds__inst_match__Expansions_33;

    {
      check_hlds__inst_match__Expansions0_32 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__Expansions0_32));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
    }
    {
      check_hlds__inst_match__ThisExpansion_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_31, 0) = ((MR_Box) (check_hlds__inst_match__InstA_5));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_31, 1) = ((MR_Box) (check_hlds__inst_match__InstB_6));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_31, 2) = ((MR_Box) (check_hlds__inst_match__Var_16));
    }
    {
      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_31)), check_hlds__inst_match__Expansions0_32, &check_hlds__inst_match__Expansions_33);
    }
    if (check_hlds__inst_match__succeeded)
      {
        MR_Word check_hlds__inst_match__ExpandedInstA_34;
        MR_Word check_hlds__inst_match__ExpandedInstB_35;
        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_36;
        MR_Word check_hlds__inst_match__Var_38;
        MR_Word check_hlds__inst_match__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 3)))) & (MR_Integer) 3);
        MR_Word check_hlds__inst_match__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__Var_59;
        MR_Word check_hlds__inst_match__Var_60;
        MR_Word check_hlds__inst_match__Var_61;
        MR_Word check_hlds__inst_match__Var_62;
        MR_Word check_hlds__inst_match__Var_63;
        MR_Word check_hlds__inst_match__Var_64;
        MR_Word check_hlds__inst_match__Var_10;

        {
          check_hlds__inst_match__STATE_VARIABLE_Info_17_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, 0) = ((MR_Box) (check_hlds__inst_match__Var_46));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_33));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, 2) = ((MR_Box) (check_hlds__inst_match__Var_48));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, 3) = ((MR_Box) ((check_hlds__inst_match__Var_49 | ((((check_hlds__inst_match__Var_50 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_51 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_52 << (MR_Integer) 4)))))))));
        }
        {
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__Var_46, check_hlds__inst_match__InstA_5, &check_hlds__inst_match__ExpandedInstA_34);
        }
        check_hlds__inst_match__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 0)));
        check_hlds__inst_match__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 1)));
        check_hlds__inst_match__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 2)));
        check_hlds__inst_match__Var_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        {
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__Var_38, check_hlds__inst_match__InstB_6, &check_hlds__inst_match__ExpandedInstB_35);
        }
        {
          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_3_5_p_0(check_hlds__inst_match__ExpandedInstA_34, check_hlds__inst_match__ExpandedInstB_35, check_hlds__inst_match__Var_16, check_hlds__inst_match__STATE_VARIABLE_Info_17_36, &check_hlds__inst_match__Var_10);
        }
      }
    else
      check_hlds__inst_match__succeeded = MR_TRUE;
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_4_p_0(
  MR_Word check_hlds__inst_match__InstA_5,
  MR_Word check_hlds__inst_match__InstB_6,
  MR_Word check_hlds__inst_match__Type_7,
  MR_Word check_hlds__inst_match__ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info0_9;
    MR_Word check_hlds__inst_match__Var_16;
    MR_Word check_hlds__inst_match__ThisExpansion_31;
    MR_Word check_hlds__inst_match__Expansions0_32;
    MR_Word check_hlds__inst_match__Expansions_33;

    {
      check_hlds__inst_match__Expansions0_32 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__Expansions0_32));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
    }
    {
      check_hlds__inst_match__ThisExpansion_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_31, 0) = ((MR_Box) (check_hlds__inst_match__InstA_5));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_31, 1) = ((MR_Box) (check_hlds__inst_match__InstB_6));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_31, 2) = ((MR_Box) (check_hlds__inst_match__Var_16));
    }
    {
      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_31)), check_hlds__inst_match__Expansions0_32, &check_hlds__inst_match__Expansions_33);
    }
    if (check_hlds__inst_match__succeeded)
      {
        MR_Word check_hlds__inst_match__ExpandedInstA_34;
        MR_Word check_hlds__inst_match__ExpandedInstB_35;
        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_36;
        MR_Word check_hlds__inst_match__Var_38;
        MR_Word check_hlds__inst_match__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__Var_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 3)))) & (MR_Integer) 3);
        MR_Word check_hlds__inst_match__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__Var_59;
        MR_Word check_hlds__inst_match__Var_60;
        MR_Word check_hlds__inst_match__Var_61;
        MR_Word check_hlds__inst_match__Var_62;
        MR_Word check_hlds__inst_match__Var_63;
        MR_Word check_hlds__inst_match__Var_64;
        MR_Word check_hlds__inst_match__Var_10;

        {
          check_hlds__inst_match__STATE_VARIABLE_Info_17_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, 0) = ((MR_Box) (check_hlds__inst_match__Var_46));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_33));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, 2) = ((MR_Box) (check_hlds__inst_match__Var_48));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, 3) = ((MR_Box) ((check_hlds__inst_match__Var_49 | ((((check_hlds__inst_match__Var_50 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_51 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_52 << (MR_Integer) 4)))))))));
        }
        {
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__Var_46, check_hlds__inst_match__InstA_5, &check_hlds__inst_match__ExpandedInstA_34);
        }
        check_hlds__inst_match__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 0)));
        check_hlds__inst_match__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 1)));
        check_hlds__inst_match__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 2)));
        check_hlds__inst_match__Var_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_36, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        {
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__Var_38, check_hlds__inst_match__InstB_6, &check_hlds__inst_match__ExpandedInstB_35);
        }
        {
          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_3_5_p_0(check_hlds__inst_match__ExpandedInstA_34, check_hlds__inst_match__ExpandedInstB_35, check_hlds__inst_match__Var_16, check_hlds__inst_match__STATE_VARIABLE_Info_17_36, &check_hlds__inst_match__Var_10);
        }
      }
    else
      check_hlds__inst_match__succeeded = MR_TRUE;
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__MaybeType_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
            check_hlds__inst_match__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__Y_13;
            MR_Word check_hlds__inst_match__Ys_14;
            MR_Word check_hlds__inst_match__ConsIdX_17;
            MR_Word check_hlds__inst_match__ArgsX_18;
            MR_Word check_hlds__inst_match__ConsIdY_19;
            MR_Word check_hlds__inst_match__ArgsY_20;

            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
                {
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
                if (check_hlds__inst_match__succeeded)
                  {
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
                    MR_Word check_hlds__inst_match__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
                    MR_Integer check_hlds__inst_match__Var_25;
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
                    MR_Word check_hlds__inst_match__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
                    MR_Word check_hlds__inst_match__Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
                    MR_Word check_hlds__inst_match__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                    {
                      check_hlds__inst_match__Var_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
                    {
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__Var_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__Var_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_binding_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__Xs_12;
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__Ys_14;
                          MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4;
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
                else
                  {
                    MR_Word check_hlds__inst_match__QNameA_39;
                    MR_Integer check_hlds__inst_match__ArityA_40;
                    MR_Word check_hlds__inst_match__QNameB_42;
                    MR_Integer check_hlds__inst_match__ArityB_43;
                    MR_Word check_hlds__inst_match__Var_41;
                    MR_Word check_hlds__inst_match__Var_44;

                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__QNameA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
                        check_hlds__inst_match__ArityA_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
                        check_hlds__inst_match__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__QNameB_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
                            check_hlds__inst_match__ArityB_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
                            check_hlds__inst_match__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
                          }
                      }
                    if (check_hlds__inst_match__succeeded)
                      {
                        MR_String check_hlds__inst_match__NameA_45;
                        MR_String check_hlds__inst_match__NameB_47;
                        MR_Word check_hlds__inst_match__O_49;

                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_39)) == (MR_mktag((MR_Integer) 1))))
                          {
                            MR_Word check_hlds__inst_match__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));

                            check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 1)));
                          }
                        else
                          check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_42)) == (MR_mktag((MR_Integer) 1))))
                          {
                            MR_Word check_hlds__inst_match__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));

                            check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 1)));
                          }
                        else
                          check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));
                        {
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_49, check_hlds__inst_match__NameA_45, check_hlds__inst_match__NameB_47);
                        }
                        switch (check_hlds__inst_match__O_49) {
                          default:
                            check_hlds__inst_match__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_40 > check_hlds__inst_match__ArityB_43);
                            break;
                          case (MR_Integer) 2:
                            check_hlds__inst_match__succeeded = MR_TRUE;
                            break;
                        }
                      }
                    else
                      {
                        MR_Word check_hlds__inst_match__Var_53;

                        {
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__Var_53, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__Var_53);
                      }
                    if (check_hlds__inst_match__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__Ys_14;

                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                        }
                        continue;
                      }
                  }
              }
          }
        return check_hlds__inst_match__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__inst_match__succeeded)
                  {
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
                    check_hlds__inst_match__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            MR_Word check_hlds__inst_match__ArgA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__ArgsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__ArgB_11;
            MR_Word check_hlds__inst_match__ArgsB_12;
            MR_Word check_hlds__inst_match__MaybeType_13;
            MR_Word check_hlds__inst_match__MaybeTypes_14;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;
            MR_Word check_hlds__inst_match__ThisExpansion_26;
            MR_Word check_hlds__inst_match__Expansions0_27;
            MR_Word check_hlds__inst_match__Var_35;
            MR_Word check_hlds__inst_match__Var_36;
            MR_Word check_hlds__inst_match__Var_37;
            MR_Word check_hlds__inst_match__Var_38;
            MR_Word check_hlds__inst_match__Var_39;
            MR_Word check_hlds__inst_match__Var_40;
            MR_Word check_hlds__inst_match__Expansions_28;
            MR_Word check_hlds__inst_match__TypeCtorInfo_7_63;

            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__ArgB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__inst_match__ArgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
                    check_hlds__inst_match__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
                    check_hlds__inst_match__Expansions0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
                    check_hlds__inst_match__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
                    check_hlds__inst_match__Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
                    check_hlds__inst_match__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    check_hlds__inst_match__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    check_hlds__inst_match__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                    {
                      check_hlds__inst_match__ThisExpansion_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_26, 0) = ((MR_Box) (check_hlds__inst_match__ArgA_9));
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_26, 1) = ((MR_Box) (check_hlds__inst_match__ArgB_11));
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_26, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_13));
                    }
                    check_hlds__inst_match__TypeCtorInfo_7_63 = (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0;
                    {
                      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0(check_hlds__inst_match__TypeCtorInfo_7_63, ((MR_Box) (check_hlds__inst_match__ThisExpansion_26)), check_hlds__inst_match__Expansions0_27, &check_hlds__inst_match__Expansions_28);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        MR_Word check_hlds__inst_match__ExpandedInstA_29;
                        MR_Word check_hlds__inst_match__ExpandedInstB_30;
                        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_31;
                        MR_Word check_hlds__inst_match__Var_33;
                        MR_Word check_hlds__inst_match__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
                        MR_Word check_hlds__inst_match__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match__Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
                        MR_Word check_hlds__inst_match__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word check_hlds__inst_match__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        MR_Word check_hlds__inst_match__Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        MR_Word check_hlds__inst_match__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match__Var_54;
                        MR_Word check_hlds__inst_match__Var_55;
                        MR_Word check_hlds__inst_match__Var_56;
                        MR_Word check_hlds__inst_match__Var_57;
                        MR_Word check_hlds__inst_match__Var_58;
                        MR_Word check_hlds__inst_match__Var_59;

                        {
                          check_hlds__inst_match__STATE_VARIABLE_Info_17_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_31, 0) = ((MR_Box) (check_hlds__inst_match__Var_41));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_31, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_28));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_31, 2) = ((MR_Box) (check_hlds__inst_match__Var_43));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_31, 3) = ((MR_Box) ((check_hlds__inst_match__Var_44 | ((((check_hlds__inst_match__Var_45 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_46 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_47 << (MR_Integer) 4)))))))));
                        }
                        {
                          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__Var_41, check_hlds__inst_match__ArgA_9, &check_hlds__inst_match__ExpandedInstA_29);
                        }
                        check_hlds__inst_match__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_31, (MR_Integer) 0)));
                        check_hlds__inst_match__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_31, (MR_Integer) 1)));
                        check_hlds__inst_match__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_31, (MR_Integer) 2)));
                        check_hlds__inst_match__Var_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_31, (MR_Integer) 3)))) & (MR_Integer) 3);
                        check_hlds__inst_match__Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_31, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        check_hlds__inst_match__Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_31, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        check_hlds__inst_match__Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_31, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        {
                          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__Var_33, check_hlds__inst_match__ArgB_11, &check_hlds__inst_match__ExpandedInstB_30);
                        }
                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_3_5_p_0(check_hlds__inst_match__ExpandedInstA_29, check_hlds__inst_match__ExpandedInstB_30, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_17_31, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                        }
                      }
                    else
                      {
                        check_hlds__inst_match__STATE_VARIABLE_Info_18_18 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
                        check_hlds__inst_match__succeeded = MR_TRUE;
                      }
                    if (check_hlds__inst_match__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__ArgsA_10;
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__ArgsB_12;
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__3_3 = check_hlds__inst_match__MaybeTypes_14;
                          MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4;
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__next_value_of_HeadVar__3_3;
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return check_hlds__inst_match__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_3_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) {
      default:
        check_hlds__inst_match__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_match__InstA_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (check_hlds__inst_match__succeeded)
                {
                  *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
                  check_hlds__inst_match__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
              check_hlds__inst_match__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_match__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
          MR_Word check_hlds__inst_match__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));
          MR_Word check_hlds__inst_match__Var_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
          MR_Word check_hlds__inst_match__Var_176 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match__Var_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match__Var_179 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
          MR_Word check_hlds__inst_match__Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
          MR_Word check_hlds__inst_match__Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));

          switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
            default:
              check_hlds__inst_match__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

                switch (check_hlds__inst_match__Var_177) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word check_hlds__inst_match__NextInstA_15;
                      MR_Word check_hlds__inst_match__NextInstB_16;
                      MR_Word check_hlds__inst_match__Var_66;
                      MR_Word check_hlds__inst_match__Var_109;
                      MR_Word check_hlds__inst_match__Var_110;
                      MR_Word check_hlds__inst_match__Var_111;
                      MR_Word check_hlds__inst_match__Var_112;
                      MR_Word check_hlds__inst_match__Var_113;
                      MR_Word check_hlds__inst_match__Var_114;

                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_182, check_hlds__inst_match__Var_170, check_hlds__inst_match__Var_169, &check_hlds__inst_match__NextInstA_15);
                      }
                      if (check_hlds__inst_match__succeeded)
                        {
                          check_hlds__inst_match__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
                          check_hlds__inst_match__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
                          check_hlds__inst_match__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
                          check_hlds__inst_match__Var_111 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
                          check_hlds__inst_match__Var_112 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                          check_hlds__inst_match__Var_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                          check_hlds__inst_match__Var_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                          {
                            check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_66, check_hlds__inst_match__UniqB_12, check_hlds__inst_match__HOInstInfoB_13, &check_hlds__inst_match__NextInstB_16);
                          }
                          if (check_hlds__inst_match__succeeded)
                            {
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_15, check_hlds__inst_match__NextInstB_16, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__Var_169, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
                default:
                  check_hlds__inst_match__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__inst_match__NextInstA_74;

                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_182, check_hlds__inst_match__Var_170, check_hlds__inst_match__Var_169, &check_hlds__inst_match__NextInstA_74);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_74, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__inst_match__NextInstA_71;

                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_182, check_hlds__inst_match__Var_170, check_hlds__inst_match__Var_169, &check_hlds__inst_match__NextInstA_71);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_71, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) {
          default:
            check_hlds__inst_match__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_match__Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
              MR_Word check_hlds__inst_match__Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
                default:
                  check_hlds__inst_match__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__inst_match__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__UniqB_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__HOInstInfoB_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__NextInstB_80;
                    MR_Word check_hlds__inst_match__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
                    MR_Word check_hlds__inst_match__Var_135 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
                    MR_Word check_hlds__inst_match__Var_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_57, check_hlds__inst_match__UniqB_78, check_hlds__inst_match__HOInstInfoB_79, &check_hlds__inst_match__NextInstB_80);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__NextInstB_80, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
                    default:
                      check_hlds__inst_match__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__inst_match__BoundInstsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
                        MR_Word check_hlds__inst_match___UniqB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match___InstResultB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(check_hlds__inst_match__Var_171, check_hlds__inst_match__BoundInstsB_32, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__inst_match__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match__Var_53;
                        MR_Word check_hlds__inst_match__Var_54;
                        MR_Word check_hlds__inst_match__Var_166;
                        MR_Word check_hlds__inst_match___UniqB_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match__Var_139;
                        MR_Word check_hlds__inst_match__Var_140;
                        MR_Word check_hlds__inst_match__Var_141;
                        MR_Word check_hlds__inst_match__Var_142;
                        MR_Word check_hlds__inst_match__Var_143;
                        MR_Word check_hlds__inst_match__Var_144;

                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
                            check_hlds__inst_match__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
                            check_hlds__inst_match__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
                            check_hlds__inst_match__Var_141 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
                            check_hlds__inst_match__Var_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                            {
                              check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__Var_172, check_hlds__inst_match__Var_171, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_53);
                            }
                            if (check_hlds__inst_match__succeeded)
                              {
                                check_hlds__inst_match__Var_54 = (MR_Integer) 0;
                                {
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__Var_166, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                                }
                                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_54 == check_hlds__inst_match__Var_166);
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
              MR_Word check_hlds__inst_match__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
              MR_Word check_hlds__inst_match__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
              MR_Word check_hlds__inst_match__Var_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word check_hlds__inst_match__Var_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word check_hlds__inst_match__Var_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word check_hlds__inst_match__Var_186 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
              MR_Word check_hlds__inst_match__Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
                default:
                  check_hlds__inst_match__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__inst_match__UniqB_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__HOInstInfoB_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__NextInstB_77;

                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_189, check_hlds__inst_match__UniqB_75, check_hlds__inst_match__HOInstInfoB_76, &check_hlds__inst_match__NextInstB_77);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__NextInstB_77, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
                    default:
                      check_hlds__inst_match__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__inst_match__TypeCtorInfo_163_163;
                        MR_Word check_hlds__inst_match__InstResultsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match__Type_36;
                        MR_Word check_hlds__inst_match__Var_48;
                        MR_Word check_hlds__inst_match__Var_50;
                        MR_Word check_hlds__inst_match__Var_51;
                        MR_Word check_hlds__inst_match__BoundInstsB_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
                        MR_Word check_hlds__inst_match__Var_167;
                        MR_Word check_hlds__inst_match___UniqB_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match__Var_151;
                        MR_Word check_hlds__inst_match__Var_152;
                        MR_Word check_hlds__inst_match__Var_153;
                        MR_Word check_hlds__inst_match__Var_154;
                        MR_Word check_hlds__inst_match__Var_155;
                        MR_Word check_hlds__inst_match__Var_156;

                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__InstResultsB_35, check_hlds__inst_match__BoundInstsB_90, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_189);
                        }
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__Var_48 = (MR_Integer) 0;
                            {
                              check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstB_7, &check_hlds__inst_match__Var_167, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                            }
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_48 == check_hlds__inst_match__Var_167);
                            if (check_hlds__inst_match__succeeded)
                              {
                                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__inst_match__succeeded)
                                  {
                                    check_hlds__inst_match__Type_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
                                    check_hlds__inst_match__TypeCtorInfo_163_163 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
                                    {
                                      check_hlds__inst_match__Var_50 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_163_163);
                                    }
                                    check_hlds__inst_match__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 0)));
                                    check_hlds__inst_match__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 1)));
                                    check_hlds__inst_match__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 2)));
                                    check_hlds__inst_match__Var_153 = ((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) & (MR_Integer) 3);
                                    check_hlds__inst_match__Var_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                    check_hlds__inst_match__Var_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                    check_hlds__inst_match__Var_156 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                    {
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__Var_50, check_hlds__inst_match__Var_51, check_hlds__inst_match__BoundInstsB_90, check_hlds__inst_match__Type_36);
                                    }
                                  }
                              }
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__inst_match__HOInstInfoB_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match___UniqB_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(check_hlds__inst_match__Var_174, check_hlds__inst_match__HOInstInfoB_94, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_189);
                        }
                        if (check_hlds__inst_match__succeeded)
                          {
                            *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
                            check_hlds__inst_match__succeeded = MR_TRUE;
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
              MR_Word check_hlds__inst_match__TypeCtorInfo_164_164;
              MR_Word check_hlds__inst_match__TypeInfo_165_165;
              MR_Word check_hlds__inst_match__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
              MR_Word check_hlds__inst_match__ArgsA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__ArgsB_39;
              MR_Word check_hlds__inst_match__MaybeTypes_40;
              MR_Integer check_hlds__inst_match__Var_43;
              MR_Word check_hlds__inst_match__Var_44;
              MR_Word check_hlds__inst_match__Var_168;

              check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (check_hlds__inst_match__succeeded)
                {
                  check_hlds__inst_match__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                  check_hlds__inst_match__ArgsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                  {
                    check_hlds__inst_match__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_match__Name_37, check_hlds__inst_match__Var_168);
                  }
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__TypeCtorInfo_164_164 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                      {
                        check_hlds__inst_match__Var_43 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_164_164, check_hlds__inst_match__ArgsA_38);
                      }
                      check_hlds__inst_match__Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      check_hlds__inst_match__TypeInfo_165_165 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
                      {
                        mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_165_165, check_hlds__inst_match__Var_43, ((MR_Box) (check_hlds__inst_match__Var_44)), &check_hlds__inst_match__MaybeTypes_40);
                      }
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_binding_5_p_0(check_hlds__inst_match__ArgsA_38, check_hlds__inst_match__ArgsB_39, check_hlds__inst_match__MaybeTypes_40, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
                    }
                }
            }
            break;
        }
        break;
    }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__ThisExpansion_10;
    MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
    MR_Word check_hlds__inst_match__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
    MR_Word check_hlds__inst_match__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
    MR_Word check_hlds__inst_match__Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
    MR_Word check_hlds__inst_match__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Expansions_12;

    {
      check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
    }
    {
      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
    }
    if (check_hlds__inst_match__succeeded)
      {
        MR_Word check_hlds__inst_match__ExpandedInstA_13;
        MR_Word check_hlds__inst_match__ExpandedInstB_14;
        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
        MR_Word check_hlds__inst_match__Var_19;
        MR_Word check_hlds__inst_match__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
        MR_Word check_hlds__inst_match__Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__Var_40;
        MR_Word check_hlds__inst_match__Var_41;
        MR_Word check_hlds__inst_match__Var_42;
        MR_Word check_hlds__inst_match__Var_43;
        MR_Word check_hlds__inst_match__Var_44;
        MR_Word check_hlds__inst_match__Var_45;

        {
          check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__Var_27));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__Var_29));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__Var_30 | ((((check_hlds__inst_match__Var_31 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_32 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_33 << (MR_Integer) 4)))))))));
        }
        {
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__Var_27, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
        }
        check_hlds__inst_match__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
        check_hlds__inst_match__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
        check_hlds__inst_match__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
        check_hlds__inst_match__Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        {
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__Var_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
        }
        {
          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_3_5_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
      }
    else
      {
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
  MR_Word check_hlds__inst_match__HOInstInfoA_5,
  MR_Word check_hlds__inst_match__HOInstInfoB_6,
  MR_Word check_hlds__inst_match__MaybeType_7,
  MR_Word check_hlds__inst_match__ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    if ((check_hlds__inst_match__HOInstInfoB_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_mt_3_p_0(check_hlds__inst_match__ModuleInfo_8, check_hlds__inst_match__HOInstInfoA_5, check_hlds__inst_match__MaybeType_7);
      }
    else
      {
        MR_Word check_hlds__inst_match__Var_19 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_6), (MR_Integer) 1);

        if ((check_hlds__inst_match__HOInstInfoA_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__inst_match__TypeCtorInfo_18_18;
            MR_Word check_hlds__inst_match__TypeCtorInfo_2_75;
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_91;
            MR_Word check_hlds__inst_match__ArgModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 1)));
            MR_Integer check_hlds__inst_match__Arity_13;
            MR_Word check_hlds__inst_match__PredInstA_14;
            MR_Word check_hlds__inst_match__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__Info0_61;
            MR_Word check_hlds__inst_match__Var_63;
            MR_Word check_hlds__inst_match__Var_64;
            MR_Word check_hlds__inst_match__Var_65;
            MR_Word check_hlds__inst_match__Var_66;
            MR_Word check_hlds__inst_match__Var_67;
            MR_Word check_hlds__inst_match__Var_74;
            MR_Word check_hlds__inst_match__PredOrFunc_82;
            MR_Word check_hlds__inst_match__ModesA_83;
            MR_Word check_hlds__inst_match__Det_85;
            MR_Word check_hlds__inst_match__ModesB_86;
            MR_Word check_hlds__inst_match__MaybeTypes_88;
            MR_Integer check_hlds__inst_match__Var_89;
            MR_Word check_hlds__inst_match__Var_92;
            MR_Word check_hlds__inst_match__Var_93;
            MR_Word check_hlds__inst_match__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 2)));
            MR_Word check_hlds__inst_match___Det_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 3)));
            MR_Word check_hlds__inst_match___MaybeArgRegsA_84;
            MR_Word check_hlds__inst_match___MaybeArgRegsB_87;
            MR_Word check_hlds__inst_match__Var_62;

            check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_15 == (MR_Integer) 1);
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                {
                  check_hlds__inst_match__Arity_13 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_18_18, check_hlds__inst_match__ArgModes_10);
                }
                {
                  check_hlds__inst_match__PredInstA_14 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_13);
                }
                check_hlds__inst_match__Var_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                check_hlds__inst_match__Var_64 = (MR_Integer) 2;
                check_hlds__inst_match__Var_65 = (MR_Integer) 0;
                check_hlds__inst_match__Var_66 = (MR_Integer) 1;
                check_hlds__inst_match__Var_67 = (MR_Integer) 0;
                check_hlds__inst_match__TypeCtorInfo_2_75 = (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0;
                {
                  check_hlds__inst_match__Var_74 = mercury__set_tree234__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_2_75);
                }
                check_hlds__inst_match__PredOrFunc_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 0)));
                check_hlds__inst_match__ModesA_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 1)));
                check_hlds__inst_match___MaybeArgRegsA_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 2)));
                check_hlds__inst_match__Det_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 3)));
                check_hlds__inst_match__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 0)));
                check_hlds__inst_match__ModesB_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 1)));
                check_hlds__inst_match___MaybeArgRegsB_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 2)));
                check_hlds__inst_match__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 3)));
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_82 == check_hlds__inst_match__Var_92);
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_85 == check_hlds__inst_match__Var_93);
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__TypeCtorInfo_21_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                        {
                          check_hlds__inst_match__Info0_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 1) = ((MR_Box) (check_hlds__inst_match__Var_74));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 2) = ((MR_Box) (check_hlds__inst_match__Var_63));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 3) = ((MR_Box) ((check_hlds__inst_match__Var_64 | ((((check_hlds__inst_match__Var_65 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_66 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_67 << (MR_Integer) 4)))))))));
                        }
                        {
                          check_hlds__inst_match__Var_89 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_91, check_hlds__inst_match__ModesA_83);
                        }
                        {
                          check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__Var_89, &check_hlds__inst_match__MaybeTypes_88);
                        }
                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_83, check_hlds__inst_match__ModesB_86, check_hlds__inst_match__MaybeTypes_88, check_hlds__inst_match__Info0_61, &check_hlds__inst_match__Var_62);
                        }
                      }
                  }
              }
          }
        else
          {
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_54;
            MR_Word check_hlds__inst_match__PredInstA_17 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_5), (MR_Integer) 1);
            MR_Word check_hlds__inst_match__Info0_24;
            MR_Word check_hlds__inst_match__Var_37;
            MR_Word check_hlds__inst_match__PredOrFunc_45;
            MR_Word check_hlds__inst_match__ModesA_46;
            MR_Word check_hlds__inst_match__Det_48;
            MR_Word check_hlds__inst_match__ModesB_49;
            MR_Word check_hlds__inst_match__MaybeTypes_51;
            MR_Integer check_hlds__inst_match__Var_52;
            MR_Word check_hlds__inst_match__Var_55;
            MR_Word check_hlds__inst_match__Var_56;
            MR_Word check_hlds__inst_match___MaybeArgRegsA_47;
            MR_Word check_hlds__inst_match___MaybeArgRegsB_50;
            MR_Word check_hlds__inst_match__Var_25;

            {
              check_hlds__inst_match__Var_37 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
            }
            check_hlds__inst_match__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 0)));
            check_hlds__inst_match__ModesA_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 1)));
            check_hlds__inst_match___MaybeArgRegsA_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 2)));
            check_hlds__inst_match__Det_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 3)));
            check_hlds__inst_match__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 0)));
            check_hlds__inst_match__ModesB_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 1)));
            check_hlds__inst_match___MaybeArgRegsB_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 2)));
            check_hlds__inst_match__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_19, (MR_Integer) 3)));
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_45 == check_hlds__inst_match__Var_55);
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_48 == check_hlds__inst_match__Var_56);
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__TypeCtorInfo_21_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                    {
                      check_hlds__inst_match__Info0_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 1) = ((MR_Box) (check_hlds__inst_match__Var_37));
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
                    }
                    {
                      check_hlds__inst_match__Var_52 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_54, check_hlds__inst_match__ModesA_46);
                    }
                    {
                      check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__Var_52, &check_hlds__inst_match__MaybeTypes_51);
                    }
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_46, check_hlds__inst_match__ModesB_49, check_hlds__inst_match__MaybeTypes_51, check_hlds__inst_match__Info0_24, &check_hlds__inst_match__Var_25);
                    }
                  }
              }
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_mt_3_p_0(
  MR_Word check_hlds__inst_match__ModuleInfo_4,
  MR_Word check_hlds__inst_match__HOInstInfo_5,
  MR_Word check_hlds__inst_match__MaybeType_6)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info_7;
    MR_Word check_hlds__inst_match__Var_20;

    {
      check_hlds__inst_match__Var_20 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_7, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_4));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_7, 1) = ((MR_Box) (check_hlds__inst_match__Var_20));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_7, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_7, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    if ((check_hlds__inst_match__HOInstInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__inst_match__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__inst_match__PredInst_27 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_5), (MR_Integer) 1);
        MR_Word check_hlds__inst_match__PredOrFunc_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_27, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__ArgModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_27, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_27, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_27, (MR_Integer) 3)));

        switch (check_hlds__inst_match__PredOrFunc_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer check_hlds__inst_match__Arity_38;
              MR_Word check_hlds__inst_match__DefaultFunc_39;
              MR_Word check_hlds__inst_match__Var_8;

              {
                check_hlds__inst_match__Arity_38 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__inst_match__ArgModes_35);
              }
              {
                check_hlds__inst_match__DefaultFunc_39 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_38);
              }
              {
                check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(check_hlds__inst_match__PredInst_27, check_hlds__inst_match__DefaultFunc_39, check_hlds__inst_match__MaybeType_6, check_hlds__inst_match__Info_7, &check_hlds__inst_match__Var_8);
              }
            }
            break;
          case (MR_Integer) 0:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
        }
      }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__unique_matches_initial_2_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    switch (check_hlds__inst_match__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 3);
        break;
      case (MR_Integer) 4:
        switch (check_hlds__inst_match__HeadVar__2_2) {
          default:
            check_hlds__inst_match__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 2:
        if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__HeadVar__2_2))))
          {
            check_hlds__inst_match__succeeded = MR_TRUE;
          }
        else
          check_hlds__inst_match__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (check_hlds__inst_match__HeadVar__2_2) {
          default:
            check_hlds__inst_match__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        check_hlds__inst_match__succeeded = MR_TRUE;
        break;
    }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_is_at_least_as_instantiated_4_p_0(
  MR_Word check_hlds__inst_match__InstA_5,
  MR_Word check_hlds__inst_match__InstB_6,
  MR_Word check_hlds__inst_match__Type_7,
  MR_Word check_hlds__inst_match__ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info0_9;
    MR_Word check_hlds__inst_match__Var_16;
    MR_Word check_hlds__inst_match__Var_23;
    MR_Word check_hlds__inst_match__Var_10;

    {
      check_hlds__inst_match__Var_23 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__Var_23));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
    }
    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__Var_16, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__Var_10);
    }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_typed_4_p_0(
  MR_Word check_hlds__inst_match__InstA_5,
  MR_Word check_hlds__inst_match__InstB_6,
  MR_Word check_hlds__inst_match__Type_7,
  MR_Word check_hlds__inst_match__ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_gmb_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__Type_7, check_hlds__inst_match__ModuleInfo_8, (MR_Integer) 0);
    }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_gmb_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__Type_8,
  MR_Word check_hlds__inst_match__ModuleInfo_9,
  MR_Word check_hlds__inst_match__GroundMatchesBound_10)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info0_11;
    MR_Word check_hlds__inst_match__Var_17;
    MR_Word check_hlds__inst_match__Var_24;
    MR_Word check_hlds__inst_match__Var_12;

    {
      check_hlds__inst_match__Var_24 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_9));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 1) = ((MR_Box) (check_hlds__inst_match__Var_24));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((check_hlds__inst_match__GroundMatchesBound_10 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_17, 0) = ((MR_Box) (check_hlds__inst_match__Type_8));
    }
    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_7, check_hlds__inst_match__Var_17, check_hlds__inst_match__Info0_11, &check_hlds__inst_match__Var_12);
    }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_p_0(
  MR_Word check_hlds__inst_match__InstA_4,
  MR_Word check_hlds__inst_match__InstB_5,
  MR_Word check_hlds__inst_match__ModuleInfo_6)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info0_7;
    MR_Word check_hlds__inst_match__Var_21;
    MR_Word check_hlds__inst_match__Var_8;

    {
      check_hlds__inst_match__Var_21 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info0_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 1) = ((MR_Box) (check_hlds__inst_match__Var_21));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_4, check_hlds__inst_match__InstB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__Info0_7, &check_hlds__inst_match__Var_8);
    }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(
  MR_Word check_hlds__inst_match__InstA_8,
  MR_Word check_hlds__inst_match__InstB_9,
  MR_Word check_hlds__inst_match__Type_10,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_16,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Sub_0_17,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Sub_18)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info0_13;
    MR_Word check_hlds__inst_match__Info_14;
    MR_Word check_hlds__inst_match__Var_19;
    MR_Word check_hlds__inst_match__Var_24;
    MR_Word check_hlds__inst_match__Var_29;
    MR_Word check_hlds__inst_match__Var_46;
    MR_Word check_hlds__inst_match__Var_28;
    MR_Word check_hlds__inst_match__Var_30;
    MR_Word check_hlds__inst_match__Var_31;
    MR_Word check_hlds__inst_match__Var_32;
    MR_Word check_hlds__inst_match__Var_33;

    {
      check_hlds__inst_match__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_19, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Sub_0_17));
    }
    {
      check_hlds__inst_match__Var_46 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_15));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 1) = ((MR_Box) (check_hlds__inst_match__Var_46));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 2) = ((MR_Box) (check_hlds__inst_match__Var_19));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_24, 0) = ((MR_Box) (check_hlds__inst_match__Type_10));
    }
    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_8, check_hlds__inst_match__InstB_9, check_hlds__inst_match__Var_24, check_hlds__inst_match__Info0_13, &check_hlds__inst_match__Info_14);
    }
    if (check_hlds__inst_match__succeeded)
      {
        *check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 0)));
        check_hlds__inst_match__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 1)));
        check_hlds__inst_match__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 2)));
        check_hlds__inst_match__Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__Var_29)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__inst_match__succeeded)
          *check_hlds__inst_match__STATE_VARIABLE_Sub_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_29, (MR_Integer) 0)));
      }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(
  MR_Word check_hlds__inst_match__InstA_5,
  MR_Word check_hlds__inst_match__InstB_6,
  MR_Word check_hlds__inst_match__Type_7,
  MR_Word check_hlds__inst_match__ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info0_9;
    MR_Word check_hlds__inst_match__Var_16;
    MR_Word check_hlds__inst_match__Var_23;
    MR_Word check_hlds__inst_match__Var_10;

    {
      check_hlds__inst_match__Var_23 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__Var_23));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
    }
    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__Var_16, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__Var_10);
    }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_sub_7_p_0(
  MR_Word check_hlds__inst_match__InstA_8,
  MR_Word check_hlds__inst_match__InstB_9,
  MR_Word check_hlds__inst_match__Type_10,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_15,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Sub_0_16,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Sub_17)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__MaybeSub_13;
    MR_Word check_hlds__inst_match__Var_19;
    MR_Word check_hlds__inst_match__Info0_33;
    MR_Word check_hlds__inst_match__Info_34;
    MR_Word check_hlds__inst_match__Var_39;
    MR_Word check_hlds__inst_match__Var_60;
    MR_Word check_hlds__inst_match__Var_42;
    MR_Word check_hlds__inst_match__Var_44;
    MR_Word check_hlds__inst_match__Var_45;
    MR_Word check_hlds__inst_match__Var_46;
    MR_Word check_hlds__inst_match__Var_47;

    {
      check_hlds__inst_match__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_19, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Sub_0_16));
    }
    {
      check_hlds__inst_match__Var_60 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_14));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 1) = ((MR_Box) (check_hlds__inst_match__Var_60));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 2) = ((MR_Box) (check_hlds__inst_match__Var_19));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_39, 0) = ((MR_Box) (check_hlds__inst_match__Type_10));
    }
    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_8, check_hlds__inst_match__InstB_9, check_hlds__inst_match__Var_39, check_hlds__inst_match__Info0_33, &check_hlds__inst_match__Info_34);
    }
    if (check_hlds__inst_match__succeeded)
      {
        *check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 0)));
        check_hlds__inst_match__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 1)));
        check_hlds__inst_match__MaybeSub_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 2)));
        check_hlds__inst_match__Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        if ((check_hlds__inst_match__MaybeSub_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_sub\'/7", (MR_String) "missing inst_var_sub");
            }
          }
        else
          *check_hlds__inst_match__STATE_VARIABLE_Sub_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeSub_13, (MR_Integer) 0)));
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_p_0(
  MR_Word check_hlds__inst_match__InstA_5,
  MR_Word check_hlds__inst_match__InstB_6,
  MR_Word check_hlds__inst_match__Type_7,
  MR_Word check_hlds__inst_match__ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Info0_21;
    MR_Word check_hlds__inst_match__Var_27;
    MR_Word check_hlds__inst_match__Var_48;
    MR_Word check_hlds__inst_match__Info_22;

    {
      check_hlds__inst_match__Var_48 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
    {
      check_hlds__inst_match__Info0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 1) = ((MR_Box) (check_hlds__inst_match__Var_48));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_27, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
    }
    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__Var_27, check_hlds__inst_match__Info0_21, &check_hlds__inst_match__Info_22);
    }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho12_6_p_0(
  MR_Word check_hlds__inst_match__InstA_8,
  MR_Word check_hlds__inst_match__InstB_9,
  MR_Word check_hlds__inst_match__Type_10,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
    MR_Word check_hlds__inst_match__Var_16;
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
    MR_Word check_hlds__inst_match__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
    MR_Word check_hlds__inst_match__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
    MR_Word check_hlds__inst_match__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
    MR_Word check_hlds__inst_match__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_32;
    MR_Word check_hlds__inst_match__Var_33;
    MR_Word check_hlds__inst_match__Var_34;
    MR_Word check_hlds__inst_match__Var_36;
    MR_Word check_hlds__inst_match__Var_37;
    MR_Word check_hlds__inst_match__Var_38;
    MR_Word check_hlds__inst_match__Var_35;

    switch (check_hlds__inst_match__CalculateSub_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__inst_match__Var_16 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        check_hlds__inst_match__Var_16 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        check_hlds__inst_match__Var_16 = (MR_Integer) 0;
        break;
    }
    {
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__Var_19));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__Var_20));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__Var_21));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__Var_16 | ((((check_hlds__inst_match__Var_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_24 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
        check_hlds__inst_match__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
        check_hlds__inst_match__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
        check_hlds__inst_match__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__Var_32));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__Var_33));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__Var_34));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__Var_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_38 << (MR_Integer) 4)))))))));
        }
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho11_6_p_0(
  MR_Word check_hlds__inst_match__InstA_8,
  MR_Word check_hlds__inst_match__InstB_9,
  MR_Word check_hlds__inst_match__Type_10,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
    MR_Word check_hlds__inst_match__Var_16;
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
    MR_Word check_hlds__inst_match__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
    MR_Word check_hlds__inst_match__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
    MR_Word check_hlds__inst_match__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
    MR_Word check_hlds__inst_match__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_32;
    MR_Word check_hlds__inst_match__Var_33;
    MR_Word check_hlds__inst_match__Var_34;
    MR_Word check_hlds__inst_match__Var_36;
    MR_Word check_hlds__inst_match__Var_37;
    MR_Word check_hlds__inst_match__Var_38;
    MR_Word check_hlds__inst_match__Var_35;

    switch (check_hlds__inst_match__CalculateSub_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__inst_match__Var_16 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        check_hlds__inst_match__Var_16 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        check_hlds__inst_match__Var_16 = (MR_Integer) 0;
        break;
    }
    {
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__Var_19));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__Var_20));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__Var_21));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__Var_16 | ((((check_hlds__inst_match__Var_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_24 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
        check_hlds__inst_match__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
        check_hlds__inst_match__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
        check_hlds__inst_match__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__Var_32));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__Var_33));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__Var_34));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__Var_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_38 << (MR_Integer) 4)))))))));
        }
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
    if (check_hlds__inst_match__succeeded)
      {
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(
  MR_Word check_hlds__inst_match__InstA_10,
  MR_Word check_hlds__inst_match__InstB_11,
  MR_Word check_hlds__inst_match__Type_12,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
{
  {
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word check_hlds__inst_match__InstVarsB_14;
    MR_Word check_hlds__inst_match__SubInstB_15;

    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
        {
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
          MR_Word check_hlds__inst_match__UnifyInst_17;
          MR_Word check_hlds__inst_match__ModuleInfo_19;
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
          MR_Word check_hlds__inst_match__Var_41;
          MR_Word check_hlds__inst_match__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
          MR_Word check_hlds__inst_match__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
          MR_Word check_hlds__inst_match__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
          MR_Word check_hlds__inst_match__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match___Det_18;
          MR_Word check_hlds__inst_match__Var_40;
          MR_Word check_hlds__inst_match__Var_42;
          MR_Word check_hlds__inst_match__Var_43;
          MR_Word check_hlds__inst_match__Var_44;
          MR_Word check_hlds__inst_match__Var_45;
          MR_Word check_hlds__inst_match__Var_39;
          MR_Word check_hlds__inst_match__UnifySubInst_20;
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
          MR_Word check_hlds__inst_match__Var_46;

          {
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
          if (check_hlds__inst_match__succeeded)
            {
              check_hlds__inst_match__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
              check_hlds__inst_match__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
              check_hlds__inst_match__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
              check_hlds__inst_match__Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
              check_hlds__inst_match__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              check_hlds__inst_match__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              check_hlds__inst_match__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              {
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__Var_40));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__Var_41));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__Var_42 | ((((check_hlds__inst_match__Var_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_45 << (MR_Integer) 4)))))))));
              }
              if ((check_hlds__inst_match__Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
                  check_hlds__inst_match__succeeded = MR_TRUE;
                }
              else
                {
                  MR_Word check_hlds__inst_match__Var_57;
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

                  {
                    check_hlds__inst_match__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_57, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_57, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
                  }
                  {
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__Var_57, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                      check_hlds__inst_match__succeeded = MR_TRUE;
                    }
                }
              if (check_hlds__inst_match__succeeded)
                {
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
                      {
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__Var_46)));
                      }
                    }
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
                  else
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
                }
            }
        }
      }
    else
      {
        MR_Word check_hlds__inst_match__SubInstA_22;
        MR_Word check_hlds__inst_match___InstVarsA_21;

        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
          }
        else
          {
            check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
    if (check_hlds__inst_match__succeeded)
      {
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(
  MR_Word check_hlds__inst_match__InstA_10,
  MR_Word check_hlds__inst_match__InstB_11,
  MR_Word check_hlds__inst_match__Type_12,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
{
  {
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word check_hlds__inst_match__InstVarsB_14;
    MR_Word check_hlds__inst_match__SubInstB_15;

    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
        {
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
          MR_Word check_hlds__inst_match__UnifyInst_17;
          MR_Word check_hlds__inst_match__ModuleInfo_19;
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
          MR_Word check_hlds__inst_match__Var_41;
          MR_Word check_hlds__inst_match__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
          MR_Word check_hlds__inst_match__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
          MR_Word check_hlds__inst_match__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
          MR_Word check_hlds__inst_match__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match___Det_18;
          MR_Word check_hlds__inst_match__Var_40;
          MR_Word check_hlds__inst_match__Var_42;
          MR_Word check_hlds__inst_match__Var_43;
          MR_Word check_hlds__inst_match__Var_44;
          MR_Word check_hlds__inst_match__Var_45;
          MR_Word check_hlds__inst_match__Var_39;
          MR_Word check_hlds__inst_match__UnifySubInst_20;
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
          MR_Word check_hlds__inst_match__Var_46;

          {
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
          if (check_hlds__inst_match__succeeded)
            {
              check_hlds__inst_match__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
              check_hlds__inst_match__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
              check_hlds__inst_match__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
              check_hlds__inst_match__Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
              check_hlds__inst_match__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              check_hlds__inst_match__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              check_hlds__inst_match__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              {
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__Var_40));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__Var_41));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__Var_42 | ((((check_hlds__inst_match__Var_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_45 << (MR_Integer) 4)))))))));
              }
              if ((check_hlds__inst_match__Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
                  check_hlds__inst_match__succeeded = MR_TRUE;
                }
              else
                {
                  MR_Word check_hlds__inst_match__Var_69;
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

                  {
                    check_hlds__inst_match__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_69, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_69, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_69, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_69, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
                  }
                  {
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__Var_69, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                      check_hlds__inst_match__succeeded = MR_TRUE;
                    }
                }
              if (check_hlds__inst_match__succeeded)
                {
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
                      {
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__Var_46)));
                      }
                    }
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
                  else
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
                }
            }
        }
      }
    else
      {
        MR_Word check_hlds__inst_match__SubInstA_22;
        MR_Word check_hlds__inst_match___InstVarsA_21;

        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
          }
        else
          {
            check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho11_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__inst_match__succeeded)
                  {
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
                    check_hlds__inst_match__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            MR_Word check_hlds__inst_match__X_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__Y_11;
            MR_Word check_hlds__inst_match__Ys_12;
            MR_Word check_hlds__inst_match__MaybeType_13;
            MR_Word check_hlds__inst_match__MaybeTypes_14;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__Y_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__inst_match__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__X_9, check_hlds__inst_match__Y_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__Xs_10;
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__Ys_12;
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__3_3 = check_hlds__inst_match__MaybeTypes_14;
                          MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4;
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__next_value_of_HeadVar__3_3;
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return check_hlds__inst_match__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__MaybeType_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
            check_hlds__inst_match__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__Y_13;
            MR_Word check_hlds__inst_match__Ys_14;
            MR_Word check_hlds__inst_match__ConsIdX_17;
            MR_Word check_hlds__inst_match__ArgsX_18;
            MR_Word check_hlds__inst_match__ConsIdY_19;
            MR_Word check_hlds__inst_match__ArgsY_20;

            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
                {
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
                if (check_hlds__inst_match__succeeded)
                  {
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
                    MR_Word check_hlds__inst_match__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
                    MR_Integer check_hlds__inst_match__Var_25;
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
                    MR_Word check_hlds__inst_match__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
                    MR_Word check_hlds__inst_match__Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
                    MR_Word check_hlds__inst_match__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                    {
                      check_hlds__inst_match__Var_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
                    {
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__Var_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__Var_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__Xs_12;
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__Ys_14;
                          MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4;
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
                else
                  {
                    MR_Word check_hlds__inst_match__QNameA_39;
                    MR_Integer check_hlds__inst_match__ArityA_40;
                    MR_Word check_hlds__inst_match__QNameB_42;
                    MR_Integer check_hlds__inst_match__ArityB_43;
                    MR_Word check_hlds__inst_match__Var_41;
                    MR_Word check_hlds__inst_match__Var_44;

                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__QNameA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
                        check_hlds__inst_match__ArityA_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
                        check_hlds__inst_match__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__QNameB_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
                            check_hlds__inst_match__ArityB_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
                            check_hlds__inst_match__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
                          }
                      }
                    if (check_hlds__inst_match__succeeded)
                      {
                        MR_String check_hlds__inst_match__NameA_45;
                        MR_String check_hlds__inst_match__NameB_47;
                        MR_Word check_hlds__inst_match__O_49;

                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_39)) == (MR_mktag((MR_Integer) 1))))
                          {
                            MR_Word check_hlds__inst_match__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));

                            check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 1)));
                          }
                        else
                          check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_42)) == (MR_mktag((MR_Integer) 1))))
                          {
                            MR_Word check_hlds__inst_match__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));

                            check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 1)));
                          }
                        else
                          check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));
                        {
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_49, check_hlds__inst_match__NameA_45, check_hlds__inst_match__NameB_47);
                        }
                        switch (check_hlds__inst_match__O_49) {
                          default:
                            check_hlds__inst_match__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_40 > check_hlds__inst_match__ArityB_43);
                            break;
                          case (MR_Integer) 2:
                            check_hlds__inst_match__succeeded = MR_TRUE;
                            break;
                        }
                      }
                    else
                      {
                        MR_Word check_hlds__inst_match__Var_53;

                        {
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__Var_53, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__Var_53);
                      }
                    if (check_hlds__inst_match__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__Ys_14;

                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                        }
                        continue;
                      }
                  }
              }
          }
        return check_hlds__inst_match__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(
  MR_Word check_hlds__inst_match__Uniq_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        if ((check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__inst_match__succeeded)
              {
                *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
                check_hlds__inst_match__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word check_hlds__inst_match__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__MaybeType_13;
            MR_Word check_hlds__inst_match__MaybeTypes_14;
            MR_Word check_hlds__inst_match__Ground_16;
            MR_Word check_hlds__inst_match__Var_19;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_20_20;

            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
                check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
                check_hlds__inst_match__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  check_hlds__inst_match__Ground_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__Ground_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__Ground_16, 1) = ((MR_Box) (check_hlds__inst_match__Uniq_1));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__Ground_16, 2) = ((MR_Box) (check_hlds__inst_match__Var_19));
                }
                {
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__Ground_16, check_hlds__inst_match__Inst_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_20_20);
                }
                if (check_hlds__inst_match__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__Insts_12;
                      MR_Word check_hlds__inst_match__next_value_of_HeadVar__3_3 = check_hlds__inst_match__MaybeTypes_14;
                      MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_20_20;

                      check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4;
                      check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__next_value_of_HeadVar__3_3;
                      check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                    }
                    continue;
                  }
              }
          }
        return check_hlds__inst_match__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(
  MR_Word check_hlds__inst_match__Uniq_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__MaybeType_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        if ((check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
            check_hlds__inst_match__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_match__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_12, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_12, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__MaybeTypes_18;
            MR_Word check_hlds__inst_match__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
            MR_Integer check_hlds__inst_match__Var_22;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_23_23;
            MR_Word check_hlds__inst_match__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
            MR_Word check_hlds__inst_match__Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
            MR_Word check_hlds__inst_match__Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word check_hlds__inst_match__Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word check_hlds__inst_match__Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

            {
              check_hlds__inst_match__Var_22 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__Args_17);
            }
            {
              check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__Var_21, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsId_16, check_hlds__inst_match__Var_22, &check_hlds__inst_match__MaybeTypes_18);
            }
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(check_hlds__inst_match__Uniq_1, check_hlds__inst_match__Args_17, check_hlds__inst_match__MaybeTypes_18, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_23_23);
            }
            if (check_hlds__inst_match__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__BoundInsts_13;
                  MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_23_23;

                  check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4;
                  check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return check_hlds__inst_match__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_48,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_49)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) {
      default:
        check_hlds__inst_match__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_match__InstA_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (check_hlds__inst_match__succeeded)
                {
                  *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
                  check_hlds__inst_match__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
              check_hlds__inst_match__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_match__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
          MR_Word check_hlds__inst_match__Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
            default:
              check_hlds__inst_match__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
                default:
                  check_hlds__inst_match__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
                    check_hlds__inst_match__succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                MR_Word check_hlds__inst_match__Var_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word check_hlds__inst_match__Var_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word check_hlds__inst_match__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                MR_Word check_hlds__inst_match__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                MR_Word check_hlds__inst_match__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                MR_Word check_hlds__inst_match__Var_128 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                MR_Word check_hlds__inst_match__Var_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_93 == (MR_Integer) 1);
                if (check_hlds__inst_match__succeeded)
                  {
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__Var_129, check_hlds__inst_match__Var_249, check_hlds__inst_match__UniqB_12);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__Var_248, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                      }
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
                default:
                  check_hlds__inst_match__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__inst_match__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__NextInstA_100;
                    MR_Word check_hlds__inst_match__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                    MR_Word check_hlds__inst_match__Var_145 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                    MR_Word check_hlds__inst_match__Var_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_89, check_hlds__inst_match__Var_249, check_hlds__inst_match__Var_248, &check_hlds__inst_match__NextInstA_100);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__NextInstA_100, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__inst_match__NextInstA_18;
                    MR_Word check_hlds__inst_match__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                    MR_Word check_hlds__inst_match__Var_139 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                    MR_Word check_hlds__inst_match__Var_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_91, check_hlds__inst_match__Var_249, check_hlds__inst_match__Var_248, &check_hlds__inst_match__NextInstA_18);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__NextInstA_18, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                      }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) {
          default:
            check_hlds__inst_match__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_match__Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
              MR_Word check_hlds__inst_match__Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
                default:
                  check_hlds__inst_match__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
                    default:
                      check_hlds__inst_match__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
                        check_hlds__inst_match__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__inst_match__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_84;
                    MR_Word check_hlds__inst_match__Var_85;
                    MR_Word check_hlds__inst_match__Var_87;
                    MR_Word check_hlds__inst_match__UniqB_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__Var_155;
                    MR_Word check_hlds__inst_match__Var_242;
                    MR_Word check_hlds__inst_match__Var_149;
                    MR_Word check_hlds__inst_match__Var_150;
                    MR_Word check_hlds__inst_match__Var_151;
                    MR_Word check_hlds__inst_match__Var_152;
                    MR_Word check_hlds__inst_match__Var_153;
                    MR_Word check_hlds__inst_match__Var_154;
                    MR_Word check_hlds__inst_match__Var_156;
                    MR_Word check_hlds__inst_match__Var_157;
                    MR_Word check_hlds__inst_match__Var_158;
                    MR_Word check_hlds__inst_match__Var_159;
                    MR_Word check_hlds__inst_match__Var_160;

                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                        check_hlds__inst_match__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                        check_hlds__inst_match__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                        check_hlds__inst_match__Var_152 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                        check_hlds__inst_match__Var_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        check_hlds__inst_match__Var_153 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        check_hlds__inst_match__Var_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__Var_84, check_hlds__inst_match__Var_252, check_hlds__inst_match__UniqB_102);
                        }
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                            check_hlds__inst_match__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                            check_hlds__inst_match__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                            check_hlds__inst_match__Var_158 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                            check_hlds__inst_match__Var_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                            {
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(check_hlds__inst_match__Var_85, check_hlds__inst_match__Var_250, check_hlds__inst_match__UniqB_102, check_hlds__inst_match__Var_155);
                            }
                            if (check_hlds__inst_match__succeeded)
                              {
                                check_hlds__inst_match__Var_87 = (MR_Integer) 0;
                                {
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__Var_242, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                                }
                                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_87 == check_hlds__inst_match__Var_242);
                              }
                          }
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
                    default:
                      check_hlds__inst_match__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__inst_match__BoundInstsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
                        MR_Word check_hlds__inst_match__UniqB_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match___InstResultsB_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__same_addr_insts_2_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_7);
                        }
                        if (check_hlds__inst_match__succeeded)
                          check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                        if (check_hlds__inst_match__succeeded)
                          {
                            *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
                            check_hlds__inst_match__succeeded = MR_TRUE;
                          }
                        else
                          {
                            MR_Word check_hlds__inst_match__Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                            MR_Word check_hlds__inst_match__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                            MR_Word check_hlds__inst_match__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                            MR_Word check_hlds__inst_match__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                            MR_Word check_hlds__inst_match__Var_170 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                            MR_Word check_hlds__inst_match__Var_171 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                            MR_Word check_hlds__inst_match__Var_172 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                            {
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__Var_81, check_hlds__inst_match__Var_252, check_hlds__inst_match__UniqB_104);
                            }
                            if (check_hlds__inst_match__succeeded)
                              {
                                check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__Var_250, check_hlds__inst_match__BoundInstsB_29, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                              }
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__inst_match__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match__Var_75;
                        MR_Word check_hlds__inst_match__Var_76;
                        MR_Word check_hlds__inst_match__Var_77;
                        MR_Word check_hlds__inst_match__Var_79;
                        MR_Word check_hlds__inst_match__UniqB_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match__Var_185;
                        MR_Word check_hlds__inst_match__Var_243;
                        MR_Word check_hlds__inst_match__Var_173;
                        MR_Word check_hlds__inst_match__Var_174;
                        MR_Word check_hlds__inst_match__Var_175;
                        MR_Word check_hlds__inst_match__Var_176;
                        MR_Word check_hlds__inst_match__Var_177;
                        MR_Word check_hlds__inst_match__Var_178;
                        MR_Word check_hlds__inst_match__Var_179;
                        MR_Word check_hlds__inst_match__Var_180;
                        MR_Word check_hlds__inst_match__Var_181;
                        MR_Word check_hlds__inst_match__Var_182;
                        MR_Word check_hlds__inst_match__Var_183;
                        MR_Word check_hlds__inst_match__Var_184;
                        MR_Word check_hlds__inst_match__Var_186;
                        MR_Word check_hlds__inst_match__Var_187;
                        MR_Word check_hlds__inst_match__Var_188;
                        MR_Word check_hlds__inst_match__Var_189;
                        MR_Word check_hlds__inst_match__Var_190;

                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                            check_hlds__inst_match__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                            check_hlds__inst_match__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                            check_hlds__inst_match__Var_176 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                            check_hlds__inst_match__Var_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                            {
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__Var_75, check_hlds__inst_match__Var_252, check_hlds__inst_match__UniqB_107);
                            }
                            if (check_hlds__inst_match__succeeded)
                              {
                                check_hlds__inst_match__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                                check_hlds__inst_match__Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                                check_hlds__inst_match__Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                                check_hlds__inst_match__Var_181 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                                check_hlds__inst_match__Var_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                check_hlds__inst_match__Var_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                check_hlds__inst_match__Var_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                {
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__Var_251, check_hlds__inst_match__Var_250, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_76);
                                }
                                if (check_hlds__inst_match__succeeded)
                                  {
                                    check_hlds__inst_match__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                                    check_hlds__inst_match__Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                                    check_hlds__inst_match__Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                                    check_hlds__inst_match__Var_188 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                                    check_hlds__inst_match__Var_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                    check_hlds__inst_match__Var_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                    check_hlds__inst_match__Var_190 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                    {
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(check_hlds__inst_match__Var_77, check_hlds__inst_match__Var_250, check_hlds__inst_match__UniqB_107, check_hlds__inst_match__Var_185);
                                    }
                                    if (check_hlds__inst_match__succeeded)
                                      {
                                        check_hlds__inst_match__Var_79 = (MR_Integer) 0;
                                        {
                                          check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__Var_243, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                                        }
                                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_79 == check_hlds__inst_match__Var_243);
                                      }
                                  }
                              }
                          }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word check_hlds__inst_match__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                        MR_Word check_hlds__inst_match__Var_72;
                        MR_Word check_hlds__inst_match__Var_244;
                        MR_Word check_hlds__inst_match__Var_261;
                        MR_Word check_hlds__inst_match__Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match__Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match__Var_199 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                        MR_Word check_hlds__inst_match__Var_200 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word check_hlds__inst_match__Var_201 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        MR_Word check_hlds__inst_match__Var_202 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        MR_Word check_hlds__inst_match__Var_255;
                        MR_Word check_hlds__inst_match__Var_256;
                        MR_Word check_hlds__inst_match__Var_257;
                        MR_Word check_hlds__inst_match__Var_258;
                        MR_Word check_hlds__inst_match__Var_259;
                        MR_Word check_hlds__inst_match__Var_260;

                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__Var_251, check_hlds__inst_match__Var_250, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__Var_69);
                        }
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                            check_hlds__inst_match__Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                            check_hlds__inst_match__Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                            check_hlds__inst_match__Var_258 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                            check_hlds__inst_match__Var_257 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_256 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_255 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                            switch (check_hlds__inst_match__Var_252) {
                              default:
                                check_hlds__inst_match__succeeded = MR_FALSE;
                                break;
                              case (MR_Integer) 2:
                                {
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__Var_250, check_hlds__inst_match__Var_261);
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__Var_250, check_hlds__inst_match__Var_261);
                                }
                                break;
                            }
                            if (check_hlds__inst_match__succeeded)
                              {
                                check_hlds__inst_match__Var_72 = (MR_Integer) 0;
                                {
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__Var_244, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                                }
                                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_72 == check_hlds__inst_match__Var_244);
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
              MR_Word check_hlds__inst_match__Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
                default:
                  check_hlds__inst_match__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
                    default:
                      check_hlds__inst_match__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
                        check_hlds__inst_match__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__inst_match__Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__UniqB_114 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__HOInstInfoB_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                    MR_Word check_hlds__inst_match__Var_218 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                    MR_Word check_hlds__inst_match__Var_219 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_220 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__Var_66, check_hlds__inst_match__Var_254, check_hlds__inst_match__UniqB_114);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__Var_253, check_hlds__inst_match__HOInstInfoB_115, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
                    default:
                      check_hlds__inst_match__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__inst_match__TypeCtorInfo_239_239;
                        MR_Word check_hlds__inst_match__Type_36;
                        MR_Word check_hlds__inst_match__Var_61;
                        MR_Word check_hlds__inst_match__Var_62;
                        MR_Word check_hlds__inst_match__Var_63;
                        MR_Word check_hlds__inst_match__UniqB_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match__BoundInstsB_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
                        MR_Word check_hlds__inst_match___InstResultsB_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match__Var_221;
                        MR_Word check_hlds__inst_match__Var_222;
                        MR_Word check_hlds__inst_match__Var_223;
                        MR_Word check_hlds__inst_match__Var_224;
                        MR_Word check_hlds__inst_match__Var_225;
                        MR_Word check_hlds__inst_match__Var_226;
                        MR_Word check_hlds__inst_match__Var_227;
                        MR_Word check_hlds__inst_match__Var_228;
                        MR_Word check_hlds__inst_match__Var_229;
                        MR_Word check_hlds__inst_match__Var_230;
                        MR_Word check_hlds__inst_match__Var_231;
                        MR_Word check_hlds__inst_match__Var_232;

                        check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__Type_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
                            check_hlds__inst_match__Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                            check_hlds__inst_match__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                            check_hlds__inst_match__Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                            check_hlds__inst_match__Var_224 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                            check_hlds__inst_match__Var_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_225 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_226 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                            {
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__Var_61, check_hlds__inst_match__Var_254, check_hlds__inst_match__UniqB_118);
                            }
                            if (check_hlds__inst_match__succeeded)
                              {
                                check_hlds__inst_match__TypeCtorInfo_239_239 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
                                {
                                  check_hlds__inst_match__Var_62 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_239_239);
                                }
                                check_hlds__inst_match__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                                check_hlds__inst_match__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                                check_hlds__inst_match__Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                                check_hlds__inst_match__Var_229 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                                check_hlds__inst_match__Var_230 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                check_hlds__inst_match__Var_231 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                check_hlds__inst_match__Var_232 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                {
                                  check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__Var_62, check_hlds__inst_match__Var_63, check_hlds__inst_match__BoundInstsB_120, check_hlds__inst_match__Type_36);
                                }
                                if (check_hlds__inst_match__succeeded)
                                  {
                                    check_hlds__inst_match__succeeded = check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(check_hlds__inst_match__Var_254, check_hlds__inst_match__BoundInstsB_120, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                                  }
                              }
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__inst_match__Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word check_hlds__inst_match__UniqB_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match__HOInstInfoB_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match__Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
                        MR_Word check_hlds__inst_match__Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match__Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match__Var_236 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
                        MR_Word check_hlds__inst_match__Var_237 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        MR_Word check_hlds__inst_match__Var_238 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__Var_59, check_hlds__inst_match__Var_254, check_hlds__inst_match__UniqB_123);
                        }
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__Var_253, check_hlds__inst_match__HOInstInfoB_124, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                          }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_String check_hlds__inst_match__Var_56;
                        MR_String check_hlds__inst_match__Var_57;
                        MR_String check_hlds__inst_match__Var_58;

                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_253 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__Var_56 = (MR_String) "check_hlds.inst_match";
                            check_hlds__inst_match__Var_57 = (MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_4\'/5";
                            check_hlds__inst_match__Var_58 = (MR_String) "inst_matches_initial(ground, abstract_inst) == \?\?";
                            {
                              mercury__require__unexpected_3_p_0(check_hlds__inst_match__Var_56, check_hlds__inst_match__Var_57, check_hlds__inst_match__Var_58);
                            }
                            check_hlds__inst_match__succeeded = MR_TRUE;
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
              MR_Word check_hlds__inst_match__Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
                default:
                  check_hlds__inst_match__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
                    default:
                      check_hlds__inst_match__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
                        check_hlds__inst_match__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__inst_match__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_53 == (MR_Integer) 0);
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (check_hlds__inst_match__succeeded)
                          {
                            *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
                            check_hlds__inst_match__succeeded = MR_TRUE;
                          }
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
                    default:
                      check_hlds__inst_match__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word check_hlds__inst_match__TypeCtorInfo_240_240;
                        MR_Word check_hlds__inst_match__TypeInfo_241_241;
                        MR_Word check_hlds__inst_match__ArgsB_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match__MaybeTypes_47;
                        MR_Integer check_hlds__inst_match__Var_50;
                        MR_Word check_hlds__inst_match__Var_51;
                        MR_Word check_hlds__inst_match__Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

                        {
                          check_hlds__inst_match__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_match__Var_247, check_hlds__inst_match__Var_245);
                        }
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__TypeCtorInfo_240_240 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                            {
                              check_hlds__inst_match__Var_50 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_240_240, check_hlds__inst_match__Var_246);
                            }
                            check_hlds__inst_match__Var_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            check_hlds__inst_match__TypeInfo_241_241 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
                            {
                              mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_241_241, check_hlds__inst_match__Var_50, ((MR_Box) (check_hlds__inst_match__Var_51)), &check_hlds__inst_match__MaybeTypes_47);
                            }
                            {
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__Var_246, check_hlds__inst_match__ArgsB_46, check_hlds__inst_match__MaybeTypes_47, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                            }
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
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__ThisExpansion_10;
    MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
    MR_Word check_hlds__inst_match__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
    MR_Word check_hlds__inst_match__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
    MR_Word check_hlds__inst_match__Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
    MR_Word check_hlds__inst_match__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Expansions_12;

    {
      check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
    }
    {
      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
    }
    if (check_hlds__inst_match__succeeded)
      {
        MR_Word check_hlds__inst_match__ExpandedInstA_13;
        MR_Word check_hlds__inst_match__ExpandedInstB_14;
        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
        MR_Word check_hlds__inst_match__Var_19;
        MR_Word check_hlds__inst_match__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__CalculateSub_72;
        MR_Word check_hlds__inst_match__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
        MR_Word check_hlds__inst_match__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__Var_42;
        MR_Word check_hlds__inst_match__Var_43;
        MR_Word check_hlds__inst_match__Var_44;
        MR_Word check_hlds__inst_match__Var_45;
        MR_Word check_hlds__inst_match__Var_46;
        MR_Word check_hlds__inst_match__Var_47;
        MR_Word check_hlds__inst_match__Var_78;
        MR_Word check_hlds__inst_match__Var_79;
        MR_Word check_hlds__inst_match__Var_80;
        MR_Word check_hlds__inst_match__Var_81;
        MR_Word check_hlds__inst_match__Var_82;
        MR_Word check_hlds__inst_match__Var_83;

        {
          check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__Var_29));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__Var_31));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__Var_32 | ((((check_hlds__inst_match__Var_33 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_34 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_35 << (MR_Integer) 4)))))))));
        }
        {
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__Var_29, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
        }
        check_hlds__inst_match__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
        check_hlds__inst_match__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
        check_hlds__inst_match__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
        check_hlds__inst_match__Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        {
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__Var_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
        }
        check_hlds__inst_match__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
        check_hlds__inst_match__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
        check_hlds__inst_match__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
        check_hlds__inst_match__CalculateSub_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        switch (check_hlds__inst_match__CalculateSub_72) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
            }
            break;
          case (MR_Integer) 2:
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
            }
            break;
          case (MR_Integer) 1:
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
            }
            break;
        }
      }
    else
      {
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
  MR_Word check_hlds__inst_match__InstA_1,
  MR_Word check_hlds__inst_match__InstB_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

{
#define MR_PROC_LABEL check_hlds__inst_match__same_addr_insts_2_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA =  check_hlds__inst_match__InstA_1 ;
	InstB =  check_hlds__inst_match__InstB_2 ;
		{

    SUCCESS_INDICATOR = ((void *) InstA == (void *) InstB);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
check_hlds__inst_match__succeeded  = SUCCESS_INDICATOR;
}
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__BoundInsts_2,
  MR_Word check_hlds__inst_match__Uniq_3,
  MR_Word check_hlds__inst_match__ModuleInfo_4)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    switch (check_hlds__inst_match__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 0);
          if (check_hlds__inst_match__succeeded)
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
            }
          else
            {
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 2);
              if (check_hlds__inst_match__succeeded)
                {
                  check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
                }
              else
                check_hlds__inst_match__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 0:
        {
          check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 1);
          if (check_hlds__inst_match__succeeded)
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
            }
          else
            {
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 2);
              if (check_hlds__inst_match__succeeded)
                {
                  check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
                }
              else
                check_hlds__inst_match__succeeded = MR_TRUE;
            }
        }
        break;
    }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__InstA_2,
  MR_Word check_hlds__inst_match__InstB_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    switch (check_hlds__inst_match__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (check_hlds__inst_match__InstB_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstA_2 == (MR_Integer) 3);
            break;
          case (MR_Integer) 4:
            switch (check_hlds__inst_match__InstA_2) {
              default:
                check_hlds__inst_match__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                check_hlds__inst_match__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                check_hlds__inst_match__succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 2:
            if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__InstA_2))))
              {
                check_hlds__inst_match__succeeded = MR_TRUE;
              }
            else
              check_hlds__inst_match__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (check_hlds__inst_match__InstA_2) {
              default:
                check_hlds__inst_match__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                check_hlds__inst_match__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                check_hlds__inst_match__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                check_hlds__inst_match__succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (check_hlds__inst_match__InstA_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_3 == (MR_Integer) 3);
            break;
          case (MR_Integer) 4:
            switch (check_hlds__inst_match__InstB_3) {
              default:
                check_hlds__inst_match__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                check_hlds__inst_match__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                check_hlds__inst_match__succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 2:
            if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__InstB_3))))
              {
                check_hlds__inst_match__succeeded = MR_TRUE;
              }
            else
              check_hlds__inst_match__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (check_hlds__inst_match__InstB_3) {
              default:
                check_hlds__inst_match__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                check_hlds__inst_match__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                check_hlds__inst_match__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                check_hlds__inst_match__succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    if ((check_hlds__inst_match__HOInstInfoB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__inst_match__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *check_hlds__inst_match__STATE_VARIABLE_Info_17 = check_hlds__inst_match__STATE_VARIABLE_Info_0_16;
          check_hlds__inst_match__succeeded = MR_TRUE;
        }
      else
        {
          MR_Word check_hlds__inst_match__PredInst_67 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_6), (MR_Integer) 1);
          MR_Word check_hlds__inst_match__PredOrFunc_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_67, (MR_Integer) 0)));
          MR_Word check_hlds__inst_match__ArgModes_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_67, (MR_Integer) 1)));
          MR_Word check_hlds__inst_match__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_67, (MR_Integer) 2)));
          MR_Word check_hlds__inst_match__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_67, (MR_Integer) 3)));

          switch (check_hlds__inst_match__PredOrFunc_74) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Integer check_hlds__inst_match__Arity_78;
                MR_Word check_hlds__inst_match__DefaultFunc_79;

                {
                  check_hlds__inst_match__Arity_78 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__inst_match__ArgModes_75);
                }
                {
                  check_hlds__inst_match__DefaultFunc_79 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_78);
                }
                {
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(check_hlds__inst_match__PredInst_67, check_hlds__inst_match__DefaultFunc_79, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                }
              }
              break;
            case (MR_Integer) 0:
              {
                *check_hlds__inst_match__STATE_VARIABLE_Info_17 = check_hlds__inst_match__STATE_VARIABLE_Info_0_16;
                check_hlds__inst_match__succeeded = MR_TRUE;
              }
              break;
          }
        }
    else
      {
        MR_Word check_hlds__inst_match__Var_25 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_7), (MR_Integer) 1);

        if ((check_hlds__inst_match__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__inst_match__TypeCtorInfo_24_24;
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_59;
            MR_Word check_hlds__inst_match__ArgModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 1)));
            MR_Integer check_hlds__inst_match__Arity_14;
            MR_Word check_hlds__inst_match__PredInstA_15;
            MR_Word check_hlds__inst_match__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__PredOrFunc_50;
            MR_Word check_hlds__inst_match__ModesA_51;
            MR_Word check_hlds__inst_match__Det_53;
            MR_Word check_hlds__inst_match__ModesB_54;
            MR_Word check_hlds__inst_match__MaybeTypes_56;
            MR_Integer check_hlds__inst_match__Var_57;
            MR_Word check_hlds__inst_match__Var_60;
            MR_Word check_hlds__inst_match__Var_61;
            MR_Word check_hlds__inst_match__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 2)));
            MR_Word check_hlds__inst_match___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 3)));
            MR_Word check_hlds__inst_match___MaybeArgRegsA_52;
            MR_Word check_hlds__inst_match___MaybeArgRegsB_55;

            check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_19 == (MR_Integer) 1);
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                {
                  check_hlds__inst_match__Arity_14 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_24_24, check_hlds__inst_match__ArgModes_11);
                }
                {
                  check_hlds__inst_match__PredInstA_15 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_14);
                }
                check_hlds__inst_match__PredOrFunc_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 0)));
                check_hlds__inst_match__ModesA_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 1)));
                check_hlds__inst_match___MaybeArgRegsA_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 2)));
                check_hlds__inst_match__Det_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 3)));
                check_hlds__inst_match__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 0)));
                check_hlds__inst_match__ModesB_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 1)));
                check_hlds__inst_match___MaybeArgRegsB_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 2)));
                check_hlds__inst_match__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 3)));
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_50 == check_hlds__inst_match__Var_60);
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_53 == check_hlds__inst_match__Var_61);
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__TypeCtorInfo_21_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                        {
                          check_hlds__inst_match__Var_57 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_59, check_hlds__inst_match__ModesA_51);
                        }
                        {
                          check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_57, &check_hlds__inst_match__MaybeTypes_56);
                        }
                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_51, check_hlds__inst_match__ModesB_54, check_hlds__inst_match__MaybeTypes_56, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                        }
                      }
                  }
              }
          }
        else
          {
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_41;
            MR_Word check_hlds__inst_match__PredInstA_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_6), (MR_Integer) 1);
            MR_Word check_hlds__inst_match__PredOrFunc_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__ModesA_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__Det_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 3)));
            MR_Word check_hlds__inst_match__ModesB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__MaybeTypes_38;
            MR_Integer check_hlds__inst_match__Var_39;
            MR_Word check_hlds__inst_match__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 3)));
            MR_Word check_hlds__inst_match___MaybeArgRegsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 2)));
            MR_Word check_hlds__inst_match___MaybeArgRegsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 2)));

            check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_32 == check_hlds__inst_match__Var_42);
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_35 == check_hlds__inst_match__Var_43);
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__TypeCtorInfo_21_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                    {
                      check_hlds__inst_match__Var_39 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_41, check_hlds__inst_match__ModesA_33);
                    }
                    {
                      check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_39, &check_hlds__inst_match__MaybeTypes_38);
                    }
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_33, check_hlds__inst_match__ModesB_36, check_hlds__inst_match__MaybeTypes_38, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                    }
                  }
              }
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho10_6_p_0(
  MR_Word check_hlds__inst_match__InstA_8,
  MR_Word check_hlds__inst_match__InstB_9,
  MR_Word check_hlds__inst_match__Type_10,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
    MR_Word check_hlds__inst_match__Var_16;
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
    MR_Word check_hlds__inst_match__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
    MR_Word check_hlds__inst_match__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
    MR_Word check_hlds__inst_match__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
    MR_Word check_hlds__inst_match__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_32;
    MR_Word check_hlds__inst_match__Var_33;
    MR_Word check_hlds__inst_match__Var_34;
    MR_Word check_hlds__inst_match__Var_36;
    MR_Word check_hlds__inst_match__Var_37;
    MR_Word check_hlds__inst_match__Var_38;
    MR_Word check_hlds__inst_match__Var_35;

    switch (check_hlds__inst_match__CalculateSub_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__inst_match__Var_16 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        check_hlds__inst_match__Var_16 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        check_hlds__inst_match__Var_16 = (MR_Integer) 0;
        break;
    }
    {
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__Var_19));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__Var_20));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__Var_21));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__Var_16 | ((((check_hlds__inst_match__Var_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_24 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
        check_hlds__inst_match__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
        check_hlds__inst_match__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
        check_hlds__inst_match__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__Var_32));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__Var_33));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__Var_34));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__Var_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_38 << (MR_Integer) 4)))))))));
        }
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho9_6_p_0(
  MR_Word check_hlds__inst_match__InstA_8,
  MR_Word check_hlds__inst_match__InstB_9,
  MR_Word check_hlds__inst_match__Type_10,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
    MR_Word check_hlds__inst_match__Var_16;
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
    MR_Word check_hlds__inst_match__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
    MR_Word check_hlds__inst_match__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
    MR_Word check_hlds__inst_match__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
    MR_Word check_hlds__inst_match__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__inst_match__Var_32;
    MR_Word check_hlds__inst_match__Var_33;
    MR_Word check_hlds__inst_match__Var_34;
    MR_Word check_hlds__inst_match__Var_36;
    MR_Word check_hlds__inst_match__Var_37;
    MR_Word check_hlds__inst_match__Var_38;
    MR_Word check_hlds__inst_match__Var_35;

    switch (check_hlds__inst_match__CalculateSub_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__inst_match__Var_16 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        check_hlds__inst_match__Var_16 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        check_hlds__inst_match__Var_16 = (MR_Integer) 0;
        break;
    }
    {
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__Var_19));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__Var_20));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__Var_21));
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__Var_16 | ((((check_hlds__inst_match__Var_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_24 << (MR_Integer) 4)))))))));
    }
    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
        check_hlds__inst_match__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
        check_hlds__inst_match__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
        check_hlds__inst_match__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
        check_hlds__inst_match__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        check_hlds__inst_match__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__Var_32));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__Var_33));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__Var_34));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__Var_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_38 << (MR_Integer) 4)))))))));
        }
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
    if (check_hlds__inst_match__succeeded)
      {
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(
  MR_Word check_hlds__inst_match__InstA_10,
  MR_Word check_hlds__inst_match__InstB_11,
  MR_Word check_hlds__inst_match__Type_12,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
{
  {
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word check_hlds__inst_match__InstVarsB_14;
    MR_Word check_hlds__inst_match__SubInstB_15;

    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
        {
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
          MR_Word check_hlds__inst_match__UnifyInst_17;
          MR_Word check_hlds__inst_match__ModuleInfo_19;
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
          MR_Word check_hlds__inst_match__Var_41;
          MR_Word check_hlds__inst_match__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
          MR_Word check_hlds__inst_match__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
          MR_Word check_hlds__inst_match__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
          MR_Word check_hlds__inst_match__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match___Det_18;
          MR_Word check_hlds__inst_match__Var_40;
          MR_Word check_hlds__inst_match__Var_42;
          MR_Word check_hlds__inst_match__Var_43;
          MR_Word check_hlds__inst_match__Var_44;
          MR_Word check_hlds__inst_match__Var_45;
          MR_Word check_hlds__inst_match__Var_39;
          MR_Word check_hlds__inst_match__UnifySubInst_20;
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
          MR_Word check_hlds__inst_match__Var_46;

          {
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
          if (check_hlds__inst_match__succeeded)
            {
              check_hlds__inst_match__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
              check_hlds__inst_match__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
              check_hlds__inst_match__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
              check_hlds__inst_match__Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
              check_hlds__inst_match__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              check_hlds__inst_match__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              check_hlds__inst_match__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              {
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__Var_40));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__Var_41));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__Var_42 | ((((check_hlds__inst_match__Var_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_45 << (MR_Integer) 4)))))))));
              }
              if ((check_hlds__inst_match__Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
                  check_hlds__inst_match__succeeded = MR_TRUE;
                }
              else
                {
                  MR_Word check_hlds__inst_match__Var_57;
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

                  {
                    check_hlds__inst_match__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_57, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_57, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
                  }
                  {
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__Var_57, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                      check_hlds__inst_match__succeeded = MR_TRUE;
                    }
                }
              if (check_hlds__inst_match__succeeded)
                {
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
                      {
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__Var_46)));
                      }
                    }
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
                  else
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
                }
            }
        }
      }
    else
      {
        MR_Word check_hlds__inst_match__SubInstA_22;
        MR_Word check_hlds__inst_match___InstVarsA_21;

        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
          }
        else
          {
            check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
    if (check_hlds__inst_match__succeeded)
      {
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(
  MR_Word check_hlds__inst_match__InstA_10,
  MR_Word check_hlds__inst_match__InstB_11,
  MR_Word check_hlds__inst_match__Type_12,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
{
  {
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word check_hlds__inst_match__InstVarsB_14;
    MR_Word check_hlds__inst_match__SubInstB_15;

    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
        {
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
          MR_Word check_hlds__inst_match__UnifyInst_17;
          MR_Word check_hlds__inst_match__ModuleInfo_19;
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
          MR_Word check_hlds__inst_match__Var_41;
          MR_Word check_hlds__inst_match__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
          MR_Word check_hlds__inst_match__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
          MR_Word check_hlds__inst_match__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
          MR_Word check_hlds__inst_match__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          MR_Word check_hlds__inst_match___Det_18;
          MR_Word check_hlds__inst_match__Var_40;
          MR_Word check_hlds__inst_match__Var_42;
          MR_Word check_hlds__inst_match__Var_43;
          MR_Word check_hlds__inst_match__Var_44;
          MR_Word check_hlds__inst_match__Var_45;
          MR_Word check_hlds__inst_match__Var_39;
          MR_Word check_hlds__inst_match__UnifySubInst_20;
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
          MR_Word check_hlds__inst_match__Var_46;

          {
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
          if (check_hlds__inst_match__succeeded)
            {
              check_hlds__inst_match__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
              check_hlds__inst_match__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
              check_hlds__inst_match__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
              check_hlds__inst_match__Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
              check_hlds__inst_match__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              check_hlds__inst_match__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              check_hlds__inst_match__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              {
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__Var_40));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__Var_41));
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__Var_42 | ((((check_hlds__inst_match__Var_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_45 << (MR_Integer) 4)))))))));
              }
              if ((check_hlds__inst_match__Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
                  check_hlds__inst_match__succeeded = MR_TRUE;
                }
              else
                {
                  MR_Word check_hlds__inst_match__Var_69;
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

                  {
                    check_hlds__inst_match__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_69, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_69, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_69, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_69, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
                  }
                  {
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__Var_69, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                      check_hlds__inst_match__succeeded = MR_TRUE;
                    }
                }
              if (check_hlds__inst_match__succeeded)
                {
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
                      {
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__Var_46)));
                      }
                    }
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
                  else
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
                }
            }
        }
      }
    else
      {
        MR_Word check_hlds__inst_match__SubInstA_22;
        MR_Word check_hlds__inst_match___InstVarsA_21;

        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
          }
        else
          {
            check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho9_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__inst_match__succeeded)
                  {
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
                    check_hlds__inst_match__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            MR_Word check_hlds__inst_match__ModeA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__ModeAs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__ModeB_11;
            MR_Word check_hlds__inst_match__ModeBs_12;
            MR_Word check_hlds__inst_match__MaybeType_13;
            MR_Word check_hlds__inst_match__MaybeTypes_14;
            MR_Word check_hlds__inst_match__ModuleInfo_16;
            MR_Word check_hlds__inst_match__InitialA_17;
            MR_Word check_hlds__inst_match__FinalA0_18;
            MR_Word check_hlds__inst_match__InitialB_19;
            MR_Word check_hlds__inst_match__FinalB_20;
            MR_Word check_hlds__inst_match__FinalA_21;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_25_25;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
            MR_Word check_hlds__inst_match__CalculateSub_40;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_9_41;
            MR_Word check_hlds__inst_match__Var_42;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_11_43;
            MR_Word check_hlds__inst_match__Var_60;
            MR_Word check_hlds__inst_match__Var_28;
            MR_Word check_hlds__inst_match__Var_29;
            MR_Word check_hlds__inst_match__Var_30;
            MR_Word check_hlds__inst_match__Var_31;
            MR_Word check_hlds__inst_match__Var_32;
            MR_Word check_hlds__inst_match__Var_33;
            MR_Word check_hlds__inst_match__Var_45;
            MR_Word check_hlds__inst_match__Var_46;
            MR_Word check_hlds__inst_match__Var_47;
            MR_Word check_hlds__inst_match__Var_48;
            MR_Word check_hlds__inst_match__Var_49;
            MR_Word check_hlds__inst_match__Var_50;
            MR_Word check_hlds__inst_match__Var_51;
            MR_Word check_hlds__inst_match__Var_52;
            MR_Word check_hlds__inst_match__Var_53;
            MR_Word check_hlds__inst_match__Var_55;
            MR_Word check_hlds__inst_match__Var_56;
            MR_Word check_hlds__inst_match__Var_57;
            MR_Word check_hlds__inst_match__Var_54;
            MR_Word check_hlds__inst_match__Var_58;
            MR_Word check_hlds__inst_match__Var_59;
            MR_Word check_hlds__inst_match__Var_62;
            MR_Word check_hlds__inst_match__Var_63;
            MR_Word check_hlds__inst_match__Var_64;
            MR_Word check_hlds__inst_match__Var_61;

            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__ModeB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__inst_match__ModeBs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
                    check_hlds__inst_match__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
                    check_hlds__inst_match__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
                    check_hlds__inst_match__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
                    check_hlds__inst_match__Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
                    check_hlds__inst_match__Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    check_hlds__inst_match__Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    check_hlds__inst_match__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                    {
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__inst_match__ModuleInfo_16, check_hlds__inst_match__ModeA_9, &check_hlds__inst_match__InitialA_17, &check_hlds__inst_match__FinalA0_18);
                    }
                    {
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__inst_match__ModuleInfo_16, check_hlds__inst_match__ModeB_11, &check_hlds__inst_match__InitialB_19, &check_hlds__inst_match__FinalB_20);
                    }
                    check_hlds__inst_match__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
                    check_hlds__inst_match__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
                    check_hlds__inst_match__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
                    check_hlds__inst_match__CalculateSub_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
                    check_hlds__inst_match__Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    check_hlds__inst_match__Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    check_hlds__inst_match__Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                    {
                      check_hlds__inst_match__Var_42 = check_hlds__inst_match__swap_calculate_sub_1_f_0(check_hlds__inst_match__CalculateSub_40);
                    }
                    check_hlds__inst_match__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
                    check_hlds__inst_match__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
                    check_hlds__inst_match__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
                    check_hlds__inst_match__Var_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
                    check_hlds__inst_match__Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    check_hlds__inst_match__Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    check_hlds__inst_match__Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                    {
                      check_hlds__inst_match__STATE_VARIABLE_Info_9_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_41, 0) = ((MR_Box) (check_hlds__inst_match__Var_51));
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_41, 1) = ((MR_Box) (check_hlds__inst_match__Var_52));
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_41, 2) = ((MR_Box) (check_hlds__inst_match__Var_53));
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_41, 3) = ((MR_Box) ((check_hlds__inst_match__Var_42 | ((((check_hlds__inst_match__Var_55 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_56 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_57 << (MR_Integer) 4)))))))));
                    }
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InitialB_19, check_hlds__inst_match__InitialA_17, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_9_41, &check_hlds__inst_match__STATE_VARIABLE_Info_11_43);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_43, (MR_Integer) 0)));
                        check_hlds__inst_match__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_43, (MR_Integer) 1)));
                        check_hlds__inst_match__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_43, (MR_Integer) 2)));
                        check_hlds__inst_match__Var_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_43, (MR_Integer) 3)))) & (MR_Integer) 3);
                        check_hlds__inst_match__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_43, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        check_hlds__inst_match__Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_43, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        check_hlds__inst_match__Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_43, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        {
                          check_hlds__inst_match__STATE_VARIABLE_Info_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, 0) = ((MR_Box) (check_hlds__inst_match__Var_58));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, 1) = ((MR_Box) (check_hlds__inst_match__Var_59));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, 2) = ((MR_Box) (check_hlds__inst_match__Var_60));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_40 | ((((check_hlds__inst_match__Var_62 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_63 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_64 << (MR_Integer) 4)))))))));
                        }
                        if ((check_hlds__inst_match__Var_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          check_hlds__inst_match__FinalA_21 = check_hlds__inst_match__FinalA0_18;
                        else
                          {
                            MR_Word check_hlds__inst_match__Subst_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__Var_60, (MR_Integer) 0)));

                            {
                              parse_tree__prog_mode__inst_apply_substitution_3_p_0(check_hlds__inst_match__Subst_68, check_hlds__inst_match__FinalA0_18, &check_hlds__inst_match__FinalA_21);
                            }
                          }
                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__FinalA_21, check_hlds__inst_match__FinalB_20, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_25_25, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                        }
                        if (check_hlds__inst_match__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__ModeAs_10;
                              MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__ModeBs_12;
                              MR_Word check_hlds__inst_match__next_value_of_HeadVar__3_3 = check_hlds__inst_match__MaybeTypes_14;
                              MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

                              check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4;
                              check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__next_value_of_HeadVar__3_3;
                              check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                              check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                      }
                  }
              }
          }
        return check_hlds__inst_match__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_2_5_p_0(
  MR_Word check_hlds__inst_match__PredInstA_6,
  MR_Word check_hlds__inst_match__PredInstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_18)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__TypeCtorInfo_21_21;
    MR_Word check_hlds__inst_match__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_6, (MR_Integer) 0)));
    MR_Word check_hlds__inst_match__ModesA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_6, (MR_Integer) 1)));
    MR_Word check_hlds__inst_match__Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_6, (MR_Integer) 3)));
    MR_Word check_hlds__inst_match__ModesB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_7, (MR_Integer) 1)));
    MR_Word check_hlds__inst_match__MaybeTypes_16;
    MR_Integer check_hlds__inst_match__Var_19;
    MR_Word check_hlds__inst_match__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_7, (MR_Integer) 0)));
    MR_Word check_hlds__inst_match__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_7, (MR_Integer) 3)));
    MR_Word check_hlds__inst_match___MaybeArgRegsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_6, (MR_Integer) 2)));
    MR_Word check_hlds__inst_match___MaybeArgRegsB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_7, (MR_Integer) 2)));

    check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_10 == check_hlds__inst_match__Var_22);
    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_13 == check_hlds__inst_match__Var_23);
        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
            {
              check_hlds__inst_match__Var_19 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_21, check_hlds__inst_match__ModesA_11);
            }
            {
              check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_19, &check_hlds__inst_match__MaybeTypes_16);
            }
            {
              check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_11, check_hlds__inst_match__ModesB_14, check_hlds__inst_match__MaybeTypes_16, check_hlds__inst_match__STATE_VARIABLE_Info_0_17, check_hlds__inst_match__STATE_VARIABLE_Info_18);
            }
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(
  MR_Word check_hlds__inst_match__PredInst_5,
  MR_Word check_hlds__inst_match__MaybeType_6,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_15)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 0)));
    MR_Word check_hlds__inst_match__ArgModes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 1)));
    MR_Word check_hlds__inst_match__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 2)));
    MR_Word check_hlds__inst_match__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 3)));

    switch (check_hlds__inst_match__PredOrFunc_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_match__TypeCtorInfo_21_33;
          MR_Integer check_hlds__inst_match__Arity_12;
          MR_Word check_hlds__inst_match__DefaultFunc_13;
          MR_Word check_hlds__inst_match__PredOrFunc_24;
          MR_Word check_hlds__inst_match__ModesA_25;
          MR_Word check_hlds__inst_match__Det_27;
          MR_Word check_hlds__inst_match__ModesB_28;
          MR_Word check_hlds__inst_match__MaybeTypes_30;
          MR_Integer check_hlds__inst_match__Var_31;
          MR_Word check_hlds__inst_match__Var_34;
          MR_Word check_hlds__inst_match__Var_35;
          MR_Word check_hlds__inst_match___MaybeArgRegsA_26;
          MR_Word check_hlds__inst_match___MaybeArgRegsB_29;

          {
            check_hlds__inst_match__Arity_12 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__inst_match__ArgModes_9);
          }
          {
            check_hlds__inst_match__DefaultFunc_13 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_12);
          }
          check_hlds__inst_match__PredOrFunc_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 0)));
          check_hlds__inst_match__ModesA_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 1)));
          check_hlds__inst_match___MaybeArgRegsA_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 2)));
          check_hlds__inst_match__Det_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 3)));
          check_hlds__inst_match__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__DefaultFunc_13, (MR_Integer) 0)));
          check_hlds__inst_match__ModesB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__DefaultFunc_13, (MR_Integer) 1)));
          check_hlds__inst_match___MaybeArgRegsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__DefaultFunc_13, (MR_Integer) 2)));
          check_hlds__inst_match__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__DefaultFunc_13, (MR_Integer) 3)));
          check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_24 == check_hlds__inst_match__Var_34);
          if (check_hlds__inst_match__succeeded)
            {
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_27 == check_hlds__inst_match__Var_35);
              if (check_hlds__inst_match__succeeded)
                {
                  check_hlds__inst_match__TypeCtorInfo_21_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                  {
                    check_hlds__inst_match__Var_31 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_33, check_hlds__inst_match__ModesA_25);
                  }
                  {
                    check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_6, check_hlds__inst_match__Var_31, &check_hlds__inst_match__MaybeTypes_30);
                  }
                  {
                    check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_25, check_hlds__inst_match__ModesB_28, check_hlds__inst_match__MaybeTypes_30, check_hlds__inst_match__STATE_VARIABLE_Info_0_14, check_hlds__inst_match__STATE_VARIABLE_Info_15);
                  }
                }
            }
        }
        break;
      case (MR_Integer) 0:
        {
          *check_hlds__inst_match__STATE_VARIABLE_Info_15 = check_hlds__inst_match__STATE_VARIABLE_Info_0_14;
          check_hlds__inst_match__succeeded = MR_TRUE;
        }
        break;
    }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(
  MR_Word check_hlds__inst_match__HOInstInfo_5,
  MR_Word check_hlds__inst_match__MaybeType_6,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_9,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_10)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    if ((check_hlds__inst_match__HOInstInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_match__STATE_VARIABLE_Info_10 = check_hlds__inst_match__STATE_VARIABLE_Info_0_9;
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_match__PredInst_8 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_5), (MR_Integer) 1);
        MR_Word check_hlds__inst_match__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_8, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__ArgModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_8, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_8, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_8, (MR_Integer) 3)));

        switch (check_hlds__inst_match__PredOrFunc_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer check_hlds__inst_match__Arity_21;
              MR_Word check_hlds__inst_match__DefaultFunc_22;

              {
                check_hlds__inst_match__Arity_21 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__inst_match__ArgModes_18);
              }
              {
                check_hlds__inst_match__DefaultFunc_22 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_21);
              }
              {
                check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(check_hlds__inst_match__PredInst_8, check_hlds__inst_match__DefaultFunc_22, check_hlds__inst_match__MaybeType_6, check_hlds__inst_match__STATE_VARIABLE_Info_0_9, check_hlds__inst_match__STATE_VARIABLE_Info_10);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              *check_hlds__inst_match__STATE_VARIABLE_Info_10 = check_hlds__inst_match__STATE_VARIABLE_Info_0_9;
              check_hlds__inst_match__succeeded = MR_TRUE;
            }
            break;
        }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word * check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_match__HeadVar__3_3 = (MR_Integer) 0;
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
          }
        else
          {
            MR_Word check_hlds__inst_match__BoundInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__BoundInsts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__ArgInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_10, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__HeadContainsNonstd_17;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_20_20;
            MR_Word check_hlds__inst_match___ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_10, (MR_Integer) 0)));

            {
              check_hlds__inst_match__inst_list_contains_nondefault_func_mode_5_p_0(check_hlds__inst_match__ArgInsts_16, check_hlds__inst_match__HeadVar__2_2, &check_hlds__inst_match__HeadContainsNonstd_17, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_20_20);
            }
            switch (check_hlds__inst_match__HeadContainsNonstd_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__BoundInsts_11;
                    MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_20_20;

                    check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4;
                    check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_match__HeadVar__3_3 = (MR_Integer) 1;
                  *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_20_20;
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_match__inst_list_contains_nondefault_func_mode_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word * check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_match__HeadVar__3_3 = (MR_Integer) 0;
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
          }
        else
          {
            MR_Word check_hlds__inst_match__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__Insts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__HeadContainsNonstd_15;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

            {
              check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(check_hlds__inst_match__Inst_10, check_hlds__inst_match__HeadVar__2_2, &check_hlds__inst_match__HeadContainsNonstd_15, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
            }
            switch (check_hlds__inst_match__HeadContainsNonstd_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__Insts_11;
                    MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

                    check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4;
                    check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_match__HeadVar__3_3 = (MR_Integer) 1;
                  *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(
  MR_Word check_hlds__inst_match__Inst_6,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30,
  MR_Word * check_hlds__inst_match__ContainsNonstd_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_31,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_32)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
              *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
              *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
            }
            break;
          case (MR_Integer) 2:
            {
              *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
              *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_match__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_match__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 3)));
                  MR_Word check_hlds__inst_match__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__inst_match__InstResults_13)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(check_hlds__inst_match__InstResults_13)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(check_hlds__inst_match__BoundInsts_14, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30, check_hlds__inst_match__ContainsNonstd_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_31, check_hlds__inst_match__STATE_VARIABLE_Info_32);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
                            *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(check_hlds__inst_match__BoundInsts_14, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30, check_hlds__inst_match__ContainsNonstd_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_31, check_hlds__inst_match__STATE_VARIABLE_Info_32);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__inst_match__HOInstInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_match__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_42_42;

                  if ((check_hlds__inst_match__HOInstInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      check_hlds__inst_match__STATE_VARIABLE_Info_42_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
                      check_hlds__inst_match__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word check_hlds__inst_match__PredInst_73 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_11), (MR_Integer) 1);

                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(check_hlds__inst_match__PredInst_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, &check_hlds__inst_match__STATE_VARIABLE_Info_42_42);
                      }
                    }
                  if (check_hlds__inst_match__succeeded)
                    {
                      *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_42_42;
                      *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
                    }
                  else
                    {
                      *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 1;
                      *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_contains_nondefault_func_mode_2\'/5", (MR_String) "uninstantiated inst parameter");
                    return;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_match__SubInst_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_match__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_match__next_value_of_Inst_6 = check_hlds__inst_match__SubInst_54;

                    check_hlds__inst_match__Inst_6 = check_hlds__inst_match__next_value_of_Inst_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_match__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

                  {
                    check_hlds__inst_match__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_match__InstName_22)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30);
                  }
                  if (check_hlds__inst_match__succeeded)
                    {
                      *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
                      *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
                    }
                  else
                    {
                      MR_Word check_hlds__inst_match__SubInst_23;
                      MR_Word check_hlds__inst_match__Var_35;
                      MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_34_50;
                      MR_Word check_hlds__inst_match__Var_60;
                      MR_Word check_hlds__inst_match__Var_61;
                      MR_Word check_hlds__inst_match__Var_62;
                      MR_Word check_hlds__inst_match__Var_63;
                      MR_Word check_hlds__inst_match__Var_64;
                      MR_Word check_hlds__inst_match__Var_65;

                      {
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_match__InstName_22)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30, &check_hlds__inst_match__STATE_VARIABLE_Expansions_34_50);
                      }
                      check_hlds__inst_match__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 0)));
                      check_hlds__inst_match__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 1)));
                      check_hlds__inst_match__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 2)));
                      check_hlds__inst_match__Var_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 3)))) & (MR_Integer) 3);
                      check_hlds__inst_match__Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      check_hlds__inst_match__Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      check_hlds__inst_match__Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      {
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__Var_35, check_hlds__inst_match__InstName_22, &check_hlds__inst_match__SubInst_23);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__inst_match__next_value_of_Inst_6 = check_hlds__inst_match__SubInst_23;
                        MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Expansions_0_30 = check_hlds__inst_match__STATE_VARIABLE_Expansions_34_50;

                        check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Expansions_0_30;
                        check_hlds__inst_match__Inst_6 = check_hlds__inst_match__next_value_of_Inst_6;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 5:
                {
                  *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
                  *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(
  MR_Word check_hlds__inst_match__Inst_5,
  MR_Word * check_hlds__inst_match__ContainsNonstd_6,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_9)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__Var_10;

    {
      check_hlds__inst_match__Var_10 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
    }
    {
      check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(check_hlds__inst_match__Inst_5, check_hlds__inst_match__Var_10, check_hlds__inst_match__ContainsNonstd_6, check_hlds__inst_match__STATE_VARIABLE_Info_0_8, check_hlds__inst_match__STATE_VARIABLE_Info_9);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__MaybeType_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
            check_hlds__inst_match__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__Y_13;
            MR_Word check_hlds__inst_match__Ys_14;
            MR_Word check_hlds__inst_match__ConsIdX_17;
            MR_Word check_hlds__inst_match__ArgsX_18;
            MR_Word check_hlds__inst_match__ConsIdY_19;
            MR_Word check_hlds__inst_match__ArgsY_20;

            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
                {
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
                if (check_hlds__inst_match__succeeded)
                  {
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
                    MR_Word check_hlds__inst_match__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
                    MR_Integer check_hlds__inst_match__Var_25;
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
                    MR_Word check_hlds__inst_match__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
                    MR_Word check_hlds__inst_match__Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
                    MR_Word check_hlds__inst_match__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                    {
                      check_hlds__inst_match__Var_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
                    {
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__Var_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__Var_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__Xs_12;
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__Ys_14;
                          MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4;
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
                else
                  {
                    MR_Word check_hlds__inst_match__QNameA_39;
                    MR_Integer check_hlds__inst_match__ArityA_40;
                    MR_Word check_hlds__inst_match__QNameB_42;
                    MR_Integer check_hlds__inst_match__ArityB_43;
                    MR_Word check_hlds__inst_match__Var_41;
                    MR_Word check_hlds__inst_match__Var_44;

                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__QNameA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
                        check_hlds__inst_match__ArityA_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
                        check_hlds__inst_match__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__QNameB_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
                            check_hlds__inst_match__ArityB_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
                            check_hlds__inst_match__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
                          }
                      }
                    if (check_hlds__inst_match__succeeded)
                      {
                        MR_String check_hlds__inst_match__NameA_45;
                        MR_String check_hlds__inst_match__NameB_47;
                        MR_Word check_hlds__inst_match__O_49;

                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_39)) == (MR_mktag((MR_Integer) 1))))
                          {
                            MR_Word check_hlds__inst_match__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));

                            check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 1)));
                          }
                        else
                          check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_42)) == (MR_mktag((MR_Integer) 1))))
                          {
                            MR_Word check_hlds__inst_match__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));

                            check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 1)));
                          }
                        else
                          check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));
                        {
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_49, check_hlds__inst_match__NameA_45, check_hlds__inst_match__NameB_47);
                        }
                        switch (check_hlds__inst_match__O_49) {
                          default:
                            check_hlds__inst_match__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_40 > check_hlds__inst_match__ArityB_43);
                            break;
                          case (MR_Integer) 2:
                            check_hlds__inst_match__succeeded = MR_TRUE;
                            break;
                        }
                      }
                    else
                      {
                        MR_Word check_hlds__inst_match__Var_53;

                        {
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__Var_53, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__Var_53);
                      }
                    if (check_hlds__inst_match__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__Ys_14;

                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                        }
                        continue;
                      }
                  }
              }
          }
        return check_hlds__inst_match__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_5_p_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1,
  MR_Word check_hlds__inst_match__HeadVar__2_2,
  MR_Word check_hlds__inst_match__HeadVar__3_3,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_match__succeeded;

        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__inst_match__succeeded)
                  {
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
                    check_hlds__inst_match__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            MR_Word check_hlds__inst_match__ArgA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__ArgsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__ArgB_11;
            MR_Word check_hlds__inst_match__ArgsB_12;
            MR_Word check_hlds__inst_match__MaybeType_13;
            MR_Word check_hlds__inst_match__MaybeTypes_14;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__ArgB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__inst_match__ArgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__ArgA_9, check_hlds__inst_match__ArgB_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__1_1 = check_hlds__inst_match__ArgsA_10;
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__2_2 = check_hlds__inst_match__ArgsB_12;
                          MR_Word check_hlds__inst_match__next_value_of_HeadVar__3_3 = check_hlds__inst_match__MaybeTypes_14;
                          MR_Word check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__next_value_of_STATE_VARIABLE_Info_0_4;
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__next_value_of_HeadVar__3_3;
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__next_value_of_HeadVar__2_2;
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return check_hlds__inst_match__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    if ((check_hlds__inst_match__HOInstInfoB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__inst_match__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *check_hlds__inst_match__STATE_VARIABLE_Info_17 = check_hlds__inst_match__STATE_VARIABLE_Info_0_16;
          check_hlds__inst_match__succeeded = MR_TRUE;
        }
      else
        {
          MR_Word check_hlds__inst_match__PredInst_67 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_6), (MR_Integer) 1);

          {
            check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(check_hlds__inst_match__PredInst_67, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
          }
        }
    else
      {
        MR_Word check_hlds__inst_match__Var_25 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_7), (MR_Integer) 1);

        if ((check_hlds__inst_match__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__inst_match__TypeCtorInfo_24_24;
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_59;
            MR_Word check_hlds__inst_match__ArgModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 1)));
            MR_Integer check_hlds__inst_match__Arity_14;
            MR_Word check_hlds__inst_match__PredInstA_15;
            MR_Word check_hlds__inst_match__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__PredOrFunc_50;
            MR_Word check_hlds__inst_match__ModesA_51;
            MR_Word check_hlds__inst_match__Det_53;
            MR_Word check_hlds__inst_match__ModesB_54;
            MR_Word check_hlds__inst_match__MaybeTypes_56;
            MR_Integer check_hlds__inst_match__Var_57;
            MR_Word check_hlds__inst_match__Var_60;
            MR_Word check_hlds__inst_match__Var_61;
            MR_Word check_hlds__inst_match__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 2)));
            MR_Word check_hlds__inst_match___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 3)));
            MR_Word check_hlds__inst_match___MaybeArgRegsA_52;
            MR_Word check_hlds__inst_match___MaybeArgRegsB_55;

            check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_19 == (MR_Integer) 1);
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                {
                  check_hlds__inst_match__Arity_14 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_24_24, check_hlds__inst_match__ArgModes_11);
                }
                {
                  check_hlds__inst_match__PredInstA_15 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_14);
                }
                check_hlds__inst_match__PredOrFunc_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 0)));
                check_hlds__inst_match__ModesA_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 1)));
                check_hlds__inst_match___MaybeArgRegsA_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 2)));
                check_hlds__inst_match__Det_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 3)));
                check_hlds__inst_match__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 0)));
                check_hlds__inst_match__ModesB_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 1)));
                check_hlds__inst_match___MaybeArgRegsB_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 2)));
                check_hlds__inst_match__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 3)));
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_50 == check_hlds__inst_match__Var_60);
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_53 == check_hlds__inst_match__Var_61);
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__TypeCtorInfo_21_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                        {
                          check_hlds__inst_match__Var_57 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_59, check_hlds__inst_match__ModesA_51);
                        }
                        {
                          check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_57, &check_hlds__inst_match__MaybeTypes_56);
                        }
                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_51, check_hlds__inst_match__ModesB_54, check_hlds__inst_match__MaybeTypes_56, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                        }
                      }
                  }
              }
          }
        else
          {
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_41;
            MR_Word check_hlds__inst_match__PredInstA_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_6), (MR_Integer) 1);
            MR_Word check_hlds__inst_match__PredOrFunc_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__ModesA_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__Det_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 3)));
            MR_Word check_hlds__inst_match__ModesB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__MaybeTypes_38;
            MR_Integer check_hlds__inst_match__Var_39;
            MR_Word check_hlds__inst_match__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 3)));
            MR_Word check_hlds__inst_match___MaybeArgRegsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 2)));
            MR_Word check_hlds__inst_match___MaybeArgRegsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Var_25, (MR_Integer) 2)));

            check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_32 == check_hlds__inst_match__Var_42);
            if (check_hlds__inst_match__succeeded)
              {
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_35 == check_hlds__inst_match__Var_43);
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__TypeCtorInfo_21_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                    {
                      check_hlds__inst_match__Var_39 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_41, check_hlds__inst_match__ModesA_33);
                    }
                    {
                      check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_39, &check_hlds__inst_match__MaybeTypes_38);
                    }
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_33, check_hlds__inst_match__ModesB_36, check_hlds__inst_match__MaybeTypes_38, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                    }
                  }
              }
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) {
      default:
        check_hlds__inst_match__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_match__InstA_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
                check_hlds__inst_match__succeeded = MR_TRUE;
              }
            else
            if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
              {
                MR_Word check_hlds__inst_match__Uniq_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                MR_Word check_hlds__inst_match__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

                switch (check_hlds__inst_match__Uniq_20) {
                  default:
                    check_hlds__inst_match__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 3:
                    check_hlds__inst_match__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 4:
                    check_hlds__inst_match__succeeded = MR_TRUE;
                    break;
                }
                if (check_hlds__inst_match__succeeded)
                  {
                    *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
                    check_hlds__inst_match__succeeded = MR_TRUE;
                  }
              }
            else
              check_hlds__inst_match__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
              check_hlds__inst_match__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_match__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
          MR_Word check_hlds__inst_match__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
            default:
              check_hlds__inst_match__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

                {
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__Var_156, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                }
                if (check_hlds__inst_match__succeeded)
                  {
                    check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__Var_157, check_hlds__inst_match__UniqB_12);
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
                default:
                  check_hlds__inst_match__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__inst_match__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__NextInstA_76;
                    MR_Word check_hlds__inst_match__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
                    MR_Word check_hlds__inst_match__Var_106 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
                    MR_Word check_hlds__inst_match__Var_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_67, check_hlds__inst_match__Var_157, check_hlds__inst_match__Var_156, &check_hlds__inst_match__NextInstA_76);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__NextInstA_76, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__inst_match__NextInstA_16;
                    MR_Word check_hlds__inst_match__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
                    MR_Word check_hlds__inst_match__Var_100 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
                    MR_Word check_hlds__inst_match__Var_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__inst_match__Var_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_69, check_hlds__inst_match__Var_157, check_hlds__inst_match__Var_156, &check_hlds__inst_match__NextInstA_16);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__NextInstA_16, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) {
          default:
            check_hlds__inst_match__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_match__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
              MR_Word check_hlds__inst_match__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
                default:
                  check_hlds__inst_match__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__inst_match__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                    MR_Word check_hlds__inst_match__Var_63;
                    MR_Word check_hlds__inst_match__Var_64;
                    MR_Word check_hlds__inst_match__Var_65;
                    MR_Word check_hlds__inst_match__UniqB_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__Var_150;
                    MR_Word check_hlds__inst_match__Var_110;
                    MR_Word check_hlds__inst_match__Var_111;
                    MR_Word check_hlds__inst_match__Var_112;
                    MR_Word check_hlds__inst_match__Var_113;
                    MR_Word check_hlds__inst_match__Var_114;
                    MR_Word check_hlds__inst_match__Var_115;
                    MR_Word check_hlds__inst_match__Var_116;
                    MR_Word check_hlds__inst_match__Var_117;
                    MR_Word check_hlds__inst_match__Var_118;
                    MR_Word check_hlds__inst_match__Var_119;
                    MR_Word check_hlds__inst_match__Var_120;
                    MR_Word check_hlds__inst_match__Var_121;

                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (check_hlds__inst_match__succeeded)
                      {
                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__Var_160, check_hlds__inst_match__UniqB_78);
                        }
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
                            check_hlds__inst_match__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
                            check_hlds__inst_match__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
                            check_hlds__inst_match__Var_112 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
                            check_hlds__inst_match__Var_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                            check_hlds__inst_match__Var_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                            {
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(check_hlds__inst_match__Var_158, check_hlds__inst_match__UniqB_78, check_hlds__inst_match__Var_63);
                            }
                            if (check_hlds__inst_match__succeeded)
                              {
                                check_hlds__inst_match__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
                                check_hlds__inst_match__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
                                check_hlds__inst_match__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
                                check_hlds__inst_match__Var_118 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
                                check_hlds__inst_match__Var_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                check_hlds__inst_match__Var_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                check_hlds__inst_match__Var_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                {
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_match__Var_159, check_hlds__inst_match__Var_158, check_hlds__inst_match__Var_64);
                                }
                                if (check_hlds__inst_match__succeeded)
                                  {
                                    check_hlds__inst_match__Var_65 = (MR_Integer) 0;
                                    {
                                      check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__Var_150, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                                    }
                                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_65 == check_hlds__inst_match__Var_150);
                                  }
                              }
                          }
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
                    default:
                      check_hlds__inst_match__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__inst_match__BoundInstsB_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
                        MR_Word check_hlds__inst_match__UniqB_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match___InstResultsB_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__Var_160, check_hlds__inst_match__UniqB_80);
                        }
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(check_hlds__inst_match__Var_158, check_hlds__inst_match__BoundInstsB_26, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                          }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__inst_match__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match__Var_57;
                        MR_Word check_hlds__inst_match__Var_58;
                        MR_Word check_hlds__inst_match__Var_59;
                        MR_Word check_hlds__inst_match__UniqB_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match__Var_151;
                        MR_Word check_hlds__inst_match__Var_122;
                        MR_Word check_hlds__inst_match__Var_123;
                        MR_Word check_hlds__inst_match__Var_124;
                        MR_Word check_hlds__inst_match__Var_125;
                        MR_Word check_hlds__inst_match__Var_126;
                        MR_Word check_hlds__inst_match__Var_127;
                        MR_Word check_hlds__inst_match__Var_128;
                        MR_Word check_hlds__inst_match__Var_129;
                        MR_Word check_hlds__inst_match__Var_130;
                        MR_Word check_hlds__inst_match__Var_131;
                        MR_Word check_hlds__inst_match__Var_132;
                        MR_Word check_hlds__inst_match__Var_133;

                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (check_hlds__inst_match__succeeded)
                          {
                            {
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__Var_160, check_hlds__inst_match__UniqB_83);
                            }
                            if (check_hlds__inst_match__succeeded)
                              {
                                check_hlds__inst_match__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
                                check_hlds__inst_match__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
                                check_hlds__inst_match__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
                                check_hlds__inst_match__Var_124 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
                                check_hlds__inst_match__Var_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                check_hlds__inst_match__Var_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                check_hlds__inst_match__Var_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                {
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__Var_159, check_hlds__inst_match__Var_158, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__Var_57);
                                }
                                if (check_hlds__inst_match__succeeded)
                                  {
                                    check_hlds__inst_match__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
                                    check_hlds__inst_match__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
                                    check_hlds__inst_match__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
                                    check_hlds__inst_match__Var_130 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
                                    check_hlds__inst_match__Var_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                    check_hlds__inst_match__Var_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                    check_hlds__inst_match__Var_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                    {
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(check_hlds__inst_match__Var_158, check_hlds__inst_match__UniqB_83, check_hlds__inst_match__Var_58);
                                    }
                                    if (check_hlds__inst_match__succeeded)
                                      {
                                        check_hlds__inst_match__Var_59 = (MR_Integer) 0;
                                        {
                                          check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__Var_151, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                                        }
                                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_59 == check_hlds__inst_match__Var_151);
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
              MR_Word check_hlds__inst_match__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
                default:
                  check_hlds__inst_match__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__inst_match__UniqB_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                    MR_Word check_hlds__inst_match__HOInstInfoB_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__Var_161, check_hlds__inst_match__HOInstInfoB_89, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                    }
                    if (check_hlds__inst_match__succeeded)
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__Var_162, check_hlds__inst_match__UniqB_88);
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
                    default:
                      check_hlds__inst_match__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__inst_match__InstResultsB_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_match__ModuleInfo_28;
                        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_51_51;
                        MR_Word check_hlds__inst_match__Var_52;
                        MR_Word check_hlds__inst_match__UniqB_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match__BoundInstsB_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
                        MR_Word check_hlds__inst_match__Var_152;
                        MR_Word check_hlds__inst_match__Var_134;
                        MR_Word check_hlds__inst_match__Var_135;
                        MR_Word check_hlds__inst_match__Var_136;
                        MR_Word check_hlds__inst_match__Var_137;
                        MR_Word check_hlds__inst_match__Var_138;
                        MR_Word check_hlds__inst_match__Var_139;

                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(check_hlds__inst_match__Var_161, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, &check_hlds__inst_match__STATE_VARIABLE_Info_51_51);
                        }
                        if (check_hlds__inst_match__succeeded)
                          {
                            {
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__Var_162, check_hlds__inst_match__UniqB_92);
                            }
                            if (check_hlds__inst_match__succeeded)
                              {
                                check_hlds__inst_match__ModuleInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
                                check_hlds__inst_match__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
                                check_hlds__inst_match__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
                                check_hlds__inst_match__Var_136 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)))) & (MR_Integer) 3);
                                check_hlds__inst_match__Var_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                check_hlds__inst_match__Var_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                check_hlds__inst_match__Var_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                {
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__InstResultsB_27, check_hlds__inst_match__BoundInstsB_93, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__ModuleInfo_28);
                                }
                                if (check_hlds__inst_match__succeeded)
                                  {
                                    {
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(check_hlds__inst_match__Var_162, check_hlds__inst_match__BoundInstsB_93, check_hlds__inst_match__ModuleInfo_28);
                                    }
                                    if (check_hlds__inst_match__succeeded)
                                      {
                                        check_hlds__inst_match__Var_52 = (MR_Integer) 0;
                                        {
                                          check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstB_7, &check_hlds__inst_match__Var_152, check_hlds__inst_match__STATE_VARIABLE_Info_51_51, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                                        }
                                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_52 == check_hlds__inst_match__Var_152);
                                        if (check_hlds__inst_match__succeeded)
                                          {
                                            {
                                              MR_Word check_hlds__inst_match__TypeCtorInfo_146_146;
                                              MR_Word check_hlds__inst_match__Type_29;
                                              MR_Word check_hlds__inst_match__Var_54;

                                              check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
                                              if (check_hlds__inst_match__succeeded)
                                                {
                                                  check_hlds__inst_match__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
                                                  check_hlds__inst_match__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
                                                  {
                                                    check_hlds__inst_match__Var_54 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_146_146);
                                                  }
                                                  {
                                                    check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__Var_54, check_hlds__inst_match__ModuleInfo_28, check_hlds__inst_match__BoundInstsB_93, check_hlds__inst_match__Type_29);
                                                  }
                                                }
                                            }
                                            if (!(check_hlds__inst_match__succeeded))
                                              {
                                                MR_Word check_hlds__inst_match__GroundMatchesBound_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                                MR_Word check_hlds__inst_match__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 0)));
                                                MR_Word check_hlds__inst_match__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 1)));
                                                MR_Word check_hlds__inst_match__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 2)));
                                                MR_Word check_hlds__inst_match__Var_143 = ((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) & (MR_Integer) 3);
                                                MR_Word check_hlds__inst_match__Var_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                                MR_Word check_hlds__inst_match__Var_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

                                                check_hlds__inst_match__succeeded = (check_hlds__inst_match__GroundMatchesBound_30 == (MR_Integer) 1);
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
                        MR_Word check_hlds__inst_match__UniqB_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_match__HOInstInfoB_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

                        {
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__Var_161, check_hlds__inst_match__HOInstInfoB_97, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                        }
                        if (check_hlds__inst_match__succeeded)
                          {
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__Var_162, check_hlds__inst_match__UniqB_96);
                          }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__inst_match__InstVarsA_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
              MR_Word check_hlds__inst_match__SubInstA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__InstVarsB_39;
              MR_Word check_hlds__inst_match__SubInstB_40;

              check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (check_hlds__inst_match__succeeded)
                {
                  check_hlds__inst_match__InstVarsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
                  check_hlds__inst_match__SubInstB_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                  {
                    check_hlds__inst_match__succeeded = mercury__set__subset_2_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], check_hlds__inst_match__InstVarsB_39, check_hlds__inst_match__InstVarsA_37);
                  }
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_38, check_hlds__inst_match__SubInstB_40, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                    }
                }
              else
                {
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_38, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__inst_match__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
              MR_Word check_hlds__inst_match__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

              if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word check_hlds__inst_match__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
                  MR_Word check_hlds__inst_match__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

                  check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_48 == (MR_Integer) 0);
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__succeeded = (check_hlds__inst_match__Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (check_hlds__inst_match__succeeded)
                        {
                          *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
                          check_hlds__inst_match__succeeded = MR_TRUE;
                        }
                    }
                }
              else
              if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
                {
                  MR_Word check_hlds__inst_match__TypeCtorInfo_147_147;
                  MR_Word check_hlds__inst_match__TypeInfo_148_148;
                  MR_Word check_hlds__inst_match__ArgsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_match__MaybeTypes_36;
                  MR_Integer check_hlds__inst_match__Var_45;
                  MR_Word check_hlds__inst_match__Var_46;
                  MR_Word check_hlds__inst_match__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

                  {
                    check_hlds__inst_match__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_match__Var_155, check_hlds__inst_match__Var_153);
                  }
                  if (check_hlds__inst_match__succeeded)
                    {
                      check_hlds__inst_match__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                      {
                        check_hlds__inst_match__Var_45 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_147_147, check_hlds__inst_match__Var_154);
                      }
                      check_hlds__inst_match__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      check_hlds__inst_match__TypeInfo_148_148 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
                      {
                        mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_148_148, check_hlds__inst_match__Var_45, ((MR_Box) (check_hlds__inst_match__Var_46)), &check_hlds__inst_match__MaybeTypes_36);
                      }
                      {
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(check_hlds__inst_match__Var_154, check_hlds__inst_match__ArgsB_35, check_hlds__inst_match__MaybeTypes_36, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
                    }
                }
              else
                check_hlds__inst_match__succeeded = MR_FALSE;
            }
            break;
        }
        break;
    }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_5_p_0(
  MR_Word check_hlds__inst_match__InstA_6,
  MR_Word check_hlds__inst_match__InstB_7,
  MR_Word check_hlds__inst_match__MaybeType_8,
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    {
      check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_7);
    }
    if (check_hlds__inst_match__succeeded)
      {
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
        check_hlds__inst_match__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__inst_match__ThisExpansion_10;
        MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
        MR_Word check_hlds__inst_match__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
        MR_Word check_hlds__inst_match__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
        MR_Word check_hlds__inst_match__Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
        MR_Word check_hlds__inst_match__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word check_hlds__inst_match__Expansions_12;

        {
          check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
        }
        {
          check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
        }
        if (check_hlds__inst_match__succeeded)
          {
            MR_Word check_hlds__inst_match__ExpandedInstA_13;
            MR_Word check_hlds__inst_match__ExpandedInstB_14;
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
            MR_Word check_hlds__inst_match__Var_19;
            MR_Word check_hlds__inst_match__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
            MR_Word check_hlds__inst_match__CalculateSub_73;
            MR_Word check_hlds__inst_match__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
            MR_Word check_hlds__inst_match__Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
            MR_Word check_hlds__inst_match__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word check_hlds__inst_match__Var_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word check_hlds__inst_match__Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word check_hlds__inst_match__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
            MR_Word check_hlds__inst_match__Var_42;
            MR_Word check_hlds__inst_match__Var_43;
            MR_Word check_hlds__inst_match__Var_44;
            MR_Word check_hlds__inst_match__Var_45;
            MR_Word check_hlds__inst_match__Var_46;
            MR_Word check_hlds__inst_match__Var_47;
            MR_Word check_hlds__inst_match__Var_79;
            MR_Word check_hlds__inst_match__Var_80;
            MR_Word check_hlds__inst_match__Var_81;
            MR_Word check_hlds__inst_match__Var_82;
            MR_Word check_hlds__inst_match__Var_83;
            MR_Word check_hlds__inst_match__Var_84;

            {
              check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__Var_29));
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__Var_31));
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__Var_32 | ((((check_hlds__inst_match__Var_33 << (MR_Integer) 2)) | ((((check_hlds__inst_match__Var_34 << (MR_Integer) 3)) | ((check_hlds__inst_match__Var_35 << (MR_Integer) 4)))))))));
            }
            {
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__Var_29, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
            }
            check_hlds__inst_match__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
            check_hlds__inst_match__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
            check_hlds__inst_match__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
            check_hlds__inst_match__Var_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
            check_hlds__inst_match__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            check_hlds__inst_match__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            check_hlds__inst_match__Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            {
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__Var_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
            }
            check_hlds__inst_match__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
            check_hlds__inst_match__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
            check_hlds__inst_match__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
            check_hlds__inst_match__CalculateSub_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
            check_hlds__inst_match__Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            check_hlds__inst_match__Var_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            check_hlds__inst_match__Var_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            switch (check_hlds__inst_match__CalculateSub_73) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
                }
                break;
              case (MR_Integer) 2:
                {
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
                }
                break;
              case (MR_Integer) 1:
                {
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
                }
                break;
            }
          }
        else
          {
            *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
            check_hlds__inst_match__succeeded = MR_TRUE;
          }
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(
  MR_Word check_hlds__inst_match__Uniq_4,
  MR_Word check_hlds__inst_match__BoundInsts_5,
  MR_Word check_hlds__inst_match__ModuleInfo_6)
{
  {
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_4 == (MR_Integer) 0);

    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_p_0(check_hlds__inst_match__BoundInsts_5, check_hlds__inst_match__ModuleInfo_6);
      }
    else
      {
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_4 == (MR_Integer) 2);
        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_p_0(check_hlds__inst_match__BoundInsts_5, check_hlds__inst_match__ModuleInfo_6);
          }
        else
          check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(
  MR_Word check_hlds__inst_match__BoundInsts_4,
  MR_Word check_hlds__inst_match__Uniq_5,
  MR_Word check_hlds__inst_match__ModuleInfo_6)
{
  {
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_5 == (MR_Integer) 1);

    if (check_hlds__inst_match__succeeded)
      {
        check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__BoundInsts_4, check_hlds__inst_match__ModuleInfo_6);
      }
    else
      {
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_5 == (MR_Integer) 2);
        if (check_hlds__inst_match__succeeded)
          {
            check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__BoundInsts_4, check_hlds__inst_match__ModuleInfo_6);
          }
        else
          check_hlds__inst_match__succeeded = MR_TRUE;
      }
    return check_hlds__inst_match__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_match__unique_matches_final_2_p_0(
  MR_Word check_hlds__inst_match__A_3,
  MR_Word check_hlds__inst_match__B_4)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    switch (check_hlds__inst_match__A_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__B_4 == (MR_Integer) 3);
        break;
      case (MR_Integer) 4:
        switch (check_hlds__inst_match__B_4) {
          default:
            check_hlds__inst_match__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 2:
        if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__B_4))))
          {
            check_hlds__inst_match__succeeded = MR_TRUE;
          }
        else
          check_hlds__inst_match__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (check_hlds__inst_match__B_4) {
          default:
            check_hlds__inst_match__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            check_hlds__inst_match__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        check_hlds__inst_match__succeeded = MR_TRUE;
        break;
    }
    return check_hlds__inst_match__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_match__swap_calculate_sub_1_f_0(
  MR_Word check_hlds__inst_match__HeadVar__1_1)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Word check_hlds__inst_match__HeadVar__2_2;

    switch (check_hlds__inst_match__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__inst_match__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        check_hlds__inst_match__HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        check_hlds__inst_match__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return check_hlds__inst_match__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8(
  MR_Box check_hlds__inst_match__closure_arg,
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_complete_for_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word check_hlds__inst_match__Var_9;
          MR_Word check_hlds__inst_match__Var_10;

          {
            check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8, &check_hlds__inst_match__Var_9, &check_hlds__inst_match__Var_10, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1, check_hlds__inst_match__env_ptr);
          }
        }
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2, 1);
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_15 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_Var_15);
    {
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(check_hlds__inst_match__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_15, (MR_Integer) 0)));
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_15, (MR_Integer) 1)));
    {
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11);
    }
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
      {
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6));
        }
        {
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = mercury__list__map_3_p_5((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Var_16, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12);
        }
        if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
          {
            check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(check_hlds__inst_match__env_ptr);
          }
      }
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_Var_15, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7, check_hlds__inst_match__env_ptr);
          }
        }
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    {
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(check_hlds__inst_match__env_ptr);
    }
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded);
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
      {
        check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(check_hlds__inst_match__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(
  void * check_hlds__inst_match__env_ptr_arg)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1) == 0)
      {
        {
          check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4, check_hlds__inst_match__env_ptr);
        }
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(
  MR_Word check_hlds__inst_match__Expansions_5,
  MR_Word check_hlds__inst_match__ModuleInfo_6,
  MR_Word check_hlds__inst_match__BoundInsts_7,
  MR_Word check_hlds__inst_match__Type_8)
{
  {
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s check_hlds__inst_match__env;

    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__Expansions_5;
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6 = check_hlds__inst_match__ModuleInfo_6;
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7 = check_hlds__inst_match__BoundInsts_7;
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8 = check_hlds__inst_match__Type_8;
    {
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(&check_hlds__inst_match__env);
    }
    if ((check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
      {
        {
          check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(&check_hlds__inst_match__env);
        }
        (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded);
      }
    return (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____calculate_sub_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

    {
      check_hlds__inst_match____Compare____calculate_sub_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____expansions_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

    {
      check_hlds__inst_match____Compare____expansions_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____ground_matches_bound_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

    {
      check_hlds__inst_match____Compare____ground_matches_bound_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_match_info_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

    {
      check_hlds__inst_match____Compare____inst_match_info_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_match_inputs_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

    {
      check_hlds__inst_match____Compare____inst_match_inputs_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_matches_pred_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

    {
      check_hlds__inst_match____Compare____inst_matches_pred_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
  MR_Box check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_match__succeeded;

    {
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____uniqueness_comparison_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
    return check_hlds__inst_match__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
  MR_Box check_hlds__inst_match__wrapper_arg_2,
  MR_Box check_hlds__inst_match__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

    {
      check_hlds__inst_match____Compare____uniqueness_comparison_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
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

/* :- end_module check_hlds.inst_match. */
