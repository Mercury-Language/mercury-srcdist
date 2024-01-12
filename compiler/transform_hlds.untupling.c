/*
** Automatically generated from `untupling.m'
** by the Mercury compiler,
** version rotd-2024-01-12
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


// :- module transform_hlds.untupling.
// :- implementation.

/*
INIT mercury__transform_hlds__untupling__init
ENDINIT
*/

#include "transform_hlds.untupling.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__untupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0[2];

static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0;

static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1;

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[1];

static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0[2];

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0[2];

static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0;

static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0[2];

static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0;

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1];

static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1];

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0[1];

static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__776__1_1_f_0(
  MR_Word LambdaHeadVar__1_29);

static void MR_CALL 
transform_hlds__untupling__IntroducedFrom__pred__expand_call_args_2__678__1_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word LambdaHeadVar__1_75,
  MR_Word * LambdaHeadVar__2_76,
  MR_Word LambdaHeadVar__3_77,
  MR_Word * LambdaHeadVar__4_78);

static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
  MR_Word TransformMap_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TransformMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarTable_0_5,
  MR_Word * STATE_VARIABLE_VarTable_6);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goals_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TransformMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarTable_0_5,
  MR_Word * STATE_VARIABLE_VarTable_6);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TransformMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarTable_0_5,
  MR_Word * STATE_VARIABLE_VarTable_6);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TransformMap_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarTable_0_71,
  MR_Word * STATE_VARIABLE_VarTable_72);

static void MR_CALL 
transform_hlds__untupling__expand_call_args_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TypeTable_11,
  MR_Word Args0_12,
  MR_Word ArgModes0_13,
  MR_Word * Args_14,
  MR_Word * EnterUnifs_15,
  MR_Word * ExitUnifs_16,
  MR_Word STATE_VARIABLE_VarTable_0_18,
  MR_Word * STATE_VARIABLE_VarTable_19);

static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
transform_hlds__untupling__expand_call_args_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TypeTable_2,
  MR_Word ContainerTypes0_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
  MR_Word TransformMap_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11);

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34,
  MR_Word STATE_VARIABLE_TransformMap_0_35,
  MR_Word * STATE_VARIABLE_TransformMap_36,
  MR_Word STATE_VARIABLE_Counter_0_37,
  MR_Word * STATE_VARIABLE_Counter_38);

static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TypeTable_2,
  MR_Word ContainerTypes_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Goal_0_8,
  MR_Word * STATE_VARIABLE_Goal_9,
  MR_Word STATE_VARIABLE_VarTable_0_10,
  MR_Word * STATE_VARIABLE_VarTable_11);

static MR_Box MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word TypeTable_13,
  MR_Word HeadVar0_14,
  MR_Word ArgMode0_15,
  MR_Word * MaybeHeadVarsAndArgModes_16,
  MR_Word STATE_VARIABLE_Goal_0_29,
  MR_Word * STATE_VARIABLE_Goal_30,
  MR_Word STATE_VARIABLE_VarTable_0_31,
  MR_Word * STATE_VARIABLE_VarTable_32,
  MR_Word ContainerTypes0_19,
  MR_Word * ContainerTypes_20);

static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_7_p_0(
  MR_Word ModuleInfo_1,
  MR_String ParentName_2,
  MR_Integer Num_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7);

static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_TransformMap_0_25,
  MR_Word * STATE_VARIABLE_TransformMap_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28);

static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeTable_5);

static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__untupling_scalar_common_1[6][3];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_2[6][2];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_3[2][1];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_4[1][10];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_5[1][7];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_6[1][5];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_7[1][11];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_8[2][8];




static /* final */ const MR_Box transform_hlds__untupling_scalar_common_1[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__untupling_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__untupling__untuple_arguments_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__untupling_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__untupling_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__untupling__expand_one_arg_in_proc_2_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__untupling_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__untupling__expand_call_args_2_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_2[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[3]))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_8[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__untupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__untupling__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0 = {
  (MR_String) "expansion",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1 = {
  (MR_String) "no_expansion",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[1] = { &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1 };

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[1] = { &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0 };

static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0[2] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0,
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1
};

static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_expansion_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__untupling____Unify____expansion_result_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____expansion_result_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "expansion_result",
  { transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0 },
  { transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transform_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__untupling____Unify____transform_map_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____transform_map_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "transform_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0 = {
  (MR_String) "transformed_proc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1] = { &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0 };

static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0[1] = { &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0 };

static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__untupling____Unify____transformed_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____transformed_proc_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "transformed_proc",
  { transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0 },
  { transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_untuple_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__untupling____Unify____untuple_map_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____untuple_map_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "untuple_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__776__1_1_f_0(
  MR_Word LambdaHeadVar__1_29)
{
  MR_Word LambdaHeadVar__2_30 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_29, (MR_Integer) 1))));

  return LambdaHeadVar__2_30;
}

static void MR_CALL 
transform_hlds__untupling__IntroducedFrom__pred__expand_call_args_2__678__1_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word LambdaHeadVar__1_75,
  MR_Word * LambdaHeadVar__2_76,
  MR_Word LambdaHeadVar__3_77,
  MR_Word * LambdaHeadVar__4_78)
{
  MR_Word IsDummy_64;
  MR_Word Entry_65;

  IsDummy_64 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, LambdaHeadVar__1_75);
  {
    Entry_65 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_65, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, Entry_65, 1) = ((MR_Box) (LambdaHeadVar__1_75));
    MR_hl_field(0, Entry_65, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_64));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_65, LambdaHeadVar__2_76, LambdaHeadVar__3_77, LambdaHeadVar__4_78);
}

static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__untupling_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__untupling_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__untupling_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__untupling_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, Var_18, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__untupling_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&transform_hlds__untupling_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
  MR_Word TransformMap_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_bool succeeded;
  MR_Word PredInfo_11;
  MR_Word Goal0_12;
  MR_Word VarTable0_13;
  MR_Word Goal_14;
  MR_Word VarTable_15;
  MR_Word STATE_VARIABLE_ProcInfo_18_18;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_16, PredId_7, ProcId_8, &PredInfo_11, &STATE_VARIABLE_ProcInfo_18_18);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_18_18, &Goal0_12);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_18_18, &VarTable0_13);
  transform_hlds__untupling__fix_calls_in_goal_6_p_0(STATE_VARIABLE_ModuleInfo_0_16, TransformMap_6, Goal0_12, &Goal_14, VarTable0_13, &VarTable_15);
  succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(Goal0_12, Goal_14);
  if (succeeded)
    *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
  else
  {
    MR_Word STATE_VARIABLE_ProcInfo_19_19;
    MR_Word STATE_VARIABLE_ProcInfo_20_20;
    MR_Word STATE_VARIABLE_ProcInfo_22_22;
    MR_Word STATE_VARIABLE_ProcInfo_24_24;
    MR_Word STATE_VARIABLE_ModuleInfo_25_25;

    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_14, STATE_VARIABLE_ProcInfo_18_18, &STATE_VARIABLE_ProcInfo_19_19);
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_15, STATE_VARIABLE_ProcInfo_19_19, &STATE_VARIABLE_ProcInfo_20_20);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_20_20, &STATE_VARIABLE_ProcInfo_22_22);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_22_22, &STATE_VARIABLE_ProcInfo_24_24, STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_25_25);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_7, ProcId_8, PredInfo_11, STATE_VARIABLE_ProcInfo_24_24, STATE_VARIABLE_ModuleInfo_25_25, STATE_VARIABLE_ModuleInfo_17);
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TransformMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarTable_0_5,
  MR_Word * STATE_VARIABLE_VarTable_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_6 = STATE_VARIABLE_VarTable_0_5;
  }
  else
  {
    MR_Word Case0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_16;
    MR_Word Cases_17;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 2))));
    MR_Word Goal_22;
    MR_Word STATE_VARIABLE_VarTable_25_25;

    transform_hlds__untupling__fix_calls_in_goal_6_p_0(ModuleInfo_1, TransformMap_2, Goal0_21, &Goal_22, STATE_VARIABLE_VarTable_0_5, &STATE_VARIABLE_VarTable_25_25);
    {
      Case_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_16, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(0, Case_16, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(0, Case_16, 2) = ((MR_Box) (Goal_22));
    }
    transform_hlds__untupling__fix_calls_in_cases_6_p_0(ModuleInfo_1, TransformMap_2, Cases0_15, &Cases_17, STATE_VARIABLE_VarTable_25_25, STATE_VARIABLE_VarTable_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_17));
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goals_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TransformMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarTable_0_5,
  MR_Word * STATE_VARIABLE_VarTable_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_6 = STATE_VARIABLE_VarTable_0_5;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word STATE_VARIABLE_VarTable_21_21;

    transform_hlds__untupling__fix_calls_in_goal_6_p_0(ModuleInfo_1, TransformMap_2, Goal0_14, &Goal_16, STATE_VARIABLE_VarTable_0_5, &STATE_VARIABLE_VarTable_21_21);
    transform_hlds__untupling__fix_calls_in_goals_6_p_0(ModuleInfo_1, TransformMap_2, Goals0_15, &Goals_17, STATE_VARIABLE_VarTable_21_21, STATE_VARIABLE_VarTable_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TransformMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarTable_0_5,
  MR_Word * STATE_VARIABLE_VarTable_6)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_6 = STATE_VARIABLE_VarTable_0_5;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal1_18;
    MR_Word Goals1_19;
    MR_Word STATE_VARIABLE_VarTable_24_24;
    MR_Word ConjGoals_20;
    MR_Word Var_26;
    MR_Word Var_27;

    transform_hlds__untupling__fix_calls_in_goal_6_p_0(ModuleInfo_1, TransformMap_2, Goal0_14, &Goal1_18, STATE_VARIABLE_VarTable_0_5, &STATE_VARIABLE_VarTable_24_24);
    transform_hlds__untupling__fix_calls_in_conj_6_p_0(ModuleInfo_1, TransformMap_2, Goals0_15, &Goals1_19, STATE_VARIABLE_VarTable_24_24, STATE_VARIABLE_VarTable_6);
    Var_26 = ((MR_Word) ((MR_hl_field(0, Goal1_18, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_26, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_27 = ((MR_Unsigned) ((MR_hl_field(3, Var_26, (MR_Integer) 1))) & (MR_Integer) 1);
      ConjGoals_20 = ((MR_Word) ((MR_hl_field(3, Var_26, (MR_Integer) 2))));
      succeeded = (Var_27 == (MR_Integer) 0);
    }
    if (succeeded)
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConjGoals_20, Goals1_19);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal1_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals1_19));
      }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TransformMap_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarTable_0_71,
  MR_Word * STATE_VARIABLE_VarTable_72)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_50 = (MR_Word) ((MR_Word) (GoalExpr0_12));
        MR_Word SubGoal_51;
        MR_Word GoalExpr_52;

        transform_hlds__untupling__fix_calls_in_goal_6_p_0(ModuleInfo_7, TransformMap_8, SubGoal0_50, &SubGoal_51, STATE_VARIABLE_VarTable_0_71, STATE_VARIABLE_VarTable_72);
        GoalExpr_52 = (MR_Word) ((MR_Word) (SubGoal_51));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_52));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Goal_10 = Goal0_9;
        *STATE_VARIABLE_VarTable_72 = STATE_VARIABLE_VarTable_0_71;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CalleePredId_31 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 0))));
        MR_Integer CalleeProcId_32 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 1))));
        MR_Word OrigArgs_33 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 2))));
        MR_Word CallAux0_38;
        MR_Word CallAuxInfo_39;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Box conv0_Var_74;

        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_73, 0) = ((MR_Box) (CalleePredId_31));
          MR_hl_field(0, Var_73, 1) = ((MR_Box) (CalleeProcId_32));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0), TransformMap_8, ((MR_Box) (Var_73)), &conv0_Var_74);
        if (succeeded)
        {
          Var_74 = ((MR_Word) (conv0_Var_74));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_75 = ((MR_Word) ((MR_hl_field(0, Var_74, (MR_Integer) 1))));
          CallAux0_38 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 0))));
          CallAuxInfo_39 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word TypeTable_40;
          MR_Word CalleeProcInfo_42;
          MR_Word OrigArgModes_43;
          MR_Word Args_44;
          MR_Word EnterUnifs_45;
          MR_Word ExitUnifs_46;
          MR_Word _CalleePredInfo_41;
          MR_Word CallAux_47;
          MR_Word Var_106;
          MR_Integer Var_107;
          MR_Word Var_109;
          MR_Word Var_110;
          MR_Word Var_111;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_7, &TypeTable_40);
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_7, CalleePredId_31, CalleeProcId_32, &_CalleePredInfo_41, &CalleeProcInfo_42);
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_42, &OrigArgModes_43);
          transform_hlds__untupling__expand_call_args_9_p_0(ModuleInfo_7, TypeTable_40, OrigArgs_33, OrigArgModes_43, &Args_44, &EnterUnifs_45, &ExitUnifs_46, STATE_VARIABLE_VarTable_0_71, STATE_VARIABLE_VarTable_72);
          succeeded = ((MR_tag((MR_Word) CallAux0_38)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_106 = ((MR_Word) ((MR_hl_field(2, CallAux0_38, (MR_Integer) 0))));
            Var_107 = ((MR_Integer) ((MR_hl_field(2, CallAux0_38, (MR_Integer) 1))));
            Var_109 = ((MR_Unsigned) ((MR_hl_field(2, CallAux0_38, (MR_Integer) 3))) & (MR_Integer) 1);
            Var_110 = ((MR_Word) ((MR_hl_field(2, CallAux0_38, (MR_Integer) 4))));
            Var_111 = ((MR_Word) ((MR_hl_field(2, CallAux0_38, (MR_Integer) 5))));
            {
              CallAux_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, CallAux_47, 0) = ((MR_Box) (Var_106));
              MR_hl_field(2, CallAux_47, 1) = ((MR_Box) (Var_107));
              MR_hl_field(2, CallAux_47, 2) = ((MR_Box) (Args_44));
              MR_hl_field(2, CallAux_47, 3) = (MR_Box) ((MR_Unsigned) (Var_109));
              MR_hl_field(2, CallAux_47, 4) = ((MR_Box) (Var_110));
              MR_hl_field(2, CallAux_47, 5) = ((MR_Box) (Var_111));
            }
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Call_48;
            MR_Word ConjList_49;
            MR_Word Var_77;
            MR_Word Var_78;

            {
              Call_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Call_48, 0) = ((MR_Box) (CallAux_47));
              MR_hl_field(0, Call_48, 1) = ((MR_Box) (CallAuxInfo_39));
            }
            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (Call_48));
              MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_78, ExitUnifs_46);
            ConjList_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), EnterUnifs_45, Var_77);
            hlds__hlds_goal__conj_list_to_goal_3_p_0(ConjList_49, GoalInfo0_13, Goal_10);
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/6", (MR_String) "not a call template");
              return;
            }
        }
        else
        {
          *Goal_10 = Goal0_9;
          *STATE_VARIABLE_VarTable_72 = STATE_VARIABLE_VarTable_0_71;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *Goal_10 = Goal0_9;
            *STATE_VARIABLE_VarTable_72 = STATE_VARIABLE_VarTable_0_71;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_56 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Goals_58;
            MR_Word GoalExpr_100;

            switch (ConjType_56) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                transform_hlds__untupling__fix_calls_in_goals_6_p_0(ModuleInfo_7, TransformMap_8, Goals0_57, &Goals_58, STATE_VARIABLE_VarTable_0_71, STATE_VARIABLE_VarTable_72);
                break;
              case (MR_Integer) 0:
                transform_hlds__untupling__fix_calls_in_conj_6_p_0(ModuleInfo_7, TransformMap_8, Goals0_57, &Goals_58, STATE_VARIABLE_VarTable_0_71, STATE_VARIABLE_VarTable_72);
                break;
            }
            {
              GoalExpr_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_100, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_100, 1) = (MR_Box) ((MR_Unsigned) (ConjType_56));
              MR_hl_field(3, GoalExpr_100, 2) = ((MR_Box) (Goals_58));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_100));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GoalExpr_101;
            MR_Word Goals0_102 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Goals_103;

            transform_hlds__untupling__fix_calls_in_goals_6_p_0(ModuleInfo_7, TransformMap_8, Goals0_102, &Goals_103, STATE_VARIABLE_VarTable_0_71, STATE_VARIABLE_VarTable_72);
            {
              GoalExpr_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_101, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_101, 1) = ((MR_Box) (Goals_103));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_101));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word CanFail_60 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Cases_62;
            MR_Word GoalExpr_104;

            transform_hlds__untupling__fix_calls_in_cases_6_p_0(ModuleInfo_7, TransformMap_8, Cases0_61, &Cases_62, STATE_VARIABLE_VarTable_0_71, STATE_VARIABLE_VarTable_72);
            {
              GoalExpr_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_104, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_104, 1) = ((MR_Box) (Var_59));
              MR_hl_field(3, GoalExpr_104, 2) = (MR_Box) ((MR_Unsigned) (CanFail_60));
              MR_hl_field(3, GoalExpr_104, 3) = ((MR_Box) (Cases_62));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_104));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SubGoal0_97 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word FGT_55;

            succeeded = ((((MR_tag((MR_Word) Reason_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_53, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_55 = ((MR_Unsigned) ((MR_hl_field(3, Reason_53, (MR_Integer) 2))) & (MR_Integer) 3);
              switch (FGT_55) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
            {
              *Goal_10 = Goal0_9;
              *STATE_VARIABLE_VarTable_72 = STATE_VARIABLE_VarTable_0_71;
            }
            else
            {
              MR_Word SubGoal_93;
              MR_Word GoalExpr_94;

              transform_hlds__untupling__fix_calls_in_goal_6_p_0(ModuleInfo_7, TransformMap_8, SubGoal0_97, &SubGoal_93, STATE_VARIABLE_VarTable_0_71, STATE_VARIABLE_VarTable_72);
              {
                GoalExpr_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_94, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_94, 1) = ((MR_Box) (Reason_53));
                MR_hl_field(3, GoalExpr_94, 2) = ((MR_Box) (SubGoal_93));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_94));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond0_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 4))));
            MR_Word Cond_67;
            MR_Word Then_68;
            MR_Word Else_69;
            MR_Word STATE_VARIABLE_VarTable_88_88;
            MR_Word STATE_VARIABLE_VarTable_89_89;
            MR_Word GoalExpr_105;

            transform_hlds__untupling__fix_calls_in_goal_6_p_0(ModuleInfo_7, TransformMap_8, Cond0_64, &Cond_67, STATE_VARIABLE_VarTable_0_71, &STATE_VARIABLE_VarTable_88_88);
            transform_hlds__untupling__fix_calls_in_goal_6_p_0(ModuleInfo_7, TransformMap_8, Then0_65, &Then_68, STATE_VARIABLE_VarTable_88_88, &STATE_VARIABLE_VarTable_89_89);
            transform_hlds__untupling__fix_calls_in_goal_6_p_0(ModuleInfo_7, TransformMap_8, Else0_66, &Else_69, STATE_VARIABLE_VarTable_89_89, STATE_VARIABLE_VarTable_72);
            {
              GoalExpr_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_105, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_105, 1) = ((MR_Box) (Vars_63));
              MR_hl_field(3, GoalExpr_105, 2) = ((MR_Box) (Cond_67));
              MR_hl_field(3, GoalExpr_105, 3) = ((MR_Box) (Then_68));
              MR_hl_field(3, GoalExpr_105, 4) = ((MR_Box) (Else_69));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_105));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/6", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_call_args_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word TypeTable_11,
  MR_Word Args0_12,
  MR_Word ArgModes0_13,
  MR_Word * Args_14,
  MR_Word * EnterUnifs_15,
  MR_Word * ExitUnifs_16,
  MR_Word STATE_VARIABLE_VarTable_0_18,
  MR_Word * STATE_VARIABLE_VarTable_19)
{
  transform_hlds__untupling__expand_call_args_2_10_p_0(ModuleInfo_10, TypeTable_11, (MR_Word) ((MR_Unsigned) 0U), Args0_12, ArgModes0_13, Args_14, EnterUnifs_15, ExitUnifs_16, STATE_VARIABLE_VarTable_0_18, STATE_VARIABLE_VarTable_19);
}

static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_76;
  MR_Word conv1_LambdaHeadVar__4_78;

  transform_hlds__untupling__IntroducedFrom__pred__expand_call_args_2__678__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_76, ((MR_Word) (wrapper_arg_3)), &conv1_LambdaHeadVar__4_78);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_76));
  *wrapper_arg_4 = ((MR_Box) (conv1_LambdaHeadVar__4_78));
}

static MR_Box MR_CALL 
transform_hlds__untupling__expand_call_args_2_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_30;

  conv0_LambdaHeadVar__2_30 = transform_hlds__untupling__IntroducedFrom__func__expand_type__776__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_30));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TypeTable_2,
  MR_Word ContainerTypes0_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTable_10 = STATE_VARIABLE_VarTable_0_9;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/10", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_104 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/10", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_48 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ArgModes_49 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Arg0Type_54;
      MR_Word Expansion_55;

      parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_9, Var_105, &Arg0Type_54);
      {
        MR_Word Var_108;

        Var_108 = parse_tree__prog_mode__in_mode_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode_48, Var_108);
      }
      if (!(succeeded))
      {
        MR_Word Var_109;

        Var_109 = parse_tree__prog_mode__out_mode_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode_48, Var_109);
      }
      if (succeeded)
      {
        MR_Word TypeArgs_113;
        MR_Word TypeCtor_112;

        succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Arg0Type_54, &TypeCtor_112, &TypeArgs_113);
        if (succeeded)
          succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_112);
        if (succeeded)
        {
          MR_Integer Arity_114;
          MR_Word ConsId_115;

          Arity_114 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_113);
          {
            ConsId_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ConsId_115, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, ConsId_115, 1) = ((MR_Box) (Arity_114));
          }
          {
            Expansion_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Expansion_55, 0) = ((MR_Box) (ConsId_115));
            MR_hl_field(1, Expansion_55, 1) = ((MR_Box) (TypeArgs_113));
          }
        }
        else
        {
          MR_Word SingleCtorName_120;
          MR_Word SingleCtorArgs_121;
          MR_Word TypeCtor_133;
          MR_Word TypeInfo_62_147;
          MR_Word TypeInfo_63_148;
          MR_Word TypeDefn_116;
          MR_Word TypeBody_117;
          MR_Word TypeBodyDu_118;
          MR_Word SingleCtor_119;
          MR_Word Var_126;
          MR_Word Var_127;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_145;
          MR_Word Var_146;
          MR_Word TypeCtorInfo_57_142;

          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Arg0Type_54, &TypeCtor_133, &Var_145);
          if (succeeded)
          {
            TypeInfo_62_147 = (MR_Word) (&transform_hlds__untupling_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_147, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_145)));
            if (succeeded)
            {
              succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_2, TypeCtor_133, &TypeDefn_116);
              if (succeeded)
              {
                Var_126 = (MR_Word) ((MR_Unsigned) 0U);
                hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_116, &Var_146);
                TypeInfo_63_148 = (MR_Word) (&transform_hlds__untupling_scalar_common_2[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_63_148, ((MR_Box) (Var_126)), ((MR_Box) (Var_146)));
                if (succeeded)
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_116, &TypeBody_117);
                  succeeded = ((MR_tag((MR_Word) TypeBody_117)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    TypeBodyDu_118 = (MR_Word) ((MR_Word) (TypeBody_117));
                    Var_127 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_118, (MR_Integer) 0))));
                    SingleCtor_119 = ((MR_Word) ((MR_hl_field(0, Var_127, (MR_Integer) 0))));
                    Var_128 = ((MR_Word) ((MR_hl_field(0, Var_127, (MR_Integer) 1))));
                    succeeded = (Var_128 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_129 = ((MR_Word) ((MR_hl_field(0, SingleCtor_119, (MR_Integer) 1))));
                      SingleCtorName_120 = ((MR_Word) ((MR_hl_field(0, SingleCtor_119, (MR_Integer) 2))));
                      SingleCtorArgs_121 = ((MR_Word) ((MR_hl_field(0, SingleCtor_119, (MR_Integer) 3))));
                      succeeded = (Var_129 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (SingleCtorArgs_121 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          TypeCtorInfo_57_142 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_57_142, ((MR_Box) (Arg0Type_54)), ContainerTypes0_3);
                          succeeded = !(succeeded);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word ExpandedTypes_124;
            MR_Integer Arity_131;
            MR_Word ConsId_132;

            Arity_131 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), SingleCtorArgs_121);
            {
              ConsId_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsId_132, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, ConsId_132, 1) = ((MR_Box) (SingleCtorName_120));
              MR_hl_field(3, ConsId_132, 2) = ((MR_Box) (Arity_131));
              MR_hl_field(3, ConsId_132, 3) = ((MR_Box) (TypeCtor_133));
            }
            ExpandedTypes_124 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__untupling_scalar_common_1[5]), SingleCtorArgs_121);
            {
              Expansion_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Expansion_55, 0) = ((MR_Box) (ConsId_132));
              MR_hl_field(1, Expansion_55, 1) = ((MR_Box) (ExpandedTypes_124));
            }
          }
          else
            Expansion_55 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      else
        Expansion_55 = (MR_Word) ((MR_Unsigned) 0U);
      if ((Expansion_55 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Args1_72;

        transform_hlds__untupling__expand_call_args_9_p_0(ModuleInfo_1, TypeTable_2, Var_104, ArgModes_49, &Args1_72, HeadVar__7_7, HeadVar__8_8, STATE_VARIABLE_VarTable_0_9, STATE_VARIABLE_VarTable_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_105));
          MR_hl_field(1, base, 1) = ((MR_Box) (Args1_72));
        }
      }
      else
      {
        MR_Word ConsId_56 = ((MR_Word) ((MR_hl_field(1, Expansion_55, (MR_Integer) 0))));
        MR_Word Types_57 = ((MR_Word) ((MR_hl_field(1, Expansion_55, (MR_Integer) 1))));
        MR_Integer NumVars_58;
        MR_Word AddUnnamedVarForType_59;
        MR_Word ReplacementArgs_66;
        MR_Word ReplacementModes_67;
        MR_Word ContainerTypes_68;
        MR_Word STATE_VARIABLE_VarTable_80_80;
        MR_Box conv3_STATE_VARIABLE_VarTable_80_80;
        MR_Word Var_102;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_57, &NumVars_58);
        {
          AddUnnamedVarForType_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AddUnnamedVarForType_59, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_8[1]));
          MR_hl_field(0, AddUnnamedVarForType_59, 1) = ((MR_Box) (transform_hlds__untupling__expand_call_args_2_10_p_0_2));
          MR_hl_field(0, AddUnnamedVarForType_59, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, AddUnnamedVarForType_59, 3) = ((MR_Box) (ModuleInfo_1));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__untupling_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), AddUnnamedVarForType_59, Types_57, &ReplacementArgs_66, ((MR_Box) (STATE_VARIABLE_VarTable_0_9)), &conv3_STATE_VARIABLE_VarTable_80_80);
        STATE_VARIABLE_VarTable_80_80 = ((MR_Word) (conv3_STATE_VARIABLE_VarTable_80_80));
        mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumVars_58, ((MR_Box) (ArgMode_48)), &ReplacementModes_67);
        {
          ContainerTypes_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ContainerTypes_68, 0) = ((MR_Box) (Arg0Type_54));
          MR_hl_field(1, ContainerTypes_68, 1) = ((MR_Box) (ContainerTypes0_3));
        }
        Var_102 = parse_tree__prog_mode__in_mode_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode_48, Var_102);
        if (succeeded)
        {
          MR_Word Unif_69;
          MR_Word EnterUnifs1_70;
          MR_Word Var_81;
          MR_Word Var_82;

          hlds__make_goal__deconstruct_functor_4_p_0(Var_105, ConsId_56, ReplacementArgs_66, &Unif_69);
          Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__untupling_scalar_common_2[0]), ReplacementArgs_66, Var_104);
          Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ReplacementModes_67, ArgModes_49);
          transform_hlds__untupling__expand_call_args_2_10_p_0(ModuleInfo_1, TypeTable_2, ContainerTypes_68, Var_81, Var_82, HeadVar__6_6, &EnterUnifs1_70, HeadVar__8_8, STATE_VARIABLE_VarTable_80_80, STATE_VARIABLE_VarTable_10);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Unif_69));
            MR_hl_field(1, base, 1) = ((MR_Box) (EnterUnifs1_70));
          }
        }
        else
        {
          MR_Word Var_103;

          Var_103 = parse_tree__prog_mode__out_mode_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode_48, Var_103);
          if (succeeded)
          {
            MR_Word ExitUnifs1_71;
            MR_Word Var_84;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Unif_96;

            hlds__make_goal__construct_functor_4_p_0(Var_105, ConsId_56, ReplacementArgs_66, &Unif_96);
            {
              Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_84, 0) = ((MR_Box) (Unif_96));
              MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__untupling_scalar_common_2[0]), ReplacementArgs_66, Var_104);
            Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ReplacementModes_67, ArgModes_49);
            transform_hlds__untupling__expand_call_args_2_10_p_0(ModuleInfo_1, TypeTable_2, ContainerTypes_68, Var_86, Var_87, HeadVar__6_6, HeadVar__7_7, &ExitUnifs1_71, STATE_VARIABLE_VarTable_80_80, STATE_VARIABLE_VarTable_10);
            *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExitUnifs1_71, Var_84);
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/10", (MR_String) "unsupported mode");
              return;
            }
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_17;

  transform_hlds__untupling__fix_calls_in_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_17));
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
  MR_Word TransformMap_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  MR_Word PredInfo_8;
  MR_Word ProcIds_9;
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_11;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_10, PredId_6, &PredInfo_8);
  ProcIds_9 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_8);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_8[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__untupling__fix_calls_in_pred_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (TransformMap_5));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (PredId_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_12, ProcIds_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_10)), &conv1_STATE_VARIABLE_ModuleInfo_11);
  *STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_11));
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34,
  MR_Word STATE_VARIABLE_TransformMap_0_35,
  MR_Word * STATE_VARIABLE_TransformMap_36,
  MR_Word STATE_VARIABLE_Counter_0_37,
  MR_Word * STATE_VARIABLE_Counter_38)
{
  MR_Word TypeTable_15;
  MR_Word PredInfo0_16;
  MR_Word HeadVars0_17;
  MR_Word ArgModes0_18;
  MR_Word Goal0_19;
  MR_Word VarTable0_20;
  MR_Word HeadVars_21;
  MR_Word ArgModes_22;
  MR_Word Goal_23;
  MR_Word UntupleMap_24;
  MR_Word VarTable_25;
  MR_Integer SeqNum_26;
  MR_Word AuxPredId_27;
  MR_Integer AuxProcId_28;
  MR_Word CallAux_29;
  MR_Word AuxPredInfo_30;
  MR_Word AuxProcInfo0_31;
  MR_Word AuxProcInfo_32;
  MR_Word STATE_VARIABLE_ProcInfo_39_39;
  MR_Word STATE_VARIABLE_ProcInfo_40_40;
  MR_Word STATE_VARIABLE_ProcInfo_41_41;
  MR_Word STATE_VARIABLE_ProcInfo_42_42;
  MR_Word STATE_VARIABLE_ProcInfo_43_43;
  MR_Word STATE_VARIABLE_ProcInfo_45_45;
  MR_Word STATE_VARIABLE_ProcInfo_47_47;
  MR_Word STATE_VARIABLE_ModuleInfo_48_48;
  MR_Word STATE_VARIABLE_ModuleInfo_50_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word ListOfHeadVars_60;
  MR_Word ListOfArgModes_61;
  MR_Word GoalExpr_62;
  MR_Word GoalInfo1_63;
  MR_Word Context_64;
  MR_Word GoalInfo_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word AuxHeadVars_74;
  MR_Word Goal_75;
  MR_Word GoalInfo_77;
  MR_Word InitialAuxInstMap_78;
  MR_Word TVarSet_79;
  MR_Word VarTable_80;
  MR_Word ClassContext_81;
  MR_Word RttiVarMaps_82;
  MR_Word InstVarSet_83;
  MR_Word Markers_84;
  MR_Word OrigOrigin_85;
  MR_Word HasParallelConj_86;
  MR_Word VarNameRemap_87;
  MR_Word PredModule_88;
  MR_String PredName_89;
  MR_Word PredOrFunc_90;
  MR_Integer ProcNum_91;
  MR_Word Context_92;
  MR_Integer LineNum_93;
  MR_Word Transform_94;
  MR_Word AuxPredSymName_95;
  MR_Word ProcTransform_96;
  MR_Word Origin_97;
  MR_Word AuxPredProcId_98;
  MR_Word Var_101;
  MR_Word _ExtraArgs_99;

  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &TypeTable_15);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_33, PredId_9, ProcId_10, &PredInfo0_16, &STATE_VARIABLE_ProcInfo_39_39);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_39_39, &HeadVars0_17);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_39_39, &ArgModes0_18);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_39_39, &Goal0_19);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_39_39, &VarTable0_20);
  transform_hlds__untupling__expand_args_in_proc_3_11_p_0(STATE_VARIABLE_ModuleInfo_0_33, TypeTable_15, (MR_Word) ((MR_Unsigned) 0U), HeadVars0_17, ArgModes0_18, &ListOfHeadVars_60, &ListOfArgModes_61, Goal0_19, &Var_67, VarTable0_20, &VarTable_25);
  GoalExpr_62 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 0))));
  GoalInfo1_63 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 1))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, Goal0_19, (MR_Integer) 1))));
  Context_64 = hlds__hlds_goal__goal_info_get_context_1_f_0(Var_68);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_64, GoalInfo1_63, &GoalInfo_65);
  {
    Goal_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Goal_23, 0) = ((MR_Box) (GoalExpr_62));
    MR_hl_field(0, Goal_23, 1) = ((MR_Box) (GoalInfo_65));
  }
  mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__untupling_scalar_common_2[0]), ListOfHeadVars_60, &HeadVars_21);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ListOfArgModes_61, &ArgModes_22);
  Var_69 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__untupling_scalar_common_2[0]), (MR_Word) (&transform_hlds__untupling_scalar_common_2[1]));
  transform_hlds__untupling__build_untuple_map_4_p_0(HeadVars0_17, ListOfHeadVars_60, Var_69, &UntupleMap_24);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_21, STATE_VARIABLE_ProcInfo_39_39, &STATE_VARIABLE_ProcInfo_40_40);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_22, STATE_VARIABLE_ProcInfo_40_40, &STATE_VARIABLE_ProcInfo_41_41);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_23, STATE_VARIABLE_ProcInfo_41_41, &STATE_VARIABLE_ProcInfo_42_42);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_25, STATE_VARIABLE_ProcInfo_42_42, &STATE_VARIABLE_ProcInfo_43_43);
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_43_43, &STATE_VARIABLE_ProcInfo_45_45);
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_45_45, &STATE_VARIABLE_ProcInfo_47_47, STATE_VARIABLE_ModuleInfo_0_33, &STATE_VARIABLE_ModuleInfo_48_48);
  mercury__counter__allocate_3_p_0(&SeqNum_26, STATE_VARIABLE_Counter_0_37, STATE_VARIABLE_Counter_38);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &AuxHeadVars_74);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &Goal_75);
  GoalInfo_77 = ((MR_Word) ((MR_hl_field(0, Goal_75, (MR_Integer) 1))));
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_48_48, STATE_VARIABLE_ProcInfo_47_47, &InitialAuxInstMap_78);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_16, &TVarSet_79);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &VarTable_80);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_16, &ClassContext_81);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &RttiVarMaps_82);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &InstVarSet_83);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_16, &Markers_84);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_16, &OrigOrigin_85);
  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &HasParallelConj_86);
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_16, &VarNameRemap_87);
  PredModule_88 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_16);
  PredName_89 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_16);
  PredOrFunc_90 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_16);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_10, &ProcNum_91);
  Context_92 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_77);
  LineNum_93 = mercury__term_context__context_line_1_f_0(Context_92);
  {
    Var_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_101, 0) = ((MR_Box) (LineNum_93));
    MR_hl_field(0, Var_101, 1) = ((MR_Box) (SeqNum_26));
  }
  {
    Transform_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_94, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Transform_94, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_90));
    MR_hl_field(3, Transform_94, 2) = ((MR_Box) (ProcNum_91));
    MR_hl_field(3, Transform_94, 3) = ((MR_Box) (Var_101));
  }
  hlds__pred_name__make_transformed_pred_sym_name_4_p_0(PredModule_88, PredName_89, Transform_94, &AuxPredSymName_95);
  {
    ProcTransform_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ProcTransform_96, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, ProcTransform_96, 1) = ((MR_Box) (LineNum_93));
    MR_hl_field(3, ProcTransform_96, 2) = ((MR_Box) (SeqNum_26));
  }
  {
    Origin_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Origin_97, 0) = ((MR_Box) (ProcTransform_96));
    MR_hl_field(3, Origin_97, 1) = ((MR_Box) (OrigOrigin_85));
    MR_hl_field(3, Origin_97, 2) = ((MR_Box) (PredId_9));
    MR_hl_field(3, Origin_97, 3) = ((MR_Box) (ProcId_10));
  }
  hlds__hlds_pred__define_new_pred_19_p_0(AuxPredSymName_95, Origin_97, TVarSet_79, InstVarSet_83, VarTable_80, RttiVarMaps_82, ClassContext_81, InitialAuxInstMap_78, VarNameRemap_87, Markers_84, (MR_Integer) 1, HasParallelConj_86, &AuxPredProcId_98, AuxHeadVars_74, &_ExtraArgs_99, Goal_75, &CallAux_29, STATE_VARIABLE_ModuleInfo_48_48, &STATE_VARIABLE_ModuleInfo_50_50);
  AuxPredId_27 = ((MR_Word) ((MR_hl_field(0, AuxPredProcId_98, (MR_Integer) 0))));
  AuxProcId_28 = ((MR_Integer) ((MR_hl_field(0, AuxPredProcId_98, (MR_Integer) 1))));
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_50_50, AuxPredId_27, AuxProcId_28, &AuxPredInfo_30, &AuxProcInfo0_31);
  Var_52 = (MR_Word) (UntupleMap_24);
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
  }
  hlds__hlds_pred__proc_info_set_maybe_untuple_info_3_p_0(Var_51, AuxProcInfo0_31, &AuxProcInfo_32);
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(AuxPredId_27, AuxProcId_28, AuxPredInfo_30, AuxProcInfo_32, STATE_VARIABLE_ModuleInfo_50_50, STATE_VARIABLE_ModuleInfo_34);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (PredId_9));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (ProcId_10));
  }
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (AuxPredProcId_98));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (CallAux_29));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0), ((MR_Box) (Var_54)), ((MR_Box) (Var_55)), STATE_VARIABLE_TransformMap_0_35, STATE_VARIABLE_TransformMap_36);
}

static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = HeadVar__3_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word NewVars_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word NewVarss_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word TypeInfo_37_37;
        MR_Word Var_29;
        MR_Word Var_34;

        succeeded = (NewVars_24 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_34 = ((MR_Word) ((MR_hl_field(1, NewVars_24, (MR_Integer) 0))));
          Var_29 = ((MR_Word) ((MR_hl_field(1, NewVars_24, (MR_Integer) 1))));
          TypeInfo_37_37 = (MR_Word) (&transform_hlds__untupling_scalar_common_2[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (Var_36)), ((MR_Box) (Var_34)));
          if (succeeded)
            succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word next_value_of_HeadVar__1_1 = Var_35;
          MR_Word next_value_of_HeadVar__2_2 = NewVarss_25;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
        else
        {
          MR_Word STATE_VARIABLE_UntupleMap_31_31;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__3_3;

          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__untupling_scalar_common_2[0]), (MR_Word) (&transform_hlds__untupling_scalar_common_2[1]), ((MR_Box) (Var_36)), ((MR_Box) (NewVars_24)), HeadVar__3_3, &STATE_VARIABLE_UntupleMap_31_31);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Var_35;
          next_value_of_HeadVar__2_2 = NewVarss_25;
          next_value_of_HeadVar__3_3 = STATE_VARIABLE_UntupleMap_31_31;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word TypeTable_2,
  MR_Word ContainerTypes_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Goal_0_8,
  MR_Word * STATE_VARIABLE_Goal_9,
  MR_Word STATE_VARIABLE_VarTable_0_10,
  MR_Word * STATE_VARIABLE_VarTable_11)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTable_11 = STATE_VARIABLE_VarTable_0_10;
      *STATE_VARIABLE_Goal_9 = STATE_VARIABLE_Goal_0_8;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/11", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/11", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode0_56 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ArgModes0_57 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadVar_58;
      MR_Word HeadVars_59;
      MR_Word ArgMode_60;
      MR_Word ArgModes_61;
      MR_Word STATE_VARIABLE_Goal_68_68;
      MR_Word STATE_VARIABLE_VarTable_69_69;
      MR_Word MaybeHeadVarsAndArgModes_72;
      MR_Word ContainerTypes_73;
      MR_Word STATE_VARIABLE_Goal_31_78;
      MR_Word STATE_VARIABLE_VarTable_32_79;

      transform_hlds__untupling__expand_one_arg_in_proc_2_11_p_0(ModuleInfo_1, TypeTable_2, Var_71, ArgMode0_56, &MaybeHeadVarsAndArgModes_72, STATE_VARIABLE_Goal_0_8, &STATE_VARIABLE_Goal_31_78, STATE_VARIABLE_VarTable_0_10, &STATE_VARIABLE_VarTable_32_79, ContainerTypes_3, &ContainerTypes_73);
      if ((MaybeHeadVarsAndArgModes_72 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          HeadVar_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar_58, 0) = ((MR_Box) (Var_71));
          MR_hl_field(1, HeadVar_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ArgMode_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgMode_60, 0) = ((MR_Box) (ArgMode0_56));
          MR_hl_field(1, ArgMode_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_Goal_68_68 = STATE_VARIABLE_Goal_31_78;
        STATE_VARIABLE_VarTable_69_69 = STATE_VARIABLE_VarTable_32_79;
      }
      else
      {
        MR_Word HeadVars1_74;
        MR_Word ArgModes1_75;
        MR_Word ListOfHeadVars_76;
        MR_Word ListOfArgModes_77;
        MR_Word Var_80 = ((MR_Word) ((MR_hl_field(1, MaybeHeadVarsAndArgModes_72, (MR_Integer) 0))));

        HeadVars1_74 = ((MR_Word) ((MR_hl_field(0, Var_80, (MR_Integer) 0))));
        ArgModes1_75 = ((MR_Word) ((MR_hl_field(0, Var_80, (MR_Integer) 1))));
        transform_hlds__untupling__expand_args_in_proc_3_11_p_0(ModuleInfo_1, TypeTable_2, ContainerTypes_73, HeadVars1_74, ArgModes1_75, &ListOfHeadVars_76, &ListOfArgModes_77, STATE_VARIABLE_Goal_31_78, &STATE_VARIABLE_Goal_68_68, STATE_VARIABLE_VarTable_32_79, &STATE_VARIABLE_VarTable_69_69);
        HeadVar_58 = mercury__list__condense_1_f_0((MR_Word) (&transform_hlds__untupling_scalar_common_2[0]), ListOfHeadVars_76);
        ArgMode_60 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ListOfArgModes_77);
      }
      transform_hlds__untupling__expand_args_in_proc_3_11_p_0(ModuleInfo_1, TypeTable_2, ContainerTypes_3, Var_70, ArgModes0_57, &HeadVars_59, &ArgModes_61, STATE_VARIABLE_Goal_68_68, STATE_VARIABLE_Goal_9, STATE_VARIABLE_VarTable_69_69, STATE_VARIABLE_VarTable_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar_58));
        MR_hl_field(1, base, 1) = ((MR_Box) (HeadVars_59));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgMode_60));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArgModes_61));
      }
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_30;

  conv0_LambdaHeadVar__2_30 = transform_hlds__untupling__IntroducedFrom__func__expand_type__776__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_30));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word TypeTable_13,
  MR_Word HeadVar0_14,
  MR_Word ArgMode0_15,
  MR_Word * MaybeHeadVarsAndArgModes_16,
  MR_Word STATE_VARIABLE_Goal_0_29,
  MR_Word * STATE_VARIABLE_Goal_30,
  MR_Word STATE_VARIABLE_VarTable_0_31,
  MR_Word * STATE_VARIABLE_VarTable_32,
  MR_Word ContainerTypes0_19,
  MR_Word * ContainerTypes_20)
{
  MR_bool succeeded;
  MR_Word Type_21;

  parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_31, HeadVar0_14, &Type_21);
  {
    MR_Word Var_48;

    Var_48 = parse_tree__prog_mode__in_mode_0_f_0();
    succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode0_15, Var_48);
  }
  if (!(succeeded))
  {
    MR_Word Var_49;

    Var_49 = parse_tree__prog_mode__out_mode_0_f_0();
    succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode0_15, Var_49);
  }
  if (succeeded)
  {
    MR_Word Expansion_22;
    MR_Word TypeArgs_53;
    MR_Word TypeCtor_52;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_21, &TypeCtor_52, &TypeArgs_53);
    if (succeeded)
      succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_52);
    if (succeeded)
    {
      MR_Integer Arity_54;
      MR_Word ConsId_55;

      Arity_54 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_53);
      {
        ConsId_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConsId_55, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, ConsId_55, 1) = ((MR_Box) (Arity_54));
      }
      {
        Expansion_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Expansion_22, 0) = ((MR_Box) (ConsId_55));
        MR_hl_field(1, Expansion_22, 1) = ((MR_Box) (TypeArgs_53));
      }
    }
    else
    {
      MR_Word SingleCtorName_60;
      MR_Word SingleCtorArgs_61;
      MR_Word TypeCtor_73;
      MR_Word TypeInfo_62_87;
      MR_Word TypeInfo_63_88;
      MR_Word TypeDefn_56;
      MR_Word TypeBody_57;
      MR_Word TypeBodyDu_58;
      MR_Word SingleCtor_59;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word TypeCtorInfo_57_82;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_21, &TypeCtor_73, &Var_85);
      if (succeeded)
      {
        TypeInfo_62_87 = (MR_Word) (&transform_hlds__untupling_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_87, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_85)));
        if (succeeded)
        {
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_13, TypeCtor_73, &TypeDefn_56);
          if (succeeded)
          {
            Var_66 = (MR_Word) ((MR_Unsigned) 0U);
            hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_56, &Var_86);
            TypeInfo_63_88 = (MR_Word) (&transform_hlds__untupling_scalar_common_2[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_63_88, ((MR_Box) (Var_66)), ((MR_Box) (Var_86)));
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_56, &TypeBody_57);
              succeeded = ((MR_tag((MR_Word) TypeBody_57)) == (MR_Integer) 0);
              if (succeeded)
              {
                TypeBodyDu_58 = (MR_Word) ((MR_Word) (TypeBody_57));
                Var_67 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_58, (MR_Integer) 0))));
                SingleCtor_59 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 0))));
                Var_68 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 1))));
                succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_69 = ((MR_Word) ((MR_hl_field(0, SingleCtor_59, (MR_Integer) 1))));
                  SingleCtorName_60 = ((MR_Word) ((MR_hl_field(0, SingleCtor_59, (MR_Integer) 2))));
                  SingleCtorArgs_61 = ((MR_Word) ((MR_hl_field(0, SingleCtor_59, (MR_Integer) 3))));
                  succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (SingleCtorArgs_61 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      TypeCtorInfo_57_82 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      succeeded = mercury__list__member_2_p_0(TypeCtorInfo_57_82, ((MR_Box) (Type_21)), ContainerTypes0_19);
                      succeeded = !(succeeded);
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word ExpandedTypes_64;
        MR_Integer Arity_71;
        MR_Word ConsId_72;

        Arity_71 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), SingleCtorArgs_61);
        {
          ConsId_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConsId_72, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, ConsId_72, 1) = ((MR_Box) (SingleCtorName_60));
          MR_hl_field(3, ConsId_72, 2) = ((MR_Box) (Arity_71));
          MR_hl_field(3, ConsId_72, 3) = ((MR_Box) (TypeCtor_73));
        }
        ExpandedTypes_64 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__untupling_scalar_common_1[4]), SingleCtorArgs_61);
        {
          Expansion_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Expansion_22, 0) = ((MR_Box) (ConsId_72));
          MR_hl_field(1, Expansion_22, 1) = ((MR_Box) (ExpandedTypes_64));
        }
      }
      else
        Expansion_22 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((Expansion_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeHeadVarsAndArgModes_16 = (MR_Word) ((MR_Unsigned) 0U);
      *ContainerTypes_20 = ContainerTypes0_19;
      *STATE_VARIABLE_Goal_30 = STATE_VARIABLE_Goal_0_29;
      *STATE_VARIABLE_VarTable_32 = STATE_VARIABLE_VarTable_0_31;
    }
    else
    {
      MR_Word ConsId_23 = ((MR_Word) ((MR_hl_field(1, Expansion_22, (MR_Integer) 0))));
      MR_Word NewTypes_24 = ((MR_Word) ((MR_hl_field(1, Expansion_22, (MR_Integer) 1))));
      MR_String ParentName_25;
      MR_Word NewHeadVars_26;
      MR_Word NewArgModes_27;
      MR_Integer Var_35;
      MR_Word Var_36;
      MR_Word Var_44;

      ParentName_25 = parse_tree__var_table__var_table_entry_name_2_f_0(STATE_VARIABLE_VarTable_0_31, HeadVar0_14);
      transform_hlds__untupling__create_untuple_vars_7_p_0(ModuleInfo_12, ParentName_25, (MR_Integer) 0, NewTypes_24, &NewHeadVars_26, STATE_VARIABLE_VarTable_0_31, STATE_VARIABLE_VarTable_32);
      Var_35 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__untupling_scalar_common_2[0]), NewHeadVars_26);
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_35, ((MR_Box) (ArgMode0_15)), &NewArgModes_27);
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (NewHeadVars_26));
        MR_hl_field(0, Var_36, 1) = ((MR_Box) (NewArgModes_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeHeadVarsAndArgModes_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
      }
      Var_44 = parse_tree__prog_mode__in_mode_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode0_15, Var_44);
      if (succeeded)
      {
        MR_Word UnifGoal_28;
        MR_Word GoalListA_89;
        MR_Word GoalListB_90;
        MR_Word GoalList_91;
        MR_Word Determinism_92;
        MR_Word GoalInfo0_93;
        MR_Word GoalInfo_94;
        MR_Word Var_95;

        hlds__make_goal__construct_functor_4_p_0(HeadVar0_14, ConsId_23, NewHeadVars_26, &UnifGoal_28);
        hlds__hlds_goal__goal_to_conj_list_2_p_0(UnifGoal_28, &GoalListA_89);
        hlds__hlds_goal__goal_to_conj_list_2_p_0(STATE_VARIABLE_Goal_0_29, &GoalListB_90);
        GoalList_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalListA_89, GoalListB_90);
        hlds__hlds_goal__goal_list_determinism_2_p_0(GoalList_91, &Determinism_92);
        hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_93);
        hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_92, GoalInfo0_93, &GoalInfo_94);
        {
          Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Var_95, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, Var_95, 2) = ((MR_Box) (GoalList_91));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Goal_30 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_95));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_94));
        }
      }
      else
      {
        MR_Word Var_45;

        Var_45 = parse_tree__prog_mode__out_mode_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode0_15, Var_45);
        if (succeeded)
        {
          MR_Word UnifGoal_41;
          MR_Word GoalListA_98;
          MR_Word GoalListB_99;
          MR_Word GoalList_100;
          MR_Word Determinism_101;
          MR_Word GoalInfo0_102;
          MR_Word GoalInfo_103;
          MR_Word Var_104;

          hlds__make_goal__deconstruct_functor_4_p_0(HeadVar0_14, ConsId_23, NewHeadVars_26, &UnifGoal_41);
          hlds__hlds_goal__goal_to_conj_list_2_p_0(STATE_VARIABLE_Goal_0_29, &GoalListA_98);
          hlds__hlds_goal__goal_to_conj_list_2_p_0(UnifGoal_41, &GoalListB_99);
          GoalList_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalListA_98, GoalListB_99);
          hlds__hlds_goal__goal_list_determinism_2_p_0(GoalList_100, &Determinism_101);
          hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_102);
          hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_101, GoalInfo0_102, &GoalInfo_103);
          {
            Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, Var_104, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, Var_104, 2) = ((MR_Box) (GoalList_100));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Goal_30 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_104));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_103));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_one_arg_in_proc_2\'/11", (MR_String) "unsupported mode");
            return;
          }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ContainerTypes_20 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Type_21));
        MR_hl_field(1, base, 1) = ((MR_Box) (ContainerTypes0_19));
      }
    }
  }
  else
  {
    *MaybeHeadVarsAndArgModes_16 = (MR_Word) ((MR_Unsigned) 0U);
    *ContainerTypes_20 = ContainerTypes0_19;
    *STATE_VARIABLE_Goal_30 = STATE_VARIABLE_Goal_0_29;
    *STATE_VARIABLE_VarTable_32 = STATE_VARIABLE_VarTable_0_31;
  }
}

static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_7_p_0(
  MR_Word ModuleInfo_1,
  MR_String ParentName_2,
  MR_Integer Num_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_7 = STATE_VARIABLE_VarTable_0_6;
  }
  else
  {
    MR_Word Type_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Types_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word NewVar_19;
    MR_Word NewVars_20;
    MR_String Name_22;
    MR_Word IsDummy_23;
    MR_Word Entry_24;
    MR_Word STATE_VARIABLE_VarTable_33_33;
    MR_Integer Var_34;
    MR_String Var_37;
    MR_String Var_45;
    MR_String Var_46;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__untupling_scalar_common_3[1]), Num_3, &Var_37);
    Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_37);
    Var_46 = mercury__string__f_43_43_2_f_0(ParentName_2, Var_45);
    Name_22 = mercury__string__f_43_43_2_f_0((MR_String) "Untupled_", Var_46);
    IsDummy_23 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_17);
    {
      Entry_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_24, 0) = ((MR_Box) (Name_22));
      MR_hl_field(0, Entry_24, 1) = ((MR_Box) (Type_17));
      MR_hl_field(0, Entry_24, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_23));
    }
    parse_tree__var_table__add_var_entry_4_p_0(Entry_24, &NewVar_19, STATE_VARIABLE_VarTable_0_6, &STATE_VARIABLE_VarTable_33_33);
    Var_34 = (MR_Integer) ((MR_Unsigned) Num_3 + (MR_Unsigned) 1);
    transform_hlds__untupling__create_untuple_vars_7_p_0(ModuleInfo_1, ParentName_2, Var_34, Types_18, &NewVars_20, STATE_VARIABLE_VarTable_33_33, STATE_VARIABLE_VarTable_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NewVar_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (NewVars_20));
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_34;
  MR_Word conv1_STATE_VARIABLE_TransformMap_36;
  MR_Word conv0_STATE_VARIABLE_Counter_38;

  transform_hlds__untupling__expand_args_in_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_34, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_TransformMap_36, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Counter_38);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_34));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_TransformMap_36));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Counter_38));
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_TransformMap_0_25,
  MR_Word * STATE_VARIABLE_TransformMap_26,
  MR_Word STATE_VARIABLE_Counter_0_27,
  MR_Word * STATE_VARIABLE_Counter_28)
{
  MR_bool succeeded;
  MR_Word TypeTable_12;
  MR_Word PredInfo_13;
  MR_Word TypeCtorInfo_39_39;
  MR_Word TypeInfo_56_56;
  MR_Word TypeInfo_57_57;
  MR_Word PredStatus_14;
  MR_Word Origin_15;
  MR_Word TypeVarSet_19;
  MR_Word ExistQVars_20;
  MR_Word ArgTypes_21;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_37;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;

  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &TypeTable_12);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_23, PredId_8, &PredInfo_13);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_13, &PredStatus_14);
  Var_29 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_14);
  succeeded = (Var_29 == (MR_Integer) 1);
  if (succeeded)
  {
    Var_30 = (MR_Word) (&transform_hlds__untupling_scalar_common_3[0]);
    hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_13, &Var_51);
    succeeded = hlds__hlds_pred____Unify____goal_type_0_0(Var_30, Var_51);
    if (succeeded)
    {
      Var_32 = (MR_Word) ((MR_Unsigned) 0U);
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_13, &Var_52);
      TypeInfo_56_56 = (MR_Word) (&transform_hlds__untupling_scalar_common_2[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (Var_32)), ((MR_Box) (Var_52)));
      if (succeeded)
      {
        Var_33 = (MR_Word) ((MR_Unsigned) 0U);
        hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(PredInfo_13, &Var_53);
        TypeInfo_57_57 = (MR_Word) (&transform_hlds__untupling_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (Var_33)), ((MR_Box) (Var_53)));
        if (succeeded)
        {
          Var_34 = (MR_Word) (&transform_hlds__untupling_scalar_common_2[5]);
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_13, &Var_54);
          succeeded = parse_tree__prog_data____Unify____univ_exist_constraints_0_0(Var_34, Var_54);
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_13, &Origin_15);
            succeeded = ((MR_tag((MR_Word) Origin_15)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_37 = ((MR_Word) ((MR_hl_field(0, Origin_15, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_13, &TypeVarSet_19, &ExistQVars_20, &ArgTypes_21);
                TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
                succeeded = mercury__varset__is_empty_1_p_0(TypeCtorInfo_39_39, TypeVarSet_19);
                if (succeeded)
                {
                  succeeded = (ExistQVars_20 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                    succeeded = transform_hlds__untupling__at_least_one_expandable_type_2_p_0(ArgTypes_21, TypeTable_12);
                }
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word ProcIds_22;
    MR_Word Var_38;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_24;
    MR_Box conv4_STATE_VARIABLE_TransformMap_26;
    MR_Box conv3_STATE_VARIABLE_Counter_28;

    ProcIds_22 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_13);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_7[0]));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (transform_hlds__untupling__expand_args_in_pred_7_p_0_1));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (PredId_8));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__untupling_scalar_common_1[0]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), Var_38, ProcIds_22, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_23)), &conv5_STATE_VARIABLE_ModuleInfo_24, ((MR_Box) (STATE_VARIABLE_TransformMap_0_25)), &conv4_STATE_VARIABLE_TransformMap_26, ((MR_Box) (STATE_VARIABLE_Counter_0_27)), &conv3_STATE_VARIABLE_Counter_28);
    *STATE_VARIABLE_ModuleInfo_24 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_24));
    *STATE_VARIABLE_TransformMap_26 = ((MR_Word) (conv4_STATE_VARIABLE_TransformMap_26));
    *STATE_VARIABLE_Counter_28 = ((MR_Word) (conv3_STATE_VARIABLE_Counter_28));
  }
  else
  {
    *STATE_VARIABLE_Counter_28 = STATE_VARIABLE_Counter_0_27;
    *STATE_VARIABLE_TransformMap_26 = STATE_VARIABLE_TransformMap_0_25;
    *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
  }
}

static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_30;

  conv0_LambdaHeadVar__2_30 = transform_hlds__untupling__IntroducedFrom__func__expand_type__776__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_30));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeTable_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Type_3;
    MR_Word Types_4;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Type_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Types_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word Var_10;
        MR_Word TypeArgs_12;
        MR_Word TypeCtor_11;

        succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_3, &TypeCtor_11, &TypeArgs_12);
        if (succeeded)
          succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_11);
        if (succeeded)
        {
          MR_Integer Arity_13;
          MR_Word ConsId_14;

          Arity_13 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_12);
          {
            ConsId_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ConsId_14, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, ConsId_14, 1) = ((MR_Box) (Arity_13));
          }
          {
            Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_10, 0) = ((MR_Box) (ConsId_14));
            MR_hl_field(1, Var_10, 1) = ((MR_Box) (TypeArgs_12));
          }
        }
        else
        {
          MR_Word SingleCtorName_19;
          MR_Word SingleCtorArgs_20;
          MR_Word TypeCtor_32;
          MR_Word TypeInfo_62_46;
          MR_Word TypeInfo_63_47;
          MR_Word TypeDefn_15;
          MR_Word TypeBody_16;
          MR_Word TypeBodyDu_17;
          MR_Word SingleCtor_18;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word TypeCtorInfo_57_41;

          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_3, &TypeCtor_32, &Var_44);
          if (succeeded)
          {
            TypeInfo_62_46 = (MR_Word) (&transform_hlds__untupling_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_46, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_44)));
            if (succeeded)
            {
              succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_5, TypeCtor_32, &TypeDefn_15);
              if (succeeded)
              {
                Var_25 = (MR_Word) ((MR_Unsigned) 0U);
                hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_15, &Var_45);
                TypeInfo_63_47 = (MR_Word) (&transform_hlds__untupling_scalar_common_2[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_63_47, ((MR_Box) (Var_25)), ((MR_Box) (Var_45)));
                if (succeeded)
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_15, &TypeBody_16);
                  succeeded = ((MR_tag((MR_Word) TypeBody_16)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    TypeBodyDu_17 = (MR_Word) ((MR_Word) (TypeBody_16));
                    Var_26 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_17, (MR_Integer) 0))));
                    SingleCtor_18 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
                    Var_27 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
                    succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_28 = ((MR_Word) ((MR_hl_field(0, SingleCtor_18, (MR_Integer) 1))));
                      SingleCtorName_19 = ((MR_Word) ((MR_hl_field(0, SingleCtor_18, (MR_Integer) 2))));
                      SingleCtorArgs_20 = ((MR_Word) ((MR_hl_field(0, SingleCtor_18, (MR_Integer) 3))));
                      succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (SingleCtorArgs_20 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          TypeCtorInfo_57_41 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_57_41, ((MR_Box) (Type_3)), (MR_Word) ((MR_Unsigned) 0U));
                          succeeded = !(succeeded);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word ExpandedTypes_23;
            MR_Integer Arity_30;
            MR_Word ConsId_31;

            Arity_30 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), SingleCtorArgs_20);
            {
              ConsId_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsId_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, ConsId_31, 1) = ((MR_Box) (SingleCtorName_19));
              MR_hl_field(3, ConsId_31, 2) = ((MR_Box) (Arity_30));
              MR_hl_field(3, ConsId_31, 3) = ((MR_Box) (TypeCtor_32));
            }
            ExpandedTypes_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__untupling_scalar_common_1[3]), SingleCtorArgs_20);
            {
              Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_10, 0) = ((MR_Box) (ConsId_31));
              MR_hl_field(1, Var_10, 1) = ((MR_Box) (ExpandedTypes_23));
            }
          }
          else
            Var_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Types_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ModuleInfo_11;

  transform_hlds__untupling__fix_calls_in_pred_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ModuleInfo_11);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_11));
}

static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_24;
  MR_Word conv1_STATE_VARIABLE_TransformMap_26;
  MR_Word conv0_STATE_VARIABLE_Counter_28;

  transform_hlds__untupling__expand_args_in_pred_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_24, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_TransformMap_26, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Counter_28);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_24));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_TransformMap_26));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Counter_28));
}

void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word TransformMap_7;
  MR_Word STATE_VARIABLE_ModuleInfo_12_12;
  MR_Word PredIds_13;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word PredIds_25;
  MR_Word Var_26;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_12_12;
  MR_Box conv4_TransformMap_7;
  MR_Box conv3_Var_14;
  MR_Box conv7_STATE_VARIABLE_ModuleInfo_9;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredIds_13);
  Var_16 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0));
  Var_17 = mercury__counter__init_1_f_0((MR_Integer) 0);
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__untupling_scalar_common_1[0]), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&transform_hlds__untupling_scalar_common_1[2]), PredIds_13, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv5_STATE_VARIABLE_ModuleInfo_12_12, ((MR_Box) (Var_16)), &conv4_TransformMap_7, ((MR_Box) (Var_17)), &conv3_Var_14);
  STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_12_12));
  TransformMap_7 = ((MR_Word) (conv4_TransformMap_7));
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_12_12, &PredIds_25);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_5[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (transform_hlds__untupling__untuple_arguments_4_p_0_2));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (TransformMap_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_26, PredIds_25, ((MR_Box) (STATE_VARIABLE_ModuleInfo_12_12)), &conv7_STATE_VARIABLE_ModuleInfo_9);
  *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_9));
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__untupling____Unify____expansion_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__untupling____Compare____expansion_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__untupling____Unify____transform_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__untupling____Compare____transform_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__untupling____Unify____transformed_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__untupling____Compare____transformed_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__untupling____Unify____untuple_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__untupling____Compare____untuple_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__untupling__init(void)
{
}

void mercury__transform_hlds__untupling__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_expansion_result_0);
	MR_register_type_ctor_info(&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transform_map_0);
	MR_register_type_ctor_info(&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0);
	MR_register_type_ctor_info(&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_untuple_map_0);
}

void mercury__transform_hlds__untupling__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__untupling__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.untupling.
