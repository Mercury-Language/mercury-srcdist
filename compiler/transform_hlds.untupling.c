/*
** Automatically generated from `untupling.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "transform_hlds.untupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0;

#line 140 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 143 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0[2];

#line 146 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0;

#line 149 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1;

#line 152 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[1];

#line 155 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[1];

#line 158 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0[2];

#line 161 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0[2];

#line 164 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0[2];

#line 167 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0;

#line 170 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0[2];

#line 173 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0;

#line 176 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1];

#line 179 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1];

#line 182 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0[1];

#line 185 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0[1];

#line 188 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 191 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 194 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 197 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
#line 200 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 202 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 205 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
#line 208 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 210 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 212 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 215 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
#line 218 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 220 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 223 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
#line 226 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 228 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 230 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 233 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
#line 236 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 238 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 241 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
#line 244 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 246 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 248 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 251 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
#line 254 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 256 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 259 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
#line 262 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 264 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 266 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 763 "untupling.m"
static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__763__1_1_f_0(
#line 763 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_28);

#line 214 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
#line 214 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 214 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 214 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 214 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
#line 214 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 214 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 135 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
#line 135 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 135 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 133 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
#line 133 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 133 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 133 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 133 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
#line 133 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 133 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 701 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
#line 701 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 701 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 701 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 701 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
#line 701 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 701 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 763 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
#line 763 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 763 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1);

#line 716 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
#line 716 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode_6,
#line 716 "untupling.m"
  MR_Word transform_hlds__untupling__ArgType_7,
#line 716 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_8,
#line 716 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_9,
#line 716 "untupling.m"
  MR_Word * transform_hlds__untupling__Expansion_10);

#line 652 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__5_5,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__6_6,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__7_7,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__8_8,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__9_9,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_10,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_11);

#line 643 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_10_p_0(
#line 643 "untupling.m"
  MR_Word transform_hlds__untupling__Args0_11,
#line 643 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_12,
#line 643 "untupling.m"
  MR_Word * transform_hlds__untupling__Args_13,
#line 643 "untupling.m"
  MR_Word * transform_hlds__untupling__EnterUnifs_14,
#line 643 "untupling.m"
  MR_Word * transform_hlds__untupling__ExitUnifs_15,
#line 643 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19,
#line 643 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_20,
#line 643 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21,
#line 643 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_22,
#line 643 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_18);

#line 627 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
#line 627 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 627 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 627 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 627 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 627 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 627 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 627 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 627 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 615 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
#line 615 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 615 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 615 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 615 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 615 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 615 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 615 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 615 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 598 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
#line 598 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 598 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 598 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 598 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 598 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 598 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 598 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 598 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 496 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
#line 496 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_9,
#line 496 "untupling.m"
  MR_Word * transform_hlds__untupling__Goal_10,
#line 496 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74,
#line 496 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_75,
#line 496 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76,
#line 496 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_77,
#line 496 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_13,
#line 496 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_14);

#line 468 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
#line 468 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_6,
#line 468 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_7,
#line 468 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_8,
#line 468 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18,
#line 468 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19);

#line 466 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
#line 466 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 466 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 466 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 466 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3);

#line 460 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
#line 460 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_5,
#line 460 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_6,
#line 460 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10,
#line 460 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11);

#line 402 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
#line 402 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_13,
#line 402 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_14,
#line 402 "untupling.m"
  MR_Word transform_hlds__untupling__PredInfo_15,
#line 402 "untupling.m"
  MR_Word transform_hlds__untupling__ProcInfo_16,
#line 402 "untupling.m"
  MR_Integer transform_hlds__untupling__Counter_17,
#line 402 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredId_18,
#line 402 "untupling.m"
  MR_Integer * transform_hlds__untupling__AuxProcId_19,
#line 402 "untupling.m"
  MR_Word * transform_hlds__untupling__CallAux_20,
#line 402 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredInfo_21,
#line 402 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxProcInfo_22,
#line 402 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_49,
#line 402 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_50);

#line 374 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
#line 374 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 374 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 374 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 374 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4);

#line 350 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
#line 350 "untupling.m"
  MR_String transform_hlds__untupling__ParentName_1,
#line 350 "untupling.m"
  MR_Integer transform_hlds__untupling__Num_2,
#line 350 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 350 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 350 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5,
#line 350 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_6,
#line 350 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7,
#line 350 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_8);

#line 316 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 316 "untupling.m"
  MR_Word * transform_hlds__untupling__MaybeHeadVarsAndArgModes_15,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_30,
#line 316 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_31,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32,
#line 316 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_33,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34,
#line 316 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_35,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_19,
#line 316 "untupling.m"
  MR_Word * transform_hlds__untupling__ContainerTypes_20,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21);

#line 294 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 294 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 294 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_28,
#line 294 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_29,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30,
#line 294 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_31,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32,
#line 294 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_33,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_20,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21);

#line 276 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 276 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 276 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__5_5,
#line 276 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__7_7,
#line 276 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__8_8,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__9_9,
#line 276 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__10_10,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_11,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_12);

#line 259 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVars0_13,
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_14,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_17,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_29,
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_31,
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_22,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__UntupleMap_23);

#line 216 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_9,
#line 216 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_10,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35,
#line 216 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37,
#line 216 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_38,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_39,
#line 216 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_40);

#line 763 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
#line 763 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 763 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1);

#line 198 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
#line 198 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 198 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_5);

#line 192 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
#line 192 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 192 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 192 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 192 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 192 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 192 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 192 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 192 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7);

#line 168 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
#line 168 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_8,
#line 168 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20,
#line 168 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21,
#line 168 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22,
#line 168 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_23,
#line 168 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_24,
#line 168 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_25);

#line 458 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
#line 458 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 458 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 458 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 458 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3);

#line 165 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
#line 165 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 165 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 165 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 165 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 165 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 165 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 165 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 165 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7);


static /* final */ const MR_Box transform_hlds__untupling_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_2[6][2];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_3[1][10];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_4[1][7];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_5[1][11];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_6[1][5];

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_7[1][8];




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

static /* final */ const MR_Box transform_hlds__untupling_scalar_common_7[1][8] = {
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 987 "transform_hlds.untupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0
  }
};

#line 996 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1004 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1010 "transform_hlds.untupling.c"
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
  NULL
};

#line 1025 "transform_hlds.untupling.c"
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
  NULL
};

#line 1040 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1
};

#line 1045 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0
};

#line 1050 "transform_hlds.untupling.c"
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

#line 1064 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0[2] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0,
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1
};

#line 1070 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1076 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_expansion_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__untupling____Unify____expansion_result_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____expansion_result_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "expansion_result",
  {
    transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0
  },
  {
    transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0
};

#line 1097 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0
  }
};

#line 1106 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transform_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__untupling____Unify____transform_map_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____transform_map_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "transform_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1127 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1133 "transform_hlds.untupling.c"
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
  NULL
};

#line 1148 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

#line 1153 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0
  }
};

#line 1162 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

#line 1167 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0[1] = {
  (MR_Integer) 0
};

#line 1172 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__untupling____Unify____transformed_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____transformed_proc_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "transformed_proc",
  {
    transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0
  },
  {
    transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0
};

#line 1193 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1201 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1209 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1218 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_untuple_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__untupling____Unify____untuple_map_0_0_10001)),
  ((MR_Box) (transform_hlds__untupling____Compare____untuple_map_0_0_10001)),
  (MR_String) "transform_hlds.untupling",
  (MR_String) "untuple_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1239 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
#line 1242 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1244 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1246 "transform_hlds.untupling.c"
{
#line 1248 "transform_hlds.untupling.c"
  {
#line 1250 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1253 "transform_hlds.untupling.c"
    {
#line 1255 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____expansion_result_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1258 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1260 "transform_hlds.untupling.c"
  }
#line 1262 "transform_hlds.untupling.c"
}

#line 1265 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
#line 1268 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1270 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1272 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1274 "transform_hlds.untupling.c"
{
#line 1276 "transform_hlds.untupling.c"
  {
#line 1278 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1281 "transform_hlds.untupling.c"
    {
#line 1283 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____expansion_result_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1286 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1288 "transform_hlds.untupling.c"
  }
#line 1290 "transform_hlds.untupling.c"
}

#line 1293 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
#line 1296 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1298 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1300 "transform_hlds.untupling.c"
{
#line 1302 "transform_hlds.untupling.c"
  {
#line 1304 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1307 "transform_hlds.untupling.c"
    {
#line 1309 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____transform_map_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1312 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1314 "transform_hlds.untupling.c"
  }
#line 1316 "transform_hlds.untupling.c"
}

#line 1319 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
#line 1322 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1324 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1326 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1328 "transform_hlds.untupling.c"
{
#line 1330 "transform_hlds.untupling.c"
  {
#line 1332 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1335 "transform_hlds.untupling.c"
    {
#line 1337 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____transform_map_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1340 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1342 "transform_hlds.untupling.c"
  }
#line 1344 "transform_hlds.untupling.c"
}

#line 1347 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
#line 1350 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1352 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1354 "transform_hlds.untupling.c"
{
#line 1356 "transform_hlds.untupling.c"
  {
#line 1358 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1361 "transform_hlds.untupling.c"
    {
#line 1363 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____transformed_proc_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1366 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1368 "transform_hlds.untupling.c"
  }
#line 1370 "transform_hlds.untupling.c"
}

#line 1373 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
#line 1376 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1378 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1380 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1382 "transform_hlds.untupling.c"
{
#line 1384 "transform_hlds.untupling.c"
  {
#line 1386 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1389 "transform_hlds.untupling.c"
    {
#line 1391 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____transformed_proc_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1394 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1396 "transform_hlds.untupling.c"
  }
#line 1398 "transform_hlds.untupling.c"
}

#line 1401 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
#line 1404 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1406 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1408 "transform_hlds.untupling.c"
{
#line 1410 "transform_hlds.untupling.c"
  {
#line 1412 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1415 "transform_hlds.untupling.c"
    {
#line 1417 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____untuple_map_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1420 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1422 "transform_hlds.untupling.c"
  }
#line 1424 "transform_hlds.untupling.c"
}

#line 1427 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
#line 1430 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1432 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1434 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1436 "transform_hlds.untupling.c"
{
#line 1438 "transform_hlds.untupling.c"
  {
#line 1440 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1443 "transform_hlds.untupling.c"
    {
#line 1445 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____untuple_map_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1448 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1450 "transform_hlds.untupling.c"
  }
#line 1452 "transform_hlds.untupling.c"
}

#line 763 "untupling.m"
static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__763__1_1_f_0(
#line 763 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_28)
#line 763 "untupling.m"
{
#line 763 "untupling.m"
  {
#line 763 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 763 "untupling.m"
    MR_Word transform_hlds__untupling__HeadVar__2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 1)));
#line 763 "untupling.m"
    MR_Word transform_hlds__untupling__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 0)));
#line 763 "untupling.m"
    MR_Word transform_hlds__untupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 2)));
#line 763 "untupling.m"
    MR_Word transform_hlds__untupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_28, (MR_Integer) 3)));

#line 763 "untupling.m"
    return transform_hlds__untupling__HeadVar__2_29;
#line 763 "untupling.m"
  }
#line 763 "untupling.m"
}

#line 214 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
#line 214 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 214 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 214 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 214 "untupling.m"
{
#line 214 "untupling.m"
  {
#line 214 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 214 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_4 = transform_hlds__untupling__HeadVar__2_2;
#line 214 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_5 = transform_hlds__untupling__HeadVar__3_3;

#line 214 "untupling.m"
    {
#line 214 "untupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_5)));
#line 214 "untupling.m"
      return;
    }
#line 214 "untupling.m"
  }
#line 214 "untupling.m"
}

#line 214 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
#line 214 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 214 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 214 "untupling.m"
{
#line 214 "untupling.m"
  {
#line 214 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 214 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_3 = transform_hlds__untupling__HeadVar__1_1;
#line 214 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_4 = transform_hlds__untupling__HeadVar__2_2;

#line 214 "untupling.m"
    {
#line 214 "untupling.m"
      return transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_4)));
    }
#line 214 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 214 "untupling.m"
  }
#line 214 "untupling.m"
}

#line 135 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
#line 135 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 135 "untupling.m"
{
#line 135 "untupling.m"
  {
#line 135 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 135 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_9 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;
#line 135 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_10 = (MR_Integer) transform_hlds__untupling__HeadVar__3_3;

#line 135 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_9 == transform_hlds__untupling__CastY_10);
#line 135 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 1568 "transform_hlds.untupling.c"
      *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "untupling.m"
    else
#line 135 "untupling.m"
      {
#line 135 "untupling.m"
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 135 "untupling.m"
        MR_Word transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 135 "untupling.m"
        MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 135 "untupling.m"
        MR_Word transform_hlds__untupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 135 "untupling.m"
        MR_Word transform_hlds__untupling__V_8_8;

#line 135 "untupling.m"
        {
#line 135 "untupling.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__untupling__V_8_8, transform_hlds__untupling__V_4_4, transform_hlds__untupling__V_6_6);
        }
#line 1590 "transform_hlds.untupling.c"
        transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_8_8 == (MR_Integer) 0);
#line 135 "untupling.m"
        transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 135 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 135 "untupling.m"
          *transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__V_8_8;
#line 135 "untupling.m"
        else
#line 135 "untupling.m"
          {
#line 135 "untupling.m"
            hlds__hlds_goal____Compare____hlds_goal_0_0(transform_hlds__untupling__HeadVar__1_1, transform_hlds__untupling__V_5_5, transform_hlds__untupling__V_7_7);
#line 135 "untupling.m"
            return;
          }
#line 135 "untupling.m"
      }
#line 135 "untupling.m"
  }
#line 135 "untupling.m"
}

#line 135 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 135 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 135 "untupling.m"
{
#line 135 "untupling.m"
  {
#line 135 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 135 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_7 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 135 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_8 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 135 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_7 == transform_hlds__untupling__CastY_8);
#line 135 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 135 "untupling.m"
      transform_hlds__untupling__succeeded = MR_TRUE;
#line 135 "untupling.m"
    else
#line 135 "untupling.m"
      {
#line 135 "untupling.m"
        MR_Word transform_hlds__untupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "untupling.m"
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 135 "untupling.m"
        MR_Word transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 135 "untupling.m"
        MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));

#line 1651 "transform_hlds.untupling.c"
        {
#line 1653 "transform_hlds.untupling.c"
          transform_hlds__untupling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__untupling__V_3_3, transform_hlds__untupling__V_5_5);
        }
#line 135 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 1658 "transform_hlds.untupling.c"
          {
#line 1660 "transform_hlds.untupling.c"
            return transform_hlds__untupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__untupling__V_4_4, transform_hlds__untupling__V_6_6);
          }
#line 135 "untupling.m"
      }
#line 135 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 135 "untupling.m"
  }
#line 135 "untupling.m"
}

#line 133 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
#line 133 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 133 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 133 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 133 "untupling.m"
{
#line 133 "untupling.m"
  {
#line 133 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 133 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_4 = transform_hlds__untupling__HeadVar__2_2;
#line 133 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_5 = transform_hlds__untupling__HeadVar__3_3;

#line 133 "untupling.m"
    {
#line 133 "untupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_5)));
#line 133 "untupling.m"
      return;
    }
#line 133 "untupling.m"
  }
#line 133 "untupling.m"
}

#line 133 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
#line 133 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 133 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 133 "untupling.m"
{
#line 133 "untupling.m"
  {
#line 133 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 133 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_3 = transform_hlds__untupling__HeadVar__1_1;
#line 133 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_4 = transform_hlds__untupling__HeadVar__2_2;

#line 133 "untupling.m"
    {
#line 133 "untupling.m"
      return transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_4)));
    }
#line 133 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 133 "untupling.m"
  }
#line 133 "untupling.m"
}

#line 701 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
#line 701 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 701 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 701 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 701 "untupling.m"
{
#line 701 "untupling.m"
  {
#line 701 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 701 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_13 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;
#line 701 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_14 = (MR_Integer) transform_hlds__untupling__HeadVar__3_3;

#line 701 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_13 == transform_hlds__untupling__CastY_14);
#line 701 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 1758 "transform_hlds.untupling.c"
      *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 701 "untupling.m"
    else
#line 701 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "untupling.m"
          *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 701 "untupling.m"
        else
#line 1770 "transform_hlds.untupling.c"
          *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 2;
#line 701 "untupling.m"
      else
#line 701 "untupling.m"
        {
#line 701 "untupling.m"
          MR_Word transform_hlds__untupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 701 "untupling.m"
          MR_Word transform_hlds__untupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));

#line 701 "untupling.m"
          if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1783 "transform_hlds.untupling.c"
            *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 1;
#line 701 "untupling.m"
          else
#line 701 "untupling.m"
            {
#line 701 "untupling.m"
              MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 701 "untupling.m"
              MR_Word transform_hlds__untupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 701 "untupling.m"
              MR_Word transform_hlds__untupling__V_8_8;

#line 701 "untupling.m"
              {
#line 701 "untupling.m"
                parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__untupling__V_8_8, transform_hlds__untupling__V_18_18, transform_hlds__untupling__V_6_6);
              }
#line 1801 "transform_hlds.untupling.c"
              transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_8_8 == (MR_Integer) 0);
#line 701 "untupling.m"
              transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 701 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 701 "untupling.m"
                *transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__V_8_8;
#line 701 "untupling.m"
              else
#line 701 "untupling.m"
                {
#line 701 "untupling.m"
                  {
#line 701 "untupling.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[2], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__V_17_17)), ((MR_Box) (transform_hlds__untupling__V_7_7)));
#line 701 "untupling.m"
                    return;
                  }
#line 701 "untupling.m"
                }
#line 701 "untupling.m"
            }
#line 701 "untupling.m"
        }
#line 701 "untupling.m"
  }
#line 701 "untupling.m"
}

#line 701 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
#line 701 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 701 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 701 "untupling.m"
{
#line 701 "untupling.m"
  {
#line 701 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 701 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_9 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 701 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_10 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 701 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_9 == transform_hlds__untupling__CastY_10);
#line 701 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 701 "untupling.m"
      transform_hlds__untupling__succeeded = MR_TRUE;
#line 701 "untupling.m"
    else
#line 701 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "untupling.m"
        {
#line 701 "untupling.m"
          MR_Integer transform_hlds__untupling__CastX_7 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 701 "untupling.m"
          MR_Integer transform_hlds__untupling__CastY_8 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 701 "untupling.m"
          transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastY_8 == transform_hlds__untupling__CastX_7);
#line 701 "untupling.m"
        }
#line 701 "untupling.m"
      else
#line 701 "untupling.m"
        {
#line 701 "untupling.m"
          MR_Word transform_hlds__untupling__TypeInfo_12_12;
#line 701 "untupling.m"
          MR_Word transform_hlds__untupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 701 "untupling.m"
          MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 701 "untupling.m"
          MR_Word transform_hlds__untupling__V_5_5;
#line 701 "untupling.m"
          MR_Word transform_hlds__untupling__V_6_6;

#line 701 "untupling.m"
          transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 701 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 701 "untupling.m"
            {
#line 701 "untupling.m"
              transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 701 "untupling.m"
              transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1895 "transform_hlds.untupling.c"
              {
#line 1897 "transform_hlds.untupling.c"
                transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__untupling__V_3_3, transform_hlds__untupling__V_5_5);
              }
#line 701 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 701 "untupling.m"
                {
#line 1904 "transform_hlds.untupling.c"
                  transform_hlds__untupling__TypeInfo_12_12 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 1906 "transform_hlds.untupling.c"
                  {
#line 1908 "transform_hlds.untupling.c"
                    return transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_12_12, ((MR_Box) (transform_hlds__untupling__V_4_4)), ((MR_Box) (transform_hlds__untupling__V_6_6)));
                  }
#line 701 "untupling.m"
                }
#line 701 "untupling.m"
            }
#line 701 "untupling.m"
        }
#line 701 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 701 "untupling.m"
  }
#line 701 "untupling.m"
}

#line 763 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
#line 763 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 763 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1)
#line 763 "untupling.m"
{
#line 763 "untupling.m"
  {
#line 763 "untupling.m"
    MR_Box transform_hlds__untupling__wrapper_arg_2;
#line 763 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 763 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_HeadVar__2_29;

#line 763 "untupling.m"
    {
#line 763 "untupling.m"
      transform_hlds__untupling__conv0_HeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__763__1_1_f_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1));
    }
#line 763 "untupling.m"
    transform_hlds__untupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__2_29));
#line 763 "untupling.m"
    return transform_hlds__untupling__wrapper_arg_2;
#line 763 "untupling.m"
  }
#line 763 "untupling.m"
}

#line 716 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
#line 716 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode_6,
#line 716 "untupling.m"
  MR_Word transform_hlds__untupling__ArgType_7,
#line 716 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_8,
#line 716 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_9,
#line 716 "untupling.m"
  MR_Word * transform_hlds__untupling__Expansion_10)
#line 716 "untupling.m"
{
#line 722 "untupling.m"
  {
#line 722 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 731 "untupling.m"
    {
#line 731 "untupling.m"
      MR_Word transform_hlds__untupling__V_11_11;

#line 731 "untupling.m"
      {
#line 731 "untupling.m"
        transform_hlds__untupling__V_11_11 = parse_tree__prog_mode__in_mode_0_f_0();
      }
#line 731 "untupling.m"
      {
#line 731 "untupling.m"
        transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_6, transform_hlds__untupling__V_11_11);
      }
#line 731 "untupling.m"
    }
#line 731 "untupling.m"
    if (!(transform_hlds__untupling__succeeded))
#line 732 "untupling.m"
      {
#line 732 "untupling.m"
        MR_Word transform_hlds__untupling__V_12_12;

#line 732 "untupling.m"
        {
#line 732 "untupling.m"
          transform_hlds__untupling__V_12_12 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 732 "untupling.m"
        {
#line 732 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_6, transform_hlds__untupling__V_12_12);
        }
#line 732 "untupling.m"
      }
#line 722 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 746 "untupling.m"
      {
#line 746 "untupling.m"
        MR_Word transform_hlds__untupling__TypeArgs_20;
#line 740 "untupling.m"
        MR_Word transform_hlds__untupling__TypeCtor_19;

#line 740 "untupling.m"
        {
#line 740 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__ArgType_7, &transform_hlds__untupling__TypeCtor_19, &transform_hlds__untupling__TypeArgs_20);
        }
#line 740 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 741 "untupling.m"
          {
#line 741 "untupling.m"
            transform_hlds__untupling__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__untupling__TypeCtor_19);
          }
#line 746 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 743 "untupling.m"
          {
#line 743 "untupling.m"
            MR_Integer transform_hlds__untupling__Arity_21;
#line 743 "untupling.m"
            MR_Word transform_hlds__untupling__ConsId_22;

#line 743 "untupling.m"
            {
#line 743 "untupling.m"
              transform_hlds__untupling__Arity_21 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__TypeArgs_20);
            }
#line 744 "untupling.m"
            {
#line 744 "untupling.m"
              transform_hlds__untupling__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 744 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_22, 1) = ((MR_Box) (transform_hlds__untupling__Arity_21));
#line 744 "untupling.m"
            }
#line 745 "untupling.m"
            {
#line 745 "untupling.m"
              MR_Word base;
#line 745 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "untupling.m"
              *transform_hlds__untupling__Expansion_10 = base;
#line 745 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_22));
#line 745 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__TypeArgs_20));
#line 745 "untupling.m"
            }
#line 743 "untupling.m"
          }
#line 746 "untupling.m"
        else
#line 765 "untupling.m"
          {
#line 765 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtorName_26;
#line 765 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtorArgs_27;
#line 765 "untupling.m"
            MR_Word transform_hlds__untupling__TypeCtor_43;
#line 749 "untupling.m"
            MR_Word transform_hlds__untupling__TypeInfo_65_75;
#line 749 "untupling.m"
            MR_Word transform_hlds__untupling__TypeInfo_66_76;
#line 749 "untupling.m"
            MR_Word transform_hlds__untupling__TypeDefn_23;
#line 749 "untupling.m"
            MR_Word transform_hlds__untupling__TypeBody_24;
#line 749 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtor_25;
#line 749 "untupling.m"
            MR_Word transform_hlds__untupling__V_33_33;
#line 749 "untupling.m"
            MR_Word transform_hlds__untupling__V_34_34;
#line 749 "untupling.m"
            MR_Word transform_hlds__untupling__V_35_35;
#line 749 "untupling.m"
            MR_Word transform_hlds__untupling__V_36_36;
#line 749 "untupling.m"
            MR_Word transform_hlds__untupling__V_73_73;
#line 749 "untupling.m"
            MR_Word transform_hlds__untupling__V_74_74;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_46_46;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_47_47;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_48_48;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_49_49;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_50_50;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_51_51;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_52_52;
#line 753 "untupling.m"
            MR_Word transform_hlds__untupling__V_53_53;
#line 754 "untupling.m"
            MR_Word transform_hlds__untupling__V_54_54;
#line 754 "untupling.m"
            MR_Word transform_hlds__untupling__V_57_57;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_28_28;
#line 757 "untupling.m"
            MR_Word transform_hlds__untupling__V_29_29;
#line 759 "untupling.m"
            MR_Word transform_hlds__untupling__TypeCtorInfo_60_70;

#line 749 "untupling.m"
            {
#line 749 "untupling.m"
              transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__ArgType_7, &transform_hlds__untupling__TypeCtor_43, &transform_hlds__untupling__V_73_73);
            }
#line 749 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
              {
#line 2141 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeInfo_65_75 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 749 "untupling.m"
                {
#line 749 "untupling.m"
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_65_75, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__untupling__V_73_73)));
                }
#line 749 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
                  {
#line 750 "untupling.m"
                    {
#line 750 "untupling.m"
                      transform_hlds__untupling__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__untupling__TypeTable_9, transform_hlds__untupling__TypeCtor_43, &transform_hlds__untupling__TypeDefn_23);
                    }
#line 749 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
                      {
#line 751 "untupling.m"
                        transform_hlds__untupling__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 751 "untupling.m"
                        {
#line 751 "untupling.m"
                          hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__untupling__TypeDefn_23, &transform_hlds__untupling__V_74_74);
                        }
#line 2168 "transform_hlds.untupling.c"
                        transform_hlds__untupling__TypeInfo_66_76 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 751 "untupling.m"
                        {
#line 751 "untupling.m"
                          transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_66_76, ((MR_Box) (transform_hlds__untupling__V_33_33)), ((MR_Box) (transform_hlds__untupling__V_74_74)));
                        }
#line 749 "untupling.m"
                        if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
                          {
#line 752 "untupling.m"
                            {
#line 752 "untupling.m"
                              hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__untupling__TypeDefn_23, &transform_hlds__untupling__TypeBody_24);
                            }
#line 753 "untupling.m"
                            transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__TypeBody_24)) == (MR_mktag((MR_Integer) 1)));
#line 753 "untupling.m"
                            if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                              {
#line 753 "untupling.m"
                                transform_hlds__untupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 0)));
#line 753 "untupling.m"
                                transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 1)));
#line 753 "untupling.m"
                                transform_hlds__untupling__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 2)));
#line 753 "untupling.m"
                                transform_hlds__untupling__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 3)));
#line 753 "untupling.m"
                                transform_hlds__untupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 4)));
#line 753 "untupling.m"
                                transform_hlds__untupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 5)));
#line 753 "untupling.m"
                                transform_hlds__untupling__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 753 "untupling.m"
                                transform_hlds__untupling__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 753 "untupling.m"
                                transform_hlds__untupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 7)));
#line 753 "untupling.m"
                                transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 753 "untupling.m"
                                if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                                  {
#line 753 "untupling.m"
                                    transform_hlds__untupling__SingleCtor_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_34_34, (MR_Integer) 0)));
#line 753 "untupling.m"
                                    transform_hlds__untupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_34_34, (MR_Integer) 1)));
#line 753 "untupling.m"
                                    transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "untupling.m"
                                    if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
                                      {
#line 754 "untupling.m"
                                        transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 0)));
#line 754 "untupling.m"
                                        transform_hlds__untupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 1)));
#line 754 "untupling.m"
                                        transform_hlds__untupling__SingleCtorName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 2)));
#line 754 "untupling.m"
                                        transform_hlds__untupling__SingleCtorArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 3)));
#line 754 "untupling.m"
                                        transform_hlds__untupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 4)));
#line 754 "untupling.m"
                                        transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "untupling.m"
                                        if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
                                          {
#line 757 "untupling.m"
                                            transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__SingleCtorArgs_27)) == (MR_mktag((MR_Integer) 1)));
#line 757 "untupling.m"
                                            if (transform_hlds__untupling__succeeded)
#line 757 "untupling.m"
                                              {
#line 757 "untupling.m"
                                                transform_hlds__untupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_27, (MR_Integer) 0)));
#line 757 "untupling.m"
                                                transform_hlds__untupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_27, (MR_Integer) 1)));
#line 2250 "transform_hlds.untupling.c"
                                                transform_hlds__untupling__TypeCtorInfo_60_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 759 "untupling.m"
                                                {
#line 759 "untupling.m"
                                                  transform_hlds__untupling__succeeded = mercury__list__member_2_p_0(transform_hlds__untupling__TypeCtorInfo_60_70, ((MR_Box) (transform_hlds__untupling__ArgType_7)), transform_hlds__untupling__ContainerTypes_8);
                                                }
#line 759 "untupling.m"
                                                transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 757 "untupling.m"
                                              }
#line 749 "untupling.m"
                                          }
#line 749 "untupling.m"
                                      }
#line 753 "untupling.m"
                                  }
#line 753 "untupling.m"
                              }
#line 749 "untupling.m"
                          }
#line 749 "untupling.m"
                      }
#line 749 "untupling.m"
                  }
#line 749 "untupling.m"
              }
#line 765 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 761 "untupling.m"
              {
#line 761 "untupling.m"
                MR_Word transform_hlds__untupling__TypeCtorInfo_61_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 761 "untupling.m"
                MR_Word transform_hlds__untupling__ExpandedTypes_30;
#line 761 "untupling.m"
                MR_Integer transform_hlds__untupling__Arity_41;
#line 761 "untupling.m"
                MR_Word transform_hlds__untupling__ConsId_42;

#line 761 "untupling.m"
                {
#line 761 "untupling.m"
                  transform_hlds__untupling__Arity_41 = mercury__list__length_1_f_0(transform_hlds__untupling__TypeCtorInfo_61_71, transform_hlds__untupling__SingleCtorArgs_27);
                }
#line 762 "untupling.m"
                {
#line 762 "untupling.m"
                  transform_hlds__untupling__ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 762 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 762 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 1) = ((MR_Box) (transform_hlds__untupling__SingleCtorName_26));
#line 762 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 2) = ((MR_Box) (transform_hlds__untupling__Arity_41));
#line 762 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 3) = ((MR_Box) (transform_hlds__untupling__TypeCtor_43));
#line 762 "untupling.m"
                }
#line 763 "untupling.m"
                {
#line 763 "untupling.m"
                  transform_hlds__untupling__ExpandedTypes_30 = mercury__list__map_2_f_0(transform_hlds__untupling__TypeCtorInfo_61_71, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[4], transform_hlds__untupling__SingleCtorArgs_27);
                }
#line 764 "untupling.m"
                {
#line 764 "untupling.m"
                  MR_Word base;
#line 764 "untupling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "untupling.m"
                  *transform_hlds__untupling__Expansion_10 = base;
#line 764 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_42));
#line 764 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ExpandedTypes_30));
#line 764 "untupling.m"
                }
#line 761 "untupling.m"
              }
#line 765 "untupling.m"
            else
#line 766 "untupling.m"
              *transform_hlds__untupling__Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "untupling.m"
          }
#line 746 "untupling.m"
      }
#line 722 "untupling.m"
    else
#line 723 "untupling.m"
      *transform_hlds__untupling__Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 722 "untupling.m"
  }
#line 716 "untupling.m"
}

#line 652 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__5_5,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__6_6,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__7_7,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__8_8,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__9_9,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_10,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_11)
#line 652 "untupling.m"
{
#line 656 "untupling.m"
  {
#line 656 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 656 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "untupling.m"
        {
#line 656 "untupling.m"
          *transform_hlds__untupling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "untupling.m"
          *transform_hlds__untupling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "untupling.m"
          *transform_hlds__untupling__HeadVar__9_9 = transform_hlds__untupling__HeadVar__8_8;
#line 656 "untupling.m"
          *transform_hlds__untupling__HeadVar__7_7 = transform_hlds__untupling__HeadVar__6_6;
#line 656 "untupling.m"
        }
#line 656 "untupling.m"
      else
#line 693 "untupling.m"
        {
#line 694 "untupling.m"
          {
#line 694 "untupling.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
#line 694 "untupling.m"
            return;
          }
#line 693 "untupling.m"
        }
#line 656 "untupling.m"
    else
#line 656 "untupling.m"
      {
#line 656 "untupling.m"
        MR_Word transform_hlds__untupling__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 656 "untupling.m"
        MR_Word transform_hlds__untupling__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 656 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 695 "untupling.m"
          {
#line 696 "untupling.m"
            {
#line 696 "untupling.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
#line 696 "untupling.m"
              return;
            }
#line 695 "untupling.m"
          }
#line 656 "untupling.m"
        else
#line 659 "untupling.m"
          {
#line 659 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 659 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 659 "untupling.m"
            MR_Word transform_hlds__untupling__Arg0Type_31;
#line 659 "untupling.m"
            MR_Word transform_hlds__untupling__Expansion_32;

#line 660 "untupling.m"
            {
#line 660 "untupling.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__V_107_107, &transform_hlds__untupling__Arg0Type_31);
            }
#line 661 "untupling.m"
            {
#line 661 "untupling.m"
              transform_hlds__untupling__expand_argument_5_p_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__Arg0Type_31, transform_hlds__untupling__ContainerTypes0_10, transform_hlds__untupling__TypeTable_11, &transform_hlds__untupling__Expansion_32);
            }
#line 686 "untupling.m"
            if ((transform_hlds__untupling__Expansion_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "untupling.m"
              {
#line 687 "untupling.m"
                MR_Word transform_hlds__untupling__Args1_42;

#line 689 "untupling.m"
                {
#line 689 "untupling.m"
                  transform_hlds__untupling__expand_call_args_10_p_0(transform_hlds__untupling__V_106_106, transform_hlds__untupling__ArgModes_23, &transform_hlds__untupling__Args1_42, transform_hlds__untupling__HeadVar__4_4, transform_hlds__untupling__HeadVar__5_5, transform_hlds__untupling__HeadVar__6_6, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__TypeTable_11);
                }
#line 688 "untupling.m"
                {
#line 688 "untupling.m"
                  MR_Word base;
#line 688 "untupling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "untupling.m"
                  *transform_hlds__untupling__HeadVar__3_3 = base;
#line 688 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__V_107_107));
#line 688 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Args1_42));
#line 688 "untupling.m"
                }
#line 687 "untupling.m"
              }
#line 686 "untupling.m"
            else
#line 663 "untupling.m"
              {
#line 663 "untupling.m"
                MR_Word transform_hlds__untupling__TypeCtorInfo_100_100;
#line 663 "untupling.m"
                MR_Word transform_hlds__untupling__ConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_32, (MR_Integer) 0)));
#line 663 "untupling.m"
                MR_Word transform_hlds__untupling__Types_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_32, (MR_Integer) 1)));
#line 663 "untupling.m"
                MR_Integer transform_hlds__untupling__NumVars_35;
#line 663 "untupling.m"
                MR_Word transform_hlds__untupling__ReplacementArgs_36;
#line 663 "untupling.m"
                MR_Word transform_hlds__untupling__ReplacementModes_37;
#line 663 "untupling.m"
                MR_Word transform_hlds__untupling__ContainerTypes_38;
#line 663 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49;
#line 663 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50;
#line 669 "untupling.m"
                MR_Word transform_hlds__untupling__V_104_104;

#line 664 "untupling.m"
                {
#line 664 "untupling.m"
                  transform_hlds__untupling__NumVars_35 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__Types_34);
                }
#line 665 "untupling.m"
                {
#line 665 "untupling.m"
                  mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__NumVars_35, &transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__HeadVar__6_6, &transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49);
                }
#line 666 "untupling.m"
                {
#line 666 "untupling.m"
                  parse_tree__prog_data__vartypes_add_corresponding_lists_4_p_0(transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__Types_34, transform_hlds__untupling__HeadVar__8_8, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50);
                }
#line 2523 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 667 "untupling.m"
                {
#line 667 "untupling.m"
                  mercury__list__duplicate_3_p_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__NumVars_35, ((MR_Box) (transform_hlds__untupling__ArgMode_22)), &transform_hlds__untupling__ReplacementModes_37);
                }
#line 668 "untupling.m"
                {
#line 668 "untupling.m"
                  transform_hlds__untupling__ContainerTypes_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "untupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__untupling__ContainerTypes_38, 0) = ((MR_Box) (transform_hlds__untupling__Arg0Type_31));
#line 668 "untupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__untupling__ContainerTypes_38, 1) = ((MR_Box) (transform_hlds__untupling__ContainerTypes0_10));
#line 668 "untupling.m"
                }
#line 669 "untupling.m"
                {
#line 669 "untupling.m"
                  transform_hlds__untupling__V_104_104 = parse_tree__prog_mode__in_mode_0_f_0();
                }
#line 669 "untupling.m"
                {
#line 669 "untupling.m"
                  transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__V_104_104);
                }
#line 676 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 670 "untupling.m"
                  {
#line 670 "untupling.m"
                    MR_Word transform_hlds__untupling__Unif_39;
#line 670 "untupling.m"
                    MR_Word transform_hlds__untupling__EnterUnifs1_40;
#line 670 "untupling.m"
                    MR_Word transform_hlds__untupling__V_51_51;
#line 670 "untupling.m"
                    MR_Word transform_hlds__untupling__V_52_52;

#line 670 "untupling.m"
                    {
#line 670 "untupling.m"
                      hlds__hlds_goal__deconstruct_functor_4_p_0(transform_hlds__untupling__V_107_107, transform_hlds__untupling__ConsId_33, transform_hlds__untupling__ReplacementArgs_36, &transform_hlds__untupling__Unif_39);
                    }
#line 672 "untupling.m"
                    {
#line 672 "untupling.m"
                      transform_hlds__untupling__V_51_51 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__V_106_106);
                    }
#line 672 "untupling.m"
                    {
#line 672 "untupling.m"
                      transform_hlds__untupling__V_52_52 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__ReplacementModes_37, transform_hlds__untupling__ArgModes_23);
                    }
#line 672 "untupling.m"
                    {
#line 672 "untupling.m"
                      transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__V_51_51, transform_hlds__untupling__V_52_52, transform_hlds__untupling__HeadVar__3_3, &transform_hlds__untupling__EnterUnifs1_40, transform_hlds__untupling__HeadVar__5_5, transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__ContainerTypes_38, transform_hlds__untupling__TypeTable_11);
                    }
#line 671 "untupling.m"
                    {
#line 671 "untupling.m"
                      MR_Word base;
#line 671 "untupling.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "untupling.m"
                      *transform_hlds__untupling__HeadVar__4_4 = base;
#line 671 "untupling.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Unif_39));
#line 671 "untupling.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__EnterUnifs1_40));
#line 671 "untupling.m"
                    }
#line 670 "untupling.m"
                  }
#line 676 "untupling.m"
                else
#line 683 "untupling.m"
                  {
#line 676 "untupling.m"
                    MR_Word transform_hlds__untupling__V_105_105;

#line 676 "untupling.m"
                    {
#line 676 "untupling.m"
                      transform_hlds__untupling__V_105_105 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
#line 676 "untupling.m"
                    {
#line 676 "untupling.m"
                      transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__V_105_105);
                    }
#line 683 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 677 "untupling.m"
                      {
#line 677 "untupling.m"
                        MR_Word transform_hlds__untupling__ExitUnifs1_41;
#line 677 "untupling.m"
                        MR_Word transform_hlds__untupling__V_55_55;
#line 677 "untupling.m"
                        MR_Word transform_hlds__untupling__V_57_57;
#line 677 "untupling.m"
                        MR_Word transform_hlds__untupling__V_58_58;
#line 677 "untupling.m"
                        MR_Word transform_hlds__untupling__Unif_64;

#line 677 "untupling.m"
                        {
#line 677 "untupling.m"
                          hlds__hlds_goal__construct_functor_4_p_0(transform_hlds__untupling__V_107_107, transform_hlds__untupling__ConsId_33, transform_hlds__untupling__ReplacementArgs_36, &transform_hlds__untupling__Unif_64);
                        }
#line 678 "untupling.m"
                        {
#line 678 "untupling.m"
                          transform_hlds__untupling__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "untupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_55_55, 0) = ((MR_Box) (transform_hlds__untupling__Unif_64));
#line 678 "untupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "untupling.m"
                        }
#line 679 "untupling.m"
                        {
#line 679 "untupling.m"
                          transform_hlds__untupling__V_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__V_106_106);
                        }
#line 679 "untupling.m"
                        {
#line 679 "untupling.m"
                          transform_hlds__untupling__V_58_58 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__ReplacementModes_37, transform_hlds__untupling__ArgModes_23);
                        }
#line 679 "untupling.m"
                        {
#line 679 "untupling.m"
                          transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__V_57_57, transform_hlds__untupling__V_58_58, transform_hlds__untupling__HeadVar__3_3, transform_hlds__untupling__HeadVar__4_4, &transform_hlds__untupling__ExitUnifs1_41, transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__ContainerTypes_38, transform_hlds__untupling__TypeTable_11);
                        }
#line 678 "untupling.m"
                        {
#line 678 "untupling.m"
                          *transform_hlds__untupling__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__ExitUnifs1_41, transform_hlds__untupling__V_55_55);
                        }
#line 677 "untupling.m"
                      }
#line 683 "untupling.m"
                    else
#line 684 "untupling.m"
                      {
#line 684 "untupling.m"
                        {
#line 684 "untupling.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "unsupported mode");
#line 684 "untupling.m"
                          return;
                        }
#line 684 "untupling.m"
                      }
#line 683 "untupling.m"
                  }
#line 663 "untupling.m"
              }
#line 659 "untupling.m"
          }
#line 656 "untupling.m"
      }
#line 656 "untupling.m"
  }
#line 652 "untupling.m"
}

#line 643 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_10_p_0(
#line 643 "untupling.m"
  MR_Word transform_hlds__untupling__Args0_11,
#line 643 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_12,
#line 643 "untupling.m"
  MR_Word * transform_hlds__untupling__Args_13,
#line 643 "untupling.m"
  MR_Word * transform_hlds__untupling__EnterUnifs_14,
#line 643 "untupling.m"
  MR_Word * transform_hlds__untupling__ExitUnifs_15,
#line 643 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19,
#line 643 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_20,
#line 643 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21,
#line 643 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_22,
#line 643 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_18)
#line 643 "untupling.m"
{
#line 648 "untupling.m"
  {
#line 648 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 649 "untupling.m"
    {
#line 649 "untupling.m"
      transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__Args0_11, transform_hlds__untupling__ArgModes0_12, transform_hlds__untupling__Args_13, transform_hlds__untupling__EnterUnifs_14, transform_hlds__untupling__ExitUnifs_15, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19, transform_hlds__untupling__STATE_VARIABLE_VarSet_20, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21, transform_hlds__untupling__STATE_VARIABLE_VarTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__untupling__TypeTable_18);
#line 649 "untupling.m"
      return;
    }
#line 648 "untupling.m"
  }
#line 643 "untupling.m"
}

#line 627 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
#line 627 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 627 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 627 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 627 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 627 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 627 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 627 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 627 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 627 "untupling.m"
{
#line 631 "untupling.m"
  {
#line 631 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 631 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "untupling.m"
      {
#line 631 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 631 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 631 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 631 "untupling.m"
      }
#line 631 "untupling.m"
    else
#line 633 "untupling.m"
      {
#line 633 "untupling.m"
        MR_Word transform_hlds__untupling__Case0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 633 "untupling.m"
        MR_Word transform_hlds__untupling__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 633 "untupling.m"
        MR_Word transform_hlds__untupling__Case_19;
#line 633 "untupling.m"
        MR_Word transform_hlds__untupling__Cases_20;
#line 633 "untupling.m"
        MR_Word transform_hlds__untupling__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 0)));
#line 633 "untupling.m"
        MR_Word transform_hlds__untupling__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 1)));
#line 633 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 2)));
#line 633 "untupling.m"
        MR_Word transform_hlds__untupling__Goal_28;
#line 633 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33;
#line 633 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34;

#line 635 "untupling.m"
        {
#line 635 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_27, &transform_hlds__untupling__Goal_28, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 637 "untupling.m"
        {
#line 637 "untupling.m"
          transform_hlds__untupling__Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 637 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 0) = ((MR_Box) (transform_hlds__untupling__MainConsId_25));
#line 637 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 1) = ((MR_Box) (transform_hlds__untupling__OtherConsIds_26));
#line 637 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 2) = ((MR_Box) (transform_hlds__untupling__Goal_28));
#line 637 "untupling.m"
        }
#line 638 "untupling.m"
        {
#line 638 "untupling.m"
          transform_hlds__untupling__fix_calls_in_cases_8_p_0(transform_hlds__untupling__Cases0_18, &transform_hlds__untupling__Cases_20, transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 633 "untupling.m"
        {
#line 633 "untupling.m"
          MR_Word base;
#line 633 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "untupling.m"
          *transform_hlds__untupling__HeadVar__2_2 = base;
#line 633 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Case_19));
#line 633 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Cases_20));
#line 633 "untupling.m"
        }
#line 633 "untupling.m"
      }
#line 631 "untupling.m"
  }
#line 627 "untupling.m"
}

#line 615 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
#line 615 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 615 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 615 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 615 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 615 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 615 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 615 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 615 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 615 "untupling.m"
{
#line 619 "untupling.m"
  {
#line 619 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 619 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "untupling.m"
      {
#line 619 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 619 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 619 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 619 "untupling.m"
      }
#line 619 "untupling.m"
    else
#line 621 "untupling.m"
      {
#line 621 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 621 "untupling.m"
        MR_Word transform_hlds__untupling__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 621 "untupling.m"
        MR_Word transform_hlds__untupling__Goal_19;
#line 621 "untupling.m"
        MR_Word transform_hlds__untupling__Goals_20;
#line 621 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29;
#line 621 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30;

#line 622 "untupling.m"
        {
#line 622 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__Goal_19, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 624 "untupling.m"
        {
#line 624 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_18, &transform_hlds__untupling__Goals_20, transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 621 "untupling.m"
        {
#line 621 "untupling.m"
          MR_Word base;
#line 621 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "untupling.m"
          *transform_hlds__untupling__HeadVar__2_2 = base;
#line 621 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Goal_19));
#line 621 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Goals_20));
#line 621 "untupling.m"
        }
#line 621 "untupling.m"
      }
#line 619 "untupling.m"
  }
#line 615 "untupling.m"
}

#line 598 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
#line 598 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 598 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 598 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 598 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 598 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 598 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 598 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 598 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 598 "untupling.m"
{
#line 602 "untupling.m"
  {
#line 602 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 602 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "untupling.m"
      {
#line 602 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 602 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 602 "untupling.m"
      }
#line 602 "untupling.m"
    else
#line 604 "untupling.m"
      {
#line 604 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 604 "untupling.m"
        MR_Word transform_hlds__untupling__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 604 "untupling.m"
        MR_Word transform_hlds__untupling__Goal1_24;
#line 604 "untupling.m"
        MR_Word transform_hlds__untupling__Goals1_25;
#line 604 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32;
#line 604 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33;
#line 611 "untupling.m"
        MR_Word transform_hlds__untupling__ConjGoals_26;
#line 609 "untupling.m"
        MR_Word transform_hlds__untupling__V_36_36;
#line 609 "untupling.m"
        MR_Word transform_hlds__untupling__V_37_37;
#line 609 "untupling.m"
        MR_Word transform_hlds__untupling__V_27_27;

#line 605 "untupling.m"
        {
#line 605 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__Goal1_24, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 607 "untupling.m"
        {
#line 607 "untupling.m"
          transform_hlds__untupling__fix_calls_in_conj_8_p_0(transform_hlds__untupling__Goals0_18, &transform_hlds__untupling__Goals1_25, transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 609 "untupling.m"
        transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal1_24, (MR_Integer) 0)));
#line 609 "untupling.m"
        transform_hlds__untupling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal1_24, (MR_Integer) 1)));
#line 609 "untupling.m"
        transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 609 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 609 "untupling.m"
          {
#line 609 "untupling.m"
            transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 1)));
#line 609 "untupling.m"
            transform_hlds__untupling__ConjGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 2)));
#line 609 "untupling.m"
            transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_37_37 == (MR_Integer) 0);
#line 609 "untupling.m"
          }
#line 611 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 610 "untupling.m"
          {
#line 610 "untupling.m"
            {
#line 610 "untupling.m"
              *transform_hlds__untupling__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__ConjGoals_26, transform_hlds__untupling__Goals1_25);
            }
#line 610 "untupling.m"
          }
#line 611 "untupling.m"
        else
#line 612 "untupling.m"
          {
#line 612 "untupling.m"
            MR_Word base;
#line 612 "untupling.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "untupling.m"
            *transform_hlds__untupling__HeadVar__2_2 = base;
#line 612 "untupling.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Goal1_24));
#line 612 "untupling.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Goals1_25));
#line 612 "untupling.m"
          }
#line 604 "untupling.m"
      }
#line 602 "untupling.m"
  }
#line 598 "untupling.m"
}

#line 496 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
#line 496 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_9,
#line 496 "untupling.m"
  MR_Word * transform_hlds__untupling__Goal_10,
#line 496 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74,
#line 496 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_75,
#line 496 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76,
#line 496 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_77,
#line 496 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_13,
#line 496 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_14)
#line 496 "untupling.m"
{
#line 500 "untupling.m"
  {
#line 500 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 500 "untupling.m"
    MR_Word transform_hlds__untupling__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_9, (MR_Integer) 0)));
#line 500 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_9, (MR_Integer) 1)));

#line 508 "untupling.m"
    if (((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 0))))
#line 531 "untupling.m"
      {
#line 531 "untupling.m"
        MR_Word transform_hlds__untupling__SubGoal0_53 = (MR_Word) MR_body(((MR_Word) transform_hlds__untupling__GoalExpr0_15), (MR_Integer) 0);
#line 531 "untupling.m"
        MR_Word transform_hlds__untupling__SubGoal_54;
#line 531 "untupling.m"
        MR_Word transform_hlds__untupling__GoalExpr_55;

#line 532 "untupling.m"
        {
#line 532 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__SubGoal0_53, &transform_hlds__untupling__SubGoal_54, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
        }
#line 534 "untupling.m"
        transform_hlds__untupling__GoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__untupling__SubGoal_54);
#line 535 "untupling.m"
        {
#line 535 "untupling.m"
          MR_Word base;
#line 535 "untupling.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "untupling.m"
          *transform_hlds__untupling__Goal_10 = base;
#line 535 "untupling.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_55));
#line 535 "untupling.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 535 "untupling.m"
        }
#line 531 "untupling.m"
      }
#line 508 "untupling.m"
    else
#line 508 "untupling.m"
      if (((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 2))))
#line 509 "untupling.m"
        {
#line 509 "untupling.m"
          MR_Word transform_hlds__untupling__CalleePredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)));
#line 509 "untupling.m"
          MR_Integer transform_hlds__untupling__CalleeProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 509 "untupling.m"
          MR_Word transform_hlds__untupling__OrigArgs_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 509 "untupling.m"
          MR_Word transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 509 "untupling.m"
          MR_Word transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 4)));
#line 509 "untupling.m"
          MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 5)));
#line 527 "untupling.m"
          MR_Word transform_hlds__untupling__CallAux0_41;
#line 527 "untupling.m"
          MR_Word transform_hlds__untupling__CallAuxInfo_42;
#line 511 "untupling.m"
          MR_Word transform_hlds__untupling__V_99_99;
#line 511 "untupling.m"
          MR_Word transform_hlds__untupling__V_100_100;
#line 511 "untupling.m"
          MR_Word transform_hlds__untupling__V_101_101;
#line 511 "untupling.m"
          MR_Box transform_hlds__untupling__conv0_V_100_100;
#line 511 "untupling.m"
          MR_Word transform_hlds__untupling__V_40_40;

#line 511 "untupling.m"
          {
#line 511 "untupling.m"
            transform_hlds__untupling__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "untupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_99_99, 0) = ((MR_Box) (transform_hlds__untupling__CalleePredId_34));
#line 511 "untupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_99_99, 1) = ((MR_Box) (transform_hlds__untupling__CalleeProcId_35));
#line 511 "untupling.m"
          }
#line 511 "untupling.m"
          {
#line 511 "untupling.m"
            transform_hlds__untupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, transform_hlds__untupling__TransformMap_13, ((MR_Box) (transform_hlds__untupling__V_99_99)), &transform_hlds__untupling__conv0_V_100_100);
          }
#line 511 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 511 "untupling.m"
            {
#line 511 "untupling.m"
              transform_hlds__untupling__V_100_100 = ((MR_Word) transform_hlds__untupling__conv0_V_100_100);
#line 511 "untupling.m"
              transform_hlds__untupling__succeeded = MR_TRUE;
#line 511 "untupling.m"
            }
#line 511 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 511 "untupling.m"
            {
#line 511 "untupling.m"
              transform_hlds__untupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_100_100, (MR_Integer) 0)));
#line 511 "untupling.m"
              transform_hlds__untupling__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_100_100, (MR_Integer) 1)));
#line 512 "untupling.m"
              transform_hlds__untupling__CallAux0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_101_101, (MR_Integer) 0)));
#line 512 "untupling.m"
              transform_hlds__untupling__CallAuxInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_101_101, (MR_Integer) 1)));
#line 512 "untupling.m"
              transform_hlds__untupling__succeeded = MR_TRUE;
#line 511 "untupling.m"
            }
#line 527 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 514 "untupling.m"
            {
#line 514 "untupling.m"
              MR_Word transform_hlds__untupling__TypeTable_43;
#line 514 "untupling.m"
              MR_Word transform_hlds__untupling__CalleeProcInfo_45;
#line 514 "untupling.m"
              MR_Word transform_hlds__untupling__OrigArgModes_46;
#line 514 "untupling.m"
              MR_Word transform_hlds__untupling__Args_47;
#line 514 "untupling.m"
              MR_Word transform_hlds__untupling__EnterUnifs_48;
#line 514 "untupling.m"
              MR_Word transform_hlds__untupling__ExitUnifs_49;
#line 515 "untupling.m"
              MR_Word transform_hlds__untupling___CalleePredInfo_44;
#line 524 "untupling.m"
              MR_Word transform_hlds__untupling__CallAux_50;
#line 520 "untupling.m"
              MR_Word transform_hlds__untupling__V_123_123;
#line 520 "untupling.m"
              MR_Integer transform_hlds__untupling__V_124_124;
#line 520 "untupling.m"
              MR_Word transform_hlds__untupling__V_126_126;
#line 520 "untupling.m"
              MR_Word transform_hlds__untupling__V_127_127;
#line 520 "untupling.m"
              MR_Word transform_hlds__untupling__V_128_128;
#line 520 "untupling.m"
              MR_Word transform_hlds__untupling__V_125_125;

#line 514 "untupling.m"
              {
#line 514 "untupling.m"
                hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__ModuleInfo_14, &transform_hlds__untupling__TypeTable_43);
              }
#line 515 "untupling.m"
              {
#line 515 "untupling.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__ModuleInfo_14, transform_hlds__untupling__CalleePredId_34, transform_hlds__untupling__CalleeProcId_35, &transform_hlds__untupling___CalleePredInfo_44, &transform_hlds__untupling__CalleeProcInfo_45);
              }
#line 517 "untupling.m"
              {
#line 517 "untupling.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__untupling__CalleeProcInfo_45, &transform_hlds__untupling__OrigArgModes_46);
              }
#line 518 "untupling.m"
              {
#line 518 "untupling.m"
                transform_hlds__untupling__expand_call_args_10_p_0(transform_hlds__untupling__OrigArgs_36, transform_hlds__untupling__OrigArgModes_46, &transform_hlds__untupling__Args_47, &transform_hlds__untupling__EnterUnifs_48, &transform_hlds__untupling__ExitUnifs_49, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TypeTable_43);
              }
#line 520 "untupling.m"
              transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__CallAux0_41)) == (MR_mktag((MR_Integer) 2)));
#line 520 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 520 "untupling.m"
                {
#line 520 "untupling.m"
                  transform_hlds__untupling__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 0)));
#line 520 "untupling.m"
                  transform_hlds__untupling__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 1)));
#line 520 "untupling.m"
                  transform_hlds__untupling__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 2)));
#line 520 "untupling.m"
                  transform_hlds__untupling__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 3)));
#line 520 "untupling.m"
                  transform_hlds__untupling__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 4)));
#line 520 "untupling.m"
                  transform_hlds__untupling__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 5)));
#line 520 "untupling.m"
                  {
#line 520 "untupling.m"
                    transform_hlds__untupling__CallAux_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 520 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 0) = ((MR_Box) (transform_hlds__untupling__V_123_123));
#line 520 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 1) = ((MR_Box) (transform_hlds__untupling__V_124_124));
#line 520 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 2) = ((MR_Box) (transform_hlds__untupling__Args_47));
#line 520 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 3) = ((MR_Box) (transform_hlds__untupling__V_126_126));
#line 520 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 4) = ((MR_Box) (transform_hlds__untupling__V_127_127));
#line 520 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 5) = ((MR_Box) (transform_hlds__untupling__V_128_128));
#line 520 "untupling.m"
                  }
#line 520 "untupling.m"
                  transform_hlds__untupling__succeeded = MR_TRUE;
#line 520 "untupling.m"
                }
#line 524 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 521 "untupling.m"
                {
#line 521 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtorInfo_131_131;
#line 521 "untupling.m"
                  MR_Word transform_hlds__untupling__Call_51;
#line 521 "untupling.m"
                  MR_Word transform_hlds__untupling__ConjList_52;
#line 521 "untupling.m"
                  MR_Word transform_hlds__untupling__V_104_104;
#line 521 "untupling.m"
                  MR_Word transform_hlds__untupling__V_105_105;

#line 521 "untupling.m"
                  {
#line 521 "untupling.m"
                    transform_hlds__untupling__Call_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "untupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__untupling__Call_51, 0) = ((MR_Box) (transform_hlds__untupling__CallAux_50));
#line 521 "untupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__untupling__Call_51, 1) = ((MR_Box) (transform_hlds__untupling__CallAuxInfo_42));
#line 521 "untupling.m"
                  }
#line 3309 "transform_hlds.untupling.c"
                  transform_hlds__untupling__TypeCtorInfo_131_131 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 522 "untupling.m"
                  {
#line 522 "untupling.m"
                    transform_hlds__untupling__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_105_105, 0) = ((MR_Box) (transform_hlds__untupling__Call_51));
#line 522 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "untupling.m"
                  }
#line 522 "untupling.m"
                  {
#line 522 "untupling.m"
                    transform_hlds__untupling__V_104_104 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_131_131, transform_hlds__untupling__V_105_105, transform_hlds__untupling__ExitUnifs_49);
                  }
#line 522 "untupling.m"
                  {
#line 522 "untupling.m"
                    transform_hlds__untupling__ConjList_52 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_131_131, transform_hlds__untupling__EnterUnifs_48, transform_hlds__untupling__V_104_104);
                  }
#line 523 "untupling.m"
                  {
#line 523 "untupling.m"
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__untupling__ConjList_52, transform_hlds__untupling__GoalInfo0_16, transform_hlds__untupling__Goal_10);
#line 523 "untupling.m"
                    return;
                  }
#line 521 "untupling.m"
                }
#line 524 "untupling.m"
              else
#line 525 "untupling.m"
                {
#line 525 "untupling.m"
                  {
#line 525 "untupling.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "not a call template");
#line 525 "untupling.m"
                    return;
                  }
#line 525 "untupling.m"
                }
#line 514 "untupling.m"
            }
#line 527 "untupling.m"
          else
#line 528 "untupling.m"
            {
#line 528 "untupling.m"
              *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 528 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 528 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 528 "untupling.m"
            }
#line 509 "untupling.m"
        }
#line 508 "untupling.m"
      else
#line 508 "untupling.m"
        if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 553 "untupling.m"
          {
#line 553 "untupling.m"
            MR_Word transform_hlds__untupling__ConjType_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 553 "untupling.m"
            MR_Word transform_hlds__untupling__Goals0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 553 "untupling.m"
            MR_Word transform_hlds__untupling__Goals_61;
#line 553 "untupling.m"
            MR_Word transform_hlds__untupling__GoalExpr_117;

#line 558 "untupling.m"
            if ((transform_hlds__untupling__ConjType_59 == (MR_Integer) 1))
#line 563 "untupling.m"
              {
#line 563 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_60, &transform_hlds__untupling__Goals_61, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 558 "untupling.m"
            else
#line 556 "untupling.m"
              {
#line 556 "untupling.m"
                transform_hlds__untupling__fix_calls_in_conj_8_p_0(transform_hlds__untupling__Goals0_60, &transform_hlds__untupling__Goals_61, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 566 "untupling.m"
            {
#line 566 "untupling.m"
              transform_hlds__untupling__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 566 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 566 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 1) = ((MR_Box) (transform_hlds__untupling__ConjType_59));
#line 566 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 2) = ((MR_Box) (transform_hlds__untupling__Goals_61));
#line 566 "untupling.m"
            }
#line 567 "untupling.m"
            {
#line 567 "untupling.m"
              MR_Word base;
#line 567 "untupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 567 "untupling.m"
              *transform_hlds__untupling__Goal_10 = base;
#line 567 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_117));
#line 567 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 567 "untupling.m"
            }
#line 553 "untupling.m"
          }
#line 508 "untupling.m"
        else
#line 508 "untupling.m"
          if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 569 "untupling.m"
            {
#line 569 "untupling.m"
              MR_Word transform_hlds__untupling__GoalExpr_118;
#line 569 "untupling.m"
              MR_Word transform_hlds__untupling__Goals0_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 569 "untupling.m"
              MR_Word transform_hlds__untupling__Goals_120;

#line 570 "untupling.m"
              {
#line 570 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_119, &transform_hlds__untupling__Goals_120, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 572 "untupling.m"
              {
#line 572 "untupling.m"
                transform_hlds__untupling__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 572 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_118, 1) = ((MR_Box) (transform_hlds__untupling__Goals_120));
#line 572 "untupling.m"
              }
#line 573 "untupling.m"
              {
#line 573 "untupling.m"
                MR_Word base;
#line 573 "untupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 573 "untupling.m"
                *transform_hlds__untupling__Goal_10 = base;
#line 573 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_118));
#line 573 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 573 "untupling.m"
              }
#line 569 "untupling.m"
            }
#line 508 "untupling.m"
          else
#line 508 "untupling.m"
            if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 581 "untupling.m"
              {
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__Vars_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__Cond0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__Then0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__Else0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 4)));
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__Cond_70;
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__Then_71;
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__Else_72;
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81;
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82;
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83;
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84;
#line 581 "untupling.m"
                MR_Word transform_hlds__untupling__GoalExpr_122;

#line 582 "untupling.m"
                {
#line 582 "untupling.m"
                  transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Cond0_67, &transform_hlds__untupling__Cond_70, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, &transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                }
#line 584 "untupling.m"
                {
#line 584 "untupling.m"
                  transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Then0_68, &transform_hlds__untupling__Then_71, transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81, &transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83, transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                }
#line 586 "untupling.m"
                {
#line 586 "untupling.m"
                  transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Else0_69, &transform_hlds__untupling__Else_72, transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                }
#line 588 "untupling.m"
                {
#line 588 "untupling.m"
                  transform_hlds__untupling__GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 588 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 588 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 1) = ((MR_Box) (transform_hlds__untupling__Vars_66));
#line 588 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 2) = ((MR_Box) (transform_hlds__untupling__Cond_70));
#line 588 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 3) = ((MR_Box) (transform_hlds__untupling__Then_71));
#line 588 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 4) = ((MR_Box) (transform_hlds__untupling__Else_72));
#line 588 "untupling.m"
                }
#line 589 "untupling.m"
                {
#line 589 "untupling.m"
                  MR_Word base;
#line 589 "untupling.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 589 "untupling.m"
                  *transform_hlds__untupling__Goal_10 = base;
#line 589 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_122));
#line 589 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 589 "untupling.m"
                }
#line 581 "untupling.m"
              }
#line 508 "untupling.m"
            else
#line 508 "untupling.m"
              if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 537 "untupling.m"
                {
#line 537 "untupling.m"
                  MR_Word transform_hlds__untupling__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 537 "untupling.m"
                  MR_Word transform_hlds__untupling__SubGoal0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 539 "untupling.m"
                  MR_Word transform_hlds__untupling__FGT_58;
#line 539 "untupling.m"
                  MR_Word transform_hlds__untupling__V_57_57;

#line 539 "untupling.m"
                  transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__Reason_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 539 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 539 "untupling.m"
                    {
#line 539 "untupling.m"
                      transform_hlds__untupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 1)));
#line 539 "untupling.m"
                      transform_hlds__untupling__FGT_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 2)));
#line 541 "untupling.m"
                      if ((transform_hlds__untupling__FGT_58 == (MR_Integer) 1))
#line 540 "untupling.m"
                        transform_hlds__untupling__succeeded = MR_TRUE;
#line 541 "untupling.m"
                      else
#line 541 "untupling.m"
                        if ((transform_hlds__untupling__FGT_58 == (MR_Integer) 2))
#line 541 "untupling.m"
                          transform_hlds__untupling__succeeded = MR_TRUE;
#line 541 "untupling.m"
                        else
#line 541 "untupling.m"
                          transform_hlds__untupling__succeeded = MR_FALSE;
#line 539 "untupling.m"
                    }
#line 546 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 545 "untupling.m"
                    {
#line 545 "untupling.m"
                      *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 545 "untupling.m"
                      *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 545 "untupling.m"
                      *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 545 "untupling.m"
                    }
#line 546 "untupling.m"
                  else
#line 548 "untupling.m"
                    {
#line 548 "untupling.m"
                      MR_Word transform_hlds__untupling__SubGoal_110;
#line 548 "untupling.m"
                      MR_Word transform_hlds__untupling__GoalExpr_111;

#line 547 "untupling.m"
                      {
#line 547 "untupling.m"
                        transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__SubGoal0_114, &transform_hlds__untupling__SubGoal_110, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                      }
#line 549 "untupling.m"
                      {
#line 549 "untupling.m"
                        transform_hlds__untupling__GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 549 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 549 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 1) = ((MR_Box) (transform_hlds__untupling__Reason_56));
#line 549 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 2) = ((MR_Box) (transform_hlds__untupling__SubGoal_110));
#line 549 "untupling.m"
                      }
#line 550 "untupling.m"
                      {
#line 550 "untupling.m"
                        MR_Word base;
#line 550 "untupling.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 550 "untupling.m"
                        *transform_hlds__untupling__Goal_10 = base;
#line 550 "untupling.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_111));
#line 550 "untupling.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 550 "untupling.m"
                      }
#line 548 "untupling.m"
                    }
#line 537 "untupling.m"
                }
#line 508 "untupling.m"
              else
#line 508 "untupling.m"
                if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 591 "untupling.m"
                  {
#line 593 "untupling.m"
                    {
#line 593 "untupling.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "shorthand");
#line 593 "untupling.m"
                      return;
                    }
#line 591 "untupling.m"
                  }
#line 508 "untupling.m"
                else
#line 508 "untupling.m"
                  if (((((MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 575 "untupling.m"
                    {
#line 575 "untupling.m"
                      MR_Word transform_hlds__untupling__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 575 "untupling.m"
                      MR_Word transform_hlds__untupling__CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 575 "untupling.m"
                      MR_Word transform_hlds__untupling__Cases0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 575 "untupling.m"
                      MR_Word transform_hlds__untupling__Cases_65;
#line 575 "untupling.m"
                      MR_Word transform_hlds__untupling__GoalExpr_121;

#line 576 "untupling.m"
                      {
#line 576 "untupling.m"
                        transform_hlds__untupling__fix_calls_in_cases_8_p_0(transform_hlds__untupling__Cases0_64, &transform_hlds__untupling__Cases_65, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                      }
#line 578 "untupling.m"
                      {
#line 578 "untupling.m"
                        transform_hlds__untupling__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 578 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 578 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 1) = ((MR_Box) (transform_hlds__untupling__Var_62));
#line 578 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 2) = ((MR_Box) (transform_hlds__untupling__CanFail_63));
#line 578 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 3) = ((MR_Box) (transform_hlds__untupling__Cases_65));
#line 578 "untupling.m"
                      }
#line 579 "untupling.m"
                      {
#line 579 "untupling.m"
                        MR_Word base;
#line 579 "untupling.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 579 "untupling.m"
                        *transform_hlds__untupling__Goal_10 = base;
#line 579 "untupling.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_121));
#line 579 "untupling.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 579 "untupling.m"
                      }
#line 575 "untupling.m"
                    }
#line 508 "untupling.m"
                  else
#line 506 "untupling.m"
                    {
#line 507 "untupling.m"
                      *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 507 "untupling.m"
                      *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 507 "untupling.m"
                      *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 506 "untupling.m"
                    }
#line 500 "untupling.m"
  }
#line 496 "untupling.m"
}

#line 468 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
#line 468 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_6,
#line 468 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_7,
#line 468 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_8,
#line 468 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18,
#line 468 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19)
#line 468 "untupling.m"
{
#line 474 "untupling.m"
  {
#line 474 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 474 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_11;
#line 474 "untupling.m"
    MR_Word transform_hlds__untupling__Goal0_12;
#line 474 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes0_13;
#line 474 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet0_14;
#line 474 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_15;
#line 474 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_16;
#line 474 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_17;
#line 474 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20;

#line 473 "untupling.m"
    {
#line 473 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__untupling__PredId_7, transform_hlds__untupling__ProcId_8, &transform_hlds__untupling__PredInfo_11, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20);
    }
#line 475 "untupling.m"
    {
#line 475 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__Goal0_12);
    }
#line 476 "untupling.m"
    {
#line 476 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__VarTypes0_13);
    }
#line 477 "untupling.m"
    {
#line 477 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__VarSet0_14);
    }
#line 478 "untupling.m"
    {
#line 478 "untupling.m"
      transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_12, &transform_hlds__untupling__Goal_15, transform_hlds__untupling__VarSet0_14, &transform_hlds__untupling__VarSet_16, transform_hlds__untupling__VarTypes0_13, &transform_hlds__untupling__VarTypes_17, transform_hlds__untupling__TransformMap_6, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18);
    }
#line 480 "untupling.m"
    {
#line 480 "untupling.m"
      transform_hlds__untupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__untupling__Goal0_12, transform_hlds__untupling__Goal_15);
    }
#line 480 "untupling.m"
    transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 489 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 481 "untupling.m"
      {
#line 481 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21;
#line 481 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22;
#line 481 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23;
#line 481 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25;
#line 481 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_27;
#line 481 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28;

#line 481 "untupling.m"
        {
#line 481 "untupling.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__untupling__Goal_15, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21);
        }
#line 482 "untupling.m"
        {
#line 482 "untupling.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__untupling__VarSet_16, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22);
        }
#line 483 "untupling.m"
        {
#line 483 "untupling.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__untupling__VarTypes_17, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23);
        }
#line 484 "untupling.m"
        {
#line 484 "untupling.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25);
        }
#line 485 "untupling.m"
        {
#line 485 "untupling.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_27, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 487 "untupling.m"
        {
#line 487 "untupling.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__untupling__PredId_7, transform_hlds__untupling__ProcId_8, transform_hlds__untupling__PredInfo_11, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_27, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19);
#line 487 "untupling.m"
          return;
        }
#line 481 "untupling.m"
      }
#line 489 "untupling.m"
    else
#line 490 "untupling.m"
      *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18;
#line 474 "untupling.m"
  }
#line 468 "untupling.m"
}

#line 466 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
#line 466 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 466 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 466 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 466 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3)
#line 466 "untupling.m"
{
#line 466 "untupling.m"
  {
#line 466 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 466 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19;

#line 466 "untupling.m"
    {
#line 466 "untupling.m"
      transform_hlds__untupling__fix_calls_in_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19);
    }
#line 466 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19));
#line 466 "untupling.m"
  }
#line 466 "untupling.m"
}

#line 460 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
#line 460 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_5,
#line 460 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_6,
#line 460 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10,
#line 460 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11)
#line 460 "untupling.m"
{
#line 463 "untupling.m"
  {
#line 463 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 463 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_8;
#line 463 "untupling.m"
    MR_Word transform_hlds__untupling__ProcIds_9;
#line 463 "untupling.m"
    MR_Word transform_hlds__untupling__V_12_12;
#line 466 "untupling.m"
    MR_Box transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11;

#line 464 "untupling.m"
    {
#line 464 "untupling.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__untupling__PredId_6, &transform_hlds__untupling__PredInfo_8);
    }
#line 465 "untupling.m"
    {
#line 465 "untupling.m"
      transform_hlds__untupling__ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__untupling__PredInfo_8);
    }
#line 466 "untupling.m"
    {
#line 466 "untupling.m"
      transform_hlds__untupling__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 466 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_7[0]));
#line 466 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 1) = ((MR_Box) (transform_hlds__untupling__fix_calls_in_pred_4_p_0_1));
#line 466 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 466 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 3) = ((MR_Box) (transform_hlds__untupling__TransformMap_5));
#line 466 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 4) = ((MR_Box) (transform_hlds__untupling__PredId_6));
#line 466 "untupling.m"
    }
#line 466 "untupling.m"
    {
#line 466 "untupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__untupling__V_12_12, transform_hlds__untupling__ProcIds_9, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10)), &transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11);
    }
#line 466 "untupling.m"
    *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11);
#line 463 "untupling.m"
  }
#line 460 "untupling.m"
}

#line 402 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
#line 402 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_13,
#line 402 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_14,
#line 402 "untupling.m"
  MR_Word transform_hlds__untupling__PredInfo_15,
#line 402 "untupling.m"
  MR_Word transform_hlds__untupling__ProcInfo_16,
#line 402 "untupling.m"
  MR_Integer transform_hlds__untupling__Counter_17,
#line 402 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredId_18,
#line 402 "untupling.m"
  MR_Integer * transform_hlds__untupling__AuxProcId_19,
#line 402 "untupling.m"
  MR_Word * transform_hlds__untupling__CallAux_20,
#line 402 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredInfo_21,
#line 402 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxProcInfo_22,
#line 402 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_49,
#line 402 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_50)
#line 402 "untupling.m"
{
#line 409 "untupling.m"
  {
#line 409 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__AuxHeadVars_24;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_25;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo_27;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__InitialAuxInstMap_28;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__TVarSet_29;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_30;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__ClassContext_31;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__RttiVarMaps_32;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_33;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__InstVarSet_34;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__Markers_35;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__OrigOrigin_36;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__VarNameRemap_37;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__PredModule_38;
#line 409 "untupling.m"
    MR_String transform_hlds__untupling__PredName_39;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__PredOrFunc_40;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__Context_41;
#line 409 "untupling.m"
    MR_Integer transform_hlds__untupling__Line_42;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredSymName0_43;
#line 409 "untupling.m"
    MR_Integer transform_hlds__untupling__ProcNo_44;
#line 409 "untupling.m"
    MR_String transform_hlds__untupling__Suffix_45;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredSymName_46;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__Origin_47;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__V_57_57;
#line 409 "untupling.m"
    MR_Word transform_hlds__untupling__V_60_60;
#line 409 "untupling.m"
    MR_String transform_hlds__untupling__V_61_61;
#line 411 "untupling.m"
    MR_Word transform_hlds__untupling___GoalExpr_26;
#line 435 "untupling.m"
    MR_Word transform_hlds__untupling___ExtraArgs_48;

#line 410 "untupling.m"
    {
#line 410 "untupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__AuxHeadVars_24);
    }
#line 411 "untupling.m"
    {
#line 411 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__Goal_25);
    }
#line 411 "untupling.m"
    transform_hlds__untupling___GoalExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal_25, (MR_Integer) 0)));
#line 411 "untupling.m"
    transform_hlds__untupling__GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal_25, (MR_Integer) 1)));
#line 412 "untupling.m"
    {
#line 412 "untupling.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__untupling__ProcInfo_16, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_49, &transform_hlds__untupling__InitialAuxInstMap_28);
    }
#line 413 "untupling.m"
    {
#line 413 "untupling.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__TVarSet_29);
    }
#line 414 "untupling.m"
    {
#line 414 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__VarTypes_30);
    }
#line 415 "untupling.m"
    {
#line 415 "untupling.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__ClassContext_31);
    }
#line 416 "untupling.m"
    {
#line 416 "untupling.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__RttiVarMaps_32);
    }
#line 417 "untupling.m"
    {
#line 417 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__VarSet_33);
    }
#line 418 "untupling.m"
    {
#line 418 "untupling.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__InstVarSet_34);
    }
#line 419 "untupling.m"
    {
#line 419 "untupling.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__Markers_35);
    }
#line 420 "untupling.m"
    {
#line 420 "untupling.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__OrigOrigin_36);
    }
#line 421 "untupling.m"
    {
#line 421 "untupling.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__VarNameRemap_37);
    }
#line 423 "untupling.m"
    {
#line 423 "untupling.m"
      transform_hlds__untupling__PredModule_38 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 424 "untupling.m"
    {
#line 424 "untupling.m"
      transform_hlds__untupling__PredName_39 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 425 "untupling.m"
    {
#line 425 "untupling.m"
      transform_hlds__untupling__PredOrFunc_40 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 426 "untupling.m"
    {
#line 426 "untupling.m"
      transform_hlds__untupling__Context_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__untupling__GoalInfo_27);
    }
#line 427 "untupling.m"
    {
#line 427 "untupling.m"
      mercury__term__context_line_2_p_0(transform_hlds__untupling__Context_41, &transform_hlds__untupling__Line_42);
    }
#line 428 "untupling.m"
    {
#line 428 "untupling.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__untupling__PredModule_38, (MR_String) "untupling", transform_hlds__untupling__PredOrFunc_40, transform_hlds__untupling__PredName_39, transform_hlds__untupling__Line_42, transform_hlds__untupling__Counter_17, &transform_hlds__untupling__AuxPredSymName0_43);
    }
#line 430 "untupling.m"
    {
#line 430 "untupling.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__untupling__ProcId_14, &transform_hlds__untupling__ProcNo_44);
    }
#line 4142 "transform_hlds.untupling.c"
    {
#line 4144 "transform_hlds.untupling.c"
      transform_hlds__untupling__V_61_61 = mercury__string__int_to_string_1_f_0(transform_hlds__untupling__ProcNo_44);
    }
#line 4147 "transform_hlds.untupling.c"
    {
#line 4149 "transform_hlds.untupling.c"
      transform_hlds__untupling__Suffix_45 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__untupling__V_61_61);
    }
#line 432 "untupling.m"
    {
#line 432 "untupling.m"
      mdbcomp__prim_data__add_sym_name_suffix_3_p_0(transform_hlds__untupling__AuxPredSymName0_43, transform_hlds__untupling__Suffix_45, &transform_hlds__untupling__AuxPredSymName_46);
    }
#line 434 "untupling.m"
    {
#line 434 "untupling.m"
      transform_hlds__untupling__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "untupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 434 "untupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_57_57, 1) = ((MR_Box) (transform_hlds__untupling__ProcNo_44));
#line 434 "untupling.m"
    }
#line 434 "untupling.m"
    {
#line 434 "untupling.m"
      transform_hlds__untupling__Origin_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 434 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_47, 0) = ((MR_Box) (transform_hlds__untupling__V_57_57));
#line 434 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_47, 1) = ((MR_Box) (transform_hlds__untupling__OrigOrigin_36));
#line 434 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_47, 2) = ((MR_Box) (transform_hlds__untupling__PredId_13));
#line 434 "untupling.m"
    }
#line 435 "untupling.m"
    {
#line 435 "untupling.m"
      hlds__hlds_pred__define_new_pred_19_p_0(transform_hlds__untupling__Origin_47, transform_hlds__untupling__Goal_25, transform_hlds__untupling__CallAux_20, transform_hlds__untupling__AuxHeadVars_24, &transform_hlds__untupling___ExtraArgs_48, transform_hlds__untupling__InitialAuxInstMap_28, transform_hlds__untupling__AuxPredSymName_46, transform_hlds__untupling__TVarSet_29, transform_hlds__untupling__VarTypes_30, transform_hlds__untupling__ClassContext_31, transform_hlds__untupling__RttiVarMaps_32, transform_hlds__untupling__VarSet_33, transform_hlds__untupling__InstVarSet_34, transform_hlds__untupling__Markers_35, (MR_Integer) 1, transform_hlds__untupling__VarNameRemap_37, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_49, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_50, &transform_hlds__untupling__V_60_60);
    }
#line 435 "untupling.m"
    *transform_hlds__untupling__AuxPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, (MR_Integer) 0)));
#line 435 "untupling.m"
    *transform_hlds__untupling__AuxProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, (MR_Integer) 1)));
#line 440 "untupling.m"
    {
#line 440 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(*transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_50, *transform_hlds__untupling__AuxPredId_18, *transform_hlds__untupling__AuxProcId_19, transform_hlds__untupling__AuxPredInfo_21, transform_hlds__untupling__AuxProcInfo_22);
#line 440 "untupling.m"
      return;
    }
#line 409 "untupling.m"
  }
#line 402 "untupling.m"
}

#line 374 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
#line 374 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 374 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 374 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 374 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4)
#line 374 "untupling.m"
{
#line 377 "untupling.m"
  while (MR_TRUE)
#line 377 "untupling.m"
    {
#line 377 "untupling.m"
      /* tailcall optimized into a loop */
#line 377 "untupling.m"
      {
#line 377 "untupling.m"
        MR_bool transform_hlds__untupling__succeeded;

#line 377 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "untupling.m"
          if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "untupling.m"
            *transform_hlds__untupling__HeadVar__4_4 = transform_hlds__untupling__HeadVar__3_3;
#line 377 "untupling.m"
          else
#line 385 "untupling.m"
            {
#line 386 "untupling.m"
              {
#line 386 "untupling.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
#line 386 "untupling.m"
                return;
              }
#line 385 "untupling.m"
            }
#line 377 "untupling.m"
        else
#line 377 "untupling.m"
          {
#line 377 "untupling.m"
            MR_Word transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 377 "untupling.m"
            MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 377 "untupling.m"
            if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "untupling.m"
              {
#line 388 "untupling.m"
                {
#line 388 "untupling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
#line 388 "untupling.m"
                  return;
                }
#line 387 "untupling.m"
              }
#line 377 "untupling.m"
            else
#line 378 "untupling.m"
              {
#line 378 "untupling.m"
                MR_Word transform_hlds__untupling__NewVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 378 "untupling.m"
                MR_Word transform_hlds__untupling__NewVarss_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 379 "untupling.m"
                MR_Word transform_hlds__untupling__TypeInfo_40_40;
#line 379 "untupling.m"
                MR_Word transform_hlds__untupling__V_15_15;
#line 379 "untupling.m"
                MR_Word transform_hlds__untupling__V_37_37;

#line 379 "untupling.m"
                transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__NewVars_10)) == (MR_mktag((MR_Integer) 1)));
#line 379 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 379 "untupling.m"
                  {
#line 379 "untupling.m"
                    transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__NewVars_10, (MR_Integer) 0)));
#line 379 "untupling.m"
                    transform_hlds__untupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__NewVars_10, (MR_Integer) 1)));
#line 4290 "transform_hlds.untupling.c"
                    transform_hlds__untupling__TypeInfo_40_40 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
#line 379 "untupling.m"
                    {
#line 379 "untupling.m"
                      transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_40_40, ((MR_Box) (transform_hlds__untupling__V_39_39)), ((MR_Box) (transform_hlds__untupling__V_37_37)));
                    }
#line 379 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 379 "untupling.m"
                      transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "untupling.m"
                  }
#line 381 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 380 "untupling.m"
                  {
#line 380 "untupling.m"
                    /* direct tailcall eliminated */
#line 380 "untupling.m"
                    {
#line 380 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__V_38_38;
#line 380 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__2__tmp_copy_2 = transform_hlds__untupling__NewVarss_11;

#line 380 "untupling.m"
                      transform_hlds__untupling__HeadVar__2_2 = transform_hlds__untupling__HeadVar__2__tmp_copy_2;
#line 380 "untupling.m"
                      transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 380 "untupling.m"
                    }
#line 380 "untupling.m"
                    continue;
#line 380 "untupling.m"
                  }
#line 381 "untupling.m"
                else
#line 382 "untupling.m"
                  {
#line 382 "untupling.m"
                    MR_Word transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17;

#line 382 "untupling.m"
                    {
#line 382 "untupling.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], (MR_Word) &transform_hlds__untupling_scalar_common_2[1], ((MR_Box) (transform_hlds__untupling__V_39_39)), ((MR_Box) (transform_hlds__untupling__NewVars_10)), transform_hlds__untupling__HeadVar__3_3, &transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17);
                    }
#line 383 "untupling.m"
                    /* direct tailcall eliminated */
#line 383 "untupling.m"
                    {
#line 383 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__V_38_38;
#line 383 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__2__tmp_copy_2 = transform_hlds__untupling__NewVarss_11;
#line 383 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__3__tmp_copy_3 = transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17;

#line 383 "untupling.m"
                      transform_hlds__untupling__HeadVar__3_3 = transform_hlds__untupling__HeadVar__3__tmp_copy_3;
#line 383 "untupling.m"
                      transform_hlds__untupling__HeadVar__2_2 = transform_hlds__untupling__HeadVar__2__tmp_copy_2;
#line 383 "untupling.m"
                      transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 383 "untupling.m"
                    }
#line 383 "untupling.m"
                    continue;
#line 382 "untupling.m"
                  }
#line 378 "untupling.m"
              }
#line 377 "untupling.m"
          }
#line 377 "untupling.m"
      }
#line 377 "untupling.m"
      break;
#line 377 "untupling.m"
    }
#line 374 "untupling.m"
}

#line 350 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
#line 350 "untupling.m"
  MR_String transform_hlds__untupling__ParentName_1,
#line 350 "untupling.m"
  MR_Integer transform_hlds__untupling__Num_2,
#line 350 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 350 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 350 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5,
#line 350 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_6,
#line 350 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7,
#line 350 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_8)
#line 350 "untupling.m"
{
#line 354 "untupling.m"
  {
#line 354 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 354 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "untupling.m"
      {
#line 354 "untupling.m"
        *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_8 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7;
#line 354 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_6 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5;
#line 354 "untupling.m"
      }
#line 354 "untupling.m"
    else
#line 356 "untupling.m"
      {
#line 356 "untupling.m"
        MR_Word transform_hlds__untupling__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 356 "untupling.m"
        MR_Word transform_hlds__untupling__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 356 "untupling.m"
        MR_Word transform_hlds__untupling__NewVar_21;
#line 356 "untupling.m"
        MR_Word transform_hlds__untupling__NewVars_22;
#line 356 "untupling.m"
        MR_String transform_hlds__untupling__Name_25;
#line 356 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36;
#line 356 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37;
#line 356 "untupling.m"
        MR_Integer transform_hlds__untupling__V_38_38;
#line 356 "untupling.m"
        MR_String transform_hlds__untupling__V_43_43;
#line 356 "untupling.m"
        MR_String transform_hlds__untupling__V_45_45;
#line 356 "untupling.m"
        MR_String transform_hlds__untupling__V_46_46;

#line 4439 "transform_hlds.untupling.c"
        {
#line 4441 "transform_hlds.untupling.c"
          transform_hlds__untupling__V_43_43 = mercury__string__int_to_string_1_f_0(transform_hlds__untupling__Num_2);
        }
#line 4444 "transform_hlds.untupling.c"
        {
#line 4446 "transform_hlds.untupling.c"
          transform_hlds__untupling__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__untupling__V_43_43);
        }
#line 4449 "transform_hlds.untupling.c"
        {
#line 4451 "transform_hlds.untupling.c"
          transform_hlds__untupling__V_46_46 = mercury__string__f_43_43_2_f_0(transform_hlds__untupling__ParentName_1, transform_hlds__untupling__V_45_45);
        }
#line 4454 "transform_hlds.untupling.c"
        {
#line 4456 "transform_hlds.untupling.c"
          transform_hlds__untupling__Name_25 = mercury__string__f_43_43_2_f_0((MR_String) "Untupled_", transform_hlds__untupling__V_46_46);
        }
#line 358 "untupling.m"
        {
#line 358 "untupling.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__Name_25, &transform_hlds__untupling__NewVar_21, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36);
        }
#line 359 "untupling.m"
        {
#line 359 "untupling.m"
          parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__untupling__NewVar_21, transform_hlds__untupling__Type_19, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37);
        }
#line 360 "untupling.m"
        transform_hlds__untupling__V_38_38 = (transform_hlds__untupling__Num_2 + (MR_Integer) 1);
#line 360 "untupling.m"
        {
#line 360 "untupling.m"
          transform_hlds__untupling__create_untuple_vars_8_p_0(transform_hlds__untupling__ParentName_1, transform_hlds__untupling__V_38_38, transform_hlds__untupling__Types_20, &transform_hlds__untupling__NewVars_22, transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36, transform_hlds__untupling__STATE_VARIABLE_VarSet_6, transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37, transform_hlds__untupling__STATE_VARIABLE_VarTypes_8);
        }
#line 356 "untupling.m"
        {
#line 356 "untupling.m"
          MR_Word base;
#line 356 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = base;
#line 356 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__NewVar_21));
#line 356 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__NewVars_22));
#line 356 "untupling.m"
        }
#line 356 "untupling.m"
      }
#line 354 "untupling.m"
  }
#line 350 "untupling.m"
}

#line 316 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 316 "untupling.m"
  MR_Word * transform_hlds__untupling__MaybeHeadVarsAndArgModes_15,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_30,
#line 316 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_31,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32,
#line 316 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_33,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34,
#line 316 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_35,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_19,
#line 316 "untupling.m"
  MR_Word * transform_hlds__untupling__ContainerTypes_20,
#line 316 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21)
#line 316 "untupling.m"
{
#line 324 "untupling.m"
  {
#line 324 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 324 "untupling.m"
    MR_Word transform_hlds__untupling__Type_22;
#line 324 "untupling.m"
    MR_Word transform_hlds__untupling__Expansion_23;

#line 325 "untupling.m"
    {
#line 325 "untupling.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34, transform_hlds__untupling__HeadVar0_13, &transform_hlds__untupling__Type_22);
    }
#line 326 "untupling.m"
    {
#line 326 "untupling.m"
      transform_hlds__untupling__expand_argument_5_p_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__Type_22, transform_hlds__untupling__ContainerTypes0_19, transform_hlds__untupling__TypeTable_21, &transform_hlds__untupling__Expansion_23);
    }
#line 344 "untupling.m"
    if ((transform_hlds__untupling__Expansion_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "untupling.m"
      {
#line 346 "untupling.m"
        *transform_hlds__untupling__MaybeHeadVarsAndArgModes_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "untupling.m"
        *transform_hlds__untupling__ContainerTypes_20 = transform_hlds__untupling__ContainerTypes0_19;
#line 347 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = transform_hlds__untupling__STATE_VARIABLE_Goal_0_30;
#line 347 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_33 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32;
#line 347 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_35 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34;
#line 345 "untupling.m"
      }
#line 344 "untupling.m"
    else
#line 328 "untupling.m"
      {
#line 328 "untupling.m"
        MR_Word transform_hlds__untupling__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_23, (MR_Integer) 0)));
#line 328 "untupling.m"
        MR_Word transform_hlds__untupling__NewTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_23, (MR_Integer) 1)));
#line 328 "untupling.m"
        MR_String transform_hlds__untupling__ParentName_26;
#line 328 "untupling.m"
        MR_Word transform_hlds__untupling__NewHeadVars_27;
#line 328 "untupling.m"
        MR_Word transform_hlds__untupling__NewArgModes_28;
#line 328 "untupling.m"
        MR_Integer transform_hlds__untupling__V_39_39;
#line 328 "untupling.m"
        MR_Word transform_hlds__untupling__V_40_40;
#line 334 "untupling.m"
        MR_Word transform_hlds__untupling__V_51_51;

#line 329 "untupling.m"
        {
#line 329 "untupling.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32, transform_hlds__untupling__HeadVar0_13, &transform_hlds__untupling__ParentName_26);
        }
#line 330 "untupling.m"
        {
#line 330 "untupling.m"
          transform_hlds__untupling__create_untuple_vars_8_p_0(transform_hlds__untupling__ParentName_26, (MR_Integer) 0, transform_hlds__untupling__NewTypes_25, &transform_hlds__untupling__NewHeadVars_27, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34, transform_hlds__untupling__STATE_VARIABLE_VarTypes_35);
        }
#line 332 "untupling.m"
        {
#line 332 "untupling.m"
          transform_hlds__untupling__V_39_39 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__NewHeadVars_27);
        }
#line 332 "untupling.m"
        {
#line 332 "untupling.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__V_39_39, ((MR_Box) (transform_hlds__untupling__ArgMode0_14)), &transform_hlds__untupling__NewArgModes_28);
        }
#line 333 "untupling.m"
        {
#line 333 "untupling.m"
          transform_hlds__untupling__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_40_40, 0) = ((MR_Box) (transform_hlds__untupling__NewHeadVars_27));
#line 333 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_40_40, 1) = ((MR_Box) (transform_hlds__untupling__NewArgModes_28));
#line 333 "untupling.m"
        }
#line 333 "untupling.m"
        {
#line 333 "untupling.m"
          MR_Word base;
#line 333 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 333 "untupling.m"
          *transform_hlds__untupling__MaybeHeadVarsAndArgModes_15 = base;
#line 333 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__V_40_40));
#line 333 "untupling.m"
        }
#line 334 "untupling.m"
        {
#line 334 "untupling.m"
          transform_hlds__untupling__V_51_51 = parse_tree__prog_mode__in_mode_0_f_0();
        }
#line 334 "untupling.m"
        {
#line 334 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__V_51_51);
        }
#line 337 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 335 "untupling.m"
          {
#line 335 "untupling.m"
            MR_Word transform_hlds__untupling__UnifGoal_29;
#line 335 "untupling.m"
            MR_Word transform_hlds__untupling__GoalListA_58;
#line 335 "untupling.m"
            MR_Word transform_hlds__untupling__GoalListB_59;
#line 335 "untupling.m"
            MR_Word transform_hlds__untupling__GoalList_60;
#line 335 "untupling.m"
            MR_Word transform_hlds__untupling__Determinism_61;
#line 335 "untupling.m"
            MR_Word transform_hlds__untupling__GoalInfo0_62;
#line 335 "untupling.m"
            MR_Word transform_hlds__untupling__GoalInfo_63;
#line 335 "untupling.m"
            MR_Word transform_hlds__untupling__V_64_64;

#line 335 "untupling.m"
            {
#line 335 "untupling.m"
              hlds__hlds_goal__construct_functor_4_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ConsId_24, transform_hlds__untupling__NewHeadVars_27, &transform_hlds__untupling__UnifGoal_29);
            }
#line 366 "untupling.m"
            {
#line 366 "untupling.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__UnifGoal_29, &transform_hlds__untupling__GoalListA_58);
            }
#line 367 "untupling.m"
            {
#line 367 "untupling.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__STATE_VARIABLE_Goal_0_30, &transform_hlds__untupling__GoalListB_59);
            }
#line 368 "untupling.m"
            {
#line 368 "untupling.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__GoalListA_58, transform_hlds__untupling__GoalListB_59, &transform_hlds__untupling__GoalList_60);
            }
#line 369 "untupling.m"
            {
#line 369 "untupling.m"
              hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__untupling__GoalList_60, &transform_hlds__untupling__Determinism_61);
            }
#line 370 "untupling.m"
            {
#line 370 "untupling.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__untupling__GoalInfo0_62);
            }
#line 371 "untupling.m"
            {
#line 371 "untupling.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__untupling__Determinism_61, transform_hlds__untupling__GoalInfo0_62, &transform_hlds__untupling__GoalInfo_63);
            }
#line 372 "untupling.m"
            {
#line 372 "untupling.m"
              transform_hlds__untupling__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 372 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 372 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 1) = ((MR_Box) ((MR_Integer) 0));
#line 372 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 2) = ((MR_Box) (transform_hlds__untupling__GoalList_60));
#line 372 "untupling.m"
            }
#line 372 "untupling.m"
            {
#line 372 "untupling.m"
              MR_Word base;
#line 372 "untupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = base;
#line 372 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__V_64_64));
#line 372 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_63));
#line 372 "untupling.m"
            }
#line 335 "untupling.m"
          }
#line 337 "untupling.m"
        else
#line 340 "untupling.m"
          {
#line 337 "untupling.m"
            MR_Word transform_hlds__untupling__V_52_52;

#line 337 "untupling.m"
            {
#line 337 "untupling.m"
              transform_hlds__untupling__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
            }
#line 337 "untupling.m"
            {
#line 337 "untupling.m"
              transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__V_52_52);
            }
#line 340 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 338 "untupling.m"
              {
#line 338 "untupling.m"
                MR_Word transform_hlds__untupling__UnifGoal_46;
#line 338 "untupling.m"
                MR_Word transform_hlds__untupling__GoalListA_70;
#line 338 "untupling.m"
                MR_Word transform_hlds__untupling__GoalListB_71;
#line 338 "untupling.m"
                MR_Word transform_hlds__untupling__GoalList_72;
#line 338 "untupling.m"
                MR_Word transform_hlds__untupling__Determinism_73;
#line 338 "untupling.m"
                MR_Word transform_hlds__untupling__GoalInfo0_74;
#line 338 "untupling.m"
                MR_Word transform_hlds__untupling__GoalInfo_75;
#line 338 "untupling.m"
                MR_Word transform_hlds__untupling__V_76_76;

#line 338 "untupling.m"
                {
#line 338 "untupling.m"
                  hlds__hlds_goal__deconstruct_functor_4_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ConsId_24, transform_hlds__untupling__NewHeadVars_27, &transform_hlds__untupling__UnifGoal_46);
                }
#line 366 "untupling.m"
                {
#line 366 "untupling.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__STATE_VARIABLE_Goal_0_30, &transform_hlds__untupling__GoalListA_70);
                }
#line 367 "untupling.m"
                {
#line 367 "untupling.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__UnifGoal_46, &transform_hlds__untupling__GoalListB_71);
                }
#line 368 "untupling.m"
                {
#line 368 "untupling.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__GoalListA_70, transform_hlds__untupling__GoalListB_71, &transform_hlds__untupling__GoalList_72);
                }
#line 369 "untupling.m"
                {
#line 369 "untupling.m"
                  hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__untupling__GoalList_72, &transform_hlds__untupling__Determinism_73);
                }
#line 370 "untupling.m"
                {
#line 370 "untupling.m"
                  hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__untupling__GoalInfo0_74);
                }
#line 371 "untupling.m"
                {
#line 371 "untupling.m"
                  hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__untupling__Determinism_73, transform_hlds__untupling__GoalInfo0_74, &transform_hlds__untupling__GoalInfo_75);
                }
#line 372 "untupling.m"
                {
#line 372 "untupling.m"
                  transform_hlds__untupling__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 372 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 372 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 1) = ((MR_Box) ((MR_Integer) 0));
#line 372 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 2) = ((MR_Box) (transform_hlds__untupling__GoalList_72));
#line 372 "untupling.m"
                }
#line 372 "untupling.m"
                {
#line 372 "untupling.m"
                  MR_Word base;
#line 372 "untupling.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "untupling.m"
                  *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = base;
#line 372 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__V_76_76));
#line 372 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_75));
#line 372 "untupling.m"
                }
#line 338 "untupling.m"
              }
#line 340 "untupling.m"
            else
#line 341 "untupling.m"
              {
#line 341 "untupling.m"
                {
#line 341 "untupling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_one_arg_in_proc_2\'/12", (MR_String) "unsupported mode");
#line 341 "untupling.m"
                  return;
                }
#line 341 "untupling.m"
              }
#line 340 "untupling.m"
          }
#line 343 "untupling.m"
        {
#line 343 "untupling.m"
          MR_Word base;
#line 343 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "untupling.m"
          *transform_hlds__untupling__ContainerTypes_20 = base;
#line 343 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Type_22));
#line 343 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ContainerTypes0_19));
#line 343 "untupling.m"
        }
#line 328 "untupling.m"
      }
#line 324 "untupling.m"
  }
#line 316 "untupling.m"
}

#line 294 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 294 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 294 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_28,
#line 294 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_29,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30,
#line 294 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_31,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32,
#line 294 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_33,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_20,
#line 294 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21)
#line 294 "untupling.m"
{
#line 300 "untupling.m"
  {
#line 300 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 300 "untupling.m"
    MR_Word transform_hlds__untupling__MaybeHeadVarsAndArgModes_22;
#line 300 "untupling.m"
    MR_Word transform_hlds__untupling__ContainerTypes_23;
#line 300 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_34_34;
#line 300 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35;
#line 300 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36;

#line 301 "untupling.m"
    {
#line 301 "untupling.m"
      transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ArgMode0_14, &transform_hlds__untupling__MaybeHeadVarsAndArgModes_22, transform_hlds__untupling__STATE_VARIABLE_Goal_0_28, &transform_hlds__untupling__STATE_VARIABLE_Goal_34_34, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30, &transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36, transform_hlds__untupling__ContainerTypes0_20, &transform_hlds__untupling__ContainerTypes_23, transform_hlds__untupling__TypeTable_21);
    }
#line 310 "untupling.m"
    if ((transform_hlds__untupling__MaybeHeadVarsAndArgModes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 311 "untupling.m"
      {
#line 312 "untupling.m"
        {
#line 312 "untupling.m"
          MR_Word base;
#line 312 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "untupling.m"
          *transform_hlds__untupling__HeadVars_15 = base;
#line 312 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__HeadVar0_13));
#line 312 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "untupling.m"
        }
#line 313 "untupling.m"
        {
#line 313 "untupling.m"
          MR_Word base;
#line 313 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "untupling.m"
          *transform_hlds__untupling__ArgModes_16 = base;
#line 313 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ArgMode0_14));
#line 313 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "untupling.m"
        }
#line 313 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Goal_29 = transform_hlds__untupling__STATE_VARIABLE_Goal_34_34;
#line 313 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_31 = transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35;
#line 313 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_33 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36;
#line 311 "untupling.m"
      }
#line 310 "untupling.m"
    else
#line 304 "untupling.m"
      {
#line 304 "untupling.m"
        MR_Word transform_hlds__untupling__HeadVars1_24;
#line 304 "untupling.m"
        MR_Word transform_hlds__untupling__ArgModes1_25;
#line 304 "untupling.m"
        MR_Word transform_hlds__untupling__ListOfHeadVars_26;
#line 304 "untupling.m"
        MR_Word transform_hlds__untupling__ListOfArgModes_27;
#line 304 "untupling.m"
        MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__MaybeHeadVarsAndArgModes_22, (MR_Integer) 0)));

#line 304 "untupling.m"
        transform_hlds__untupling__HeadVars1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_39_39, (MR_Integer) 0)));
#line 304 "untupling.m"
        transform_hlds__untupling__ArgModes1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_39_39, (MR_Integer) 1)));
#line 305 "untupling.m"
        {
#line 305 "untupling.m"
          transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__HeadVars1_24, transform_hlds__untupling__ArgModes1_25, &transform_hlds__untupling__ListOfHeadVars_26, &transform_hlds__untupling__ListOfArgModes_27, transform_hlds__untupling__STATE_VARIABLE_Goal_34_34, transform_hlds__untupling__STATE_VARIABLE_Goal_29, transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35, transform_hlds__untupling__STATE_VARIABLE_VarSet_31, transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36, transform_hlds__untupling__STATE_VARIABLE_VarTypes_33, transform_hlds__untupling__ContainerTypes_23, transform_hlds__untupling__TypeTable_21);
        }
#line 308 "untupling.m"
        {
#line 308 "untupling.m"
          *transform_hlds__untupling__HeadVars_15 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ListOfHeadVars_26);
        }
#line 309 "untupling.m"
        {
#line 309 "untupling.m"
          *transform_hlds__untupling__ArgModes_16 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__ListOfArgModes_27);
        }
#line 304 "untupling.m"
      }
#line 300 "untupling.m"
  }
#line 294 "untupling.m"
}

#line 276 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 276 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 276 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__5_5,
#line 276 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__7_7,
#line 276 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__8_8,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__9_9,
#line 276 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__10_10,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_11,
#line 276 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_12)
#line 276 "untupling.m"
{
#line 281 "untupling.m"
  {
#line 281 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 281 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "untupling.m"
        {
#line 281 "untupling.m"
          *transform_hlds__untupling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 281 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 281 "untupling.m"
          *transform_hlds__untupling__HeadVar__10_10 = transform_hlds__untupling__HeadVar__9_9;
#line 281 "untupling.m"
          *transform_hlds__untupling__HeadVar__8_8 = transform_hlds__untupling__HeadVar__7_7;
#line 281 "untupling.m"
          *transform_hlds__untupling__HeadVar__6_6 = transform_hlds__untupling__HeadVar__5_5;
#line 281 "untupling.m"
        }
#line 281 "untupling.m"
      else
#line 289 "untupling.m"
        {
#line 290 "untupling.m"
          {
#line 290 "untupling.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
#line 290 "untupling.m"
            return;
          }
#line 289 "untupling.m"
        }
#line 281 "untupling.m"
    else
#line 281 "untupling.m"
      {
#line 281 "untupling.m"
        MR_Word transform_hlds__untupling__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 281 "untupling.m"
        MR_Word transform_hlds__untupling__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 281 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 291 "untupling.m"
          {
#line 292 "untupling.m"
            {
#line 292 "untupling.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
#line 292 "untupling.m"
              return;
            }
#line 291 "untupling.m"
          }
#line 281 "untupling.m"
        else
#line 284 "untupling.m"
          {
#line 284 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 284 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 284 "untupling.m"
            MR_Word transform_hlds__untupling__HeadVar_28;
#line 284 "untupling.m"
            MR_Word transform_hlds__untupling__HeadVars_29;
#line 284 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode_30;
#line 284 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes_31;
#line 284 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_43_43;
#line 284 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44;
#line 284 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45;

#line 285 "untupling.m"
            {
#line 285 "untupling.m"
              transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(transform_hlds__untupling__V_86_86, transform_hlds__untupling__ArgMode0_26, &transform_hlds__untupling__HeadVar_28, &transform_hlds__untupling__ArgMode_30, transform_hlds__untupling__HeadVar__5_5, &transform_hlds__untupling__STATE_VARIABLE_Goal_43_43, transform_hlds__untupling__HeadVar__7_7, &transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44, transform_hlds__untupling__HeadVar__9_9, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45, transform_hlds__untupling__ContainerTypes_11, transform_hlds__untupling__TypeTable_12);
            }
#line 287 "untupling.m"
            {
#line 287 "untupling.m"
              transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__V_85_85, transform_hlds__untupling__ArgModes0_27, &transform_hlds__untupling__HeadVars_29, &transform_hlds__untupling__ArgModes_31, transform_hlds__untupling__STATE_VARIABLE_Goal_43_43, transform_hlds__untupling__HeadVar__6_6, transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44, transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45, transform_hlds__untupling__HeadVar__10_10, transform_hlds__untupling__ContainerTypes_11, transform_hlds__untupling__TypeTable_12);
            }
#line 284 "untupling.m"
            {
#line 284 "untupling.m"
              MR_Word base;
#line 284 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "untupling.m"
              *transform_hlds__untupling__HeadVar__3_3 = base;
#line 284 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__HeadVar_28));
#line 284 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__HeadVars_29));
#line 284 "untupling.m"
            }
#line 284 "untupling.m"
            {
#line 284 "untupling.m"
              MR_Word base;
#line 284 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "untupling.m"
              *transform_hlds__untupling__HeadVar__4_4 = base;
#line 284 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ArgMode_30));
#line 284 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ArgModes_31));
#line 284 "untupling.m"
            }
#line 284 "untupling.m"
          }
#line 281 "untupling.m"
      }
#line 281 "untupling.m"
  }
#line 276 "untupling.m"
}

#line 259 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVars0_13,
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_14,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_17,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_29,
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_31,
#line 259 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_22,
#line 259 "untupling.m"
  MR_Word * transform_hlds__untupling__UntupleMap_23)
#line 259 "untupling.m"
{
#line 266 "untupling.m"
  {
#line 266 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 266 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_39_39;
#line 266 "untupling.m"
    MR_Word transform_hlds__untupling__GoalExpr_18;
#line 266 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo_19;
#line 266 "untupling.m"
    MR_Word transform_hlds__untupling__ListOfHeadVars_24;
#line 266 "untupling.m"
    MR_Word transform_hlds__untupling__ListOfArgModes_25;
#line 266 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo1_26;
#line 266 "untupling.m"
    MR_Word transform_hlds__untupling__Context_27;
#line 266 "untupling.m"
    MR_Word transform_hlds__untupling__V_32_32;
#line 266 "untupling.m"
    MR_Word transform_hlds__untupling__V_36_36;
#line 266 "untupling.m"
    MR_Word transform_hlds__untupling__V_37_37;
#line 270 "untupling.m"
    MR_Word transform_hlds__untupling__V_38_38;

#line 267 "untupling.m"
    {
#line 267 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__HeadVars0_13, transform_hlds__untupling__ArgModes0_14, &transform_hlds__untupling__ListOfHeadVars_24, &transform_hlds__untupling__ListOfArgModes_25, transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__V_32_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28, transform_hlds__untupling__STATE_VARIABLE_VarSet_29, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30, transform_hlds__untupling__STATE_VARIABLE_VarTypes_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__untupling__TypeTable_22);
    }
#line 267 "untupling.m"
    transform_hlds__untupling__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_32_32, (MR_Integer) 0)));
#line 267 "untupling.m"
    transform_hlds__untupling__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_32_32, (MR_Integer) 1)));
#line 270 "untupling.m"
    transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_17, (MR_Integer) 0)));
#line 270 "untupling.m"
    transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_17, (MR_Integer) 1)));
#line 270 "untupling.m"
    {
#line 270 "untupling.m"
      transform_hlds__untupling__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__untupling__V_36_36);
    }
#line 271 "untupling.m"
    {
#line 271 "untupling.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(transform_hlds__untupling__Context_27, transform_hlds__untupling__GoalInfo1_26, &transform_hlds__untupling__GoalInfo_19);
    }
#line 266 "untupling.m"
    {
#line 266 "untupling.m"
      MR_Word base;
#line 266 "untupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "untupling.m"
      *transform_hlds__untupling__HeadVar__6_6 = base;
#line 266 "untupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_18));
#line 266 "untupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_19));
#line 266 "untupling.m"
    }
#line 5235 "transform_hlds.untupling.c"
    transform_hlds__untupling__TypeInfo_39_39 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
#line 272 "untupling.m"
    {
#line 272 "untupling.m"
      mercury__list__condense_2_p_0(transform_hlds__untupling__TypeInfo_39_39, transform_hlds__untupling__ListOfHeadVars_24, transform_hlds__untupling__HeadVars_15);
    }
#line 273 "untupling.m"
    {
#line 273 "untupling.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__ListOfArgModes_25, transform_hlds__untupling__ArgModes_16);
    }
#line 274 "untupling.m"
    {
#line 274 "untupling.m"
      transform_hlds__untupling__V_37_37 = mercury__map__init_0_f_0(transform_hlds__untupling__TypeInfo_39_39, (MR_Word) &transform_hlds__untupling_scalar_common_2[1]);
    }
#line 274 "untupling.m"
    {
#line 274 "untupling.m"
      transform_hlds__untupling__build_untuple_map_4_p_0(transform_hlds__untupling__HeadVars0_13, transform_hlds__untupling__ListOfHeadVars_24, transform_hlds__untupling__V_37_37, transform_hlds__untupling__UntupleMap_23);
#line 274 "untupling.m"
      return;
    }
#line 266 "untupling.m"
  }
#line 259 "untupling.m"
}

#line 216 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_9,
#line 216 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_10,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35,
#line 216 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37,
#line 216 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_38,
#line 216 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_39,
#line 216 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_40)
#line 216 "untupling.m"
{
#line 222 "untupling.m"
  {
#line 222 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__TypeTable_15;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo0_16;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__HeadVars0_17;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__ArgModes0_18;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__Goal0_19;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes0_20;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet0_21;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__HeadVars_22;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__ArgModes_23;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_24;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_25;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_26;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__UntupleMap_27;
#line 222 "untupling.m"
    MR_Integer transform_hlds__untupling__Num_28;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredId_29;
#line 222 "untupling.m"
    MR_Integer transform_hlds__untupling__AuxProcId_30;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__CallAux_31;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredInfo_32;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__AuxProcInfo0_33;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__AuxProcInfo_34;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__V_54_54;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__V_55_55;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__V_57_57;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__V_58_58;
#line 222 "untupling.m"
    MR_Word transform_hlds__untupling__V_60_60;

#line 222 "untupling.m"
    {
#line 222 "untupling.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__untupling__TypeTable_15);
    }
#line 223 "untupling.m"
    {
#line 223 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__untupling__PredId_9, transform_hlds__untupling__ProcId_10, &transform_hlds__untupling__PredInfo0_16, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41);
    }
#line 226 "untupling.m"
    {
#line 226 "untupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__HeadVars0_17);
    }
#line 227 "untupling.m"
    {
#line 227 "untupling.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__ArgModes0_18);
    }
#line 228 "untupling.m"
    {
#line 228 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__Goal0_19);
    }
#line 229 "untupling.m"
    {
#line 229 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__VarTypes0_20);
    }
#line 230 "untupling.m"
    {
#line 230 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__VarSet0_21);
    }
#line 232 "untupling.m"
    {
#line 232 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_2_12_p_0(transform_hlds__untupling__HeadVars0_17, transform_hlds__untupling__ArgModes0_18, &transform_hlds__untupling__HeadVars_22, &transform_hlds__untupling__ArgModes_23, transform_hlds__untupling__Goal0_19, &transform_hlds__untupling__Goal_24, transform_hlds__untupling__VarSet0_21, &transform_hlds__untupling__VarSet_25, transform_hlds__untupling__VarTypes0_20, &transform_hlds__untupling__VarTypes_26, transform_hlds__untupling__TypeTable_15, &transform_hlds__untupling__UntupleMap_27);
    }
#line 236 "untupling.m"
    {
#line 236 "untupling.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__untupling__HeadVars_22, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42);
    }
#line 237 "untupling.m"
    {
#line 237 "untupling.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__untupling__ArgModes_23, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 238 "untupling.m"
    {
#line 238 "untupling.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__untupling__Goal_24, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44);
    }
#line 239 "untupling.m"
    {
#line 239 "untupling.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__untupling__VarSet_25, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45);
    }
#line 240 "untupling.m"
    {
#line 240 "untupling.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__untupling__VarTypes_26, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46);
    }
#line 241 "untupling.m"
    {
#line 241 "untupling.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48);
    }
#line 242 "untupling.m"
    {
#line 242 "untupling.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51);
    }
#line 245 "untupling.m"
    {
#line 245 "untupling.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__untupling__Num_28, transform_hlds__untupling__STATE_VARIABLE_Counter_0_39, transform_hlds__untupling__STATE_VARIABLE_Counter_40);
    }
#line 246 "untupling.m"
    {
#line 246 "untupling.m"
      transform_hlds__untupling__create_aux_pred_12_p_0(transform_hlds__untupling__PredId_9, transform_hlds__untupling__ProcId_10, transform_hlds__untupling__PredInfo0_16, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__untupling__Num_28, &transform_hlds__untupling__AuxPredId_29, &transform_hlds__untupling__AuxProcId_30, &transform_hlds__untupling__CallAux_31, &transform_hlds__untupling__AuxPredInfo_32, &transform_hlds__untupling__AuxProcInfo0_33, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53);
    }
#line 250 "untupling.m"
    transform_hlds__untupling__V_55_55 = (MR_Word) transform_hlds__untupling__UntupleMap_27;
#line 249 "untupling.m"
    {
#line 249 "untupling.m"
      transform_hlds__untupling__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 249 "untupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_54_54, 0) = ((MR_Box) (transform_hlds__untupling__V_55_55));
#line 249 "untupling.m"
    }
#line 249 "untupling.m"
    {
#line 249 "untupling.m"
      hlds__hlds_pred__proc_info_set_maybe_untuple_info_3_p_0(transform_hlds__untupling__V_54_54, transform_hlds__untupling__AuxProcInfo0_33, &transform_hlds__untupling__AuxProcInfo_34);
    }
#line 252 "untupling.m"
    {
#line 252 "untupling.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__untupling__AuxPredId_29, transform_hlds__untupling__AuxProcId_30, transform_hlds__untupling__AuxPredInfo_32, transform_hlds__untupling__AuxProcInfo_34, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36);
    }
#line 254 "untupling.m"
    {
#line 254 "untupling.m"
      transform_hlds__untupling__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_57_57, 0) = ((MR_Box) (transform_hlds__untupling__PredId_9));
#line 254 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_57_57, 1) = ((MR_Box) (transform_hlds__untupling__ProcId_10));
#line 254 "untupling.m"
    }
#line 255 "untupling.m"
    {
#line 255 "untupling.m"
      transform_hlds__untupling__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, 0) = ((MR_Box) (transform_hlds__untupling__AuxPredId_29));
#line 255 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, 1) = ((MR_Box) (transform_hlds__untupling__AuxProcId_30));
#line 255 "untupling.m"
    }
#line 254 "untupling.m"
    {
#line 254 "untupling.m"
      transform_hlds__untupling__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_58_58, 0) = ((MR_Box) (transform_hlds__untupling__V_60_60));
#line 254 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_58_58, 1) = ((MR_Box) (transform_hlds__untupling__CallAux_31));
#line 254 "untupling.m"
    }
#line 254 "untupling.m"
    {
#line 254 "untupling.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, ((MR_Box) (transform_hlds__untupling__V_57_57)), ((MR_Box) (transform_hlds__untupling__V_58_58)), transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37, transform_hlds__untupling__STATE_VARIABLE_TransformMap_38);
#line 254 "untupling.m"
      return;
    }
#line 222 "untupling.m"
  }
#line 216 "untupling.m"
}

#line 763 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
#line 763 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 763 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1)
#line 763 "untupling.m"
{
#line 763 "untupling.m"
  {
#line 763 "untupling.m"
    MR_Box transform_hlds__untupling__wrapper_arg_2;
#line 763 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 763 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_HeadVar__2_29;

#line 763 "untupling.m"
    {
#line 763 "untupling.m"
      transform_hlds__untupling__conv0_HeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__763__1_1_f_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1));
    }
#line 763 "untupling.m"
    transform_hlds__untupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__2_29));
#line 763 "untupling.m"
    return transform_hlds__untupling__wrapper_arg_2;
#line 763 "untupling.m"
  }
#line 763 "untupling.m"
}

#line 198 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
#line 198 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 198 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_5)
#line 198 "untupling.m"
{
#line 201 "untupling.m"
  while (MR_TRUE)
#line 201 "untupling.m"
    {
#line 201 "untupling.m"
      /* tailcall optimized into a loop */
#line 201 "untupling.m"
      {
#line 201 "untupling.m"
        MR_bool transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 201 "untupling.m"
        MR_Word transform_hlds__untupling__Type_3;
#line 201 "untupling.m"
        MR_Word transform_hlds__untupling__Types_4;

#line 201 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 201 "untupling.m"
          {
#line 201 "untupling.m"
            transform_hlds__untupling__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 201 "untupling.m"
            transform_hlds__untupling__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 202 "untupling.m"
            {
#line 202 "untupling.m"
              MR_Word transform_hlds__untupling__V_10_10;
#line 746 "untupling.m"
              MR_Word transform_hlds__untupling__TypeArgs_16;
#line 740 "untupling.m"
              MR_Word transform_hlds__untupling__TypeCtor_15;
#line 202 "untupling.m"
              MR_Word transform_hlds__untupling__V_75_75;
#line 202 "untupling.m"
              MR_Word transform_hlds__untupling__V_76_76;

#line 740 "untupling.m"
              {
#line 740 "untupling.m"
                transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__Type_3, &transform_hlds__untupling__TypeCtor_15, &transform_hlds__untupling__TypeArgs_16);
              }
#line 740 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 741 "untupling.m"
                {
#line 741 "untupling.m"
                  transform_hlds__untupling__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__untupling__TypeCtor_15);
                }
#line 746 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 743 "untupling.m"
                {
#line 743 "untupling.m"
                  MR_Integer transform_hlds__untupling__Arity_17;
#line 743 "untupling.m"
                  MR_Word transform_hlds__untupling__ConsId_18;

#line 743 "untupling.m"
                  {
#line 743 "untupling.m"
                    transform_hlds__untupling__Arity_17 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__TypeArgs_16);
                  }
#line 744 "untupling.m"
                  {
#line 744 "untupling.m"
                    transform_hlds__untupling__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 744 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_18, 1) = ((MR_Box) (transform_hlds__untupling__Arity_17));
#line 744 "untupling.m"
                  }
#line 745 "untupling.m"
                  {
#line 745 "untupling.m"
                    transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_18));
#line 745 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 1) = ((MR_Box) (transform_hlds__untupling__TypeArgs_16));
#line 745 "untupling.m"
                  }
#line 743 "untupling.m"
                }
#line 746 "untupling.m"
              else
#line 765 "untupling.m"
                {
#line 765 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtorName_22;
#line 765 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtorArgs_23;
#line 765 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtor_39;
#line 749 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeInfo_65_71;
#line 749 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeInfo_66_72;
#line 749 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeDefn_19;
#line 749 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeBody_20;
#line 749 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtor_21;
#line 749 "untupling.m"
                  MR_Word transform_hlds__untupling__V_29_29;
#line 749 "untupling.m"
                  MR_Word transform_hlds__untupling__V_30_30;
#line 749 "untupling.m"
                  MR_Word transform_hlds__untupling__V_31_31;
#line 749 "untupling.m"
                  MR_Word transform_hlds__untupling__V_32_32;
#line 749 "untupling.m"
                  MR_Word transform_hlds__untupling__V_69_69;
#line 749 "untupling.m"
                  MR_Word transform_hlds__untupling__V_70_70;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_42_42;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_43_43;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_44_44;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_45_45;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_46_46;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_47_47;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_48_48;
#line 753 "untupling.m"
                  MR_Word transform_hlds__untupling__V_49_49;
#line 754 "untupling.m"
                  MR_Word transform_hlds__untupling__V_50_50;
#line 754 "untupling.m"
                  MR_Word transform_hlds__untupling__V_53_53;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_24_24;
#line 757 "untupling.m"
                  MR_Word transform_hlds__untupling__V_25_25;
#line 759 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtorInfo_60_66;

#line 749 "untupling.m"
                  {
#line 749 "untupling.m"
                    transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__Type_3, &transform_hlds__untupling__TypeCtor_39, &transform_hlds__untupling__V_69_69);
                  }
#line 749 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
                    {
#line 5700 "transform_hlds.untupling.c"
                      transform_hlds__untupling__TypeInfo_65_71 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 749 "untupling.m"
                      {
#line 749 "untupling.m"
                        transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_65_71, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__untupling__V_69_69)));
                      }
#line 749 "untupling.m"
                      if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
                        {
#line 750 "untupling.m"
                          {
#line 750 "untupling.m"
                            transform_hlds__untupling__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__untupling__TypeTable_5, transform_hlds__untupling__TypeCtor_39, &transform_hlds__untupling__TypeDefn_19);
                          }
#line 749 "untupling.m"
                          if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
                            {
#line 751 "untupling.m"
                              transform_hlds__untupling__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 751 "untupling.m"
                              {
#line 751 "untupling.m"
                                hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__untupling__TypeDefn_19, &transform_hlds__untupling__V_70_70);
                              }
#line 5727 "transform_hlds.untupling.c"
                              transform_hlds__untupling__TypeInfo_66_72 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 751 "untupling.m"
                              {
#line 751 "untupling.m"
                                transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_66_72, ((MR_Box) (transform_hlds__untupling__V_29_29)), ((MR_Box) (transform_hlds__untupling__V_70_70)));
                              }
#line 749 "untupling.m"
                              if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
                                {
#line 752 "untupling.m"
                                  {
#line 752 "untupling.m"
                                    hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__untupling__TypeDefn_19, &transform_hlds__untupling__TypeBody_20);
                                  }
#line 753 "untupling.m"
                                  transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__TypeBody_20)) == (MR_mktag((MR_Integer) 1)));
#line 753 "untupling.m"
                                  if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                                    {
#line 753 "untupling.m"
                                      transform_hlds__untupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 0)));
#line 753 "untupling.m"
                                      transform_hlds__untupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 1)));
#line 753 "untupling.m"
                                      transform_hlds__untupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 2)));
#line 753 "untupling.m"
                                      transform_hlds__untupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 3)));
#line 753 "untupling.m"
                                      transform_hlds__untupling__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 4)));
#line 753 "untupling.m"
                                      transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 5)));
#line 753 "untupling.m"
                                      transform_hlds__untupling__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 753 "untupling.m"
                                      transform_hlds__untupling__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 753 "untupling.m"
                                      transform_hlds__untupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 7)));
#line 753 "untupling.m"
                                      transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 753 "untupling.m"
                                      if (transform_hlds__untupling__succeeded)
#line 753 "untupling.m"
                                        {
#line 753 "untupling.m"
                                          transform_hlds__untupling__SingleCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_30_30, (MR_Integer) 0)));
#line 753 "untupling.m"
                                          transform_hlds__untupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_30_30, (MR_Integer) 1)));
#line 753 "untupling.m"
                                          transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "untupling.m"
                                          if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
                                            {
#line 754 "untupling.m"
                                              transform_hlds__untupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 0)));
#line 754 "untupling.m"
                                              transform_hlds__untupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 1)));
#line 754 "untupling.m"
                                              transform_hlds__untupling__SingleCtorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 2)));
#line 754 "untupling.m"
                                              transform_hlds__untupling__SingleCtorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 3)));
#line 754 "untupling.m"
                                              transform_hlds__untupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 4)));
#line 754 "untupling.m"
                                              transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "untupling.m"
                                              if (transform_hlds__untupling__succeeded)
#line 749 "untupling.m"
                                                {
#line 757 "untupling.m"
                                                  transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__SingleCtorArgs_23)) == (MR_mktag((MR_Integer) 1)));
#line 757 "untupling.m"
                                                  if (transform_hlds__untupling__succeeded)
#line 757 "untupling.m"
                                                    {
#line 757 "untupling.m"
                                                      transform_hlds__untupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_23, (MR_Integer) 0)));
#line 757 "untupling.m"
                                                      transform_hlds__untupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_23, (MR_Integer) 1)));
#line 5809 "transform_hlds.untupling.c"
                                                      transform_hlds__untupling__TypeCtorInfo_60_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 759 "untupling.m"
                                                      {
#line 759 "untupling.m"
                                                        transform_hlds__untupling__succeeded = mercury__list__member_2_p_0(transform_hlds__untupling__TypeCtorInfo_60_66, ((MR_Box) (transform_hlds__untupling__Type_3)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                      }
#line 759 "untupling.m"
                                                      transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 757 "untupling.m"
                                                    }
#line 749 "untupling.m"
                                                }
#line 749 "untupling.m"
                                            }
#line 753 "untupling.m"
                                        }
#line 753 "untupling.m"
                                    }
#line 749 "untupling.m"
                                }
#line 749 "untupling.m"
                            }
#line 749 "untupling.m"
                        }
#line 749 "untupling.m"
                    }
#line 765 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 761 "untupling.m"
                    {
#line 761 "untupling.m"
                      MR_Word transform_hlds__untupling__TypeCtorInfo_61_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 761 "untupling.m"
                      MR_Word transform_hlds__untupling__ExpandedTypes_26;
#line 761 "untupling.m"
                      MR_Integer transform_hlds__untupling__Arity_37;
#line 761 "untupling.m"
                      MR_Word transform_hlds__untupling__ConsId_38;

#line 761 "untupling.m"
                      {
#line 761 "untupling.m"
                        transform_hlds__untupling__Arity_37 = mercury__list__length_1_f_0(transform_hlds__untupling__TypeCtorInfo_61_67, transform_hlds__untupling__SingleCtorArgs_23);
                      }
#line 762 "untupling.m"
                      {
#line 762 "untupling.m"
                        transform_hlds__untupling__ConsId_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 762 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 762 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 1) = ((MR_Box) (transform_hlds__untupling__SingleCtorName_22));
#line 762 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 2) = ((MR_Box) (transform_hlds__untupling__Arity_37));
#line 762 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 3) = ((MR_Box) (transform_hlds__untupling__TypeCtor_39));
#line 762 "untupling.m"
                      }
#line 763 "untupling.m"
                      {
#line 763 "untupling.m"
                        transform_hlds__untupling__ExpandedTypes_26 = mercury__list__map_2_f_0(transform_hlds__untupling__TypeCtorInfo_61_67, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[3], transform_hlds__untupling__SingleCtorArgs_23);
                      }
#line 764 "untupling.m"
                      {
#line 764 "untupling.m"
                        transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "untupling.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_38));
#line 764 "untupling.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 1) = ((MR_Box) (transform_hlds__untupling__ExpandedTypes_26));
#line 764 "untupling.m"
                      }
#line 761 "untupling.m"
                    }
#line 765 "untupling.m"
                  else
#line 766 "untupling.m"
                    transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "untupling.m"
                }
#line 202 "untupling.m"
              transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 202 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 202 "untupling.m"
                {
#line 202 "untupling.m"
                  transform_hlds__untupling__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, (MR_Integer) 0)));
#line 202 "untupling.m"
                  transform_hlds__untupling__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, (MR_Integer) 1)));
#line 202 "untupling.m"
                }
#line 202 "untupling.m"
            }
#line 203 "untupling.m"
            if (!(transform_hlds__untupling__succeeded))
#line 203 "untupling.m"
              {
#line 203 "untupling.m"
                /* direct tailcall eliminated */
#line 203 "untupling.m"
                {
#line 203 "untupling.m"
                  MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__Types_4;

#line 203 "untupling.m"
                  transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 203 "untupling.m"
                }
#line 203 "untupling.m"
                continue;
#line 203 "untupling.m"
              }
#line 201 "untupling.m"
          }
#line 201 "untupling.m"
        return transform_hlds__untupling__succeeded;
#line 201 "untupling.m"
      }
#line 201 "untupling.m"
      break;
#line 201 "untupling.m"
    }
#line 198 "untupling.m"
}

#line 192 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
#line 192 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 192 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 192 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 192 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 192 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 192 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 192 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 192 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7)
#line 192 "untupling.m"
{
#line 192 "untupling.m"
  {
#line 192 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 192 "untupling.m"
    MR_Word transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36;
#line 192 "untupling.m"
    MR_Word transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38;
#line 192 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40;

#line 192 "untupling.m"
    {
#line 192 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36, ((MR_Word) transform_hlds__untupling__wrapper_arg_4), &transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38, ((MR_Word) transform_hlds__untupling__wrapper_arg_6), &transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40);
    }
#line 192 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36));
#line 192 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38));
#line 192 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40));
#line 192 "untupling.m"
  }
#line 192 "untupling.m"
}

#line 168 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
#line 168 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_8,
#line 168 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20,
#line 168 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21,
#line 168 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22,
#line 168 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_23,
#line 168 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_24,
#line 168 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_25)
#line 168 "untupling.m"
{
#line 171 "untupling.m"
  {
#line 171 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 171 "untupling.m"
    MR_Word transform_hlds__untupling__TypeTable_12;
#line 171 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_13;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__TypeCtorInfo_38_38;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_56_56;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_57_57;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__ImportStatus_14;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__TypeVarSet_16;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__ExistQVars_17;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__ArgTypes_18;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_26_26;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_27_27;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_28_28;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_29_29;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_30_30;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_31_31;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_32_32;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_50_50;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_51_51;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_52_52;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_53_53;
#line 177 "untupling.m"
    MR_Word transform_hlds__untupling__V_54_54;
#line 185 "untupling.m"
    MR_Word transform_hlds__untupling__V_84_84;

#line 172 "untupling.m"
    {
#line 172 "untupling.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__untupling__TypeTable_12);
    }
#line 173 "untupling.m"
    {
#line 173 "untupling.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__untupling__PredId_8, &transform_hlds__untupling__PredInfo_13);
    }
#line 177 "untupling.m"
    {
#line 177 "untupling.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__ImportStatus_14);
    }
#line 178 "untupling.m"
    {
#line 178 "untupling.m"
      transform_hlds__untupling__V_26_26 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(transform_hlds__untupling__ImportStatus_14);
    }
#line 178 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_26_26 == (MR_Integer) 1);
#line 177 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 177 "untupling.m"
      {
#line 179 "untupling.m"
        transform_hlds__untupling__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 179 "untupling.m"
        {
#line 179 "untupling.m"
          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_50_50);
        }
#line 179 "untupling.m"
        {
#line 179 "untupling.m"
          transform_hlds__untupling__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(transform_hlds__untupling__V_27_27, transform_hlds__untupling__V_50_50);
        }
#line 177 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 177 "untupling.m"
          {
#line 182 "untupling.m"
            transform_hlds__untupling__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 182 "untupling.m"
            {
#line 182 "untupling.m"
              hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_51_51);
            }
#line 6102 "transform_hlds.untupling.c"
            transform_hlds__untupling__TypeInfo_56_56 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 182 "untupling.m"
            {
#line 182 "untupling.m"
              transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_56_56, ((MR_Box) (transform_hlds__untupling__V_28_28)), ((MR_Box) (transform_hlds__untupling__V_51_51)));
            }
#line 177 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 177 "untupling.m"
              {
#line 183 "untupling.m"
                transform_hlds__untupling__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "untupling.m"
                {
#line 183 "untupling.m"
                  hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_52_52);
                }
#line 6120 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeInfo_57_57 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 183 "untupling.m"
                {
#line 183 "untupling.m"
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_57_57, ((MR_Box) (transform_hlds__untupling__V_29_29)), ((MR_Box) (transform_hlds__untupling__V_52_52)));
                }
#line 177 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 177 "untupling.m"
                  {
#line 184 "untupling.m"
                    transform_hlds__untupling__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "untupling.m"
                    transform_hlds__untupling__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "untupling.m"
                    transform_hlds__untupling__V_30_30 = (MR_Word) &transform_hlds__untupling_scalar_common_2[5];
#line 184 "untupling.m"
                    {
#line 184 "untupling.m"
                      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_53_53);
                    }
#line 184 "untupling.m"
                    {
#line 184 "untupling.m"
                      transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(transform_hlds__untupling__V_30_30, transform_hlds__untupling__V_53_53);
                    }
#line 177 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 177 "untupling.m"
                      {
#line 185 "untupling.m"
                        {
#line 185 "untupling.m"
                          hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_54_54);
                        }
#line 185 "untupling.m"
                        transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__V_54_54)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_54_54, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 185 "untupling.m"
                        if (transform_hlds__untupling__succeeded)
#line 185 "untupling.m"
                          {
#line 185 "untupling.m"
                            transform_hlds__untupling__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_54_54, (MR_Integer) 1)));
#line 186 "untupling.m"
                            {
#line 186 "untupling.m"
                              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__TypeVarSet_16, &transform_hlds__untupling__ExistQVars_17, &transform_hlds__untupling__ArgTypes_18);
                            }
#line 6169 "transform_hlds.untupling.c"
                            transform_hlds__untupling__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 187 "untupling.m"
                            {
#line 187 "untupling.m"
                              transform_hlds__untupling__succeeded = mercury__varset__is_empty_1_p_0(transform_hlds__untupling__TypeCtorInfo_38_38, transform_hlds__untupling__TypeVarSet_16);
                            }
#line 177 "untupling.m"
                            if (transform_hlds__untupling__succeeded)
#line 177 "untupling.m"
                              {
#line 188 "untupling.m"
                                transform_hlds__untupling__succeeded = (transform_hlds__untupling__ExistQVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 177 "untupling.m"
                                if (transform_hlds__untupling__succeeded)
#line 189 "untupling.m"
                                  {
#line 189 "untupling.m"
                                    transform_hlds__untupling__succeeded = transform_hlds__untupling__at_least_one_expandable_type_2_p_0(transform_hlds__untupling__ArgTypes_18, transform_hlds__untupling__TypeTable_12);
                                  }
#line 177 "untupling.m"
                              }
#line 185 "untupling.m"
                          }
#line 177 "untupling.m"
                      }
#line 177 "untupling.m"
                  }
#line 177 "untupling.m"
              }
#line 177 "untupling.m"
          }
#line 177 "untupling.m"
      }
#line 194 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 191 "untupling.m"
      {
#line 191 "untupling.m"
        MR_Word transform_hlds__untupling__ProcIds_19;
#line 191 "untupling.m"
        MR_Word transform_hlds__untupling__V_34_34;
#line 192 "untupling.m"
        MR_Box transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21;
#line 192 "untupling.m"
        MR_Box transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23;
#line 192 "untupling.m"
        MR_Box transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25;

#line 191 "untupling.m"
        {
#line 191 "untupling.m"
          transform_hlds__untupling__ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__untupling__PredInfo_13);
        }
#line 192 "untupling.m"
        {
#line 192 "untupling.m"
          transform_hlds__untupling__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 192 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_5[0]));
#line 192 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 1) = ((MR_Box) (transform_hlds__untupling__expand_args_in_pred_7_p_0_1));
#line 192 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 192 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 3) = ((MR_Box) (transform_hlds__untupling__PredId_8));
#line 192 "untupling.m"
        }
#line 192 "untupling.m"
        {
#line 192 "untupling.m"
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, transform_hlds__untupling__V_34_34, transform_hlds__untupling__ProcIds_19, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22)), &transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_Counter_0_24)), &transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25);
        }
#line 192 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21);
#line 192 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_TransformMap_23 = ((MR_Word) transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23);
#line 192 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Counter_25 = ((MR_Word) transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25);
#line 191 "untupling.m"
      }
#line 194 "untupling.m"
    else
#line 195 "untupling.m"
      {
#line 195 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Counter_25 = transform_hlds__untupling__STATE_VARIABLE_Counter_0_24;
#line 195 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_TransformMap_23 = transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22;
#line 195 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20;
#line 195 "untupling.m"
      }
#line 171 "untupling.m"
  }
#line 168 "untupling.m"
}

#line 458 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
#line 458 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 458 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 458 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 458 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3)
#line 458 "untupling.m"
{
#line 458 "untupling.m"
  {
#line 458 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 458 "untupling.m"
    MR_Word transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11;

#line 458 "untupling.m"
    {
#line 458 "untupling.m"
      transform_hlds__untupling__fix_calls_in_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11);
    }
#line 458 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11));
#line 458 "untupling.m"
  }
#line 458 "untupling.m"
}

#line 165 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
#line 165 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 165 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 165 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 165 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 165 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 165 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 165 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 165 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7)
#line 165 "untupling.m"
{
#line 165 "untupling.m"
  {
#line 165 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 165 "untupling.m"
    MR_Word transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21;
#line 165 "untupling.m"
    MR_Word transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23;
#line 165 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25;

#line 165 "untupling.m"
    {
#line 165 "untupling.m"
      transform_hlds__untupling__expand_args_in_pred_7_p_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21, ((MR_Word) transform_hlds__untupling__wrapper_arg_4), &transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23, ((MR_Word) transform_hlds__untupling__wrapper_arg_6), &transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25);
    }
#line 165 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21));
#line 165 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23));
#line 165 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25));
#line 165 "untupling.m"
  }
#line 165 "untupling.m"
}

#line 97 "untupling.m"
void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0(
#line 97 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8,
#line 97 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9)
#line 97 "untupling.m"
{
#line 146 "untupling.m"
  {
#line 146 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 146 "untupling.m"
    MR_Word transform_hlds__untupling__TransformMap_7;
#line 146 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12;
#line 146 "untupling.m"
    MR_Word transform_hlds__untupling__PredIds_18;
#line 146 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_10_20;
#line 146 "untupling.m"
    MR_Word transform_hlds__untupling__V_23_23;
#line 146 "untupling.m"
    MR_Word transform_hlds__untupling__V_24_24;
#line 146 "untupling.m"
    MR_Word transform_hlds__untupling__PredIds_43;
#line 146 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9_44;
#line 146 "untupling.m"
    MR_Word transform_hlds__untupling__V_45_45;
#line 165 "untupling.m"
    MR_Word transform_hlds__untupling__V_19_19;
#line 165 "untupling.m"
    MR_Box transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12;
#line 165 "untupling.m"
    MR_Box transform_hlds__untupling__conv4_TransformMap_7;
#line 165 "untupling.m"
    MR_Box transform_hlds__untupling__conv3_V_19_19;
#line 458 "untupling.m"
    MR_Box transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9;

#line 164 "untupling.m"
    {
#line 164 "untupling.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__untupling__PredIds_18, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_10_20);
    }
#line 165 "untupling.m"
    {
#line 165 "untupling.m"
      transform_hlds__untupling__V_23_23 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0);
    }
#line 165 "untupling.m"
    {
#line 165 "untupling.m"
      transform_hlds__untupling__V_24_24 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 165 "untupling.m"
    {
#line 165 "untupling.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[2], transform_hlds__untupling__PredIds_18, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_10_20)), &transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12, ((MR_Box) (transform_hlds__untupling__V_23_23)), &transform_hlds__untupling__conv4_TransformMap_7, ((MR_Box) (transform_hlds__untupling__V_24_24)), &transform_hlds__untupling__conv3_V_19_19);
    }
#line 165 "untupling.m"
    transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12);
#line 165 "untupling.m"
    transform_hlds__untupling__TransformMap_7 = ((MR_Word) transform_hlds__untupling__conv4_TransformMap_7);
#line 165 "untupling.m"
    transform_hlds__untupling__V_19_19 = ((MR_Word) transform_hlds__untupling__conv3_V_19_19);
#line 457 "untupling.m"
    {
#line 457 "untupling.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__untupling__PredIds_43, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9_44);
    }
#line 458 "untupling.m"
    {
#line 458 "untupling.m"
      transform_hlds__untupling__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 458 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_45_45, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_4[0]));
#line 458 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_45_45, 1) = ((MR_Box) (transform_hlds__untupling__untuple_arguments_4_p_0_2));
#line 458 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 458 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_45_45, 3) = ((MR_Box) (transform_hlds__untupling__TransformMap_7));
#line 458 "untupling.m"
    }
#line 458 "untupling.m"
    {
#line 458 "untupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__untupling__V_45_45, transform_hlds__untupling__PredIds_43, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9_44)), &transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9);
    }
#line 458 "untupling.m"
    *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9);
#line 146 "untupling.m"
  }
#line 97 "untupling.m"
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
