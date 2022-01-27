/*
** Automatically generated from `untupling.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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


/* :- module transform_hlds.untupling. */
/* :- implementation. */

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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2);

static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box transform_hlds__untupling__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2);

static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box transform_hlds__untupling__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2);

static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box transform_hlds__untupling__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2);

static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box transform_hlds__untupling__wrapper_arg_3);

static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__772__1_1_f_0(
  MR_Word transform_hlds__untupling__LambdaHeadVar__1_28);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2);

static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2);

static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2);

static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2);

static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1);

static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
  MR_Word transform_hlds__untupling__ArgMode_6,
  MR_Word transform_hlds__untupling__ArgType_7,
  MR_Word transform_hlds__untupling__ContainerTypes_8,
  MR_Word transform_hlds__untupling__TypeTable_9,
  MR_Word * transform_hlds__untupling__Expansion_10);

static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
  MR_Word * transform_hlds__untupling__HeadVar__5_5,
  MR_Word transform_hlds__untupling__HeadVar__6_6,
  MR_Word * transform_hlds__untupling__HeadVar__7_7,
  MR_Word transform_hlds__untupling__HeadVar__8_8,
  MR_Word * transform_hlds__untupling__HeadVar__9_9,
  MR_Word transform_hlds__untupling__ContainerTypes0_10,
  MR_Word transform_hlds__untupling__TypeTable_11);

static void MR_CALL 
transform_hlds__untupling__expand_call_args_10_p_0(
  MR_Word transform_hlds__untupling__Args0_11,
  MR_Word transform_hlds__untupling__ArgModes0_12,
  MR_Word * transform_hlds__untupling__Args_13,
  MR_Word * transform_hlds__untupling__EnterUnifs_14,
  MR_Word * transform_hlds__untupling__ExitUnifs_15,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_20,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_22,
  MR_Word transform_hlds__untupling__TypeTable_18);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
  MR_Word transform_hlds__untupling__TransformMap_7,
  MR_Word transform_hlds__untupling__ModuleInfo_8);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
  MR_Word transform_hlds__untupling__TransformMap_7,
  MR_Word transform_hlds__untupling__ModuleInfo_8);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
  MR_Word transform_hlds__untupling__TransformMap_7,
  MR_Word transform_hlds__untupling__ModuleInfo_8);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
  MR_Word transform_hlds__untupling__Goal0_9,
  MR_Word * transform_hlds__untupling__Goal_10,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_75,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_77,
  MR_Word transform_hlds__untupling__TransformMap_13,
  MR_Word transform_hlds__untupling__ModuleInfo_14);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
  MR_Word transform_hlds__untupling__TransformMap_6,
  MR_Word transform_hlds__untupling__PredId_7,
  MR_Integer transform_hlds__untupling__ProcId_8,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box * transform_hlds__untupling__wrapper_arg_3);

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
  MR_Word transform_hlds__untupling__TransformMap_5,
  MR_Word transform_hlds__untupling__PredId_6,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11);

static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
  MR_Word transform_hlds__untupling__PredId_13,
  MR_Integer transform_hlds__untupling__ProcId_14,
  MR_Word transform_hlds__untupling__PredInfo_15,
  MR_Word transform_hlds__untupling__ProcInfo_16,
  MR_Integer transform_hlds__untupling__Counter_17,
  MR_Word * transform_hlds__untupling__AuxPredId_18,
  MR_Integer * transform_hlds__untupling__AuxProcId_19,
  MR_Word * transform_hlds__untupling__CallAux_20,
  MR_Word * transform_hlds__untupling__AuxPredInfo_21,
  MR_Word * transform_hlds__untupling__AuxProcInfo_22,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52);

static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3,
  MR_Word * transform_hlds__untupling__HeadVar__4_4);

static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
  MR_String transform_hlds__untupling__ParentName_1,
  MR_Integer transform_hlds__untupling__Num_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3,
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_6,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_8);

static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
  MR_Word transform_hlds__untupling__HeadVar0_13,
  MR_Word transform_hlds__untupling__ArgMode0_14,
  MR_Word * transform_hlds__untupling__MaybeHeadVarsAndArgModes_15,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_30,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_31,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_33,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_35,
  MR_Word transform_hlds__untupling__ContainerTypes0_19,
  MR_Word * transform_hlds__untupling__ContainerTypes_20,
  MR_Word transform_hlds__untupling__TypeTable_21);

static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
  MR_Word transform_hlds__untupling__HeadVar0_13,
  MR_Word transform_hlds__untupling__ArgMode0_14,
  MR_Word * transform_hlds__untupling__HeadVars_15,
  MR_Word * transform_hlds__untupling__ArgModes_16,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_28,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_29,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_31,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_33,
  MR_Word transform_hlds__untupling__ContainerTypes0_20,
  MR_Word transform_hlds__untupling__TypeTable_21);

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
  MR_Word transform_hlds__untupling__HeadVar__5_5,
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
  MR_Word transform_hlds__untupling__HeadVar__7_7,
  MR_Word * transform_hlds__untupling__HeadVar__8_8,
  MR_Word transform_hlds__untupling__HeadVar__9_9,
  MR_Word * transform_hlds__untupling__HeadVar__10_10,
  MR_Word transform_hlds__untupling__ContainerTypes_11,
  MR_Word transform_hlds__untupling__TypeTable_12);

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
  MR_Word transform_hlds__untupling__HeadVars0_13,
  MR_Word transform_hlds__untupling__ArgModes0_14,
  MR_Word * transform_hlds__untupling__HeadVars_15,
  MR_Word * transform_hlds__untupling__ArgModes_16,
  MR_Word transform_hlds__untupling__Goal0_17,
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_29,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_31,
  MR_Word transform_hlds__untupling__TypeTable_22,
  MR_Word * transform_hlds__untupling__UntupleMap_23);

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
  MR_Word transform_hlds__untupling__PredId_9,
  MR_Integer transform_hlds__untupling__ProcId_10,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_38,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_39,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_40);

static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__TypeTable_5);

static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
  MR_Box transform_hlds__untupling__wrapper_arg_4,
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
  MR_Box transform_hlds__untupling__wrapper_arg_6,
  MR_Box * transform_hlds__untupling__wrapper_arg_7);

static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
  MR_Word transform_hlds__untupling__PredId_8,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_23,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_24,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_25);

static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box * transform_hlds__untupling__wrapper_arg_3);

static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
  MR_Box transform_hlds__untupling__wrapper_arg_4,
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
  MR_Box transform_hlds__untupling__wrapper_arg_6,
  MR_Box * transform_hlds__untupling__wrapper_arg_7);


static /* final */ const MR_Box transform_hlds__untupling_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_2[6][2];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_3[1][10];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_4[1][7];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_5[1][11];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_6[1][5];

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
    ((MR_Box) (&transform_hlds__untupling_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__untupling_scalar_common_6[0])),
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

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_5[1][11] = {
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

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1 = {
  (MR_String) "no_expansion",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    {
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____expansion_result_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
    return transform_hlds__untupling__succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box transform_hlds__untupling__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

    {
      transform_hlds__untupling____Compare____expansion_result_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    {
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____transform_map_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
    return transform_hlds__untupling__succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box transform_hlds__untupling__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

    {
      transform_hlds__untupling____Compare____transform_map_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    {
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____transformed_proc_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
    return transform_hlds__untupling__succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box transform_hlds__untupling__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

    {
      transform_hlds__untupling____Compare____transformed_proc_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    {
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____untuple_map_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
    return transform_hlds__untupling__succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box transform_hlds__untupling__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

    {
      transform_hlds__untupling____Compare____untuple_map_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__772__1_1_f_0(
  MR_Word transform_hlds__untupling__LambdaHeadVar__1_28)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__LambdaHeadVar__2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__LambdaHeadVar__1_28, (MR_Integer) 1)));
    MR_Word transform_hlds__untupling__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__LambdaHeadVar__1_28, (MR_Integer) 0)));
    MR_Word transform_hlds__untupling__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__LambdaHeadVar__1_28, (MR_Integer) 2)));
    MR_Word transform_hlds__untupling__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__LambdaHeadVar__1_28, (MR_Integer) 3)));

    return transform_hlds__untupling__LambdaHeadVar__2_29;
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
    MR_Word transform_hlds__untupling__V_46_46;

    if (transform_hlds__untupling__succeeded)
      {
        transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
        (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)) = ((MR_Box) (transform_hlds__untupling__V_46_46));
        transform_hlds__untupling__succeeded = MR_TRUE;
      }
    return transform_hlds__untupling__succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__Cast_HeadVar1_4 = transform_hlds__untupling__HeadVar__2_2;
    MR_Word transform_hlds__untupling__Cast_HeadVar2_5 = transform_hlds__untupling__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__Cast_HeadVar1_3 = transform_hlds__untupling__HeadVar__1_1;
    MR_Word transform_hlds__untupling__Cast_HeadVar2_4 = transform_hlds__untupling__HeadVar__2_2;

    {
      transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_4)));
    }
    return transform_hlds__untupling__succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Integer transform_hlds__untupling__CastX_9 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;
    MR_Integer transform_hlds__untupling__CastY_10 = (MR_Integer) transform_hlds__untupling__HeadVar__3_3;

    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_9 == transform_hlds__untupling__CastY_10);
    if (transform_hlds__untupling__succeeded)
      *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__untupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__V_8_8;

        {
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__untupling__V_8_8, transform_hlds__untupling__V_4_4, transform_hlds__untupling__V_6_6);
        }
        transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_8_8 == (MR_Integer) 0);
        transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
        if (transform_hlds__untupling__succeeded)
          *transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__V_8_8;
        else
          {
            hlds__hlds_goal____Compare____hlds_goal_0_0(transform_hlds__untupling__HeadVar__1_1, transform_hlds__untupling__V_5_5, transform_hlds__untupling__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Integer transform_hlds__untupling__CastX_7 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
    MR_Integer transform_hlds__untupling__CastY_8 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_7 == transform_hlds__untupling__CastY_8);
    if (transform_hlds__untupling__succeeded)
      transform_hlds__untupling__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__untupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));

        {
          transform_hlds__untupling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__untupling__V_3_3, transform_hlds__untupling__V_5_5);
        }
        if (transform_hlds__untupling__succeeded)
          {
            transform_hlds__untupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__untupling__V_4_4, transform_hlds__untupling__V_6_6);
          }
      }
    return transform_hlds__untupling__succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__Cast_HeadVar1_4 = transform_hlds__untupling__HeadVar__2_2;
    MR_Word transform_hlds__untupling__Cast_HeadVar2_5 = transform_hlds__untupling__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__Cast_HeadVar1_3 = transform_hlds__untupling__HeadVar__1_1;
    MR_Word transform_hlds__untupling__Cast_HeadVar2_4 = transform_hlds__untupling__HeadVar__2_2;

    {
      transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_4)));
    }
    return transform_hlds__untupling__succeeded;
  }
}

static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Integer transform_hlds__untupling__CastX_13 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;
    MR_Integer transform_hlds__untupling__CastY_14 = (MR_Integer) transform_hlds__untupling__HeadVar__3_3;

    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_13 == transform_hlds__untupling__CastY_14);
    if (transform_hlds__untupling__succeeded)
      *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
      else
        *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word transform_hlds__untupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));

        if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__untupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__untupling__V_8_8;

            {
              parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__untupling__V_8_8, transform_hlds__untupling__V_18_18, transform_hlds__untupling__V_6_6);
            }
            transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_8_8 == (MR_Integer) 0);
            transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
            if (transform_hlds__untupling__succeeded)
              *transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__V_8_8;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[2], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__V_17_17)), ((MR_Box) (transform_hlds__untupling__V_7_7)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Integer transform_hlds__untupling__CastX_9 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
    MR_Integer transform_hlds__untupling__CastY_10 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_9 == transform_hlds__untupling__CastY_10);
    if (transform_hlds__untupling__succeeded)
      transform_hlds__untupling__succeeded = MR_TRUE;
    else
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer transform_hlds__untupling__CastX_7 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
        MR_Integer transform_hlds__untupling__CastY_8 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

        transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastY_8 == transform_hlds__untupling__CastX_7);
      }
    else
      {
        MR_Word transform_hlds__untupling__TypeInfo_12_12;
        MR_Word transform_hlds__untupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__V_5_5;
        MR_Word transform_hlds__untupling__V_6_6;

        transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__untupling__succeeded)
          {
            transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
            transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
            {
              transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__untupling__V_3_3, transform_hlds__untupling__V_5_5);
            }
            if (transform_hlds__untupling__succeeded)
              {
                transform_hlds__untupling__TypeInfo_12_12 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
                {
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_12_12, ((MR_Box) (transform_hlds__untupling__V_4_4)), ((MR_Box) (transform_hlds__untupling__V_6_6)));
                }
              }
          }
      }
    return transform_hlds__untupling__succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__untupling__wrapper_arg_2;
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
    MR_Word transform_hlds__untupling__conv0_LambdaHeadVar__2_29;

    {
      transform_hlds__untupling__conv0_LambdaHeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__772__1_1_f_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1));
    }
    transform_hlds__untupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__untupling__conv0_LambdaHeadVar__2_29));
    return transform_hlds__untupling__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
  MR_Word transform_hlds__untupling__ArgMode_6,
  MR_Word transform_hlds__untupling__ArgType_7,
  MR_Word transform_hlds__untupling__ContainerTypes_8,
  MR_Word transform_hlds__untupling__TypeTable_9,
  MR_Word * transform_hlds__untupling__Expansion_10)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    {
      MR_Word transform_hlds__untupling__V_11_11;

      {
        transform_hlds__untupling__V_11_11 = parse_tree__prog_mode__in_mode_0_f_0();
      }
      {
        transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_6, transform_hlds__untupling__V_11_11);
      }
    }
    if (!(transform_hlds__untupling__succeeded))
      {
        MR_Word transform_hlds__untupling__V_12_12;

        {
          transform_hlds__untupling__V_12_12 = parse_tree__prog_mode__out_mode_0_f_0();
        }
        {
          transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_6, transform_hlds__untupling__V_12_12);
        }
      }
    if (transform_hlds__untupling__succeeded)
      {
        MR_Word transform_hlds__untupling__TypeArgs_20;
        MR_Word transform_hlds__untupling__TypeCtor_19;

        {
          transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__ArgType_7, &transform_hlds__untupling__TypeCtor_19, &transform_hlds__untupling__TypeArgs_20);
        }
        if (transform_hlds__untupling__succeeded)
          {
            transform_hlds__untupling__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__untupling__TypeCtor_19);
          }
        if (transform_hlds__untupling__succeeded)
          {
            MR_Integer transform_hlds__untupling__Arity_21;
            MR_Word transform_hlds__untupling__ConsId_22;

            {
              transform_hlds__untupling__Arity_21 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__TypeArgs_20);
            }
            {
              transform_hlds__untupling__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_22, 1) = ((MR_Box) (transform_hlds__untupling__Arity_21));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__untupling__Expansion_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_22));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__TypeArgs_20));
            }
          }
        else
          {
            MR_Word transform_hlds__untupling__SingleCtorName_26;
            MR_Word transform_hlds__untupling__SingleCtorArgs_27;
            MR_Word transform_hlds__untupling__TypeCtor_43;
            MR_Word transform_hlds__untupling__TypeInfo_68_78;
            MR_Word transform_hlds__untupling__TypeInfo_69_79;
            MR_Word transform_hlds__untupling__TypeDefn_23;
            MR_Word transform_hlds__untupling__TypeBody_24;
            MR_Word transform_hlds__untupling__SingleCtor_25;
            MR_Word transform_hlds__untupling__V_33_33;
            MR_Word transform_hlds__untupling__V_34_34;
            MR_Word transform_hlds__untupling__V_35_35;
            MR_Word transform_hlds__untupling__V_36_36;
            MR_Word transform_hlds__untupling__V_76_76;
            MR_Word transform_hlds__untupling__V_77_77;
            MR_Word transform_hlds__untupling__V_46_46;
            MR_Word transform_hlds__untupling__V_47_47;
            MR_Word transform_hlds__untupling__V_48_48;
            MR_Word transform_hlds__untupling__V_49_49;
            MR_Word transform_hlds__untupling__V_50_50;
            MR_Word transform_hlds__untupling__V_51_51;
            MR_Word transform_hlds__untupling__V_52_52;
            MR_Word transform_hlds__untupling__V_53_53;
            MR_Word transform_hlds__untupling__V_54_54;
            MR_Integer transform_hlds__untupling__V_57_57;
            MR_Word transform_hlds__untupling__V_58_58;
            MR_Word transform_hlds__untupling__V_28_28;
            MR_Word transform_hlds__untupling__V_29_29;
            MR_Word transform_hlds__untupling__TypeCtorInfo_63_73;

            {
              transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__ArgType_7, &transform_hlds__untupling__TypeCtor_43, &transform_hlds__untupling__V_76_76);
            }
            if (transform_hlds__untupling__succeeded)
              {
                transform_hlds__untupling__TypeInfo_68_78 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
                {
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_68_78, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__untupling__V_76_76)));
                }
                if (transform_hlds__untupling__succeeded)
                  {
                    {
                      transform_hlds__untupling__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__untupling__TypeTable_9, transform_hlds__untupling__TypeCtor_43, &transform_hlds__untupling__TypeDefn_23);
                    }
                    if (transform_hlds__untupling__succeeded)
                      {
                        transform_hlds__untupling__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        {
                          hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__untupling__TypeDefn_23, &transform_hlds__untupling__V_77_77);
                        }
                        transform_hlds__untupling__TypeInfo_69_79 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
                        {
                          transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_69_79, ((MR_Box) (transform_hlds__untupling__V_33_33)), ((MR_Box) (transform_hlds__untupling__V_77_77)));
                        }
                        if (transform_hlds__untupling__succeeded)
                          {
                            {
                              hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__untupling__TypeDefn_23, &transform_hlds__untupling__TypeBody_24);
                            }
                            transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__TypeBody_24)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__untupling__succeeded)
                              {
                                transform_hlds__untupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 0)));
                                transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 1)));
                                transform_hlds__untupling__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 2)));
                                transform_hlds__untupling__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 3)));
                                transform_hlds__untupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 4)));
                                transform_hlds__untupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 5)));
                                transform_hlds__untupling__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
                                transform_hlds__untupling__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                transform_hlds__untupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 7)));
                                transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_34_34)) == (MR_mktag((MR_Integer) 1)));
                                if (transform_hlds__untupling__succeeded)
                                  {
                                    transform_hlds__untupling__SingleCtor_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_34_34, (MR_Integer) 0)));
                                    transform_hlds__untupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_34_34, (MR_Integer) 1)));
                                    transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (transform_hlds__untupling__succeeded)
                                      {
                                        transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 0)));
                                        transform_hlds__untupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 1)));
                                        transform_hlds__untupling__SingleCtorName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 2)));
                                        transform_hlds__untupling__SingleCtorArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 3)));
                                        transform_hlds__untupling__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 4)));
                                        transform_hlds__untupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 5)));
                                        transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (transform_hlds__untupling__succeeded)
                                          {
                                            transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__SingleCtorArgs_27)) == (MR_mktag((MR_Integer) 1)));
                                            if (transform_hlds__untupling__succeeded)
                                              {
                                                transform_hlds__untupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_27, (MR_Integer) 0)));
                                                transform_hlds__untupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_27, (MR_Integer) 1)));
                                                transform_hlds__untupling__TypeCtorInfo_63_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                                                {
                                                  transform_hlds__untupling__succeeded = mercury__list__member_2_p_0(transform_hlds__untupling__TypeCtorInfo_63_73, ((MR_Box) (transform_hlds__untupling__ArgType_7)), transform_hlds__untupling__ContainerTypes_8);
                                                }
                                                transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
            if (transform_hlds__untupling__succeeded)
              {
                MR_Word transform_hlds__untupling__TypeCtorInfo_64_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
                MR_Word transform_hlds__untupling__ExpandedTypes_30;
                MR_Integer transform_hlds__untupling__Arity_41;
                MR_Word transform_hlds__untupling__ConsId_42;

                {
                  transform_hlds__untupling__Arity_41 = mercury__list__length_1_f_0(transform_hlds__untupling__TypeCtorInfo_64_74, transform_hlds__untupling__SingleCtorArgs_27);
                }
                {
                  transform_hlds__untupling__ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 1) = ((MR_Box) (transform_hlds__untupling__SingleCtorName_26));
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 2) = ((MR_Box) (transform_hlds__untupling__Arity_41));
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 3) = ((MR_Box) (transform_hlds__untupling__TypeCtor_43));
                }
                {
                  transform_hlds__untupling__ExpandedTypes_30 = mercury__list__map_2_f_0(transform_hlds__untupling__TypeCtorInfo_64_74, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[4], transform_hlds__untupling__SingleCtorArgs_27);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__untupling__Expansion_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_42));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ExpandedTypes_30));
                }
              }
            else
              *transform_hlds__untupling__Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
    else
      *transform_hlds__untupling__Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
  MR_Word * transform_hlds__untupling__HeadVar__5_5,
  MR_Word transform_hlds__untupling__HeadVar__6_6,
  MR_Word * transform_hlds__untupling__HeadVar__7_7,
  MR_Word transform_hlds__untupling__HeadVar__8_8,
  MR_Word * transform_hlds__untupling__HeadVar__9_9,
  MR_Word transform_hlds__untupling__ContainerTypes0_10,
  MR_Word transform_hlds__untupling__TypeTable_11)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *transform_hlds__untupling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__untupling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__untupling__HeadVar__9_9 = transform_hlds__untupling__HeadVar__8_8;
          *transform_hlds__untupling__HeadVar__7_7 = transform_hlds__untupling__HeadVar__6_6;
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__untupling__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

        if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__untupling__ArgMode_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__untupling__ArgModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__untupling__Arg0Type_31;
            MR_Word transform_hlds__untupling__Expansion_32;

            {
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__V_107_107, &transform_hlds__untupling__Arg0Type_31);
            }
            {
              transform_hlds__untupling__expand_argument_5_p_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__Arg0Type_31, transform_hlds__untupling__ContainerTypes0_10, transform_hlds__untupling__TypeTable_11, &transform_hlds__untupling__Expansion_32);
            }
            if ((transform_hlds__untupling__Expansion_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word transform_hlds__untupling__Args1_42;

                {
                  transform_hlds__untupling__expand_call_args_10_p_0(transform_hlds__untupling__V_106_106, transform_hlds__untupling__ArgModes_23, &transform_hlds__untupling__Args1_42, transform_hlds__untupling__HeadVar__4_4, transform_hlds__untupling__HeadVar__5_5, transform_hlds__untupling__HeadVar__6_6, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__TypeTable_11);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__untupling__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__V_107_107));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Args1_42));
                }
              }
            else
              {
                MR_Word transform_hlds__untupling__TypeCtorInfo_100_100;
                MR_Word transform_hlds__untupling__ConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_32, (MR_Integer) 0)));
                MR_Word transform_hlds__untupling__Types_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_32, (MR_Integer) 1)));
                MR_Integer transform_hlds__untupling__NumVars_35;
                MR_Word transform_hlds__untupling__ReplacementArgs_36;
                MR_Word transform_hlds__untupling__ReplacementModes_37;
                MR_Word transform_hlds__untupling__ContainerTypes_38;
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49;
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50;
                MR_Word transform_hlds__untupling__V_104_104;

                {
                  transform_hlds__untupling__NumVars_35 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__Types_34);
                }
                {
                  mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__NumVars_35, &transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__HeadVar__6_6, &transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49);
                }
                {
                  hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__Types_34, transform_hlds__untupling__HeadVar__8_8, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50);
                }
                transform_hlds__untupling__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                {
                  mercury__list__duplicate_3_p_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__NumVars_35, ((MR_Box) (transform_hlds__untupling__ArgMode_22)), &transform_hlds__untupling__ReplacementModes_37);
                }
                {
                  transform_hlds__untupling__ContainerTypes_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__untupling__ContainerTypes_38, 0) = ((MR_Box) (transform_hlds__untupling__Arg0Type_31));
                  MR_hl_field(MR_mktag(1), transform_hlds__untupling__ContainerTypes_38, 1) = ((MR_Box) (transform_hlds__untupling__ContainerTypes0_10));
                }
                {
                  transform_hlds__untupling__V_104_104 = parse_tree__prog_mode__in_mode_0_f_0();
                }
                {
                  transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__V_104_104);
                }
                if (transform_hlds__untupling__succeeded)
                  {
                    MR_Word transform_hlds__untupling__Unif_39;
                    MR_Word transform_hlds__untupling__EnterUnifs1_40;
                    MR_Word transform_hlds__untupling__V_51_51;
                    MR_Word transform_hlds__untupling__V_52_52;

                    {
                      hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__untupling__V_107_107, transform_hlds__untupling__ConsId_33, transform_hlds__untupling__ReplacementArgs_36, &transform_hlds__untupling__Unif_39);
                    }
                    {
                      transform_hlds__untupling__V_51_51 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__V_106_106);
                    }
                    {
                      transform_hlds__untupling__V_52_52 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__ReplacementModes_37, transform_hlds__untupling__ArgModes_23);
                    }
                    {
                      transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__V_51_51, transform_hlds__untupling__V_52_52, transform_hlds__untupling__HeadVar__3_3, &transform_hlds__untupling__EnterUnifs1_40, transform_hlds__untupling__HeadVar__5_5, transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__ContainerTypes_38, transform_hlds__untupling__TypeTable_11);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__untupling__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Unif_39));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__EnterUnifs1_40));
                    }
                  }
                else
                  {
                    MR_Word transform_hlds__untupling__V_105_105;

                    {
                      transform_hlds__untupling__V_105_105 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
                    {
                      transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__V_105_105);
                    }
                    if (transform_hlds__untupling__succeeded)
                      {
                        MR_Word transform_hlds__untupling__ExitUnifs1_41;
                        MR_Word transform_hlds__untupling__V_55_55;
                        MR_Word transform_hlds__untupling__V_57_57;
                        MR_Word transform_hlds__untupling__V_58_58;
                        MR_Word transform_hlds__untupling__Unif_64;

                        {
                          hlds__make_goal__construct_functor_4_p_0(transform_hlds__untupling__V_107_107, transform_hlds__untupling__ConsId_33, transform_hlds__untupling__ReplacementArgs_36, &transform_hlds__untupling__Unif_64);
                        }
                        {
                          transform_hlds__untupling__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_55_55, 0) = ((MR_Box) (transform_hlds__untupling__Unif_64));
                          MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          transform_hlds__untupling__V_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__V_106_106);
                        }
                        {
                          transform_hlds__untupling__V_58_58 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__ReplacementModes_37, transform_hlds__untupling__ArgModes_23);
                        }
                        {
                          transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__V_57_57, transform_hlds__untupling__V_58_58, transform_hlds__untupling__HeadVar__3_3, transform_hlds__untupling__HeadVar__4_4, &transform_hlds__untupling__ExitUnifs1_41, transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__ContainerTypes_38, transform_hlds__untupling__TypeTable_11);
                        }
                        {
                          *transform_hlds__untupling__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__ExitUnifs1_41, transform_hlds__untupling__V_55_55);
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "unsupported mode");
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
transform_hlds__untupling__expand_call_args_10_p_0(
  MR_Word transform_hlds__untupling__Args0_11,
  MR_Word transform_hlds__untupling__ArgModes0_12,
  MR_Word * transform_hlds__untupling__Args_13,
  MR_Word * transform_hlds__untupling__EnterUnifs_14,
  MR_Word * transform_hlds__untupling__ExitUnifs_15,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_20,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_22,
  MR_Word transform_hlds__untupling__TypeTable_18)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    {
      transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__Args0_11, transform_hlds__untupling__ArgModes0_12, transform_hlds__untupling__Args_13, transform_hlds__untupling__EnterUnifs_14, transform_hlds__untupling__ExitUnifs_15, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19, transform_hlds__untupling__STATE_VARIABLE_VarSet_20, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21, transform_hlds__untupling__STATE_VARIABLE_VarTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__untupling__TypeTable_18);
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
  MR_Word transform_hlds__untupling__TransformMap_7,
  MR_Word transform_hlds__untupling__ModuleInfo_8)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
      }
    else
      {
        MR_Word transform_hlds__untupling__Case0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__untupling__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__Case_19;
        MR_Word transform_hlds__untupling__Cases_20;
        MR_Word transform_hlds__untupling__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 0)));
        MR_Word transform_hlds__untupling__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 2)));
        MR_Word transform_hlds__untupling__Goal_28;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34;

        {
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_27, &transform_hlds__untupling__Goal_28, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
        {
          transform_hlds__untupling__Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 0) = ((MR_Box) (transform_hlds__untupling__MainConsId_25));
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 1) = ((MR_Box) (transform_hlds__untupling__OtherConsIds_26));
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 2) = ((MR_Box) (transform_hlds__untupling__Goal_28));
        }
        {
          transform_hlds__untupling__fix_calls_in_cases_8_p_0(transform_hlds__untupling__Cases0_18, &transform_hlds__untupling__Cases_20, transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__untupling__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Case_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Cases_20));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
  MR_Word transform_hlds__untupling__TransformMap_7,
  MR_Word transform_hlds__untupling__ModuleInfo_8)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
      }
    else
      {
        MR_Word transform_hlds__untupling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__untupling__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__Goal_19;
        MR_Word transform_hlds__untupling__Goals_20;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30;

        {
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__Goal_19, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
        {
          transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_18, &transform_hlds__untupling__Goals_20, transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__untupling__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Goal_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Goals_20));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
  MR_Word transform_hlds__untupling__TransformMap_7,
  MR_Word transform_hlds__untupling__ModuleInfo_8)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
      }
    else
      {
        MR_Word transform_hlds__untupling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__untupling__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__Goal1_24;
        MR_Word transform_hlds__untupling__Goals1_25;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33;
        MR_Word transform_hlds__untupling__ConjGoals_26;
        MR_Word transform_hlds__untupling__V_36_36;
        MR_Word transform_hlds__untupling__V_37_37;
        MR_Word transform_hlds__untupling__V_27_27;

        {
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__Goal1_24, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
        {
          transform_hlds__untupling__fix_calls_in_conj_8_p_0(transform_hlds__untupling__Goals0_18, &transform_hlds__untupling__Goals1_25, transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
        transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal1_24, (MR_Integer) 0)));
        transform_hlds__untupling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal1_24, (MR_Integer) 1)));
        transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (transform_hlds__untupling__succeeded)
          {
            transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 1)));
            transform_hlds__untupling__ConjGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 2)));
            transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_37_37 == (MR_Integer) 0);
          }
        if (transform_hlds__untupling__succeeded)
          {
            {
              *transform_hlds__untupling__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__ConjGoals_26, transform_hlds__untupling__Goals1_25);
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__untupling__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Goal1_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Goals1_25));
          }
      }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
  MR_Word transform_hlds__untupling__Goal0_9,
  MR_Word * transform_hlds__untupling__Goal_10,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_75,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_77,
  MR_Word transform_hlds__untupling__TransformMap_13,
  MR_Word transform_hlds__untupling__ModuleInfo_14)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__untupling__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_9, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__untupling__SubGoal0_53 = (MR_Word) MR_body(((MR_Word) transform_hlds__untupling__GoalExpr0_15), (MR_Integer) 0);
          MR_Word transform_hlds__untupling__SubGoal_54;
          MR_Word transform_hlds__untupling__GoalExpr_55;

          {
            transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__SubGoal0_53, &transform_hlds__untupling__SubGoal_54, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
          }
          transform_hlds__untupling__GoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__untupling__SubGoal_54);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__untupling__Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_55));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
          *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
          *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__untupling__CalleePredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)));
          MR_Integer transform_hlds__untupling__CalleeProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
          MR_Word transform_hlds__untupling__OrigArgs_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
          MR_Word transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
          MR_Word transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 4)));
          MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 5)));
          MR_Word transform_hlds__untupling__CallAux0_41;
          MR_Word transform_hlds__untupling__CallAuxInfo_42;
          MR_Word transform_hlds__untupling__V_99_99;
          MR_Word transform_hlds__untupling__V_100_100;
          MR_Word transform_hlds__untupling__V_101_101;
          MR_Box transform_hlds__untupling__conv0_V_100_100;
          MR_Word transform_hlds__untupling__V_40_40;

          {
            transform_hlds__untupling__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_99_99, 0) = ((MR_Box) (transform_hlds__untupling__CalleePredId_34));
            MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_99_99, 1) = ((MR_Box) (transform_hlds__untupling__CalleeProcId_35));
          }
          {
            transform_hlds__untupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, transform_hlds__untupling__TransformMap_13, ((MR_Box) (transform_hlds__untupling__V_99_99)), &transform_hlds__untupling__conv0_V_100_100);
          }
          if (transform_hlds__untupling__succeeded)
            {
              transform_hlds__untupling__V_100_100 = ((MR_Word) transform_hlds__untupling__conv0_V_100_100);
              transform_hlds__untupling__succeeded = MR_TRUE;
            }
          if (transform_hlds__untupling__succeeded)
            {
              transform_hlds__untupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_100_100, (MR_Integer) 0)));
              transform_hlds__untupling__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_100_100, (MR_Integer) 1)));
              transform_hlds__untupling__CallAux0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_101_101, (MR_Integer) 0)));
              transform_hlds__untupling__CallAuxInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_101_101, (MR_Integer) 1)));
              transform_hlds__untupling__succeeded = MR_TRUE;
            }
          if (transform_hlds__untupling__succeeded)
            {
              MR_Word transform_hlds__untupling__TypeTable_43;
              MR_Word transform_hlds__untupling__CalleeProcInfo_45;
              MR_Word transform_hlds__untupling__OrigArgModes_46;
              MR_Word transform_hlds__untupling__Args_47;
              MR_Word transform_hlds__untupling__EnterUnifs_48;
              MR_Word transform_hlds__untupling__ExitUnifs_49;
              MR_Word transform_hlds__untupling___CalleePredInfo_44;
              MR_Word transform_hlds__untupling__CallAux_50;
              MR_Word transform_hlds__untupling__V_123_123;
              MR_Integer transform_hlds__untupling__V_124_124;
              MR_Word transform_hlds__untupling__V_126_126;
              MR_Word transform_hlds__untupling__V_127_127;
              MR_Word transform_hlds__untupling__V_128_128;
              MR_Word transform_hlds__untupling__V_125_125;

              {
                hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__ModuleInfo_14, &transform_hlds__untupling__TypeTable_43);
              }
              {
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__ModuleInfo_14, transform_hlds__untupling__CalleePredId_34, transform_hlds__untupling__CalleeProcId_35, &transform_hlds__untupling___CalleePredInfo_44, &transform_hlds__untupling__CalleeProcInfo_45);
              }
              {
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__untupling__CalleeProcInfo_45, &transform_hlds__untupling__OrigArgModes_46);
              }
              {
                transform_hlds__untupling__expand_call_args_10_p_0(transform_hlds__untupling__OrigArgs_36, transform_hlds__untupling__OrigArgModes_46, &transform_hlds__untupling__Args_47, &transform_hlds__untupling__EnterUnifs_48, &transform_hlds__untupling__ExitUnifs_49, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TypeTable_43);
              }
              transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__CallAux0_41)) == (MR_mktag((MR_Integer) 2)));
              if (transform_hlds__untupling__succeeded)
                {
                  transform_hlds__untupling__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 0)));
                  transform_hlds__untupling__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 1)));
                  transform_hlds__untupling__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 2)));
                  transform_hlds__untupling__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 3)));
                  transform_hlds__untupling__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 4)));
                  transform_hlds__untupling__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 5)));
                  {
                    transform_hlds__untupling__CallAux_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 0) = ((MR_Box) (transform_hlds__untupling__V_123_123));
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 1) = ((MR_Box) (transform_hlds__untupling__V_124_124));
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 2) = ((MR_Box) (transform_hlds__untupling__Args_47));
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 3) = ((MR_Box) (transform_hlds__untupling__V_126_126));
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 4) = ((MR_Box) (transform_hlds__untupling__V_127_127));
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 5) = ((MR_Box) (transform_hlds__untupling__V_128_128));
                  }
                  transform_hlds__untupling__succeeded = MR_TRUE;
                }
              if (transform_hlds__untupling__succeeded)
                {
                  MR_Word transform_hlds__untupling__TypeCtorInfo_131_131;
                  MR_Word transform_hlds__untupling__Call_51;
                  MR_Word transform_hlds__untupling__ConjList_52;
                  MR_Word transform_hlds__untupling__V_104_104;
                  MR_Word transform_hlds__untupling__V_105_105;

                  {
                    transform_hlds__untupling__Call_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__untupling__Call_51, 0) = ((MR_Box) (transform_hlds__untupling__CallAux_50));
                    MR_hl_field(MR_mktag(0), transform_hlds__untupling__Call_51, 1) = ((MR_Box) (transform_hlds__untupling__CallAuxInfo_42));
                  }
                  transform_hlds__untupling__TypeCtorInfo_131_131 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                  {
                    transform_hlds__untupling__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_105_105, 0) = ((MR_Box) (transform_hlds__untupling__Call_51));
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    transform_hlds__untupling__V_104_104 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_131_131, transform_hlds__untupling__V_105_105, transform_hlds__untupling__ExitUnifs_49);
                  }
                  {
                    transform_hlds__untupling__ConjList_52 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_131_131, transform_hlds__untupling__EnterUnifs_48, transform_hlds__untupling__V_104_104);
                  }
                  {
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__untupling__ConjList_52, transform_hlds__untupling__GoalInfo0_16, transform_hlds__untupling__Goal_10);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "not a call template");
                    return;
                  }
                }
            }
          else
            {
              *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
              *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
              *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
              *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
              *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__untupling__ConjType_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word transform_hlds__untupling__Goals0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word transform_hlds__untupling__Goals_61;
              MR_Word transform_hlds__untupling__GoalExpr_117;

              switch (transform_hlds__untupling__ConjType_59) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_60, &transform_hlds__untupling__Goals_61, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    transform_hlds__untupling__fix_calls_in_conj_8_p_0(transform_hlds__untupling__Goals0_60, &transform_hlds__untupling__Goals_61, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                  }
                  break;
              }
              {
                transform_hlds__untupling__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 1) = ((MR_Box) (transform_hlds__untupling__ConjType_59));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 2) = ((MR_Box) (transform_hlds__untupling__Goals_61));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__untupling__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_117));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__untupling__GoalExpr_118;
              MR_Word transform_hlds__untupling__Goals0_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word transform_hlds__untupling__Goals_120;

              {
                transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_119, &transform_hlds__untupling__Goals_120, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
              {
                transform_hlds__untupling__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_118, 1) = ((MR_Box) (transform_hlds__untupling__Goals_120));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__untupling__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_118));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__untupling__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word transform_hlds__untupling__CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word transform_hlds__untupling__Cases0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
              MR_Word transform_hlds__untupling__Cases_65;
              MR_Word transform_hlds__untupling__GoalExpr_121;

              {
                transform_hlds__untupling__fix_calls_in_cases_8_p_0(transform_hlds__untupling__Cases0_64, &transform_hlds__untupling__Cases_65, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
              {
                transform_hlds__untupling__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 1) = ((MR_Box) (transform_hlds__untupling__Var_62));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 2) = ((MR_Box) (transform_hlds__untupling__CanFail_63));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 3) = ((MR_Box) (transform_hlds__untupling__Cases_65));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__untupling__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_121));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__untupling__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word transform_hlds__untupling__SubGoal0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word transform_hlds__untupling__FGT_58;
              MR_Word transform_hlds__untupling__V_57_57;

              transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__Reason_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (transform_hlds__untupling__succeeded)
                {
                  transform_hlds__untupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 1)));
                  transform_hlds__untupling__FGT_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 2)));
                  switch (transform_hlds__untupling__FGT_58) {
                    default:
                      transform_hlds__untupling__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      transform_hlds__untupling__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      transform_hlds__untupling__succeeded = MR_TRUE;
                      break;
                  }
                }
              if (transform_hlds__untupling__succeeded)
                {
                  *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
                  *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
                  *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
                }
              else
                {
                  MR_Word transform_hlds__untupling__SubGoal_110;
                  MR_Word transform_hlds__untupling__GoalExpr_111;

                  {
                    transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__SubGoal0_114, &transform_hlds__untupling__SubGoal_110, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                  }
                  {
                    transform_hlds__untupling__GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 1) = ((MR_Box) (transform_hlds__untupling__Reason_56));
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 2) = ((MR_Box) (transform_hlds__untupling__SubGoal_110));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *transform_hlds__untupling__Goal_10 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_111));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
                  }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__untupling__Vars_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word transform_hlds__untupling__Cond0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word transform_hlds__untupling__Then0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
              MR_Word transform_hlds__untupling__Else0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 4)));
              MR_Word transform_hlds__untupling__Cond_70;
              MR_Word transform_hlds__untupling__Then_71;
              MR_Word transform_hlds__untupling__Else_72;
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81;
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82;
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83;
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84;
              MR_Word transform_hlds__untupling__GoalExpr_122;

              {
                transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Cond0_67, &transform_hlds__untupling__Cond_70, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, &transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
              {
                transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Then0_68, &transform_hlds__untupling__Then_71, transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81, &transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83, transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
              {
                transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Else0_69, &transform_hlds__untupling__Else_72, transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
              {
                transform_hlds__untupling__GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 1) = ((MR_Box) (transform_hlds__untupling__Vars_66));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 2) = ((MR_Box) (transform_hlds__untupling__Cond_70));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 3) = ((MR_Box) (transform_hlds__untupling__Then_71));
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 4) = ((MR_Box) (transform_hlds__untupling__Else_72));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__untupling__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_122));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "shorthand");
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
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
  MR_Word transform_hlds__untupling__TransformMap_6,
  MR_Word transform_hlds__untupling__PredId_7,
  MR_Integer transform_hlds__untupling__ProcId_8,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__PredInfo_11;
    MR_Word transform_hlds__untupling__Goal0_12;
    MR_Word transform_hlds__untupling__VarTypes0_13;
    MR_Word transform_hlds__untupling__VarSet0_14;
    MR_Word transform_hlds__untupling__Goal_15;
    MR_Word transform_hlds__untupling__VarSet_16;
    MR_Word transform_hlds__untupling__VarTypes_17;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__untupling__PredId_7, transform_hlds__untupling__ProcId_8, &transform_hlds__untupling__PredInfo_11, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__Goal0_12);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__VarTypes0_13);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__VarSet0_14);
    }
    {
      transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_12, &transform_hlds__untupling__Goal_15, transform_hlds__untupling__VarSet0_14, &transform_hlds__untupling__VarSet_16, transform_hlds__untupling__VarTypes0_13, &transform_hlds__untupling__VarTypes_17, transform_hlds__untupling__TransformMap_6, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18);
    }
    {
      transform_hlds__untupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__untupling__Goal0_12, transform_hlds__untupling__Goal_15);
    }
    if (transform_hlds__untupling__succeeded)
      *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18;
    else
      {
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_30;

        {
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__untupling__Goal_15, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21);
        }
        {
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__untupling__VarSet_16, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22);
        }
        {
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__untupling__VarTypes_17, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23);
        }
        {
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25);
        }
        {
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_30, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28);
        }
        {
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__untupling__PredId_7, transform_hlds__untupling__ProcId_8, transform_hlds__untupling__PredInfo_11, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_30, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box * transform_hlds__untupling__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19;

    {
      transform_hlds__untupling__fix_calls_in_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19);
    }
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19));
  }
}

static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
  MR_Word transform_hlds__untupling__TransformMap_5,
  MR_Word transform_hlds__untupling__PredId_6,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__PredInfo_8;
    MR_Word transform_hlds__untupling__ProcIds_9;
    MR_Word transform_hlds__untupling__V_12_12;
    MR_Box transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__untupling__PredId_6, &transform_hlds__untupling__PredInfo_8);
    }
    {
      transform_hlds__untupling__ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__untupling__PredInfo_8);
    }
    {
      transform_hlds__untupling__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 1) = ((MR_Box) (transform_hlds__untupling__fix_calls_in_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 3) = ((MR_Box) (transform_hlds__untupling__TransformMap_5));
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 4) = ((MR_Box) (transform_hlds__untupling__PredId_6));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__untupling__V_12_12, transform_hlds__untupling__ProcIds_9, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10)), &transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11);
    }
    *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11);
  }
}

static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
  MR_Word transform_hlds__untupling__PredId_13,
  MR_Integer transform_hlds__untupling__ProcId_14,
  MR_Word transform_hlds__untupling__PredInfo_15,
  MR_Word transform_hlds__untupling__ProcInfo_16,
  MR_Integer transform_hlds__untupling__Counter_17,
  MR_Word * transform_hlds__untupling__AuxPredId_18,
  MR_Integer * transform_hlds__untupling__AuxProcId_19,
  MR_Word * transform_hlds__untupling__CallAux_20,
  MR_Word * transform_hlds__untupling__AuxPredInfo_21,
  MR_Word * transform_hlds__untupling__AuxProcInfo_22,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__AuxHeadVars_24;
    MR_Word transform_hlds__untupling__Goal_25;
    MR_Word transform_hlds__untupling__GoalInfo_27;
    MR_Word transform_hlds__untupling__InitialAuxInstMap_28;
    MR_Word transform_hlds__untupling__TVarSet_29;
    MR_Word transform_hlds__untupling__VarTypes_30;
    MR_Word transform_hlds__untupling__ClassContext_31;
    MR_Word transform_hlds__untupling__RttiVarMaps_32;
    MR_Word transform_hlds__untupling__VarSet_33;
    MR_Word transform_hlds__untupling__InstVarSet_34;
    MR_Word transform_hlds__untupling__Markers_35;
    MR_Word transform_hlds__untupling__OrigOrigin_36;
    MR_Word transform_hlds__untupling__HasParallelConj_37;
    MR_Word transform_hlds__untupling__VarNameRemap_38;
    MR_Word transform_hlds__untupling__PredModule_39;
    MR_String transform_hlds__untupling__PredName_40;
    MR_Word transform_hlds__untupling__PredOrFunc_41;
    MR_Word transform_hlds__untupling__Context_42;
    MR_Integer transform_hlds__untupling__Line_43;
    MR_Word transform_hlds__untupling__AuxPredSymName0_44;
    MR_Integer transform_hlds__untupling__ProcNo_45;
    MR_String transform_hlds__untupling__Suffix_46;
    MR_Word transform_hlds__untupling__AuxPredSymName_47;
    MR_Word transform_hlds__untupling__Origin_48;
    MR_Word transform_hlds__untupling__AuxPredProcId_50;
    MR_Word transform_hlds__untupling__V_59_59;
    MR_String transform_hlds__untupling__V_62_62;
    MR_Word transform_hlds__untupling___GoalExpr_26;
    MR_Word transform_hlds__untupling___ExtraArgs_49;

    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__AuxHeadVars_24);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__Goal_25);
    }
    transform_hlds__untupling___GoalExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal_25, (MR_Integer) 0)));
    transform_hlds__untupling__GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal_25, (MR_Integer) 1)));
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__untupling__ProcInfo_16, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51, &transform_hlds__untupling__InitialAuxInstMap_28);
    }
    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__TVarSet_29);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__VarTypes_30);
    }
    {
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__ClassContext_31);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__RttiVarMaps_32);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__VarSet_33);
    }
    {
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__InstVarSet_34);
    }
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__Markers_35);
    }
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__OrigOrigin_36);
    }
    {
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__HasParallelConj_37);
    }
    {
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__VarNameRemap_38);
    }
    {
      transform_hlds__untupling__PredModule_39 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
    {
      transform_hlds__untupling__PredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
    {
      transform_hlds__untupling__PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
    {
      transform_hlds__untupling__Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__untupling__GoalInfo_27);
    }
    {
      mercury__term__context_line_2_p_0(transform_hlds__untupling__Context_42, &transform_hlds__untupling__Line_43);
    }
    {
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__untupling__PredModule_39, (MR_String) "untupling", transform_hlds__untupling__PredOrFunc_41, transform_hlds__untupling__PredName_40, transform_hlds__untupling__Line_43, transform_hlds__untupling__Counter_17, &transform_hlds__untupling__AuxPredSymName0_44);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__untupling__ProcId_14, &transform_hlds__untupling__ProcNo_45);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_7[0], transform_hlds__untupling__ProcNo_45, &transform_hlds__untupling__V_62_62);
    }
    {
      transform_hlds__untupling__Suffix_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__untupling__V_62_62);
    }
    {
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__untupling__AuxPredSymName0_44, transform_hlds__untupling__Suffix_46, &transform_hlds__untupling__AuxPredSymName_47);
    }
    {
      transform_hlds__untupling__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_59_59, 1) = ((MR_Box) (transform_hlds__untupling__ProcNo_45));
    }
    {
      transform_hlds__untupling__Origin_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 0) = ((MR_Box) (transform_hlds__untupling__V_59_59));
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 1) = ((MR_Box) (transform_hlds__untupling__OrigOrigin_36));
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 2) = ((MR_Box) (transform_hlds__untupling__PredId_13));
    }
    {
      hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__untupling__Origin_48, transform_hlds__untupling__Goal_25, transform_hlds__untupling__CallAux_20, transform_hlds__untupling__AuxHeadVars_24, &transform_hlds__untupling___ExtraArgs_49, transform_hlds__untupling__InitialAuxInstMap_28, transform_hlds__untupling__AuxPredSymName_47, transform_hlds__untupling__TVarSet_29, transform_hlds__untupling__VarTypes_30, transform_hlds__untupling__ClassContext_31, transform_hlds__untupling__RttiVarMaps_32, transform_hlds__untupling__VarSet_33, transform_hlds__untupling__InstVarSet_34, transform_hlds__untupling__Markers_35, (MR_Integer) 1, transform_hlds__untupling__HasParallelConj_37, transform_hlds__untupling__VarNameRemap_38, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52, &transform_hlds__untupling__AuxPredProcId_50);
    }
    *transform_hlds__untupling__AuxPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__AuxPredProcId_50, (MR_Integer) 0)));
    *transform_hlds__untupling__AuxProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__AuxPredProcId_50, (MR_Integer) 1)));
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(*transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52, *transform_hlds__untupling__AuxPredId_18, *transform_hlds__untupling__AuxProcId_19, transform_hlds__untupling__AuxPredInfo_21, transform_hlds__untupling__AuxProcInfo_22);
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3,
  MR_Word * transform_hlds__untupling__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__untupling__succeeded;

        if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *transform_hlds__untupling__HeadVar__4_4 = transform_hlds__untupling__HeadVar__3_3;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
                return;
              }
            }
        else
          {
            MR_Word transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

            if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_Word transform_hlds__untupling__NewVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word transform_hlds__untupling__NewVarss_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word transform_hlds__untupling__TypeInfo_40_40;
                MR_Word transform_hlds__untupling__V_15_15;
                MR_Word transform_hlds__untupling__V_37_37;

                transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__NewVars_10)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__untupling__succeeded)
                  {
                    transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__NewVars_10, (MR_Integer) 0)));
                    transform_hlds__untupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__NewVars_10, (MR_Integer) 1)));
                    transform_hlds__untupling__TypeInfo_40_40 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
                    {
                      transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_40_40, ((MR_Box) (transform_hlds__untupling__V_39_39)), ((MR_Box) (transform_hlds__untupling__V_37_37)));
                    }
                    if (transform_hlds__untupling__succeeded)
                      transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                if (transform_hlds__untupling__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__V_38_38;
                      MR_Word transform_hlds__untupling__HeadVar__2__tmp_copy_2 = transform_hlds__untupling__NewVarss_11;

                      transform_hlds__untupling__HeadVar__2_2 = transform_hlds__untupling__HeadVar__2__tmp_copy_2;
                      transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17;

                    {
                      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], (MR_Word) &transform_hlds__untupling_scalar_common_2[1], ((MR_Box) (transform_hlds__untupling__V_39_39)), ((MR_Box) (transform_hlds__untupling__NewVars_10)), transform_hlds__untupling__HeadVar__3_3, &transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__V_38_38;
                      MR_Word transform_hlds__untupling__HeadVar__2__tmp_copy_2 = transform_hlds__untupling__NewVarss_11;
                      MR_Word transform_hlds__untupling__HeadVar__3__tmp_copy_3 = transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17;

                      transform_hlds__untupling__HeadVar__3_3 = transform_hlds__untupling__HeadVar__3__tmp_copy_3;
                      transform_hlds__untupling__HeadVar__2_2 = transform_hlds__untupling__HeadVar__2__tmp_copy_2;
                      transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
  MR_String transform_hlds__untupling__ParentName_1,
  MR_Integer transform_hlds__untupling__Num_2,
  MR_Word transform_hlds__untupling__HeadVar__3_3,
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_6,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_8)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_8 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7;
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_6 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5;
      }
    else
      {
        MR_Word transform_hlds__untupling__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__untupling__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__NewVar_21;
        MR_Word transform_hlds__untupling__NewVars_22;
        MR_String transform_hlds__untupling__Name_25;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36;
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37;
        MR_Integer transform_hlds__untupling__V_38_38;
        MR_String transform_hlds__untupling__V_43_43;
        MR_String transform_hlds__untupling__V_51_51;
        MR_String transform_hlds__untupling__V_52_52;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_7[0], transform_hlds__untupling__Num_2, &transform_hlds__untupling__V_43_43);
        }
        {
          transform_hlds__untupling__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__untupling__V_43_43);
        }
        {
          transform_hlds__untupling__V_52_52 = mercury__string__f_43_43_2_f_0(transform_hlds__untupling__ParentName_1, transform_hlds__untupling__V_51_51);
        }
        {
          transform_hlds__untupling__Name_25 = mercury__string__f_43_43_2_f_0((MR_String) "Untupled_", transform_hlds__untupling__V_52_52);
        }
        {
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__Name_25, &transform_hlds__untupling__NewVar_21, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36);
        }
        {
          hlds__vartypes__add_var_type_4_p_0(transform_hlds__untupling__NewVar_21, transform_hlds__untupling__Type_19, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37);
        }
        transform_hlds__untupling__V_38_38 = (transform_hlds__untupling__Num_2 + (MR_Integer) 1);
        {
          transform_hlds__untupling__create_untuple_vars_8_p_0(transform_hlds__untupling__ParentName_1, transform_hlds__untupling__V_38_38, transform_hlds__untupling__Types_20, &transform_hlds__untupling__NewVars_22, transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36, transform_hlds__untupling__STATE_VARIABLE_VarSet_6, transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37, transform_hlds__untupling__STATE_VARIABLE_VarTypes_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__untupling__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__NewVar_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__NewVars_22));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
  MR_Word transform_hlds__untupling__HeadVar0_13,
  MR_Word transform_hlds__untupling__ArgMode0_14,
  MR_Word * transform_hlds__untupling__MaybeHeadVarsAndArgModes_15,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_30,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_31,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_33,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_35,
  MR_Word transform_hlds__untupling__ContainerTypes0_19,
  MR_Word * transform_hlds__untupling__ContainerTypes_20,
  MR_Word transform_hlds__untupling__TypeTable_21)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__Type_22;
    MR_Word transform_hlds__untupling__Expansion_23;

    {
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34, transform_hlds__untupling__HeadVar0_13, &transform_hlds__untupling__Type_22);
    }
    {
      transform_hlds__untupling__expand_argument_5_p_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__Type_22, transform_hlds__untupling__ContainerTypes0_19, transform_hlds__untupling__TypeTable_21, &transform_hlds__untupling__Expansion_23);
    }
    if ((transform_hlds__untupling__Expansion_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__untupling__MaybeHeadVarsAndArgModes_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__untupling__ContainerTypes_20 = transform_hlds__untupling__ContainerTypes0_19;
        *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = transform_hlds__untupling__STATE_VARIABLE_Goal_0_30;
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_33 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32;
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_35 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34;
      }
    else
      {
        MR_Word transform_hlds__untupling__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_23, (MR_Integer) 0)));
        MR_Word transform_hlds__untupling__NewTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_23, (MR_Integer) 1)));
        MR_String transform_hlds__untupling__ParentName_26;
        MR_Word transform_hlds__untupling__NewHeadVars_27;
        MR_Word transform_hlds__untupling__NewArgModes_28;
        MR_Integer transform_hlds__untupling__V_39_39;
        MR_Word transform_hlds__untupling__V_40_40;
        MR_Word transform_hlds__untupling__V_51_51;

        {
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32, transform_hlds__untupling__HeadVar0_13, &transform_hlds__untupling__ParentName_26);
        }
        {
          transform_hlds__untupling__create_untuple_vars_8_p_0(transform_hlds__untupling__ParentName_26, (MR_Integer) 0, transform_hlds__untupling__NewTypes_25, &transform_hlds__untupling__NewHeadVars_27, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34, transform_hlds__untupling__STATE_VARIABLE_VarTypes_35);
        }
        {
          transform_hlds__untupling__V_39_39 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__NewHeadVars_27);
        }
        {
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__V_39_39, ((MR_Box) (transform_hlds__untupling__ArgMode0_14)), &transform_hlds__untupling__NewArgModes_28);
        }
        {
          transform_hlds__untupling__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_40_40, 0) = ((MR_Box) (transform_hlds__untupling__NewHeadVars_27));
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_40_40, 1) = ((MR_Box) (transform_hlds__untupling__NewArgModes_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__untupling__MaybeHeadVarsAndArgModes_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__V_40_40));
        }
        {
          transform_hlds__untupling__V_51_51 = parse_tree__prog_mode__in_mode_0_f_0();
        }
        {
          transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__V_51_51);
        }
        if (transform_hlds__untupling__succeeded)
          {
            MR_Word transform_hlds__untupling__UnifGoal_29;
            MR_Word transform_hlds__untupling__GoalListA_58;
            MR_Word transform_hlds__untupling__GoalListB_59;
            MR_Word transform_hlds__untupling__GoalList_60;
            MR_Word transform_hlds__untupling__Determinism_61;
            MR_Word transform_hlds__untupling__GoalInfo0_62;
            MR_Word transform_hlds__untupling__GoalInfo_63;
            MR_Word transform_hlds__untupling__V_64_64;

            {
              hlds__make_goal__construct_functor_4_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ConsId_24, transform_hlds__untupling__NewHeadVars_27, &transform_hlds__untupling__UnifGoal_29);
            }
            {
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__UnifGoal_29, &transform_hlds__untupling__GoalListA_58);
            }
            {
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__STATE_VARIABLE_Goal_0_30, &transform_hlds__untupling__GoalListB_59);
            }
            {
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__GoalListA_58, transform_hlds__untupling__GoalListB_59, &transform_hlds__untupling__GoalList_60);
            }
            {
              hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__untupling__GoalList_60, &transform_hlds__untupling__Determinism_61);
            }
            {
              hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__untupling__GoalInfo0_62);
            }
            {
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__untupling__Determinism_61, transform_hlds__untupling__GoalInfo0_62, &transform_hlds__untupling__GoalInfo_63);
            }
            {
              transform_hlds__untupling__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 2) = ((MR_Box) (transform_hlds__untupling__GoalList_60));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__V_64_64));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_63));
            }
          }
        else
          {
            MR_Word transform_hlds__untupling__V_52_52;

            {
              transform_hlds__untupling__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
            }
            {
              transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__V_52_52);
            }
            if (transform_hlds__untupling__succeeded)
              {
                MR_Word transform_hlds__untupling__UnifGoal_46;
                MR_Word transform_hlds__untupling__GoalListA_70;
                MR_Word transform_hlds__untupling__GoalListB_71;
                MR_Word transform_hlds__untupling__GoalList_72;
                MR_Word transform_hlds__untupling__Determinism_73;
                MR_Word transform_hlds__untupling__GoalInfo0_74;
                MR_Word transform_hlds__untupling__GoalInfo_75;
                MR_Word transform_hlds__untupling__V_76_76;

                {
                  hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ConsId_24, transform_hlds__untupling__NewHeadVars_27, &transform_hlds__untupling__UnifGoal_46);
                }
                {
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__STATE_VARIABLE_Goal_0_30, &transform_hlds__untupling__GoalListA_70);
                }
                {
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__UnifGoal_46, &transform_hlds__untupling__GoalListB_71);
                }
                {
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__GoalListA_70, transform_hlds__untupling__GoalListB_71, &transform_hlds__untupling__GoalList_72);
                }
                {
                  hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__untupling__GoalList_72, &transform_hlds__untupling__Determinism_73);
                }
                {
                  hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__untupling__GoalInfo0_74);
                }
                {
                  hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__untupling__Determinism_73, transform_hlds__untupling__GoalInfo0_74, &transform_hlds__untupling__GoalInfo_75);
                }
                {
                  transform_hlds__untupling__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 2) = ((MR_Box) (transform_hlds__untupling__GoalList_72));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__V_76_76));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_75));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_one_arg_in_proc_2\'/12", (MR_String) "unsupported mode");
                  return;
                }
              }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__untupling__ContainerTypes_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Type_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ContainerTypes0_19));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
  MR_Word transform_hlds__untupling__HeadVar0_13,
  MR_Word transform_hlds__untupling__ArgMode0_14,
  MR_Word * transform_hlds__untupling__HeadVars_15,
  MR_Word * transform_hlds__untupling__ArgModes_16,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_28,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_29,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_31,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_33,
  MR_Word transform_hlds__untupling__ContainerTypes0_20,
  MR_Word transform_hlds__untupling__TypeTable_21)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__MaybeHeadVarsAndArgModes_22;
    MR_Word transform_hlds__untupling__ContainerTypes_23;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_34_34;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36;

    {
      transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ArgMode0_14, &transform_hlds__untupling__MaybeHeadVarsAndArgModes_22, transform_hlds__untupling__STATE_VARIABLE_Goal_0_28, &transform_hlds__untupling__STATE_VARIABLE_Goal_34_34, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30, &transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36, transform_hlds__untupling__ContainerTypes0_20, &transform_hlds__untupling__ContainerTypes_23, transform_hlds__untupling__TypeTable_21);
    }
    if ((transform_hlds__untupling__MaybeHeadVarsAndArgModes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__untupling__HeadVars_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__HeadVar0_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__untupling__ArgModes_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ArgMode0_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *transform_hlds__untupling__STATE_VARIABLE_Goal_29 = transform_hlds__untupling__STATE_VARIABLE_Goal_34_34;
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_31 = transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35;
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_33 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36;
      }
    else
      {
        MR_Word transform_hlds__untupling__HeadVars1_24;
        MR_Word transform_hlds__untupling__ArgModes1_25;
        MR_Word transform_hlds__untupling__ListOfHeadVars_26;
        MR_Word transform_hlds__untupling__ListOfArgModes_27;
        MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__MaybeHeadVarsAndArgModes_22, (MR_Integer) 0)));

        transform_hlds__untupling__HeadVars1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_39_39, (MR_Integer) 0)));
        transform_hlds__untupling__ArgModes1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_39_39, (MR_Integer) 1)));
        {
          transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__HeadVars1_24, transform_hlds__untupling__ArgModes1_25, &transform_hlds__untupling__ListOfHeadVars_26, &transform_hlds__untupling__ListOfArgModes_27, transform_hlds__untupling__STATE_VARIABLE_Goal_34_34, transform_hlds__untupling__STATE_VARIABLE_Goal_29, transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35, transform_hlds__untupling__STATE_VARIABLE_VarSet_31, transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36, transform_hlds__untupling__STATE_VARIABLE_VarTypes_33, transform_hlds__untupling__ContainerTypes_23, transform_hlds__untupling__TypeTable_21);
        }
        {
          *transform_hlds__untupling__HeadVars_15 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ListOfHeadVars_26);
        }
        {
          *transform_hlds__untupling__ArgModes_16 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__ListOfArgModes_27);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__HeadVar__2_2,
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
  MR_Word transform_hlds__untupling__HeadVar__5_5,
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
  MR_Word transform_hlds__untupling__HeadVar__7_7,
  MR_Word * transform_hlds__untupling__HeadVar__8_8,
  MR_Word transform_hlds__untupling__HeadVar__9_9,
  MR_Word * transform_hlds__untupling__HeadVar__10_10,
  MR_Word transform_hlds__untupling__ContainerTypes_11,
  MR_Word transform_hlds__untupling__TypeTable_12)
{
  {
    MR_bool transform_hlds__untupling__succeeded;

    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *transform_hlds__untupling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__untupling__HeadVar__10_10 = transform_hlds__untupling__HeadVar__9_9;
          *transform_hlds__untupling__HeadVar__8_8 = transform_hlds__untupling__HeadVar__7_7;
          *transform_hlds__untupling__HeadVar__6_6 = transform_hlds__untupling__HeadVar__5_5;
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__untupling__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__untupling__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

        if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__untupling__ArgMode0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__untupling__ArgModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__untupling__HeadVar_28;
            MR_Word transform_hlds__untupling__HeadVars_29;
            MR_Word transform_hlds__untupling__ArgMode_30;
            MR_Word transform_hlds__untupling__ArgModes_31;
            MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_43_43;
            MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44;
            MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45;

            {
              transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(transform_hlds__untupling__V_86_86, transform_hlds__untupling__ArgMode0_26, &transform_hlds__untupling__HeadVar_28, &transform_hlds__untupling__ArgMode_30, transform_hlds__untupling__HeadVar__5_5, &transform_hlds__untupling__STATE_VARIABLE_Goal_43_43, transform_hlds__untupling__HeadVar__7_7, &transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44, transform_hlds__untupling__HeadVar__9_9, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45, transform_hlds__untupling__ContainerTypes_11, transform_hlds__untupling__TypeTable_12);
            }
            {
              transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__V_85_85, transform_hlds__untupling__ArgModes0_27, &transform_hlds__untupling__HeadVars_29, &transform_hlds__untupling__ArgModes_31, transform_hlds__untupling__STATE_VARIABLE_Goal_43_43, transform_hlds__untupling__HeadVar__6_6, transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44, transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45, transform_hlds__untupling__HeadVar__10_10, transform_hlds__untupling__ContainerTypes_11, transform_hlds__untupling__TypeTable_12);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__untupling__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__HeadVar_28));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__HeadVars_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__untupling__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ArgMode_30));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ArgModes_31));
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
  MR_Word transform_hlds__untupling__HeadVars0_13,
  MR_Word transform_hlds__untupling__ArgModes0_14,
  MR_Word * transform_hlds__untupling__HeadVars_15,
  MR_Word * transform_hlds__untupling__ArgModes_16,
  MR_Word transform_hlds__untupling__Goal0_17,
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_29,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_31,
  MR_Word transform_hlds__untupling__TypeTable_22,
  MR_Word * transform_hlds__untupling__UntupleMap_23)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__TypeInfo_39_39;
    MR_Word transform_hlds__untupling__GoalExpr_18;
    MR_Word transform_hlds__untupling__GoalInfo_19;
    MR_Word transform_hlds__untupling__ListOfHeadVars_24;
    MR_Word transform_hlds__untupling__ListOfArgModes_25;
    MR_Word transform_hlds__untupling__GoalInfo1_26;
    MR_Word transform_hlds__untupling__Context_27;
    MR_Word transform_hlds__untupling__V_32_32;
    MR_Word transform_hlds__untupling__V_36_36;
    MR_Word transform_hlds__untupling__V_37_37;
    MR_Word transform_hlds__untupling__V_38_38;

    {
      transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__HeadVars0_13, transform_hlds__untupling__ArgModes0_14, &transform_hlds__untupling__ListOfHeadVars_24, &transform_hlds__untupling__ListOfArgModes_25, transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__V_32_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28, transform_hlds__untupling__STATE_VARIABLE_VarSet_29, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30, transform_hlds__untupling__STATE_VARIABLE_VarTypes_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__untupling__TypeTable_22);
    }
    transform_hlds__untupling__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_32_32, (MR_Integer) 0)));
    transform_hlds__untupling__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_32_32, (MR_Integer) 1)));
    transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_17, (MR_Integer) 0)));
    transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_17, (MR_Integer) 1)));
    {
      transform_hlds__untupling__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__untupling__V_36_36);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(transform_hlds__untupling__Context_27, transform_hlds__untupling__GoalInfo1_26, &transform_hlds__untupling__GoalInfo_19);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__untupling__HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_19));
    }
    transform_hlds__untupling__TypeInfo_39_39 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
    {
      mercury__list__condense_2_p_0(transform_hlds__untupling__TypeInfo_39_39, transform_hlds__untupling__ListOfHeadVars_24, transform_hlds__untupling__HeadVars_15);
    }
    {
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__ListOfArgModes_25, transform_hlds__untupling__ArgModes_16);
    }
    {
      transform_hlds__untupling__V_37_37 = mercury__map__init_0_f_0(transform_hlds__untupling__TypeInfo_39_39, (MR_Word) &transform_hlds__untupling_scalar_common_2[1]);
    }
    {
      transform_hlds__untupling__build_untuple_map_4_p_0(transform_hlds__untupling__HeadVars0_13, transform_hlds__untupling__ListOfHeadVars_24, transform_hlds__untupling__V_37_37, transform_hlds__untupling__UntupleMap_23);
    }
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
  MR_Word transform_hlds__untupling__PredId_9,
  MR_Integer transform_hlds__untupling__ProcId_10,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_38,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_39,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_40)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__TypeTable_15;
    MR_Word transform_hlds__untupling__PredInfo0_16;
    MR_Word transform_hlds__untupling__HeadVars0_17;
    MR_Word transform_hlds__untupling__ArgModes0_18;
    MR_Word transform_hlds__untupling__Goal0_19;
    MR_Word transform_hlds__untupling__VarTypes0_20;
    MR_Word transform_hlds__untupling__VarSet0_21;
    MR_Word transform_hlds__untupling__HeadVars_22;
    MR_Word transform_hlds__untupling__ArgModes_23;
    MR_Word transform_hlds__untupling__Goal_24;
    MR_Word transform_hlds__untupling__VarSet_25;
    MR_Word transform_hlds__untupling__VarTypes_26;
    MR_Word transform_hlds__untupling__UntupleMap_27;
    MR_Integer transform_hlds__untupling__Num_28;
    MR_Word transform_hlds__untupling__AuxPredId_29;
    MR_Integer transform_hlds__untupling__AuxProcId_30;
    MR_Word transform_hlds__untupling__CallAux_31;
    MR_Word transform_hlds__untupling__AuxPredInfo_32;
    MR_Word transform_hlds__untupling__AuxProcInfo0_33;
    MR_Word transform_hlds__untupling__AuxProcInfo_34;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53;
    MR_Word transform_hlds__untupling__V_54_54;
    MR_Word transform_hlds__untupling__V_55_55;
    MR_Word transform_hlds__untupling__V_57_57;
    MR_Word transform_hlds__untupling__V_58_58;
    MR_Word transform_hlds__untupling__V_60_60;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__untupling__TypeTable_15);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__untupling__PredId_9, transform_hlds__untupling__ProcId_10, &transform_hlds__untupling__PredInfo0_16, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__HeadVars0_17);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__ArgModes0_18);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__Goal0_19);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__VarTypes0_20);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__VarSet0_21);
    }
    {
      transform_hlds__untupling__expand_args_in_proc_2_12_p_0(transform_hlds__untupling__HeadVars0_17, transform_hlds__untupling__ArgModes0_18, &transform_hlds__untupling__HeadVars_22, &transform_hlds__untupling__ArgModes_23, transform_hlds__untupling__Goal0_19, &transform_hlds__untupling__Goal_24, transform_hlds__untupling__VarSet0_21, &transform_hlds__untupling__VarSet_25, transform_hlds__untupling__VarTypes0_20, &transform_hlds__untupling__VarTypes_26, transform_hlds__untupling__TypeTable_15, &transform_hlds__untupling__UntupleMap_27);
    }
    {
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__untupling__HeadVars_22, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42);
    }
    {
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__untupling__ArgModes_23, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__untupling__Goal_24, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__untupling__VarSet_25, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__untupling__VarTypes_26, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46);
    }
    {
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48);
    }
    {
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51);
    }
    {
      mercury__counter__allocate_3_p_0(&transform_hlds__untupling__Num_28, transform_hlds__untupling__STATE_VARIABLE_Counter_0_39, transform_hlds__untupling__STATE_VARIABLE_Counter_40);
    }
    {
      transform_hlds__untupling__create_aux_pred_12_p_0(transform_hlds__untupling__PredId_9, transform_hlds__untupling__ProcId_10, transform_hlds__untupling__PredInfo0_16, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__untupling__Num_28, &transform_hlds__untupling__AuxPredId_29, &transform_hlds__untupling__AuxProcId_30, &transform_hlds__untupling__CallAux_31, &transform_hlds__untupling__AuxPredInfo_32, &transform_hlds__untupling__AuxProcInfo0_33, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53);
    }
    transform_hlds__untupling__V_55_55 = (MR_Word) transform_hlds__untupling__UntupleMap_27;
    {
      transform_hlds__untupling__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_54_54, 0) = ((MR_Box) (transform_hlds__untupling__V_55_55));
    }
    {
      hlds__hlds_pred__proc_info_set_maybe_untuple_info_3_p_0(transform_hlds__untupling__V_54_54, transform_hlds__untupling__AuxProcInfo0_33, &transform_hlds__untupling__AuxProcInfo_34);
    }
    {
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__untupling__AuxPredId_29, transform_hlds__untupling__AuxProcId_30, transform_hlds__untupling__AuxPredInfo_32, transform_hlds__untupling__AuxProcInfo_34, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36);
    }
    {
      transform_hlds__untupling__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_57_57, 0) = ((MR_Box) (transform_hlds__untupling__PredId_9));
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_57_57, 1) = ((MR_Box) (transform_hlds__untupling__ProcId_10));
    }
    {
      transform_hlds__untupling__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, 0) = ((MR_Box) (transform_hlds__untupling__AuxPredId_29));
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, 1) = ((MR_Box) (transform_hlds__untupling__AuxProcId_30));
    }
    {
      transform_hlds__untupling__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_58_58, 0) = ((MR_Box) (transform_hlds__untupling__V_60_60));
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_58_58, 1) = ((MR_Box) (transform_hlds__untupling__CallAux_31));
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, ((MR_Box) (transform_hlds__untupling__V_57_57)), ((MR_Box) (transform_hlds__untupling__V_58_58)), transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37, transform_hlds__untupling__STATE_VARIABLE_TransformMap_38);
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__untupling__wrapper_arg_2;
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
    MR_Word transform_hlds__untupling__conv0_LambdaHeadVar__2_29;

    {
      transform_hlds__untupling__conv0_LambdaHeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__772__1_1_f_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1));
    }
    transform_hlds__untupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__untupling__conv0_LambdaHeadVar__2_29));
    return transform_hlds__untupling__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
  MR_Word transform_hlds__untupling__HeadVar__1_1,
  MR_Word transform_hlds__untupling__TypeTable_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__untupling__Type_3;
        MR_Word transform_hlds__untupling__Types_4;

        if (transform_hlds__untupling__succeeded)
          {
            transform_hlds__untupling__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
            transform_hlds__untupling__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
            {
              MR_Word transform_hlds__untupling__V_10_10;
              MR_Word transform_hlds__untupling__TypeArgs_16;
              MR_Word transform_hlds__untupling__TypeCtor_15;
              MR_Word transform_hlds__untupling__V_78_78;
              MR_Word transform_hlds__untupling__V_79_79;

              {
                transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__Type_3, &transform_hlds__untupling__TypeCtor_15, &transform_hlds__untupling__TypeArgs_16);
              }
              if (transform_hlds__untupling__succeeded)
                {
                  transform_hlds__untupling__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__untupling__TypeCtor_15);
                }
              if (transform_hlds__untupling__succeeded)
                {
                  MR_Integer transform_hlds__untupling__Arity_17;
                  MR_Word transform_hlds__untupling__ConsId_18;

                  {
                    transform_hlds__untupling__Arity_17 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__TypeArgs_16);
                  }
                  {
                    transform_hlds__untupling__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_18, 1) = ((MR_Box) (transform_hlds__untupling__Arity_17));
                  }
                  {
                    transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_18));
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 1) = ((MR_Box) (transform_hlds__untupling__TypeArgs_16));
                  }
                }
              else
                {
                  MR_Word transform_hlds__untupling__SingleCtorName_22;
                  MR_Word transform_hlds__untupling__SingleCtorArgs_23;
                  MR_Word transform_hlds__untupling__TypeCtor_39;
                  MR_Word transform_hlds__untupling__TypeInfo_68_74;
                  MR_Word transform_hlds__untupling__TypeInfo_69_75;
                  MR_Word transform_hlds__untupling__TypeDefn_19;
                  MR_Word transform_hlds__untupling__TypeBody_20;
                  MR_Word transform_hlds__untupling__SingleCtor_21;
                  MR_Word transform_hlds__untupling__V_29_29;
                  MR_Word transform_hlds__untupling__V_30_30;
                  MR_Word transform_hlds__untupling__V_31_31;
                  MR_Word transform_hlds__untupling__V_32_32;
                  MR_Word transform_hlds__untupling__V_72_72;
                  MR_Word transform_hlds__untupling__V_73_73;
                  MR_Word transform_hlds__untupling__V_42_42;
                  MR_Word transform_hlds__untupling__V_43_43;
                  MR_Word transform_hlds__untupling__V_44_44;
                  MR_Word transform_hlds__untupling__V_45_45;
                  MR_Word transform_hlds__untupling__V_46_46;
                  MR_Word transform_hlds__untupling__V_47_47;
                  MR_Word transform_hlds__untupling__V_48_48;
                  MR_Word transform_hlds__untupling__V_49_49;
                  MR_Word transform_hlds__untupling__V_50_50;
                  MR_Integer transform_hlds__untupling__V_53_53;
                  MR_Word transform_hlds__untupling__V_54_54;
                  MR_Word transform_hlds__untupling__V_24_24;
                  MR_Word transform_hlds__untupling__V_25_25;
                  MR_Word transform_hlds__untupling__TypeCtorInfo_63_69;

                  {
                    transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__Type_3, &transform_hlds__untupling__TypeCtor_39, &transform_hlds__untupling__V_72_72);
                  }
                  if (transform_hlds__untupling__succeeded)
                    {
                      transform_hlds__untupling__TypeInfo_68_74 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
                      {
                        transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_68_74, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__untupling__V_72_72)));
                      }
                      if (transform_hlds__untupling__succeeded)
                        {
                          {
                            transform_hlds__untupling__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__untupling__TypeTable_5, transform_hlds__untupling__TypeCtor_39, &transform_hlds__untupling__TypeDefn_19);
                          }
                          if (transform_hlds__untupling__succeeded)
                            {
                              transform_hlds__untupling__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              {
                                hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__untupling__TypeDefn_19, &transform_hlds__untupling__V_73_73);
                              }
                              transform_hlds__untupling__TypeInfo_69_75 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
                              {
                                transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_69_75, ((MR_Box) (transform_hlds__untupling__V_29_29)), ((MR_Box) (transform_hlds__untupling__V_73_73)));
                              }
                              if (transform_hlds__untupling__succeeded)
                                {
                                  {
                                    hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__untupling__TypeDefn_19, &transform_hlds__untupling__TypeBody_20);
                                  }
                                  transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__TypeBody_20)) == (MR_mktag((MR_Integer) 1)));
                                  if (transform_hlds__untupling__succeeded)
                                    {
                                      transform_hlds__untupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 0)));
                                      transform_hlds__untupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 1)));
                                      transform_hlds__untupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 2)));
                                      transform_hlds__untupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 3)));
                                      transform_hlds__untupling__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 4)));
                                      transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 5)));
                                      transform_hlds__untupling__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 6)))) & (MR_Integer) 1);
                                      transform_hlds__untupling__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                      transform_hlds__untupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 7)));
                                      transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_30_30)) == (MR_mktag((MR_Integer) 1)));
                                      if (transform_hlds__untupling__succeeded)
                                        {
                                          transform_hlds__untupling__SingleCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_30_30, (MR_Integer) 0)));
                                          transform_hlds__untupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_30_30, (MR_Integer) 1)));
                                          transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          if (transform_hlds__untupling__succeeded)
                                            {
                                              transform_hlds__untupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 0)));
                                              transform_hlds__untupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 1)));
                                              transform_hlds__untupling__SingleCtorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 2)));
                                              transform_hlds__untupling__SingleCtorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 3)));
                                              transform_hlds__untupling__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 4)));
                                              transform_hlds__untupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 5)));
                                              transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (transform_hlds__untupling__succeeded)
                                                {
                                                  transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__SingleCtorArgs_23)) == (MR_mktag((MR_Integer) 1)));
                                                  if (transform_hlds__untupling__succeeded)
                                                    {
                                                      transform_hlds__untupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_23, (MR_Integer) 0)));
                                                      transform_hlds__untupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_23, (MR_Integer) 1)));
                                                      transform_hlds__untupling__TypeCtorInfo_63_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                                                      {
                                                        transform_hlds__untupling__succeeded = mercury__list__member_2_p_0(transform_hlds__untupling__TypeCtorInfo_63_69, ((MR_Box) (transform_hlds__untupling__Type_3)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                      }
                                                      transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                  if (transform_hlds__untupling__succeeded)
                    {
                      MR_Word transform_hlds__untupling__TypeCtorInfo_64_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
                      MR_Word transform_hlds__untupling__ExpandedTypes_26;
                      MR_Integer transform_hlds__untupling__Arity_37;
                      MR_Word transform_hlds__untupling__ConsId_38;

                      {
                        transform_hlds__untupling__Arity_37 = mercury__list__length_1_f_0(transform_hlds__untupling__TypeCtorInfo_64_70, transform_hlds__untupling__SingleCtorArgs_23);
                      }
                      {
                        transform_hlds__untupling__ConsId_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 1) = ((MR_Box) (transform_hlds__untupling__SingleCtorName_22));
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 2) = ((MR_Box) (transform_hlds__untupling__Arity_37));
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 3) = ((MR_Box) (transform_hlds__untupling__TypeCtor_39));
                      }
                      {
                        transform_hlds__untupling__ExpandedTypes_26 = mercury__list__map_2_f_0(transform_hlds__untupling__TypeCtorInfo_64_70, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[3], transform_hlds__untupling__SingleCtorArgs_23);
                      }
                      {
                        transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_38));
                        MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 1) = ((MR_Box) (transform_hlds__untupling__ExpandedTypes_26));
                      }
                    }
                  else
                    transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_10_10)) == (MR_mktag((MR_Integer) 1)));
              if (transform_hlds__untupling__succeeded)
                {
                  transform_hlds__untupling__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, (MR_Integer) 0)));
                  transform_hlds__untupling__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, (MR_Integer) 1)));
                }
            }
            if (!(transform_hlds__untupling__succeeded))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__Types_4;

                  transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return transform_hlds__untupling__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
  MR_Box transform_hlds__untupling__wrapper_arg_4,
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
  MR_Box transform_hlds__untupling__wrapper_arg_6,
  MR_Box * transform_hlds__untupling__wrapper_arg_7)
{
  {
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
    MR_Word transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36;
    MR_Word transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38;
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40;

    {
      transform_hlds__untupling__expand_args_in_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36, ((MR_Word) transform_hlds__untupling__wrapper_arg_4), &transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38, ((MR_Word) transform_hlds__untupling__wrapper_arg_6), &transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40);
    }
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36));
    *transform_hlds__untupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38));
    *transform_hlds__untupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40));
  }
}

static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
  MR_Word transform_hlds__untupling__PredId_8,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_23,
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_24,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_25)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__TypeTable_12;
    MR_Word transform_hlds__untupling__PredInfo_13;
    MR_Word transform_hlds__untupling__TypeCtorInfo_38_38;
    MR_Word transform_hlds__untupling__TypeInfo_56_56;
    MR_Word transform_hlds__untupling__TypeInfo_57_57;
    MR_Word transform_hlds__untupling__PredStatus_14;
    MR_Word transform_hlds__untupling__TypeVarSet_16;
    MR_Word transform_hlds__untupling__ExistQVars_17;
    MR_Word transform_hlds__untupling__ArgTypes_18;
    MR_Word transform_hlds__untupling__V_26_26;
    MR_Word transform_hlds__untupling__V_27_27;
    MR_Word transform_hlds__untupling__V_28_28;
    MR_Word transform_hlds__untupling__V_29_29;
    MR_Word transform_hlds__untupling__V_30_30;
    MR_Word transform_hlds__untupling__V_31_31;
    MR_Word transform_hlds__untupling__V_32_32;
    MR_Word transform_hlds__untupling__V_33_33;
    MR_Word transform_hlds__untupling__V_50_50;
    MR_Word transform_hlds__untupling__V_51_51;
    MR_Word transform_hlds__untupling__V_52_52;
    MR_Word transform_hlds__untupling__V_53_53;
    MR_Word transform_hlds__untupling__V_54_54;
    MR_Word transform_hlds__untupling__V_15_15;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__untupling__TypeTable_12);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__untupling__PredId_8, &transform_hlds__untupling__PredInfo_13);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__PredStatus_14);
    }
    {
      transform_hlds__untupling__V_26_26 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__untupling__PredStatus_14);
    }
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_26_26 == (MR_Integer) 1);
    if (transform_hlds__untupling__succeeded)
      {
        transform_hlds__untupling__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_50_50);
        }
        {
          transform_hlds__untupling__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(transform_hlds__untupling__V_27_27, transform_hlds__untupling__V_50_50);
        }
        if (transform_hlds__untupling__succeeded)
          {
            transform_hlds__untupling__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_51_51);
            }
            transform_hlds__untupling__TypeInfo_56_56 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
            {
              transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_56_56, ((MR_Box) (transform_hlds__untupling__V_28_28)), ((MR_Box) (transform_hlds__untupling__V_51_51)));
            }
            if (transform_hlds__untupling__succeeded)
              {
                transform_hlds__untupling__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_52_52);
                }
                transform_hlds__untupling__TypeInfo_57_57 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
                {
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_57_57, ((MR_Box) (transform_hlds__untupling__V_29_29)), ((MR_Box) (transform_hlds__untupling__V_52_52)));
                }
                if (transform_hlds__untupling__succeeded)
                  {
                    transform_hlds__untupling__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    transform_hlds__untupling__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    transform_hlds__untupling__V_30_30 = (MR_Word) &transform_hlds__untupling_scalar_common_2[5];
                    {
                      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_53_53);
                    }
                    {
                      transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(transform_hlds__untupling__V_30_30, transform_hlds__untupling__V_53_53);
                    }
                    if (transform_hlds__untupling__succeeded)
                      {
                        {
                          transform_hlds__untupling__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_33_33, 1) = NULL;
                        }
                        {
                          hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_54_54);
                        }
                        {
                          transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(transform_hlds__untupling__V_33_33, transform_hlds__untupling__V_54_54);
                        }
                        if (transform_hlds__untupling__succeeded)
                          {
                            {
                              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__TypeVarSet_16, &transform_hlds__untupling__ExistQVars_17, &transform_hlds__untupling__ArgTypes_18);
                            }
                            transform_hlds__untupling__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
                            {
                              transform_hlds__untupling__succeeded = mercury__varset__is_empty_1_p_0(transform_hlds__untupling__TypeCtorInfo_38_38, transform_hlds__untupling__TypeVarSet_16);
                            }
                            if (transform_hlds__untupling__succeeded)
                              {
                                transform_hlds__untupling__succeeded = (transform_hlds__untupling__ExistQVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (transform_hlds__untupling__succeeded)
                                  {
                                    transform_hlds__untupling__succeeded = transform_hlds__untupling__at_least_one_expandable_type_2_p_0(transform_hlds__untupling__ArgTypes_18, transform_hlds__untupling__TypeTable_12);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    if (transform_hlds__untupling__succeeded)
      {
        MR_Word transform_hlds__untupling__ProcIds_19;
        MR_Word transform_hlds__untupling__V_34_34;
        MR_Box transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21;
        MR_Box transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23;
        MR_Box transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25;

        {
          transform_hlds__untupling__ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__untupling__PredInfo_13);
        }
        {
          transform_hlds__untupling__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 1) = ((MR_Box) (transform_hlds__untupling__expand_args_in_pred_7_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 3) = ((MR_Box) (transform_hlds__untupling__PredId_8));
        }
        {
          mercury__list__foldl3_8_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, transform_hlds__untupling__V_34_34, transform_hlds__untupling__ProcIds_19, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22)), &transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_Counter_0_24)), &transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25);
        }
        *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21);
        *transform_hlds__untupling__STATE_VARIABLE_TransformMap_23 = ((MR_Word) transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23);
        *transform_hlds__untupling__STATE_VARIABLE_Counter_25 = ((MR_Word) transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25);
      }
    else
      {
        *transform_hlds__untupling__STATE_VARIABLE_Counter_25 = transform_hlds__untupling__STATE_VARIABLE_Counter_0_24;
        *transform_hlds__untupling__STATE_VARIABLE_TransformMap_23 = transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22;
        *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20;
      }
  }
}

static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box * transform_hlds__untupling__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
    MR_Word transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11;

    {
      transform_hlds__untupling__fix_calls_in_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11);
    }
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11));
  }
}

static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
  MR_Box transform_hlds__untupling__closure_arg,
  MR_Box transform_hlds__untupling__wrapper_arg_1,
  MR_Box transform_hlds__untupling__wrapper_arg_2,
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
  MR_Box transform_hlds__untupling__wrapper_arg_4,
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
  MR_Box transform_hlds__untupling__wrapper_arg_6,
  MR_Box * transform_hlds__untupling__wrapper_arg_7)
{
  {
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
    MR_Word transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21;
    MR_Word transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23;
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25;

    {
      transform_hlds__untupling__expand_args_in_pred_7_p_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21, ((MR_Word) transform_hlds__untupling__wrapper_arg_4), &transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23, ((MR_Word) transform_hlds__untupling__wrapper_arg_6), &transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25);
    }
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21));
    *transform_hlds__untupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23));
    *transform_hlds__untupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25));
  }
}

void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0(
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool transform_hlds__untupling__succeeded;
    MR_Word transform_hlds__untupling__TransformMap_7;
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12;
    MR_Word transform_hlds__untupling__PredIds_18;
    MR_Word transform_hlds__untupling__V_22_22;
    MR_Word transform_hlds__untupling__V_23_23;
    MR_Word transform_hlds__untupling__PredIds_42;
    MR_Word transform_hlds__untupling__V_43_43;
    MR_Word transform_hlds__untupling__V_19_19;
    MR_Box transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12;
    MR_Box transform_hlds__untupling__conv4_TransformMap_7;
    MR_Box transform_hlds__untupling__conv3_V_19_19;
    MR_Box transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__untupling__PredIds_18);
    }
    {
      transform_hlds__untupling__V_22_22 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0);
    }
    {
      transform_hlds__untupling__V_23_23 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[2], transform_hlds__untupling__PredIds_18, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12, ((MR_Box) (transform_hlds__untupling__V_22_22)), &transform_hlds__untupling__conv4_TransformMap_7, ((MR_Box) (transform_hlds__untupling__V_23_23)), &transform_hlds__untupling__conv3_V_19_19);
    }
    transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12);
    transform_hlds__untupling__TransformMap_7 = ((MR_Word) transform_hlds__untupling__conv4_TransformMap_7);
    transform_hlds__untupling__V_19_19 = ((MR_Word) transform_hlds__untupling__conv3_V_19_19);
    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12, &transform_hlds__untupling__PredIds_42);
    }
    {
      transform_hlds__untupling__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 1) = ((MR_Box) (transform_hlds__untupling__untuple_arguments_4_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 3) = ((MR_Box) (transform_hlds__untupling__TransformMap_7));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__untupling__V_43_43, transform_hlds__untupling__PredIds_42, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12)), &transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9);
    }
    *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.untupling. */
