/*
** Automatically generated from `untupling.m'
** by the Mercury compiler,
** version 2018-05-12
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "counter.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0;

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
transform_hlds__untupling__IntroducedFrom__func__expand_type__780__1_1_f_0(
  MR_Word LambdaHeadVar__1_28);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word TransformMap_7,
  MR_Word ModuleInfo_8);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word TransformMap_7,
  MR_Word ModuleInfo_8);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word TransformMap_7,
  MR_Word ModuleInfo_8);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarSet_0_74,
  MR_Word * STATE_VARIABLE_VarSet_75,
  MR_Word STATE_VARIABLE_VarTypes_0_76,
  MR_Word * STATE_VARIABLE_VarTypes_77,
  MR_Word TransformMap_13,
  MR_Word ModuleInfo_14);

static void MR_CALL 
transform_hlds__untupling__expand_call_args_10_p_0(
  MR_Word Args0_11,
  MR_Word ArgModes0_12,
  MR_Word * Args_13,
  MR_Word * EnterUnifs_14,
  MR_Word * ExitUnifs_15,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22,
  MR_Word TypeTable_18);

static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word ContainerTypes0_10,
  MR_Word TypeTable_11);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_TransformMap_0_37,
  MR_Word * STATE_VARIABLE_TransformMap_38,
  MR_Word STATE_VARIABLE_Counter_0_39,
  MR_Word * STATE_VARIABLE_Counter_40);

static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word PredInfo_15,
  MR_Word ProcInfo_16,
  MR_Integer Counter_17,
  MR_Word * AuxPredId_18,
  MR_Integer * AuxProcId_19,
  MR_Word * CallAux_20,
  MR_Word * AuxPredInfo_21,
  MR_Word * AuxProcInfo_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52);

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
  MR_Word HeadVars0_13,
  MR_Word ArgModes0_14,
  MR_Word * HeadVars_15,
  MR_Word * ArgModes_16,
  MR_Word Goal0_17,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29,
  MR_Word STATE_VARIABLE_VarTypes_0_30,
  MR_Word * STATE_VARIABLE_VarTypes_31,
  MR_Word TypeTable_22,
  MR_Word * UntupleMap_23);

static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
  MR_Word HeadVar0_13,
  MR_Word ArgMode0_14,
  MR_Word * HeadVars_15,
  MR_Word * ArgModes_16,
  MR_Word STATE_VARIABLE_Goal_0_28,
  MR_Word * STATE_VARIABLE_Goal_29,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31,
  MR_Word STATE_VARIABLE_VarTypes_0_32,
  MR_Word * STATE_VARIABLE_VarTypes_33,
  MR_Word ContainerTypes0_20,
  MR_Word TypeTable_21);

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word ContainerTypes_11,
  MR_Word TypeTable_12);

static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
  MR_Word HeadVar0_13,
  MR_Word ArgMode0_14,
  MR_Word * MaybeHeadVarsAndArgModes_15,
  MR_Word STATE_VARIABLE_Goal_0_30,
  MR_Word * STATE_VARIABLE_Goal_31,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33,
  MR_Word STATE_VARIABLE_VarTypes_0_34,
  MR_Word * STATE_VARIABLE_VarTypes_35,
  MR_Word ContainerTypes0_19,
  MR_Word * ContainerTypes_20,
  MR_Word TypeTable_21);

static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
  MR_Word ArgMode_6,
  MR_Word ArgType_7,
  MR_Word ContainerTypes_8,
  MR_Word TypeTable_9,
  MR_Word * Expansion_10);

static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
  MR_String ParentName_1,
  MR_Integer Num_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_VarTypes_0_7,
  MR_Word * STATE_VARIABLE_VarTypes_8);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21,
  MR_Word STATE_VARIABLE_TransformMap_0_22,
  MR_Word * STATE_VARIABLE_TransformMap_23,
  MR_Word STATE_VARIABLE_Counter_0_24,
  MR_Word * STATE_VARIABLE_Counter_25);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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


static /* final */ const MR_Box transform_hlds__untupling_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_2[6][2];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_3[1][10];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_4[1][7];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_5[1][5];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_6[1][11];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_7[1][1];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_8[1][8];




static /* final */ const MR_Box transform_hlds__untupling_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[0])),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__untupling_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__untupling__untuple_arguments_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__untupling_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__untupling_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__untupling__expand_argument_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__untupling_scalar_common_2[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0 = {
  (MR_String) "expansion",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1 = {
  (MR_String) "no_expansion",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0
};

static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__untupling____Unify____expansion_result_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____expansion_result_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "expansion_result",
  {     transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0 },
  {     transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transform_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__untupling____Unify____transform_map_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____transform_map_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "transform_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0 = {
  (MR_String) "transformed_proc",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__untupling____Unify____transformed_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____transformed_proc_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "transformed_proc",
  {     transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0 },
  {     transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_untuple_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__untupling____Unify____untuple_map_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____untuple_map_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "untuple_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__780__1_1_f_0(
  MR_Word LambdaHeadVar__1_28)
{
  {
    MR_Word LambdaHeadVar__2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_28, (MR_Integer) 1)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_28, (MR_Integer) 0)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_28, (MR_Integer) 2)));

    return LambdaHeadVar__2_29;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        hlds__hlds_goal____Compare____hlds_goal_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_8;

        parse_tree__prog_data____Compare____cons_id_0_0(&Var_8, Var_18, ArgY1_5);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[2], HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_7)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_8 == CastX_7);
    }
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
  MR_Word TransformMap_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_11;
    MR_Word Goal0_12;
    MR_Word VarTypes0_13;
    MR_Word VarSet0_14;
    MR_Word Goal_15;
    MR_Word VarSet_16;
    MR_Word VarTypes_17;
    MR_Word STATE_VARIABLE_ProcInfo_20_20;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_18, PredId_7, ProcId_8, &PredInfo_11, &STATE_VARIABLE_ProcInfo_20_20);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_20_20, &Goal0_12);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_20_20, &VarTypes0_13);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_20_20, &VarSet0_14);
    transform_hlds__untupling__fix_calls_in_goal_8_p_0(Goal0_12, &Goal_15, VarSet0_14, &VarSet_16, VarTypes0_13, &VarTypes_17, TransformMap_6, STATE_VARIABLE_ModuleInfo_0_18);
    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(Goal0_12, Goal_15);
    if (succeeded)
      *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
    else
    {
      MR_Word STATE_VARIABLE_ProcInfo_21_21;
      MR_Word STATE_VARIABLE_ProcInfo_22_22;
      MR_Word STATE_VARIABLE_ProcInfo_23_23;
      MR_Word STATE_VARIABLE_ProcInfo_25_25;
      MR_Word STATE_VARIABLE_ProcInfo_27_27;
      MR_Word STATE_VARIABLE_ModuleInfo_28_28;

      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_15, STATE_VARIABLE_ProcInfo_20_20, &STATE_VARIABLE_ProcInfo_21_21);
      hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_16, STATE_VARIABLE_ProcInfo_21_21, &STATE_VARIABLE_ProcInfo_22_22);
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_17, STATE_VARIABLE_ProcInfo_22_22, &STATE_VARIABLE_ProcInfo_23_23);
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_23_23, &STATE_VARIABLE_ProcInfo_25_25);
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_25_25, &STATE_VARIABLE_ProcInfo_27_27, STATE_VARIABLE_ModuleInfo_0_18, &STATE_VARIABLE_ModuleInfo_28_28);
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_7, ProcId_8, PredInfo_11, STATE_VARIABLE_ProcInfo_27_27, STATE_VARIABLE_ModuleInfo_28_28, STATE_VARIABLE_ModuleInfo_19);
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word TransformMap_7,
  MR_Word ModuleInfo_8)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_VarTypes_6 = STATE_VARIABLE_VarTypes_0_5;
    *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
  }
  else
  {
    MR_Word Case0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Case_19;
    MR_Word Cases_20;
    MR_Word MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_17, (MR_Integer) 0)));
    MR_Word OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_17, (MR_Integer) 1)));
    MR_Word Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_17, (MR_Integer) 2)));
    MR_Word Goal_28;
    MR_Word STATE_VARIABLE_VarSet_33_33;
    MR_Word STATE_VARIABLE_VarTypes_34_34;

    transform_hlds__untupling__fix_calls_in_goal_8_p_0(Goal0_27, &Goal_28, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_33_33, STATE_VARIABLE_VarTypes_0_5, &STATE_VARIABLE_VarTypes_34_34, TransformMap_7, ModuleInfo_8);
    {
      Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_19, 0) = ((MR_Box) (MainConsId_25));
      MR_hl_field(MR_mktag(0), Case_19, 1) = ((MR_Box) (OtherConsIds_26));
      MR_hl_field(MR_mktag(0), Case_19, 2) = ((MR_Box) (Goal_28));
    }
    transform_hlds__untupling__fix_calls_in_cases_8_p_0(Cases0_18, &Cases_20, STATE_VARIABLE_VarSet_33_33, STATE_VARIABLE_VarSet_4, STATE_VARIABLE_VarTypes_34_34, STATE_VARIABLE_VarTypes_6, TransformMap_7, ModuleInfo_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_20));
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word TransformMap_7,
  MR_Word ModuleInfo_8)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_VarTypes_6 = STATE_VARIABLE_VarTypes_0_5;
    *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
  }
  else
  {
    MR_Word Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word STATE_VARIABLE_VarSet_29_29;
    MR_Word STATE_VARIABLE_VarTypes_30_30;

    transform_hlds__untupling__fix_calls_in_goal_8_p_0(Goal0_17, &Goal_19, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_29_29, STATE_VARIABLE_VarTypes_0_5, &STATE_VARIABLE_VarTypes_30_30, TransformMap_7, ModuleInfo_8);
    transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(Goals0_18, &Goals_20, STATE_VARIABLE_VarSet_29_29, STATE_VARIABLE_VarSet_4, STATE_VARIABLE_VarTypes_30_30, STATE_VARIABLE_VarTypes_6, TransformMap_7, ModuleInfo_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_20));
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6,
  MR_Word TransformMap_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_VarTypes_6 = STATE_VARIABLE_VarTypes_0_5;
      *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
    }
    else
    {
      MR_Word Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Goal1_24;
      MR_Word Goals1_25;
      MR_Word STATE_VARIABLE_VarSet_32_32;
      MR_Word STATE_VARIABLE_VarTypes_33_33;
      MR_Word ConjGoals_26;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_27;

      transform_hlds__untupling__fix_calls_in_goal_8_p_0(Goal0_17, &Goal1_24, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_32_32, STATE_VARIABLE_VarTypes_0_5, &STATE_VARIABLE_VarTypes_33_33, TransformMap_7, ModuleInfo_8);
      transform_hlds__untupling__fix_calls_in_conj_8_p_0(Goals0_18, &Goals1_25, STATE_VARIABLE_VarSet_32_32, STATE_VARIABLE_VarSet_4, STATE_VARIABLE_VarTypes_33_33, STATE_VARIABLE_VarTypes_6, TransformMap_7, ModuleInfo_8);
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_24, (MR_Integer) 0)));
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_24, (MR_Integer) 1)));
      succeeded = ((((MR_tag((MR_Word) Var_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 1)));
        ConjGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_36, (MR_Integer) 2)));
        succeeded = (Var_37 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ConjGoals_26, Goals1_25);
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_25));
        }
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarSet_0_74,
  MR_Word * STATE_VARIABLE_VarSet_75,
  MR_Word STATE_VARIABLE_VarTypes_0_76,
  MR_Word * STATE_VARIABLE_VarTypes_77,
  MR_Word TransformMap_13,
  MR_Word ModuleInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0)));
    MR_Word GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) GoalExpr0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_53 = (MR_Word) MR_body(((MR_Word) GoalExpr0_15), (MR_Integer) 0);
          MR_Word SubGoal_54;
          MR_Word GoalExpr_55;

          transform_hlds__untupling__fix_calls_in_goal_8_p_0(SubGoal0_53, &SubGoal_54, STATE_VARIABLE_VarSet_0_74, STATE_VARIABLE_VarSet_75, STATE_VARIABLE_VarTypes_0_76, STATE_VARIABLE_VarTypes_77, TransformMap_13, ModuleInfo_14);
          GoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_54);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_55));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_16));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *Goal_10 = Goal0_9;
          *STATE_VARIABLE_VarSet_75 = STATE_VARIABLE_VarSet_0_74;
          *STATE_VARIABLE_VarTypes_77 = STATE_VARIABLE_VarTypes_0_76;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CalleePredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 0)));
          MR_Integer CalleeProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 1)));
          MR_Word OrigArgs_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 2)));
          MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 3)));
          MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 4)));
          MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 5)));
          MR_Word CallAux0_41;
          MR_Word CallAuxInfo_42;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_Box conv0_Var_99;
          MR_Word Var_40;

          {
            Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (CalleePredId_34));
            MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (CalleeProcId_35));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, TransformMap_13, ((MR_Box) (Var_98)), &conv0_Var_99);
          if (succeeded)
          {
            Var_99 = ((MR_Word) conv0_Var_99);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 0)));
            Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 1)));
            CallAux0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_100, (MR_Integer) 0)));
            CallAuxInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_100, (MR_Integer) 1)));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word TypeTable_43;
            MR_Word CalleeProcInfo_45;
            MR_Word OrigArgModes_46;
            MR_Word Args_47;
            MR_Word EnterUnifs_48;
            MR_Word ExitUnifs_49;
            MR_Word _CalleePredInfo_44;
            MR_Word CallAux_50;
            MR_Word Var_121;
            MR_Integer Var_122;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word Var_123;

            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_14, &TypeTable_43);
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_14, CalleePredId_34, CalleeProcId_35, &_CalleePredInfo_44, &CalleeProcInfo_45);
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_45, &OrigArgModes_46);
            transform_hlds__untupling__expand_call_args_10_p_0(OrigArgs_36, OrigArgModes_46, &Args_47, &EnterUnifs_48, &ExitUnifs_49, STATE_VARIABLE_VarSet_0_74, STATE_VARIABLE_VarSet_75, STATE_VARIABLE_VarTypes_0_76, STATE_VARIABLE_VarTypes_77, TypeTable_43);
            succeeded = ((MR_tag((MR_Word) CallAux0_41)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), CallAux0_41, (MR_Integer) 0)));
              Var_122 = ((MR_Integer) (MR_hl_field(MR_mktag(2), CallAux0_41, (MR_Integer) 1)));
              Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), CallAux0_41, (MR_Integer) 2)));
              Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), CallAux0_41, (MR_Integer) 3)));
              Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), CallAux0_41, (MR_Integer) 4)));
              Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), CallAux0_41, (MR_Integer) 5)));
              {
                CallAux_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), CallAux_50, 0) = ((MR_Box) (Var_121));
                MR_hl_field(MR_mktag(2), CallAux_50, 1) = ((MR_Box) (Var_122));
                MR_hl_field(MR_mktag(2), CallAux_50, 2) = ((MR_Box) (Args_47));
                MR_hl_field(MR_mktag(2), CallAux_50, 3) = ((MR_Box) (Var_124));
                MR_hl_field(MR_mktag(2), CallAux_50, 4) = ((MR_Box) (Var_125));
                MR_hl_field(MR_mktag(2), CallAux_50, 5) = ((MR_Box) (Var_126));
              }
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word TypeCtorInfo_129_129;
              MR_Word Call_51;
              MR_Word ConjList_52;
              MR_Word Var_103;
              MR_Word Var_104;

              {
                Call_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Call_51, 0) = ((MR_Box) (CallAux_50));
                MR_hl_field(MR_mktag(0), Call_51, 1) = ((MR_Box) (CallAuxInfo_42));
              }
              TypeCtorInfo_129_129 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Call_51));
                MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              Var_103 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_129_129, Var_104, ExitUnifs_49);
              ConjList_52 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_129_129, EnterUnifs_48, Var_103);
              hlds__hlds_goal__conj_list_to_goal_3_p_0(ConjList_52, GoalInfo0_16, Goal_10);
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "not a call template");
                return;
              }
            }
          }
          else
          {
            *Goal_10 = Goal0_9;
            *STATE_VARIABLE_VarTypes_77 = STATE_VARIABLE_VarTypes_0_76;
            *STATE_VARIABLE_VarSet_75 = STATE_VARIABLE_VarSet_0_74;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_10 = Goal0_9;
              *STATE_VARIABLE_VarSet_75 = STATE_VARIABLE_VarSet_0_74;
              *STATE_VARIABLE_VarTypes_77 = STATE_VARIABLE_VarTypes_0_76;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1)));
              MR_Word Goals0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2)));
              MR_Word Goals_61;
              MR_Word GoalExpr_115;

              switch (ConjType_59) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(Goals0_60, &Goals_61, STATE_VARIABLE_VarSet_0_74, STATE_VARIABLE_VarSet_75, STATE_VARIABLE_VarTypes_0_76, STATE_VARIABLE_VarTypes_77, TransformMap_13, ModuleInfo_14);
                  break;
                case (MR_Integer) 0:
                  transform_hlds__untupling__fix_calls_in_conj_8_p_0(Goals0_60, &Goals_61, STATE_VARIABLE_VarSet_0_74, STATE_VARIABLE_VarSet_75, STATE_VARIABLE_VarTypes_0_76, STATE_VARIABLE_VarTypes_77, TransformMap_13, ModuleInfo_14);
                  break;
              }
              {
                GoalExpr_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_115, 1) = ((MR_Box) (ConjType_59));
                MR_hl_field(MR_mktag(3), GoalExpr_115, 2) = ((MR_Box) (Goals_61));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_115));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word GoalExpr_116;
              MR_Word Goals0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1)));
              MR_Word Goals_118;

              transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(Goals0_117, &Goals_118, STATE_VARIABLE_VarSet_0_74, STATE_VARIABLE_VarSet_75, STATE_VARIABLE_VarTypes_0_76, STATE_VARIABLE_VarTypes_77, TransformMap_13, ModuleInfo_14);
              {
                GoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_116, 1) = ((MR_Box) (Goals_118));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_116));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1)));
              MR_Word CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2)));
              MR_Word Cases0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 3)));
              MR_Word Cases_65;
              MR_Word GoalExpr_119;

              transform_hlds__untupling__fix_calls_in_cases_8_p_0(Cases0_64, &Cases_65, STATE_VARIABLE_VarSet_0_74, STATE_VARIABLE_VarSet_75, STATE_VARIABLE_VarTypes_0_76, STATE_VARIABLE_VarTypes_77, TransformMap_13, ModuleInfo_14);
              {
                GoalExpr_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_119, 1) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(3), GoalExpr_119, 2) = ((MR_Box) (CanFail_63));
                MR_hl_field(MR_mktag(3), GoalExpr_119, 3) = ((MR_Box) (Cases_65));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_119));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1)));
              MR_Word SubGoal0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2)));
              MR_Word FGT_58;
              MR_Word Var_57;

              succeeded = ((((MR_tag((MR_Word) Reason_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_56, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_56, (MR_Integer) 1)));
                FGT_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_56, (MR_Integer) 2)));
                switch (FGT_58) {
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
                *STATE_VARIABLE_VarTypes_77 = STATE_VARIABLE_VarTypes_0_76;
                *STATE_VARIABLE_VarSet_75 = STATE_VARIABLE_VarSet_0_74;
              }
              else
              {
                MR_Word SubGoal_108;
                MR_Word GoalExpr_109;

                transform_hlds__untupling__fix_calls_in_goal_8_p_0(SubGoal0_112, &SubGoal_108, STATE_VARIABLE_VarSet_0_74, STATE_VARIABLE_VarSet_75, STATE_VARIABLE_VarTypes_0_76, STATE_VARIABLE_VarTypes_77, TransformMap_13, ModuleInfo_14);
                {
                  GoalExpr_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), GoalExpr_109, 1) = ((MR_Box) (Reason_56));
                  MR_hl_field(MR_mktag(3), GoalExpr_109, 2) = ((MR_Box) (SubGoal_108));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_109));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_16));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1)));
              MR_Word Cond0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2)));
              MR_Word Then0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 3)));
              MR_Word Else0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 4)));
              MR_Word Cond_70;
              MR_Word Then_71;
              MR_Word Else_72;
              MR_Word STATE_VARIABLE_VarSet_80_80;
              MR_Word STATE_VARIABLE_VarTypes_81_81;
              MR_Word STATE_VARIABLE_VarSet_82_82;
              MR_Word STATE_VARIABLE_VarTypes_83_83;
              MR_Word GoalExpr_120;

              transform_hlds__untupling__fix_calls_in_goal_8_p_0(Cond0_67, &Cond_70, STATE_VARIABLE_VarSet_0_74, &STATE_VARIABLE_VarSet_80_80, STATE_VARIABLE_VarTypes_0_76, &STATE_VARIABLE_VarTypes_81_81, TransformMap_13, ModuleInfo_14);
              transform_hlds__untupling__fix_calls_in_goal_8_p_0(Then0_68, &Then_71, STATE_VARIABLE_VarSet_80_80, &STATE_VARIABLE_VarSet_82_82, STATE_VARIABLE_VarTypes_81_81, &STATE_VARIABLE_VarTypes_83_83, TransformMap_13, ModuleInfo_14);
              transform_hlds__untupling__fix_calls_in_goal_8_p_0(Else0_69, &Else_72, STATE_VARIABLE_VarSet_82_82, STATE_VARIABLE_VarSet_75, STATE_VARIABLE_VarTypes_83_83, STATE_VARIABLE_VarTypes_77, TransformMap_13, ModuleInfo_14);
              {
                GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 1) = ((MR_Box) (Vars_66));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 2) = ((MR_Box) (Cond_70));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 3) = ((MR_Box) (Then_71));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 4) = ((MR_Box) (Else_72));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_120));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_call_args_10_p_0(
  MR_Word Args0_11,
  MR_Word ArgModes0_12,
  MR_Word * Args_13,
  MR_Word * EnterUnifs_14,
  MR_Word * ExitUnifs_15,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22,
  MR_Word TypeTable_18)
{
  {
    transform_hlds__untupling__expand_call_args_2_11_p_0(Args0_11, ArgModes0_12, Args_13, EnterUnifs_14, ExitUnifs_15, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20, STATE_VARIABLE_VarTypes_0_21, STATE_VARIABLE_VarTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TypeTable_18);
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word ContainerTypes0_10,
  MR_Word TypeTable_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *HeadVar__9_9 = HeadVar__8_8;
        *HeadVar__7_7 = HeadVar__6_6;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ArgModes_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word Arg0Type_61;
        MR_Word Expansion_62;

        hlds__vartypes__lookup_var_type_3_p_0(HeadVar__8_8, Var_104, &Arg0Type_61);
        transform_hlds__untupling__expand_argument_5_p_0(ArgMode_52, Arg0Type_61, ContainerTypes0_10, TypeTable_11, &Expansion_62);
        if ((Expansion_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word Args1_72;

          transform_hlds__untupling__expand_call_args_10_p_0(Var_103, ArgModes_53, &Args1_72, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, HeadVar__8_8, HeadVar__9_9, TypeTable_11);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args1_72));
          }
        }
        else
        {
          MR_Word TypeCtorInfo_97_97;
          MR_Word ConsId_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), Expansion_62, (MR_Integer) 0)));
          MR_Word Types_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Expansion_62, (MR_Integer) 1)));
          MR_Integer NumVars_65;
          MR_Word ReplacementArgs_66;
          MR_Word ReplacementModes_67;
          MR_Word ContainerTypes_68;
          MR_Word STATE_VARIABLE_VarSet_79_79;
          MR_Word STATE_VARIABLE_VarTypes_80_80;
          MR_Word Var_101;

          NumVars_65 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, Types_64);
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NumVars_65, &ReplacementArgs_66, HeadVar__6_6, &STATE_VARIABLE_VarSet_79_79);
          hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(ReplacementArgs_66, Types_64, HeadVar__8_8, &STATE_VARIABLE_VarTypes_80_80);
          TypeCtorInfo_97_97 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
          mercury__list__duplicate_3_p_0(TypeCtorInfo_97_97, NumVars_65, ((MR_Box) (ArgMode_52)), &ReplacementModes_67);
          {
            ContainerTypes_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ContainerTypes_68, 0) = ((MR_Box) (Arg0Type_61));
            MR_hl_field(MR_mktag(1), ContainerTypes_68, 1) = ((MR_Box) (ContainerTypes0_10));
          }
          Var_101 = parse_tree__prog_mode__in_mode_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode_52, Var_101);
          if (succeeded)
          {
            MR_Word Unif_69;
            MR_Word EnterUnifs1_70;
            MR_Word Var_81;
            MR_Word Var_82;

            hlds__make_goal__deconstruct_functor_4_p_0(Var_104, ConsId_63, ReplacementArgs_66, &Unif_69);
            Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], ReplacementArgs_66, Var_103);
            Var_82 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_97_97, ReplacementModes_67, ArgModes_53);
            transform_hlds__untupling__expand_call_args_2_11_p_0(Var_81, Var_82, HeadVar__3_3, &EnterUnifs1_70, HeadVar__5_5, STATE_VARIABLE_VarSet_79_79, HeadVar__7_7, STATE_VARIABLE_VarTypes_80_80, HeadVar__9_9, ContainerTypes_68, TypeTable_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Unif_69));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (EnterUnifs1_70));
            }
          }
          else
          {
            MR_Word Var_102;

            Var_102 = parse_tree__prog_mode__out_mode_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode_52, Var_102);
            if (succeeded)
            {
              MR_Word ExitUnifs1_71;
              MR_Word Var_85;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Unif_93;

              hlds__make_goal__construct_functor_4_p_0(Var_104, ConsId_63, ReplacementArgs_66, &Unif_93);
              {
                Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Unif_93));
                MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], ReplacementArgs_66, Var_103);
              Var_88 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_97_97, ReplacementModes_67, ArgModes_53);
              transform_hlds__untupling__expand_call_args_2_11_p_0(Var_87, Var_88, HeadVar__3_3, HeadVar__4_4, &ExitUnifs1_71, STATE_VARIABLE_VarSet_79_79, HeadVar__7_7, STATE_VARIABLE_VarTypes_80_80, HeadVar__9_9, ContainerTypes_68, TypeTable_11);
              *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ExitUnifs1_71, Var_85);
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "unsupported mode");
                return;
              }
            }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_19;

    transform_hlds__untupling__fix_calls_in_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_19));
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
  MR_Word TransformMap_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  {
    MR_Word PredInfo_8;
    MR_Word ProcIds_9;
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_11;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_10, PredId_6, &PredInfo_8);
    ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_8);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__untupling__fix_calls_in_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TransformMap_5));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (PredId_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_12, ProcIds_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_10)), &conv1_STATE_VARIABLE_ModuleInfo_11);
    *STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) conv1_STATE_VARIABLE_ModuleInfo_11);
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_TransformMap_0_37,
  MR_Word * STATE_VARIABLE_TransformMap_38,
  MR_Word STATE_VARIABLE_Counter_0_39,
  MR_Word * STATE_VARIABLE_Counter_40)
{
  {
    MR_Word TypeTable_15;
    MR_Word PredInfo0_16;
    MR_Word HeadVars0_17;
    MR_Word ArgModes0_18;
    MR_Word Goal0_19;
    MR_Word VarTypes0_20;
    MR_Word VarSet0_21;
    MR_Word HeadVars_22;
    MR_Word ArgModes_23;
    MR_Word Goal_24;
    MR_Word VarSet_25;
    MR_Word VarTypes_26;
    MR_Word UntupleMap_27;
    MR_Integer Num_28;
    MR_Word AuxPredId_29;
    MR_Integer AuxProcId_30;
    MR_Word CallAux_31;
    MR_Word AuxPredInfo_32;
    MR_Word AuxProcInfo0_33;
    MR_Word AuxProcInfo_34;
    MR_Word STATE_VARIABLE_ProcInfo_41_41;
    MR_Word STATE_VARIABLE_ProcInfo_42_42;
    MR_Word STATE_VARIABLE_ProcInfo_43_43;
    MR_Word STATE_VARIABLE_ProcInfo_44_44;
    MR_Word STATE_VARIABLE_ProcInfo_45_45;
    MR_Word STATE_VARIABLE_ProcInfo_46_46;
    MR_Word STATE_VARIABLE_ProcInfo_48_48;
    MR_Word STATE_VARIABLE_ProcInfo_50_50;
    MR_Word STATE_VARIABLE_ModuleInfo_51_51;
    MR_Word STATE_VARIABLE_ModuleInfo_53_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;

    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &TypeTable_15);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_35, PredId_9, ProcId_10, &PredInfo0_16, &STATE_VARIABLE_ProcInfo_41_41);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_41_41, &HeadVars0_17);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_41_41, &ArgModes0_18);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_41_41, &Goal0_19);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_41_41, &VarTypes0_20);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_41_41, &VarSet0_21);
    transform_hlds__untupling__expand_args_in_proc_2_12_p_0(HeadVars0_17, ArgModes0_18, &HeadVars_22, &ArgModes_23, Goal0_19, &Goal_24, VarSet0_21, &VarSet_25, VarTypes0_20, &VarTypes_26, TypeTable_15, &UntupleMap_27);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_22, STATE_VARIABLE_ProcInfo_41_41, &STATE_VARIABLE_ProcInfo_42_42);
    hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_23, STATE_VARIABLE_ProcInfo_42_42, &STATE_VARIABLE_ProcInfo_43_43);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_24, STATE_VARIABLE_ProcInfo_43_43, &STATE_VARIABLE_ProcInfo_44_44);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_25, STATE_VARIABLE_ProcInfo_44_44, &STATE_VARIABLE_ProcInfo_45_45);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_26, STATE_VARIABLE_ProcInfo_45_45, &STATE_VARIABLE_ProcInfo_46_46);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_46_46, &STATE_VARIABLE_ProcInfo_48_48);
    check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_48_48, &STATE_VARIABLE_ProcInfo_50_50, STATE_VARIABLE_ModuleInfo_0_35, &STATE_VARIABLE_ModuleInfo_51_51);
    mercury__counter__allocate_3_p_0(&Num_28, STATE_VARIABLE_Counter_0_39, STATE_VARIABLE_Counter_40);
    transform_hlds__untupling__create_aux_pred_12_p_0(PredId_9, ProcId_10, PredInfo0_16, STATE_VARIABLE_ProcInfo_50_50, Num_28, &AuxPredId_29, &AuxProcId_30, &CallAux_31, &AuxPredInfo_32, &AuxProcInfo0_33, STATE_VARIABLE_ModuleInfo_51_51, &STATE_VARIABLE_ModuleInfo_53_53);
    Var_55 = (MR_Word) UntupleMap_27;
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
    }
    hlds__hlds_pred__proc_info_set_maybe_untuple_info_3_p_0(Var_54, AuxProcInfo0_33, &AuxProcInfo_34);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(AuxPredId_29, AuxProcId_30, AuxPredInfo_32, AuxProcInfo_34, STATE_VARIABLE_ModuleInfo_53_53, STATE_VARIABLE_ModuleInfo_36);
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (PredId_9));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ProcId_10));
    }
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (AuxPredId_29));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (AuxProcId_30));
    }
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (CallAux_31));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, ((MR_Box) (Var_57)), ((MR_Box) (Var_58)), STATE_VARIABLE_TransformMap_0_37, STATE_VARIABLE_TransformMap_38);
  }
}

static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word PredInfo_15,
  MR_Word ProcInfo_16,
  MR_Integer Counter_17,
  MR_Word * AuxPredId_18,
  MR_Integer * AuxProcId_19,
  MR_Word * CallAux_20,
  MR_Word * AuxPredInfo_21,
  MR_Word * AuxProcInfo_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52)
{
  {
    MR_Word AuxHeadVars_24;
    MR_Word Goal_25;
    MR_Word GoalInfo_27;
    MR_Word InitialAuxInstMap_28;
    MR_Word TVarSet_29;
    MR_Word VarTypes_30;
    MR_Word ClassContext_31;
    MR_Word RttiVarMaps_32;
    MR_Word VarSet_33;
    MR_Word InstVarSet_34;
    MR_Word Markers_35;
    MR_Word OrigOrigin_36;
    MR_Word HasParallelConj_37;
    MR_Word VarNameRemap_38;
    MR_Word PredModule_39;
    MR_String PredName_40;
    MR_Word PredOrFunc_41;
    MR_Word Context_42;
    MR_Integer Line_43;
    MR_Word AuxPredSymName0_44;
    MR_Integer ProcNo_45;
    MR_String Suffix_46;
    MR_Word AuxPredSymName_47;
    MR_Word Origin_48;
    MR_Word AuxPredProcId_50;
    MR_Word Var_59;
    MR_String Var_62;
    MR_Word _GoalExpr_26;
    MR_Word _ExtraArgs_49;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_16, &AuxHeadVars_24);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_16, &Goal_25);
    _GoalExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_25, (MR_Integer) 0)));
    GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_25, (MR_Integer) 1)));
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ProcInfo_16, STATE_VARIABLE_ModuleInfo_0_51, &InitialAuxInstMap_28);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_15, &TVarSet_29);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_16, &VarTypes_30);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_15, &ClassContext_31);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_16, &RttiVarMaps_32);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_16, &VarSet_33);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_16, &InstVarSet_34);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_15, &Markers_35);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_15, &OrigOrigin_36);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_16, &HasParallelConj_37);
    hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo_15, &VarNameRemap_38);
    PredModule_39 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_15);
    PredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_15);
    PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_15);
    Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_27);
    mercury__term__context_line_2_p_0(Context_42, &Line_43);
    parse_tree__prog_util__make_pred_name_with_context_7_p_0(PredModule_39, (MR_String) "untupling", PredOrFunc_41, PredName_40, Line_43, Counter_17, &AuxPredSymName0_44);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_14, &ProcNo_45);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_7[0], ProcNo_45, &Var_62);
    Suffix_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_62);
    mdbcomp__sym_name__add_sym_name_suffix_3_p_0(AuxPredSymName0_44, Suffix_46, &AuxPredSymName_47);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (ProcNo_45));
    }
    {
      Origin_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Origin_48, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(2), Origin_48, 1) = ((MR_Box) (OrigOrigin_36));
      MR_hl_field(MR_mktag(2), Origin_48, 2) = ((MR_Box) (PredId_13));
    }
    hlds__hlds_pred__define_new_pred_20_p_0(Origin_48, Goal_25, CallAux_20, AuxHeadVars_24, &_ExtraArgs_49, InitialAuxInstMap_28, AuxPredSymName_47, TVarSet_29, VarTypes_30, ClassContext_31, RttiVarMaps_32, VarSet_33, InstVarSet_34, Markers_35, (MR_Integer) 1, HasParallelConj_37, VarNameRemap_38, STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_ModuleInfo_52, &AuxPredProcId_50);
    *AuxPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), AuxPredProcId_50, (MR_Integer) 0)));
    *AuxProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), AuxPredProcId_50, (MR_Integer) 1)));
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(*STATE_VARIABLE_ModuleInfo_52, *AuxPredId_18, *AuxProcId_19, AuxPredInfo_21, AuxProcInfo_22);
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
  MR_Word HeadVars0_13,
  MR_Word ArgModes0_14,
  MR_Word * HeadVars_15,
  MR_Word * ArgModes_16,
  MR_Word Goal0_17,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29,
  MR_Word STATE_VARIABLE_VarTypes_0_30,
  MR_Word * STATE_VARIABLE_VarTypes_31,
  MR_Word TypeTable_22,
  MR_Word * UntupleMap_23)
{
  {
    MR_Word TypeInfo_39_39;
    MR_Word GoalExpr_18;
    MR_Word GoalInfo_19;
    MR_Word ListOfHeadVars_24;
    MR_Word ListOfArgModes_25;
    MR_Word GoalInfo1_26;
    MR_Word Context_27;
    MR_Word Var_32;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;

    transform_hlds__untupling__expand_args_in_proc_3_12_p_0(HeadVars0_13, ArgModes0_14, &ListOfHeadVars_24, &ListOfArgModes_25, Goal0_17, &Var_32, STATE_VARIABLE_VarSet_0_28, STATE_VARIABLE_VarSet_29, STATE_VARIABLE_VarTypes_0_30, STATE_VARIABLE_VarTypes_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TypeTable_22);
    GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0)));
    GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 0)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 1)));
    Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(Var_36);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_27, GoalInfo1_26, &GoalInfo_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_19));
    }
    TypeInfo_39_39 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
    mercury__list__condense_2_p_0(TypeInfo_39_39, ListOfHeadVars_24, HeadVars_15);
    mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, ListOfArgModes_25, ArgModes_16);
    Var_37 = mercury__map__init_0_f_0(TypeInfo_39_39, (MR_Word) &transform_hlds__untupling_scalar_common_2[1]);
    transform_hlds__untupling__build_untuple_map_4_p_0(HeadVars0_13, ListOfHeadVars_24, Var_37, UntupleMap_23);
  }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__4_4 = HeadVar__3_3;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word NewVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        MR_Word NewVarss_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word TypeInfo_38_38;
        MR_Word Var_29;
        MR_Word Var_35;

        succeeded = ((MR_tag((MR_Word) NewVars_24)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), NewVars_24, (MR_Integer) 0)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), NewVars_24, (MR_Integer) 1)));
          TypeInfo_38_38 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (Var_37)), ((MR_Box) (Var_35)));
          if (succeeded)
            succeeded = (Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word next_value_of_HeadVar__1_1 = Var_36;
          MR_Word next_value_of_HeadVar__2_2 = NewVarss_25;

          // direct tailcall eliminated
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

          mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], (MR_Word) &transform_hlds__untupling_scalar_common_2[1], ((MR_Box) (Var_37)), ((MR_Box) (NewVars_24)), HeadVar__3_3, &STATE_VARIABLE_UntupleMap_31_31);
          // direct tailcall eliminated
          next_value_of_HeadVar__1_1 = Var_36;
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
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
  MR_Word HeadVar0_13,
  MR_Word ArgMode0_14,
  MR_Word * HeadVars_15,
  MR_Word * ArgModes_16,
  MR_Word STATE_VARIABLE_Goal_0_28,
  MR_Word * STATE_VARIABLE_Goal_29,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31,
  MR_Word STATE_VARIABLE_VarTypes_0_32,
  MR_Word * STATE_VARIABLE_VarTypes_33,
  MR_Word ContainerTypes0_20,
  MR_Word TypeTable_21)
{
  {
    MR_Word MaybeHeadVarsAndArgModes_22;
    MR_Word ContainerTypes_23;
    MR_Word STATE_VARIABLE_Goal_34_34;
    MR_Word STATE_VARIABLE_VarSet_35_35;
    MR_Word STATE_VARIABLE_VarTypes_36_36;

    transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(HeadVar0_13, ArgMode0_14, &MaybeHeadVarsAndArgModes_22, STATE_VARIABLE_Goal_0_28, &STATE_VARIABLE_Goal_34_34, STATE_VARIABLE_VarSet_0_30, &STATE_VARIABLE_VarSet_35_35, STATE_VARIABLE_VarTypes_0_32, &STATE_VARIABLE_VarTypes_36_36, ContainerTypes0_20, &ContainerTypes_23, TypeTable_21);
    if ((MaybeHeadVarsAndArgModes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVars_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar0_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ArgModes_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgMode0_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      *STATE_VARIABLE_Goal_29 = STATE_VARIABLE_Goal_34_34;
      *STATE_VARIABLE_VarSet_31 = STATE_VARIABLE_VarSet_35_35;
      *STATE_VARIABLE_VarTypes_33 = STATE_VARIABLE_VarTypes_36_36;
    }
    else
    {
      MR_Word HeadVars1_24;
      MR_Word ArgModes1_25;
      MR_Word ListOfHeadVars_26;
      MR_Word ListOfArgModes_27;
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeHeadVarsAndArgModes_22, (MR_Integer) 0)));

      HeadVars1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0)));
      ArgModes1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1)));
      transform_hlds__untupling__expand_args_in_proc_3_12_p_0(HeadVars1_24, ArgModes1_25, &ListOfHeadVars_26, &ListOfArgModes_27, STATE_VARIABLE_Goal_34_34, STATE_VARIABLE_Goal_29, STATE_VARIABLE_VarSet_35_35, STATE_VARIABLE_VarSet_31, STATE_VARIABLE_VarTypes_36_36, STATE_VARIABLE_VarTypes_33, ContainerTypes_23, TypeTable_21);
      *HeadVars_15 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], ListOfHeadVars_26);
      *ArgModes_16 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, ListOfArgModes_27);
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word ContainerTypes_11,
  MR_Word TypeTable_12)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__10_10 = HeadVar__9_9;
      *HeadVar__8_8 = HeadVar__7_7;
      *HeadVar__6_6 = HeadVar__5_5;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ArgMode0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgModes0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word HeadVar_62;
      MR_Word HeadVars_63;
      MR_Word ArgMode_64;
      MR_Word ArgModes_65;
      MR_Word STATE_VARIABLE_Goal_77_77;
      MR_Word STATE_VARIABLE_VarSet_78_78;
      MR_Word STATE_VARIABLE_VarTypes_79_79;

      transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(Var_84, ArgMode0_60, &HeadVar_62, &ArgMode_64, HeadVar__5_5, &STATE_VARIABLE_Goal_77_77, HeadVar__7_7, &STATE_VARIABLE_VarSet_78_78, HeadVar__9_9, &STATE_VARIABLE_VarTypes_79_79, ContainerTypes_11, TypeTable_12);
      transform_hlds__untupling__expand_args_in_proc_3_12_p_0(Var_83, ArgModes0_61, &HeadVars_63, &ArgModes_65, STATE_VARIABLE_Goal_77_77, HeadVar__6_6, STATE_VARIABLE_VarSet_78_78, HeadVar__8_8, STATE_VARIABLE_VarTypes_79_79, HeadVar__10_10, ContainerTypes_11, TypeTable_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_62));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVars_63));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgMode_64));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgModes_65));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
  MR_Word HeadVar0_13,
  MR_Word ArgMode0_14,
  MR_Word * MaybeHeadVarsAndArgModes_15,
  MR_Word STATE_VARIABLE_Goal_0_30,
  MR_Word * STATE_VARIABLE_Goal_31,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33,
  MR_Word STATE_VARIABLE_VarTypes_0_34,
  MR_Word * STATE_VARIABLE_VarTypes_35,
  MR_Word ContainerTypes0_19,
  MR_Word * ContainerTypes_20,
  MR_Word TypeTable_21)
{
  {
    MR_bool succeeded;
    MR_Word Type_22;
    MR_Word Expansion_23;

    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_34, HeadVar0_13, &Type_22);
    transform_hlds__untupling__expand_argument_5_p_0(ArgMode0_14, Type_22, ContainerTypes0_19, TypeTable_21, &Expansion_23);
    if ((Expansion_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeHeadVarsAndArgModes_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ContainerTypes_20 = ContainerTypes0_19;
      *STATE_VARIABLE_Goal_31 = STATE_VARIABLE_Goal_0_30;
      *STATE_VARIABLE_VarSet_33 = STATE_VARIABLE_VarSet_0_32;
      *STATE_VARIABLE_VarTypes_35 = STATE_VARIABLE_VarTypes_0_34;
    }
    else
    {
      MR_Word ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Expansion_23, (MR_Integer) 0)));
      MR_Word NewTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Expansion_23, (MR_Integer) 1)));
      MR_String ParentName_26;
      MR_Word NewHeadVars_27;
      MR_Word NewArgModes_28;
      MR_Integer Var_39;
      MR_Word Var_40;
      MR_Word Var_50;

      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, STATE_VARIABLE_VarSet_0_32, HeadVar0_13, &ParentName_26);
      transform_hlds__untupling__create_untuple_vars_8_p_0(ParentName_26, (MR_Integer) 0, NewTypes_25, &NewHeadVars_27, STATE_VARIABLE_VarSet_0_32, STATE_VARIABLE_VarSet_33, STATE_VARIABLE_VarTypes_0_34, STATE_VARIABLE_VarTypes_35);
      Var_39 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], NewHeadVars_27);
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, Var_39, ((MR_Box) (ArgMode0_14)), &NewArgModes_28);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (NewHeadVars_27));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (NewArgModes_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeHeadVarsAndArgModes_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
      }
      Var_50 = parse_tree__prog_mode__in_mode_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode0_14, Var_50);
      if (succeeded)
      {
        MR_Word UnifGoal_29;
        MR_Word GoalListA_57;
        MR_Word GoalListB_58;
        MR_Word GoalList_59;
        MR_Word Determinism_60;
        MR_Word GoalInfo0_61;
        MR_Word GoalInfo_62;
        MR_Word Var_63;

        hlds__make_goal__construct_functor_4_p_0(HeadVar0_13, ConsId_24, NewHeadVars_27, &UnifGoal_29);
        hlds__hlds_goal__goal_to_conj_list_2_p_0(UnifGoal_29, &GoalListA_57);
        hlds__hlds_goal__goal_to_conj_list_2_p_0(STATE_VARIABLE_Goal_0_30, &GoalListB_58);
        mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, GoalListA_57, GoalListB_58, &GoalList_59);
        hlds__hlds_goal__goal_list_determinism_2_p_0(GoalList_59, &Determinism_60);
        hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_61);
        hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_60, GoalInfo0_61, &GoalInfo_62);
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_63, 2) = ((MR_Box) (GoalList_59));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Goal_31 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_62));
        }
      }
      else
      {
        MR_Word Var_51;

        Var_51 = parse_tree__prog_mode__out_mode_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode0_14, Var_51);
        if (succeeded)
        {
          MR_Word UnifGoal_45;
          MR_Word GoalListA_69;
          MR_Word GoalListB_70;
          MR_Word GoalList_71;
          MR_Word Determinism_72;
          MR_Word GoalInfo0_73;
          MR_Word GoalInfo_74;
          MR_Word Var_75;

          hlds__make_goal__deconstruct_functor_4_p_0(HeadVar0_13, ConsId_24, NewHeadVars_27, &UnifGoal_45);
          hlds__hlds_goal__goal_to_conj_list_2_p_0(STATE_VARIABLE_Goal_0_30, &GoalListA_69);
          hlds__hlds_goal__goal_to_conj_list_2_p_0(UnifGoal_45, &GoalListB_70);
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, GoalListA_69, GoalListB_70, &GoalList_71);
          hlds__hlds_goal__goal_list_determinism_2_p_0(GoalList_71, &Determinism_72);
          hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_73);
          hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_72, GoalInfo0_73, &GoalInfo_74);
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_75, 2) = ((MR_Box) (GoalList_71));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Goal_31 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_74));
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.untupling.expand_one_arg_in_proc_2\'/12", (MR_String) "unsupported mode");
            return;
          }
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ContainerTypes_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ContainerTypes0_19));
      }
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_29;

    conv0_LambdaHeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__780__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_29));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
  MR_Word ArgMode_6,
  MR_Word ArgType_7,
  MR_Word ContainerTypes_8,
  MR_Word TypeTable_9,
  MR_Word * Expansion_10)
{
  {
    MR_bool succeeded;

    {
      MR_Word Var_11;

      Var_11 = parse_tree__prog_mode__in_mode_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode_6, Var_11);
    }
    if (!(succeeded))
    {
      MR_Word Var_12;

      Var_12 = parse_tree__prog_mode__out_mode_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgMode_6, Var_12);
    }
    if (succeeded)
    {
      MR_Word TypeArgs_20;
      MR_Word TypeCtor_19;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ArgType_7, &TypeCtor_19, &TypeArgs_20);
      if (succeeded)
        succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_19);
      if (succeeded)
      {
        MR_Integer Arity_21;
        MR_Word ConsId_22;

        Arity_21 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, TypeArgs_20);
        {
          ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ConsId_22, 1) = ((MR_Box) (Arity_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Expansion_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeArgs_20));
        }
      }
      else
      {
        MR_Word SingleCtorName_26;
        MR_Word SingleCtorArgs_27;
        MR_Word TypeCtor_43;
        MR_Word TypeInfo_59_69;
        MR_Word TypeInfo_60_70;
        MR_Word TypeDefn_23;
        MR_Word TypeBody_24;
        MR_Word SingleCtor_25;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Integer Var_51;
        MR_Word Var_52;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word TypeCtorInfo_54_64;

        succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ArgType_7, &TypeCtor_43, &Var_67);
        if (succeeded)
        {
          TypeInfo_59_69 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_69, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (Var_67)));
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_43, &TypeDefn_23);
            if (succeeded)
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_23, &Var_68);
              TypeInfo_60_70 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_70, ((MR_Box) (Var_33)), ((MR_Box) (Var_68)));
              if (succeeded)
              {
                hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_23, &TypeBody_24);
                succeeded = ((MR_tag((MR_Word) TypeBody_24)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 0)));
                  Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 1)));
                  Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 2)));
                  Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 3)));
                  succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    SingleCtor_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0)));
                    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1)));
                    succeeded = (Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_25, (MR_Integer) 0)));
                      SingleCtorName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_25, (MR_Integer) 1)));
                      SingleCtorArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_25, (MR_Integer) 2)));
                      Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), SingleCtor_25, (MR_Integer) 3)));
                      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_25, (MR_Integer) 4)));
                      succeeded = (Var_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) SingleCtorArgs_27)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), SingleCtorArgs_27, (MR_Integer) 0)));
                          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), SingleCtorArgs_27, (MR_Integer) 1)));
                          TypeCtorInfo_54_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_54_64, ((MR_Box) (ArgType_7)), ContainerTypes_8);
                          succeeded = !(succeeded);
                        }
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
          MR_Word TypeCtorInfo_55_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
          MR_Word ExpandedTypes_30;
          MR_Integer Arity_41;
          MR_Word ConsId_42;

          Arity_41 = mercury__list__length_1_f_0(TypeCtorInfo_55_65, SingleCtorArgs_27);
          {
            ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ConsId_42, 1) = ((MR_Box) (SingleCtorName_26));
            MR_hl_field(MR_mktag(3), ConsId_42, 2) = ((MR_Box) (Arity_41));
            MR_hl_field(MR_mktag(3), ConsId_42, 3) = ((MR_Box) (TypeCtor_43));
          }
          ExpandedTypes_30 = mercury__list__map_2_f_0(TypeCtorInfo_55_65, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[4], SingleCtorArgs_27);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Expansion_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_42));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ExpandedTypes_30));
          }
        }
        else
          *Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
    else
      *Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
  MR_String ParentName_1,
  MR_Integer Num_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_VarTypes_0_7,
  MR_Word * STATE_VARIABLE_VarTypes_8)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_VarTypes_8 = STATE_VARIABLE_VarTypes_0_7;
    *STATE_VARIABLE_VarSet_6 = STATE_VARIABLE_VarSet_0_5;
  }
  else
  {
    MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word NewVar_21;
    MR_Word NewVars_22;
    MR_String Name_25;
    MR_Word STATE_VARIABLE_VarSet_36_36;
    MR_Word STATE_VARIABLE_VarTypes_37_37;
    MR_Integer Var_38;
    MR_String Var_43;
    MR_String Var_51;
    MR_String Var_52;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_7[0], Num_2, &Var_43);
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_43);
    Var_52 = mercury__string__f_43_43_2_f_0(ParentName_1, Var_51);
    Name_25 = mercury__string__f_43_43_2_f_0((MR_String) "Untupled_", Var_52);
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Name_25, &NewVar_21, STATE_VARIABLE_VarSet_0_5, &STATE_VARIABLE_VarSet_36_36);
    hlds__vartypes__add_var_type_4_p_0(NewVar_21, Type_19, STATE_VARIABLE_VarTypes_0_7, &STATE_VARIABLE_VarTypes_37_37);
    Var_38 = (MR_Integer) ((MR_Unsigned) Num_2 + (MR_Unsigned) (MR_Integer) 1);
    transform_hlds__untupling__create_untuple_vars_8_p_0(ParentName_1, Var_38, Types_20, &NewVars_22, STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_VarSet_6, STATE_VARIABLE_VarTypes_37_37, STATE_VARIABLE_VarTypes_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NewVar_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NewVars_22));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_36;
    MR_Word conv1_STATE_VARIABLE_TransformMap_38;
    MR_Word conv0_STATE_VARIABLE_Counter_40;

    transform_hlds__untupling__expand_args_in_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_ModuleInfo_36, ((MR_Word) wrapper_arg_4), &conv1_STATE_VARIABLE_TransformMap_38, ((MR_Word) wrapper_arg_6), &conv0_STATE_VARIABLE_Counter_40);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_36));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_TransformMap_38));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Counter_40));
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21,
  MR_Word STATE_VARIABLE_TransformMap_0_22,
  MR_Word * STATE_VARIABLE_TransformMap_23,
  MR_Word STATE_VARIABLE_Counter_0_24,
  MR_Word * STATE_VARIABLE_Counter_25)
{
  {
    MR_bool succeeded;
    MR_Word TypeTable_12;
    MR_Word PredInfo_13;
    MR_Word TypeCtorInfo_38_38;
    MR_Word TypeInfo_56_56;
    MR_Word TypeInfo_57_57;
    MR_Word PredStatus_14;
    MR_Word TypeVarSet_16;
    MR_Word ExistQVars_17;
    MR_Word ArgTypes_18;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_15;

    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &TypeTable_12);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, PredId_8, &PredInfo_13);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_13, &PredStatus_14);
    Var_26 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_14);
    succeeded = (Var_26 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_13, &Var_50);
      succeeded = hlds__hlds_pred____Unify____goal_type_0_0(Var_27, Var_50);
      if (succeeded)
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_13, &Var_51);
        TypeInfo_56_56 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (Var_28)), ((MR_Box) (Var_51)));
        if (succeeded)
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(PredInfo_13, &Var_52);
          TypeInfo_57_57 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (Var_29)), ((MR_Box) (Var_52)));
          if (succeeded)
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            Var_30 = (MR_Word) &transform_hlds__untupling_scalar_common_2[5];
            hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_13, &Var_53);
            succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(Var_30, Var_53);
            if (succeeded)
            {
              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Var_33, 1) = NULL;
              }
              hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_13, &Var_54);
              succeeded = transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(Var_33, Var_54);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_13, &TypeVarSet_16, &ExistQVars_17, &ArgTypes_18);
                TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
                succeeded = mercury__varset__is_empty_1_p_0(TypeCtorInfo_38_38, TypeVarSet_16);
                if (succeeded)
                {
                  succeeded = (ExistQVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (succeeded)
                    succeeded = transform_hlds__untupling__at_least_one_expandable_type_2_p_0(ArgTypes_18, TypeTable_12);
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ProcIds_19;
      MR_Word Var_34;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_21;
      MR_Box conv4_STATE_VARIABLE_TransformMap_23;
      MR_Box conv3_STATE_VARIABLE_Counter_25;

      ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_13);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (transform_hlds__untupling__expand_args_in_pred_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (PredId_8));
      }
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, Var_34, ProcIds_19, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_20)), &conv5_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (STATE_VARIABLE_TransformMap_0_22)), &conv4_STATE_VARIABLE_TransformMap_23, ((MR_Box) (STATE_VARIABLE_Counter_0_24)), &conv3_STATE_VARIABLE_Counter_25);
      *STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) conv5_STATE_VARIABLE_ModuleInfo_21);
      *STATE_VARIABLE_TransformMap_23 = ((MR_Word) conv4_STATE_VARIABLE_TransformMap_23);
      *STATE_VARIABLE_Counter_25 = ((MR_Word) conv3_STATE_VARIABLE_Counter_25);
    }
    else
    {
      *STATE_VARIABLE_Counter_25 = STATE_VARIABLE_Counter_0_24;
      *STATE_VARIABLE_TransformMap_23 = STATE_VARIABLE_TransformMap_0_22;
      *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
    MR_Word ArgX1_45;

    if (succeeded)
    {
      ArgX1_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
      (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)) = ((MR_Box) (ArgX1_45));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_29;

    conv0_LambdaHeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__780__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_29));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeTable_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Type_3;
    MR_Word Types_4;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      {
        MR_Word Var_10;
        MR_Word TypeArgs_16;
        MR_Word TypeCtor_15;
        MR_Word ArgX1_67;
        MR_Word ArgX2_69;

        succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_3, &TypeCtor_15, &TypeArgs_16);
        if (succeeded)
          succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_15);
        if (succeeded)
        {
          MR_Integer Arity_17;
          MR_Word ConsId_18;

          Arity_17 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, TypeArgs_16);
          {
            ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Arity_17));
          }
          {
            Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (ConsId_18));
            MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (TypeArgs_16));
          }
        }
        else
        {
          MR_Word SingleCtorName_22;
          MR_Word SingleCtorArgs_23;
          MR_Word TypeCtor_39;
          MR_Word TypeInfo_59_65;
          MR_Word TypeInfo_60_66;
          MR_Word TypeDefn_19;
          MR_Word TypeBody_20;
          MR_Word SingleCtor_21;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Integer Var_47;
          MR_Word Var_48;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word TypeCtorInfo_54_60;

          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_3, &TypeCtor_39, &Var_63);
          if (succeeded)
          {
            TypeInfo_59_65 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_65, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (Var_63)));
            if (succeeded)
            {
              succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_5, TypeCtor_39, &TypeDefn_19);
              if (succeeded)
              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_19, &Var_64);
                TypeInfo_60_66 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_66, ((MR_Box) (Var_29)), ((MR_Box) (Var_64)));
                if (succeeded)
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_19, &TypeBody_20);
                  succeeded = ((MR_tag((MR_Word) TypeBody_20)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_20, (MR_Integer) 0)));
                    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_20, (MR_Integer) 1)));
                    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_20, (MR_Integer) 2)));
                    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_20, (MR_Integer) 3)));
                    succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      SingleCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0)));
                      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1)));
                      succeeded = (Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_21, (MR_Integer) 0)));
                        SingleCtorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_21, (MR_Integer) 1)));
                        SingleCtorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_21, (MR_Integer) 2)));
                        Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), SingleCtor_21, (MR_Integer) 3)));
                        Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_21, (MR_Integer) 4)));
                        succeeded = (Var_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) SingleCtorArgs_23)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), SingleCtorArgs_23, (MR_Integer) 0)));
                            Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), SingleCtorArgs_23, (MR_Integer) 1)));
                            TypeCtorInfo_54_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                            succeeded = mercury__list__member_2_p_0(TypeCtorInfo_54_60, ((MR_Box) (Type_3)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                            succeeded = !(succeeded);
                          }
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
            MR_Word TypeCtorInfo_55_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
            MR_Word ExpandedTypes_26;
            MR_Integer Arity_37;
            MR_Word ConsId_38;

            Arity_37 = mercury__list__length_1_f_0(TypeCtorInfo_55_61, SingleCtorArgs_23);
            {
              ConsId_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConsId_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ConsId_38, 1) = ((MR_Box) (SingleCtorName_22));
              MR_hl_field(MR_mktag(3), ConsId_38, 2) = ((MR_Box) (Arity_37));
              MR_hl_field(MR_mktag(3), ConsId_38, 3) = ((MR_Box) (TypeCtor_39));
            }
            ExpandedTypes_26 = mercury__list__map_2_f_0(TypeCtorInfo_55_61, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[3], SingleCtorArgs_23);
            {
              Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (ConsId_38));
              MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (ExpandedTypes_26));
            }
          }
          else
            Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ArgX1_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0)));
          ArgX2_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1)));
        }
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Types_4;

        // direct tailcall eliminated
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ModuleInfo_11;

    transform_hlds__untupling__fix_calls_in_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_ModuleInfo_11);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_11));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_21;
    MR_Word conv1_STATE_VARIABLE_TransformMap_23;
    MR_Word conv0_STATE_VARIABLE_Counter_25;

    transform_hlds__untupling__expand_args_in_pred_7_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_ModuleInfo_21, ((MR_Word) wrapper_arg_4), &conv1_STATE_VARIABLE_TransformMap_23, ((MR_Word) wrapper_arg_6), &conv0_STATE_VARIABLE_Counter_25);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_21));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_TransformMap_23));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Counter_25));
  }
}

void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word TransformMap_7;
    MR_Word STATE_VARIABLE_ModuleInfo_12_12;
    MR_Word PredIds_18;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word PredIds_42;
    MR_Word Var_43;
    MR_Word Var_19;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_12_12;
    MR_Box conv4_TransformMap_7;
    MR_Box conv3_Var_19;
    MR_Box conv7_STATE_VARIABLE_ModuleInfo_9;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredIds_18);
    Var_22 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0);
    Var_23 = mercury__counter__init_1_f_0((MR_Integer) 0);
    mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[2], PredIds_18, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv5_STATE_VARIABLE_ModuleInfo_12_12, ((MR_Box) (Var_22)), &conv4_TransformMap_7, ((MR_Box) (Var_23)), &conv3_Var_19);
    STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) conv5_STATE_VARIABLE_ModuleInfo_12_12);
    TransformMap_7 = ((MR_Word) conv4_TransformMap_7);
    Var_19 = ((MR_Word) conv3_Var_19);
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_12_12, &PredIds_42);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (transform_hlds__untupling__untuple_arguments_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (TransformMap_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_43, PredIds_42, ((MR_Box) (STATE_VARIABLE_ModuleInfo_12_12)), &conv7_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) conv7_STATE_VARIABLE_ModuleInfo_9);
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__untupling____Unify____expansion_result_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__untupling____Compare____expansion_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__untupling____Unify____transform_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__untupling____Compare____transform_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__untupling____Unify____transformed_proc_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__untupling____Compare____transformed_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__untupling____Unify____untuple_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__untupling____Compare____untuple_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
