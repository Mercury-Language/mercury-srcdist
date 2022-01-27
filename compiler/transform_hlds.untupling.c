/*
** Automatically generated from `untupling.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 150 "transform_hlds.untupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0;

#line 153 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 156 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0[2];

#line 159 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0;

#line 162 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1;

#line 165 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[1];

#line 168 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[1];

#line 171 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_expansion_result_0[2];

#line 174 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0[2];

#line 177 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0[2];

#line 180 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0;

#line 183 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0[2];

#line 186 "transform_hlds.untupling.c"
static const MR_DuFunctorDesc transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0;

#line 189 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1];

#line 192 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1];

#line 195 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0[1];

#line 198 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0[1];

#line 201 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 207 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 210 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
#line 213 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 215 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 218 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
#line 221 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 223 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 225 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 228 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
#line 231 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 233 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 236 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
#line 239 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 241 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 243 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 246 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
#line 249 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 251 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 254 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
#line 257 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 259 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 261 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 264 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
#line 267 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 269 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2);

#line 272 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
#line 275 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 277 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 279 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3);

#line 772 "untupling.m"
static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__772__1_1_f_0(
#line 772 "untupling.m"
  MR_Word transform_hlds__untupling__LambdaHeadVar__1_28);

#line 192 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(
#line 192 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 192 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 221 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
#line 221 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 221 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 221 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 221 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
#line 221 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 221 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 142 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
#line 142 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 142 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 142 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 142 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
#line 142 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 142 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 140 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
#line 140 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 140 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 140 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 140 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
#line 140 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 140 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 710 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
#line 710 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 710 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 710 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3);

#line 710 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
#line 710 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 710 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2);

#line 772 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
#line 772 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 772 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1);

#line 725 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
#line 725 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode_6,
#line 725 "untupling.m"
  MR_Word transform_hlds__untupling__ArgType_7,
#line 725 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_8,
#line 725 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_9,
#line 725 "untupling.m"
  MR_Word * transform_hlds__untupling__Expansion_10);

#line 661 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 661 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 661 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 661 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__5_5,
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__6_6,
#line 661 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__7_7,
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__8_8,
#line 661 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__9_9,
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_10,
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_11);

#line 652 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_10_p_0(
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__Args0_11,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_12,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__Args_13,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__EnterUnifs_14,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__ExitUnifs_15,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_20,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_22,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_18);

#line 636 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
#line 636 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 636 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 636 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 636 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 636 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 636 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 636 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 636 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 624 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
#line 624 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 624 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 624 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 624 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 624 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 624 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 624 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 624 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 607 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
#line 607 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 607 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 607 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 607 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 607 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 607 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 607 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 607 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8);

#line 505 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
#line 505 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_9,
#line 505 "untupling.m"
  MR_Word * transform_hlds__untupling__Goal_10,
#line 505 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74,
#line 505 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_75,
#line 505 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76,
#line 505 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_77,
#line 505 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_13,
#line 505 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_14);

#line 477 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
#line 477 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_6,
#line 477 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_7,
#line 477 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_8,
#line 477 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18,
#line 477 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19);

#line 475 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
#line 475 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 475 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 475 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 475 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3);

#line 469 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
#line 469 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_5,
#line 469 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_6,
#line 469 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10,
#line 469 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11);

#line 409 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
#line 409 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_13,
#line 409 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_14,
#line 409 "untupling.m"
  MR_Word transform_hlds__untupling__PredInfo_15,
#line 409 "untupling.m"
  MR_Word transform_hlds__untupling__ProcInfo_16,
#line 409 "untupling.m"
  MR_Integer transform_hlds__untupling__Counter_17,
#line 409 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredId_18,
#line 409 "untupling.m"
  MR_Integer * transform_hlds__untupling__AuxProcId_19,
#line 409 "untupling.m"
  MR_Word * transform_hlds__untupling__CallAux_20,
#line 409 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredInfo_21,
#line 409 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxProcInfo_22,
#line 409 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51,
#line 409 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52);

#line 381 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
#line 381 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 381 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 381 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 381 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4);

#line 357 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
#line 357 "untupling.m"
  MR_String transform_hlds__untupling__ParentName_1,
#line 357 "untupling.m"
  MR_Integer transform_hlds__untupling__Num_2,
#line 357 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 357 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 357 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5,
#line 357 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_6,
#line 357 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7,
#line 357 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_8);

#line 323 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 323 "untupling.m"
  MR_Word * transform_hlds__untupling__MaybeHeadVarsAndArgModes_15,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_30,
#line 323 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_31,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32,
#line 323 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_33,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34,
#line 323 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_35,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_19,
#line 323 "untupling.m"
  MR_Word * transform_hlds__untupling__ContainerTypes_20,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21);

#line 301 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 301 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 301 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_28,
#line 301 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_29,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30,
#line 301 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_31,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32,
#line 301 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_33,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_20,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21);

#line 283 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 283 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 283 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__5_5,
#line 283 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__7_7,
#line 283 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__8_8,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__9_9,
#line 283 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__10_10,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_11,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_12);

#line 266 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVars0_13,
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_14,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_17,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_29,
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_31,
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_22,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__UntupleMap_23);

#line 223 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
#line 223 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_9,
#line 223 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_10,
#line 223 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35,
#line 223 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36,
#line 223 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37,
#line 223 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_38,
#line 223 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_39,
#line 223 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_40);

#line 772 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
#line 772 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 772 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1);

#line 205 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
#line 205 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 205 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_5);

#line 199 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
#line 199 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 199 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 199 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 199 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 199 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 199 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 199 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 199 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7);

#line 175 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
#line 175 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_8,
#line 175 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20,
#line 175 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21,
#line 175 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22,
#line 175 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_23,
#line 175 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_24,
#line 175 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_25);

#line 467 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
#line 467 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 467 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 467 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 467 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3);

#line 172 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
#line 172 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 172 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 172 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 172 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 172 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 172 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 172 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 172 "untupling.m"
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



#line 1009 "transform_hlds.untupling.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__untupling__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0
  }
};

#line 1018 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1026 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_expansion_result_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__untupling__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1032 "transform_hlds.untupling.c"
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

#line 1047 "transform_hlds.untupling.c"
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

#line 1062 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1
};

#line 1067 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_expansion_result_0_1[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0
};

#line 1072 "transform_hlds.untupling.c"
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

#line 1086 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_expansion_result_0[2] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_0,
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_expansion_result_0_1
};

#line 1092 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_expansion_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1098 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_expansion_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1115 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0
  }
};

#line 1124 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transform_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1141 "transform_hlds.untupling.c"
static const MR_PseudoTypeInfo transform_hlds__untupling__transform_hlds__untupling__field_types_transformed_proc_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1147 "transform_hlds.untupling.c"
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

#line 1162 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

#line 1167 "transform_hlds.untupling.c"
static const MR_DuPtagLayout transform_hlds__untupling__transform_hlds__untupling__du_ptag_ordered_transformed_proc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__untupling__transform_hlds__untupling__du_stag_ordered_transformed_proc_0_0
  }
};

#line 1176 "transform_hlds.untupling.c"
static const MR_DuFunctorDescPtr transform_hlds__untupling__transform_hlds__untupling__du_name_ordered_transformed_proc_0[1] = {
  &transform_hlds__untupling__transform_hlds__untupling__du_functor_desc_transformed_proc_0_0
};

#line 1181 "transform_hlds.untupling.c"
static const MR_Integer transform_hlds__untupling__transform_hlds__untupling__functor_number_map_transformed_proc_0[1] = {
  (MR_Integer) 0
};

#line 1186 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1203 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1211 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1219 "transform_hlds.untupling.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__untupling__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__untupling__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__untupling__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1228 "transform_hlds.untupling.c"
const MR_TypeCtorInfo_Struct transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_untuple_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1245 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0_10001(
#line 1248 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1250 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1252 "transform_hlds.untupling.c"
{
#line 1254 "transform_hlds.untupling.c"
  {
#line 1256 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1259 "transform_hlds.untupling.c"
    {
#line 1261 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____expansion_result_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1264 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1266 "transform_hlds.untupling.c"
  }
#line 1268 "transform_hlds.untupling.c"
}

#line 1271 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0_10001(
#line 1274 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1276 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1278 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1280 "transform_hlds.untupling.c"
{
#line 1282 "transform_hlds.untupling.c"
  {
#line 1284 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1287 "transform_hlds.untupling.c"
    {
#line 1289 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____expansion_result_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1292 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1294 "transform_hlds.untupling.c"
  }
#line 1296 "transform_hlds.untupling.c"
}

#line 1299 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0_10001(
#line 1302 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1304 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1306 "transform_hlds.untupling.c"
{
#line 1308 "transform_hlds.untupling.c"
  {
#line 1310 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1313 "transform_hlds.untupling.c"
    {
#line 1315 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____transform_map_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1318 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1320 "transform_hlds.untupling.c"
  }
#line 1322 "transform_hlds.untupling.c"
}

#line 1325 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0_10001(
#line 1328 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1330 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1332 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1334 "transform_hlds.untupling.c"
{
#line 1336 "transform_hlds.untupling.c"
  {
#line 1338 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1341 "transform_hlds.untupling.c"
    {
#line 1343 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____transform_map_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1346 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1348 "transform_hlds.untupling.c"
  }
#line 1350 "transform_hlds.untupling.c"
}

#line 1353 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0_10001(
#line 1356 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1358 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1360 "transform_hlds.untupling.c"
{
#line 1362 "transform_hlds.untupling.c"
  {
#line 1364 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1367 "transform_hlds.untupling.c"
    {
#line 1369 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____transformed_proc_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1372 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1374 "transform_hlds.untupling.c"
  }
#line 1376 "transform_hlds.untupling.c"
}

#line 1379 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0_10001(
#line 1382 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1384 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1386 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1388 "transform_hlds.untupling.c"
{
#line 1390 "transform_hlds.untupling.c"
  {
#line 1392 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1395 "transform_hlds.untupling.c"
    {
#line 1397 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____transformed_proc_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1400 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1402 "transform_hlds.untupling.c"
  }
#line 1404 "transform_hlds.untupling.c"
}

#line 1407 "transform_hlds.untupling.c"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0_10001(
#line 1410 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 1412 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2)
#line 1414 "transform_hlds.untupling.c"
{
#line 1416 "transform_hlds.untupling.c"
  {
#line 1418 "transform_hlds.untupling.c"
    MR_bool transform_hlds__untupling__succeeded;

#line 1421 "transform_hlds.untupling.c"
    {
#line 1423 "transform_hlds.untupling.c"
      transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____untuple_map_0_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2));
    }
#line 1426 "transform_hlds.untupling.c"
    return transform_hlds__untupling__succeeded;
#line 1428 "transform_hlds.untupling.c"
  }
#line 1430 "transform_hlds.untupling.c"
}

#line 1433 "transform_hlds.untupling.c"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0_10001(
#line 1436 "transform_hlds.untupling.c"
  MR_Box * transform_hlds__untupling__wrapper_arg_1,
#line 1438 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 1440 "transform_hlds.untupling.c"
  MR_Box transform_hlds__untupling__wrapper_arg_3)
#line 1442 "transform_hlds.untupling.c"
{
#line 1444 "transform_hlds.untupling.c"
  {
#line 1446 "transform_hlds.untupling.c"
    MR_Word transform_hlds__untupling__conv0_HeadVar__1_1;

#line 1449 "transform_hlds.untupling.c"
    {
#line 1451 "transform_hlds.untupling.c"
      transform_hlds__untupling____Compare____untuple_map_0_0(&transform_hlds__untupling__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__untupling__wrapper_arg_2), ((MR_Word) transform_hlds__untupling__wrapper_arg_3));
    }
#line 1454 "transform_hlds.untupling.c"
    *transform_hlds__untupling__wrapper_arg_1 = ((MR_Box) (transform_hlds__untupling__conv0_HeadVar__1_1));
#line 1456 "transform_hlds.untupling.c"
  }
#line 1458 "transform_hlds.untupling.c"
}

#line 772 "untupling.m"
static MR_Word MR_CALL 
transform_hlds__untupling__IntroducedFrom__func__expand_type__772__1_1_f_0(
#line 772 "untupling.m"
  MR_Word transform_hlds__untupling__LambdaHeadVar__1_28)
#line 772 "untupling.m"
{
#line 772 "untupling.m"
  {
#line 772 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 772 "untupling.m"
    MR_Word transform_hlds__untupling__LambdaHeadVar__2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__LambdaHeadVar__1_28, (MR_Integer) 1)));
#line 772 "untupling.m"
    MR_Word transform_hlds__untupling__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__LambdaHeadVar__1_28, (MR_Integer) 0)));
#line 772 "untupling.m"
    MR_Word transform_hlds__untupling__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__LambdaHeadVar__1_28, (MR_Integer) 2)));
#line 772 "untupling.m"
    MR_Word transform_hlds__untupling__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__LambdaHeadVar__1_28, (MR_Integer) 3)));

#line 772 "untupling.m"
    return transform_hlds__untupling__LambdaHeadVar__2_29;
#line 772 "untupling.m"
  }
#line 772 "untupling.m"
}

#line 192 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(
#line 192 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 192 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 192 "untupling.m"
{
#line 192 "untupling.m"
  {
#line 192 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 192 "untupling.m"
    MR_Word transform_hlds__untupling__V_46_46;

#line 192 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 192 "untupling.m"
      {
#line 192 "untupling.m"
        transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 192 "untupling.m"
        (MR_hl_field(MR_mktag(3), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)) = ((MR_Box) (transform_hlds__untupling__V_46_46));
#line 192 "untupling.m"
        transform_hlds__untupling__succeeded = MR_TRUE;
#line 192 "untupling.m"
      }
#line 192 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 192 "untupling.m"
  }
#line 192 "untupling.m"
}

#line 221 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____untuple_map_0_0(
#line 221 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 221 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 221 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 221 "untupling.m"
{
#line 221 "untupling.m"
  {
#line 221 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 221 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_4 = transform_hlds__untupling__HeadVar__2_2;
#line 221 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_5 = transform_hlds__untupling__HeadVar__3_3;

#line 221 "untupling.m"
    {
#line 221 "untupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_5)));
    }
#line 221 "untupling.m"
  }
#line 221 "untupling.m"
}

#line 221 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____untuple_map_0_0(
#line 221 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 221 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 221 "untupling.m"
{
#line 221 "untupling.m"
  {
#line 221 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 221 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_3 = transform_hlds__untupling__HeadVar__1_1;
#line 221 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_4 = transform_hlds__untupling__HeadVar__2_2;

#line 221 "untupling.m"
    {
#line 221 "untupling.m"
      transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[1], ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_4)));
    }
#line 221 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 221 "untupling.m"
  }
#line 221 "untupling.m"
}

#line 142 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transformed_proc_0_0(
#line 142 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 142 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 142 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 142 "untupling.m"
{
#line 142 "untupling.m"
  {
#line 142 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 142 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_9 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;
#line 142 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_10 = (MR_Integer) transform_hlds__untupling__HeadVar__3_3;

#line 142 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_9 == transform_hlds__untupling__CastY_10);
#line 142 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 1607 "transform_hlds.untupling.c"
      *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 142 "untupling.m"
    else
#line 142 "untupling.m"
      {
#line 142 "untupling.m"
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "untupling.m"
        MR_Word transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "untupling.m"
        MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 142 "untupling.m"
        MR_Word transform_hlds__untupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 142 "untupling.m"
        MR_Word transform_hlds__untupling__V_8_8;

#line 142 "untupling.m"
        {
#line 142 "untupling.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__untupling__V_8_8, transform_hlds__untupling__V_4_4, transform_hlds__untupling__V_6_6);
        }
#line 1629 "transform_hlds.untupling.c"
        transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_8_8 == (MR_Integer) 0);
#line 142 "untupling.m"
        transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 142 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 142 "untupling.m"
          *transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__V_8_8;
#line 142 "untupling.m"
        else
#line 142 "untupling.m"
          {
#line 142 "untupling.m"
            hlds__hlds_goal____Compare____hlds_goal_0_0(transform_hlds__untupling__HeadVar__1_1, transform_hlds__untupling__V_5_5, transform_hlds__untupling__V_7_7);
          }
#line 142 "untupling.m"
      }
#line 142 "untupling.m"
  }
#line 142 "untupling.m"
}

#line 142 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transformed_proc_0_0(
#line 142 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 142 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 142 "untupling.m"
{
#line 142 "untupling.m"
  {
#line 142 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 142 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_7 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 142 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_8 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 142 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_7 == transform_hlds__untupling__CastY_8);
#line 142 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 142 "untupling.m"
      transform_hlds__untupling__succeeded = MR_TRUE;
#line 142 "untupling.m"
    else
#line 142 "untupling.m"
      {
#line 142 "untupling.m"
        MR_Word transform_hlds__untupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 142 "untupling.m"
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 142 "untupling.m"
        MR_Word transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "untupling.m"
        MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));

#line 1688 "transform_hlds.untupling.c"
        {
#line 1690 "transform_hlds.untupling.c"
          transform_hlds__untupling__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__untupling__V_3_3, transform_hlds__untupling__V_5_5);
        }
#line 142 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 1695 "transform_hlds.untupling.c"
          {
#line 1697 "transform_hlds.untupling.c"
            transform_hlds__untupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__untupling__V_4_4, transform_hlds__untupling__V_6_6);
          }
#line 142 "untupling.m"
      }
#line 142 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 142 "untupling.m"
  }
#line 142 "untupling.m"
}

#line 140 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____transform_map_0_0(
#line 140 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 140 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 140 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 140 "untupling.m"
{
#line 140 "untupling.m"
  {
#line 140 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 140 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_4 = transform_hlds__untupling__HeadVar__2_2;
#line 140 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_5 = transform_hlds__untupling__HeadVar__3_3;

#line 140 "untupling.m"
    {
#line 140 "untupling.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_5)));
    }
#line 140 "untupling.m"
  }
#line 140 "untupling.m"
}

#line 140 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____transform_map_0_0(
#line 140 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 140 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 140 "untupling.m"
{
#line 140 "untupling.m"
  {
#line 140 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 140 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar1_3 = transform_hlds__untupling__HeadVar__1_1;
#line 140 "untupling.m"
    MR_Word transform_hlds__untupling__Cast_HeadVar2_4 = transform_hlds__untupling__HeadVar__2_2;

#line 140 "untupling.m"
    {
#line 140 "untupling.m"
      transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__untupling_scalar_common_1[0], ((MR_Box) (transform_hlds__untupling__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__untupling__Cast_HeadVar2_4)));
    }
#line 140 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 140 "untupling.m"
  }
#line 140 "untupling.m"
}

#line 710 "untupling.m"
static void MR_CALL 
transform_hlds__untupling____Compare____expansion_result_0_0(
#line 710 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__1_1,
#line 710 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 710 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3)
#line 710 "untupling.m"
{
#line 710 "untupling.m"
  {
#line 710 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 710 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_13 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;
#line 710 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_14 = (MR_Integer) transform_hlds__untupling__HeadVar__3_3;

#line 710 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_13 == transform_hlds__untupling__CastY_14);
#line 710 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 1793 "transform_hlds.untupling.c"
      *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 710 "untupling.m"
    else
#line 710 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "untupling.m"
        *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 0;
#line 710 "untupling.m"
      else
#line 1805 "transform_hlds.untupling.c"
        *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 2;
#line 710 "untupling.m"
    else
#line 710 "untupling.m"
      {
#line 710 "untupling.m"
        MR_Word transform_hlds__untupling__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 710 "untupling.m"
        MR_Word transform_hlds__untupling__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));

#line 710 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1818 "transform_hlds.untupling.c"
          *transform_hlds__untupling__HeadVar__1_1 = (MR_Integer) 1;
#line 710 "untupling.m"
        else
#line 710 "untupling.m"
          {
#line 710 "untupling.m"
            MR_Word transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 710 "untupling.m"
            MR_Word transform_hlds__untupling__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 710 "untupling.m"
            MR_Word transform_hlds__untupling__V_8_8;

#line 710 "untupling.m"
            {
#line 710 "untupling.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__untupling__V_8_8, transform_hlds__untupling__V_18_18, transform_hlds__untupling__V_6_6);
            }
#line 1836 "transform_hlds.untupling.c"
            transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_8_8 == (MR_Integer) 0);
#line 710 "untupling.m"
            transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 710 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 710 "untupling.m"
              *transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__V_8_8;
#line 710 "untupling.m"
            else
#line 710 "untupling.m"
              {
#line 710 "untupling.m"
                {
#line 710 "untupling.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[2], transform_hlds__untupling__HeadVar__1_1, ((MR_Box) (transform_hlds__untupling__V_17_17)), ((MR_Box) (transform_hlds__untupling__V_7_7)));
                }
#line 710 "untupling.m"
              }
#line 710 "untupling.m"
          }
#line 710 "untupling.m"
      }
#line 710 "untupling.m"
  }
#line 710 "untupling.m"
}

#line 710 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling____Unify____expansion_result_0_0(
#line 710 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 710 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2)
#line 710 "untupling.m"
{
#line 710 "untupling.m"
  {
#line 710 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 710 "untupling.m"
    MR_Integer transform_hlds__untupling__CastX_9 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 710 "untupling.m"
    MR_Integer transform_hlds__untupling__CastY_10 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 710 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastX_9 == transform_hlds__untupling__CastY_10);
#line 710 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 710 "untupling.m"
      transform_hlds__untupling__succeeded = MR_TRUE;
#line 710 "untupling.m"
    else
#line 710 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "untupling.m"
      {
#line 710 "untupling.m"
        MR_Integer transform_hlds__untupling__CastX_7 = (MR_Integer) transform_hlds__untupling__HeadVar__1_1;
#line 710 "untupling.m"
        MR_Integer transform_hlds__untupling__CastY_8 = (MR_Integer) transform_hlds__untupling__HeadVar__2_2;

#line 710 "untupling.m"
        transform_hlds__untupling__succeeded = (transform_hlds__untupling__CastY_8 == transform_hlds__untupling__CastX_7);
#line 710 "untupling.m"
      }
#line 710 "untupling.m"
    else
#line 710 "untupling.m"
      {
#line 710 "untupling.m"
        MR_Word transform_hlds__untupling__TypeInfo_12_12;
#line 710 "untupling.m"
        MR_Word transform_hlds__untupling__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 710 "untupling.m"
        MR_Word transform_hlds__untupling__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 710 "untupling.m"
        MR_Word transform_hlds__untupling__V_5_5;
#line 710 "untupling.m"
        MR_Word transform_hlds__untupling__V_6_6;

#line 710 "untupling.m"
        transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 710 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 710 "untupling.m"
          {
#line 710 "untupling.m"
            transform_hlds__untupling__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 710 "untupling.m"
            transform_hlds__untupling__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 1928 "transform_hlds.untupling.c"
            {
#line 1930 "transform_hlds.untupling.c"
              transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__untupling__V_3_3, transform_hlds__untupling__V_5_5);
            }
#line 710 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 710 "untupling.m"
              {
#line 1937 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeInfo_12_12 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 1939 "transform_hlds.untupling.c"
                {
#line 1941 "transform_hlds.untupling.c"
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_12_12, ((MR_Box) (transform_hlds__untupling__V_4_4)), ((MR_Box) (transform_hlds__untupling__V_6_6)));
                }
#line 710 "untupling.m"
              }
#line 710 "untupling.m"
          }
#line 710 "untupling.m"
      }
#line 710 "untupling.m"
    return transform_hlds__untupling__succeeded;
#line 710 "untupling.m"
  }
#line 710 "untupling.m"
}

#line 772 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0_1(
#line 772 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 772 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1)
#line 772 "untupling.m"
{
#line 772 "untupling.m"
  {
#line 772 "untupling.m"
    MR_Box transform_hlds__untupling__wrapper_arg_2;
#line 772 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 772 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_LambdaHeadVar__2_29;

#line 772 "untupling.m"
    {
#line 772 "untupling.m"
      transform_hlds__untupling__conv0_LambdaHeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__772__1_1_f_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1));
    }
#line 772 "untupling.m"
    transform_hlds__untupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__untupling__conv0_LambdaHeadVar__2_29));
#line 772 "untupling.m"
    return transform_hlds__untupling__wrapper_arg_2;
#line 772 "untupling.m"
  }
#line 772 "untupling.m"
}

#line 725 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_argument_5_p_0(
#line 725 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode_6,
#line 725 "untupling.m"
  MR_Word transform_hlds__untupling__ArgType_7,
#line 725 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_8,
#line 725 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_9,
#line 725 "untupling.m"
  MR_Word * transform_hlds__untupling__Expansion_10)
#line 725 "untupling.m"
{
#line 729 "untupling.m"
  {
#line 729 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 740 "untupling.m"
    {
#line 740 "untupling.m"
      MR_Word transform_hlds__untupling__V_11_11;

#line 740 "untupling.m"
      {
#line 740 "untupling.m"
        transform_hlds__untupling__V_11_11 = parse_tree__prog_mode__in_mode_0_f_0();
      }
#line 740 "untupling.m"
      {
#line 740 "untupling.m"
        transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_6, transform_hlds__untupling__V_11_11);
      }
#line 740 "untupling.m"
    }
#line 740 "untupling.m"
    if (!(transform_hlds__untupling__succeeded))
#line 741 "untupling.m"
      {
#line 741 "untupling.m"
        MR_Word transform_hlds__untupling__V_12_12;

#line 741 "untupling.m"
        {
#line 741 "untupling.m"
          transform_hlds__untupling__V_12_12 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 741 "untupling.m"
        {
#line 741 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_6, transform_hlds__untupling__V_12_12);
        }
#line 741 "untupling.m"
      }
#line 729 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 747 "untupling.m"
      {
#line 747 "untupling.m"
        MR_Word transform_hlds__untupling__TypeArgs_20;
#line 749 "untupling.m"
        MR_Word transform_hlds__untupling__TypeCtor_19;

#line 749 "untupling.m"
        {
#line 749 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__ArgType_7, &transform_hlds__untupling__TypeCtor_19, &transform_hlds__untupling__TypeArgs_20);
        }
#line 749 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 750 "untupling.m"
          {
#line 750 "untupling.m"
            transform_hlds__untupling__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__untupling__TypeCtor_19);
          }
#line 747 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
          {
#line 752 "untupling.m"
            MR_Integer transform_hlds__untupling__Arity_21;
#line 752 "untupling.m"
            MR_Word transform_hlds__untupling__ConsId_22;

#line 752 "untupling.m"
            {
#line 752 "untupling.m"
              transform_hlds__untupling__Arity_21 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__TypeArgs_20);
            }
#line 753 "untupling.m"
            {
#line 753 "untupling.m"
              transform_hlds__untupling__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 753 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_22, 1) = ((MR_Box) (transform_hlds__untupling__Arity_21));
#line 753 "untupling.m"
            }
#line 754 "untupling.m"
            {
#line 754 "untupling.m"
              MR_Word base;
#line 754 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "untupling.m"
              *transform_hlds__untupling__Expansion_10 = base;
#line 754 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_22));
#line 754 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__TypeArgs_20));
#line 754 "untupling.m"
            }
#line 752 "untupling.m"
          }
#line 747 "untupling.m"
        else
#line 755 "untupling.m"
          {
#line 755 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtorName_26;
#line 755 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtorArgs_27;
#line 755 "untupling.m"
            MR_Word transform_hlds__untupling__TypeCtor_43;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__TypeInfo_68_78;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__TypeInfo_69_79;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__TypeDefn_23;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__TypeBody_24;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__SingleCtor_25;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__V_33_33;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__V_34_34;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__V_35_35;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__V_36_36;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__V_76_76;
#line 758 "untupling.m"
            MR_Word transform_hlds__untupling__V_77_77;
#line 762 "untupling.m"
            MR_Word transform_hlds__untupling__V_46_46;
#line 762 "untupling.m"
            MR_Word transform_hlds__untupling__V_47_47;
#line 762 "untupling.m"
            MR_Word transform_hlds__untupling__V_48_48;
#line 762 "untupling.m"
            MR_Word transform_hlds__untupling__V_49_49;
#line 762 "untupling.m"
            MR_Word transform_hlds__untupling__V_50_50;
#line 762 "untupling.m"
            MR_Word transform_hlds__untupling__V_51_51;
#line 762 "untupling.m"
            MR_Word transform_hlds__untupling__V_52_52;
#line 762 "untupling.m"
            MR_Word transform_hlds__untupling__V_53_53;
#line 763 "untupling.m"
            MR_Word transform_hlds__untupling__V_54_54;
#line 763 "untupling.m"
            MR_Integer transform_hlds__untupling__V_57_57;
#line 763 "untupling.m"
            MR_Word transform_hlds__untupling__V_58_58;
#line 766 "untupling.m"
            MR_Word transform_hlds__untupling__V_28_28;
#line 766 "untupling.m"
            MR_Word transform_hlds__untupling__V_29_29;
#line 768 "untupling.m"
            MR_Word transform_hlds__untupling__TypeCtorInfo_63_73;

#line 758 "untupling.m"
            {
#line 758 "untupling.m"
              transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__ArgType_7, &transform_hlds__untupling__TypeCtor_43, &transform_hlds__untupling__V_76_76);
            }
#line 758 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
              {
#line 2176 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeInfo_68_78 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 758 "untupling.m"
                {
#line 758 "untupling.m"
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_68_78, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__untupling__V_76_76)));
                }
#line 758 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
                  {
#line 759 "untupling.m"
                    {
#line 759 "untupling.m"
                      transform_hlds__untupling__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__untupling__TypeTable_9, transform_hlds__untupling__TypeCtor_43, &transform_hlds__untupling__TypeDefn_23);
                    }
#line 758 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
                      {
#line 760 "untupling.m"
                        transform_hlds__untupling__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 760 "untupling.m"
                        {
#line 760 "untupling.m"
                          hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__untupling__TypeDefn_23, &transform_hlds__untupling__V_77_77);
                        }
#line 2203 "transform_hlds.untupling.c"
                        transform_hlds__untupling__TypeInfo_69_79 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 760 "untupling.m"
                        {
#line 760 "untupling.m"
                          transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_69_79, ((MR_Box) (transform_hlds__untupling__V_33_33)), ((MR_Box) (transform_hlds__untupling__V_77_77)));
                        }
#line 758 "untupling.m"
                        if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
                          {
#line 761 "untupling.m"
                            {
#line 761 "untupling.m"
                              hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__untupling__TypeDefn_23, &transform_hlds__untupling__TypeBody_24);
                            }
#line 762 "untupling.m"
                            transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__TypeBody_24)) == (MR_mktag((MR_Integer) 1)));
#line 762 "untupling.m"
                            if (transform_hlds__untupling__succeeded)
#line 762 "untupling.m"
                              {
#line 762 "untupling.m"
                                transform_hlds__untupling__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 0)));
#line 762 "untupling.m"
                                transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 1)));
#line 762 "untupling.m"
                                transform_hlds__untupling__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 2)));
#line 762 "untupling.m"
                                transform_hlds__untupling__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 3)));
#line 762 "untupling.m"
                                transform_hlds__untupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 4)));
#line 762 "untupling.m"
                                transform_hlds__untupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 5)));
#line 762 "untupling.m"
                                transform_hlds__untupling__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 762 "untupling.m"
                                transform_hlds__untupling__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 762 "untupling.m"
                                transform_hlds__untupling__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_24, (MR_Integer) 7)));
#line 762 "untupling.m"
                                transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 762 "untupling.m"
                                if (transform_hlds__untupling__succeeded)
#line 762 "untupling.m"
                                  {
#line 762 "untupling.m"
                                    transform_hlds__untupling__SingleCtor_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_34_34, (MR_Integer) 0)));
#line 762 "untupling.m"
                                    transform_hlds__untupling__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_34_34, (MR_Integer) 1)));
#line 762 "untupling.m"
                                    transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "untupling.m"
                                    if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
                                      {
#line 763 "untupling.m"
                                        transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 0)));
#line 763 "untupling.m"
                                        transform_hlds__untupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 1)));
#line 763 "untupling.m"
                                        transform_hlds__untupling__SingleCtorName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 2)));
#line 763 "untupling.m"
                                        transform_hlds__untupling__SingleCtorArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 3)));
#line 763 "untupling.m"
                                        transform_hlds__untupling__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 4)));
#line 763 "untupling.m"
                                        transform_hlds__untupling__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_25, (MR_Integer) 5)));
#line 763 "untupling.m"
                                        transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "untupling.m"
                                        if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
                                          {
#line 766 "untupling.m"
                                            transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__SingleCtorArgs_27)) == (MR_mktag((MR_Integer) 1)));
#line 766 "untupling.m"
                                            if (transform_hlds__untupling__succeeded)
#line 766 "untupling.m"
                                              {
#line 766 "untupling.m"
                                                transform_hlds__untupling__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_27, (MR_Integer) 0)));
#line 766 "untupling.m"
                                                transform_hlds__untupling__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_27, (MR_Integer) 1)));
#line 2287 "transform_hlds.untupling.c"
                                                transform_hlds__untupling__TypeCtorInfo_63_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 768 "untupling.m"
                                                {
#line 768 "untupling.m"
                                                  transform_hlds__untupling__succeeded = mercury__list__member_2_p_0(transform_hlds__untupling__TypeCtorInfo_63_73, ((MR_Box) (transform_hlds__untupling__ArgType_7)), transform_hlds__untupling__ContainerTypes_8);
                                                }
#line 768 "untupling.m"
                                                transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 766 "untupling.m"
                                              }
#line 758 "untupling.m"
                                          }
#line 758 "untupling.m"
                                      }
#line 762 "untupling.m"
                                  }
#line 762 "untupling.m"
                              }
#line 758 "untupling.m"
                          }
#line 758 "untupling.m"
                      }
#line 758 "untupling.m"
                  }
#line 758 "untupling.m"
              }
#line 755 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 770 "untupling.m"
              {
#line 770 "untupling.m"
                MR_Word transform_hlds__untupling__TypeCtorInfo_64_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 770 "untupling.m"
                MR_Word transform_hlds__untupling__ExpandedTypes_30;
#line 770 "untupling.m"
                MR_Integer transform_hlds__untupling__Arity_41;
#line 770 "untupling.m"
                MR_Word transform_hlds__untupling__ConsId_42;

#line 770 "untupling.m"
                {
#line 770 "untupling.m"
                  transform_hlds__untupling__Arity_41 = mercury__list__length_1_f_0(transform_hlds__untupling__TypeCtorInfo_64_74, transform_hlds__untupling__SingleCtorArgs_27);
                }
#line 771 "untupling.m"
                {
#line 771 "untupling.m"
                  transform_hlds__untupling__ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 771 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 771 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 1) = ((MR_Box) (transform_hlds__untupling__SingleCtorName_26));
#line 771 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 2) = ((MR_Box) (transform_hlds__untupling__Arity_41));
#line 771 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_42, 3) = ((MR_Box) (transform_hlds__untupling__TypeCtor_43));
#line 771 "untupling.m"
                }
#line 772 "untupling.m"
                {
#line 772 "untupling.m"
                  transform_hlds__untupling__ExpandedTypes_30 = mercury__list__map_2_f_0(transform_hlds__untupling__TypeCtorInfo_64_74, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[4], transform_hlds__untupling__SingleCtorArgs_27);
                }
#line 773 "untupling.m"
                {
#line 773 "untupling.m"
                  MR_Word base;
#line 773 "untupling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "untupling.m"
                  *transform_hlds__untupling__Expansion_10 = base;
#line 773 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_42));
#line 773 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ExpandedTypes_30));
#line 773 "untupling.m"
                }
#line 770 "untupling.m"
              }
#line 755 "untupling.m"
            else
#line 775 "untupling.m"
              *transform_hlds__untupling__Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "untupling.m"
          }
#line 747 "untupling.m"
      }
#line 729 "untupling.m"
    else
#line 732 "untupling.m"
      *transform_hlds__untupling__Expansion_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 729 "untupling.m"
  }
#line 725 "untupling.m"
}

#line 661 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_2_11_p_0(
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 661 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 661 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 661 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__5_5,
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__6_6,
#line 661 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__7_7,
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__8_8,
#line 661 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__9_9,
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_10,
#line 661 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_11)
#line 661 "untupling.m"
{
#line 665 "untupling.m"
  {
#line 665 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 665 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "untupling.m"
        {
#line 665 "untupling.m"
          *transform_hlds__untupling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 665 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 665 "untupling.m"
          *transform_hlds__untupling__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 665 "untupling.m"
          *transform_hlds__untupling__HeadVar__9_9 = transform_hlds__untupling__HeadVar__8_8;
#line 665 "untupling.m"
          *transform_hlds__untupling__HeadVar__7_7 = transform_hlds__untupling__HeadVar__6_6;
#line 665 "untupling.m"
        }
#line 665 "untupling.m"
      else
#line 702 "untupling.m"
        {
#line 703 "untupling.m"
          {
#line 703 "untupling.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
#line 703 "untupling.m"
            return;
          }
#line 702 "untupling.m"
        }
#line 665 "untupling.m"
    else
#line 665 "untupling.m"
      {
#line 665 "untupling.m"
        MR_Word transform_hlds__untupling__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 665 "untupling.m"
        MR_Word transform_hlds__untupling__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 665 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "untupling.m"
          {
#line 705 "untupling.m"
            {
#line 705 "untupling.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "length mismatch");
#line 705 "untupling.m"
              return;
            }
#line 704 "untupling.m"
          }
#line 665 "untupling.m"
        else
#line 668 "untupling.m"
          {
#line 668 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 668 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 668 "untupling.m"
            MR_Word transform_hlds__untupling__Arg0Type_31;
#line 668 "untupling.m"
            MR_Word transform_hlds__untupling__Expansion_32;

#line 669 "untupling.m"
            {
#line 669 "untupling.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__V_107_107, &transform_hlds__untupling__Arg0Type_31);
            }
#line 670 "untupling.m"
            {
#line 670 "untupling.m"
              transform_hlds__untupling__expand_argument_5_p_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__Arg0Type_31, transform_hlds__untupling__ContainerTypes0_10, transform_hlds__untupling__TypeTable_11, &transform_hlds__untupling__Expansion_32);
            }
#line 695 "untupling.m"
            if ((transform_hlds__untupling__Expansion_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "untupling.m"
              {
#line 696 "untupling.m"
                MR_Word transform_hlds__untupling__Args1_42;

#line 698 "untupling.m"
                {
#line 698 "untupling.m"
                  transform_hlds__untupling__expand_call_args_10_p_0(transform_hlds__untupling__V_106_106, transform_hlds__untupling__ArgModes_23, &transform_hlds__untupling__Args1_42, transform_hlds__untupling__HeadVar__4_4, transform_hlds__untupling__HeadVar__5_5, transform_hlds__untupling__HeadVar__6_6, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__TypeTable_11);
                }
#line 697 "untupling.m"
                {
#line 697 "untupling.m"
                  MR_Word base;
#line 697 "untupling.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "untupling.m"
                  *transform_hlds__untupling__HeadVar__3_3 = base;
#line 697 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__V_107_107));
#line 697 "untupling.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Args1_42));
#line 697 "untupling.m"
                }
#line 696 "untupling.m"
              }
#line 695 "untupling.m"
            else
#line 672 "untupling.m"
              {
#line 672 "untupling.m"
                MR_Word transform_hlds__untupling__TypeCtorInfo_100_100;
#line 672 "untupling.m"
                MR_Word transform_hlds__untupling__ConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_32, (MR_Integer) 0)));
#line 672 "untupling.m"
                MR_Word transform_hlds__untupling__Types_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_32, (MR_Integer) 1)));
#line 672 "untupling.m"
                MR_Integer transform_hlds__untupling__NumVars_35;
#line 672 "untupling.m"
                MR_Word transform_hlds__untupling__ReplacementArgs_36;
#line 672 "untupling.m"
                MR_Word transform_hlds__untupling__ReplacementModes_37;
#line 672 "untupling.m"
                MR_Word transform_hlds__untupling__ContainerTypes_38;
#line 672 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49;
#line 672 "untupling.m"
                MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50;
#line 678 "untupling.m"
                MR_Word transform_hlds__untupling__V_104_104;

#line 673 "untupling.m"
                {
#line 673 "untupling.m"
                  transform_hlds__untupling__NumVars_35 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__Types_34);
                }
#line 674 "untupling.m"
                {
#line 674 "untupling.m"
                  mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__NumVars_35, &transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__HeadVar__6_6, &transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49);
                }
#line 675 "untupling.m"
                {
#line 675 "untupling.m"
                  hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__Types_34, transform_hlds__untupling__HeadVar__8_8, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50);
                }
#line 2560 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 676 "untupling.m"
                {
#line 676 "untupling.m"
                  mercury__list__duplicate_3_p_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__NumVars_35, ((MR_Box) (transform_hlds__untupling__ArgMode_22)), &transform_hlds__untupling__ReplacementModes_37);
                }
#line 677 "untupling.m"
                {
#line 677 "untupling.m"
                  transform_hlds__untupling__ContainerTypes_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "untupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__untupling__ContainerTypes_38, 0) = ((MR_Box) (transform_hlds__untupling__Arg0Type_31));
#line 677 "untupling.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__untupling__ContainerTypes_38, 1) = ((MR_Box) (transform_hlds__untupling__ContainerTypes0_10));
#line 677 "untupling.m"
                }
#line 678 "untupling.m"
                {
#line 678 "untupling.m"
                  transform_hlds__untupling__V_104_104 = parse_tree__prog_mode__in_mode_0_f_0();
                }
#line 678 "untupling.m"
                {
#line 678 "untupling.m"
                  transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__V_104_104);
                }
#line 678 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 679 "untupling.m"
                  {
#line 679 "untupling.m"
                    MR_Word transform_hlds__untupling__Unif_39;
#line 679 "untupling.m"
                    MR_Word transform_hlds__untupling__EnterUnifs1_40;
#line 679 "untupling.m"
                    MR_Word transform_hlds__untupling__V_51_51;
#line 679 "untupling.m"
                    MR_Word transform_hlds__untupling__V_52_52;

#line 679 "untupling.m"
                    {
#line 679 "untupling.m"
                      hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__untupling__V_107_107, transform_hlds__untupling__ConsId_33, transform_hlds__untupling__ReplacementArgs_36, &transform_hlds__untupling__Unif_39);
                    }
#line 681 "untupling.m"
                    {
#line 681 "untupling.m"
                      transform_hlds__untupling__V_51_51 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__V_106_106);
                    }
#line 682 "untupling.m"
                    {
#line 682 "untupling.m"
                      transform_hlds__untupling__V_52_52 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__ReplacementModes_37, transform_hlds__untupling__ArgModes_23);
                    }
#line 681 "untupling.m"
                    {
#line 681 "untupling.m"
                      transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__V_51_51, transform_hlds__untupling__V_52_52, transform_hlds__untupling__HeadVar__3_3, &transform_hlds__untupling__EnterUnifs1_40, transform_hlds__untupling__HeadVar__5_5, transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__ContainerTypes_38, transform_hlds__untupling__TypeTable_11);
                    }
#line 680 "untupling.m"
                    {
#line 680 "untupling.m"
                      MR_Word base;
#line 680 "untupling.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "untupling.m"
                      *transform_hlds__untupling__HeadVar__4_4 = base;
#line 680 "untupling.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Unif_39));
#line 680 "untupling.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__EnterUnifs1_40));
#line 680 "untupling.m"
                    }
#line 679 "untupling.m"
                  }
#line 678 "untupling.m"
                else
#line 685 "untupling.m"
                  {
#line 685 "untupling.m"
                    MR_Word transform_hlds__untupling__V_105_105;

#line 685 "untupling.m"
                    {
#line 685 "untupling.m"
                      transform_hlds__untupling__V_105_105 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
#line 685 "untupling.m"
                    {
#line 685 "untupling.m"
                      transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode_22, transform_hlds__untupling__V_105_105);
                    }
#line 685 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 686 "untupling.m"
                      {
#line 686 "untupling.m"
                        MR_Word transform_hlds__untupling__ExitUnifs1_41;
#line 686 "untupling.m"
                        MR_Word transform_hlds__untupling__V_55_55;
#line 686 "untupling.m"
                        MR_Word transform_hlds__untupling__V_57_57;
#line 686 "untupling.m"
                        MR_Word transform_hlds__untupling__V_58_58;
#line 686 "untupling.m"
                        MR_Word transform_hlds__untupling__Unif_64;

#line 686 "untupling.m"
                        {
#line 686 "untupling.m"
                          hlds__make_goal__construct_functor_4_p_0(transform_hlds__untupling__V_107_107, transform_hlds__untupling__ConsId_33, transform_hlds__untupling__ReplacementArgs_36, &transform_hlds__untupling__Unif_64);
                        }
#line 687 "untupling.m"
                        {
#line 687 "untupling.m"
                          transform_hlds__untupling__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "untupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_55_55, 0) = ((MR_Box) (transform_hlds__untupling__Unif_64));
#line 687 "untupling.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "untupling.m"
                        }
#line 688 "untupling.m"
                        {
#line 688 "untupling.m"
                          transform_hlds__untupling__V_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ReplacementArgs_36, transform_hlds__untupling__V_106_106);
                        }
#line 689 "untupling.m"
                        {
#line 689 "untupling.m"
                          transform_hlds__untupling__V_58_58 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_100_100, transform_hlds__untupling__ReplacementModes_37, transform_hlds__untupling__ArgModes_23);
                        }
#line 688 "untupling.m"
                        {
#line 688 "untupling.m"
                          transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__V_57_57, transform_hlds__untupling__V_58_58, transform_hlds__untupling__HeadVar__3_3, transform_hlds__untupling__HeadVar__4_4, &transform_hlds__untupling__ExitUnifs1_41, transform_hlds__untupling__STATE_VARIABLE_VarSet_49_49, transform_hlds__untupling__HeadVar__7_7, transform_hlds__untupling__STATE_VARIABLE_VarTypes_50_50, transform_hlds__untupling__HeadVar__9_9, transform_hlds__untupling__ContainerTypes_38, transform_hlds__untupling__TypeTable_11);
                        }
#line 687 "untupling.m"
                        {
#line 687 "untupling.m"
                          *transform_hlds__untupling__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__ExitUnifs1_41, transform_hlds__untupling__V_55_55);
                        }
#line 686 "untupling.m"
                      }
#line 685 "untupling.m"
                    else
#line 693 "untupling.m"
                      {
#line 693 "untupling.m"
                        {
#line 693 "untupling.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_call_args_2\'/11", (MR_String) "unsupported mode");
#line 693 "untupling.m"
                          return;
                        }
#line 693 "untupling.m"
                      }
#line 685 "untupling.m"
                  }
#line 672 "untupling.m"
              }
#line 668 "untupling.m"
          }
#line 665 "untupling.m"
      }
#line 665 "untupling.m"
  }
#line 661 "untupling.m"
}

#line 652 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_call_args_10_p_0(
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__Args0_11,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_12,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__Args_13,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__EnterUnifs_14,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__ExitUnifs_15,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_20,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21,
#line 652 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_22,
#line 652 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_18)
#line 652 "untupling.m"
{
#line 657 "untupling.m"
  {
#line 657 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 658 "untupling.m"
    {
#line 658 "untupling.m"
      transform_hlds__untupling__expand_call_args_2_11_p_0(transform_hlds__untupling__Args0_11, transform_hlds__untupling__ArgModes0_12, transform_hlds__untupling__Args_13, transform_hlds__untupling__EnterUnifs_14, transform_hlds__untupling__ExitUnifs_15, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_19, transform_hlds__untupling__STATE_VARIABLE_VarSet_20, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_21, transform_hlds__untupling__STATE_VARIABLE_VarTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__untupling__TypeTable_18);
    }
#line 657 "untupling.m"
  }
#line 652 "untupling.m"
}

#line 636 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_cases_8_p_0(
#line 636 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 636 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 636 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 636 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 636 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 636 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 636 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 636 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 636 "untupling.m"
{
#line 640 "untupling.m"
  {
#line 640 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 640 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "untupling.m"
      {
#line 640 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 640 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 640 "untupling.m"
      }
#line 640 "untupling.m"
    else
#line 642 "untupling.m"
      {
#line 642 "untupling.m"
        MR_Word transform_hlds__untupling__Case0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 642 "untupling.m"
        MR_Word transform_hlds__untupling__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 642 "untupling.m"
        MR_Word transform_hlds__untupling__Case_19;
#line 642 "untupling.m"
        MR_Word transform_hlds__untupling__Cases_20;
#line 642 "untupling.m"
        MR_Word transform_hlds__untupling__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 0)));
#line 642 "untupling.m"
        MR_Word transform_hlds__untupling__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 1)));
#line 642 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case0_17, (MR_Integer) 2)));
#line 642 "untupling.m"
        MR_Word transform_hlds__untupling__Goal_28;
#line 642 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33;
#line 642 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34;

#line 644 "untupling.m"
        {
#line 644 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_27, &transform_hlds__untupling__Goal_28, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 646 "untupling.m"
        {
#line 646 "untupling.m"
          transform_hlds__untupling__Case_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 646 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 0) = ((MR_Box) (transform_hlds__untupling__MainConsId_25));
#line 646 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 1) = ((MR_Box) (transform_hlds__untupling__OtherConsIds_26));
#line 646 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__Case_19, 2) = ((MR_Box) (transform_hlds__untupling__Goal_28));
#line 646 "untupling.m"
        }
#line 647 "untupling.m"
        {
#line 647 "untupling.m"
          transform_hlds__untupling__fix_calls_in_cases_8_p_0(transform_hlds__untupling__Cases0_18, &transform_hlds__untupling__Cases_20, transform_hlds__untupling__STATE_VARIABLE_VarSet_33_33, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_34_34, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 641 "untupling.m"
        {
#line 641 "untupling.m"
          MR_Word base;
#line 641 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "untupling.m"
          *transform_hlds__untupling__HeadVar__2_2 = base;
#line 641 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Case_19));
#line 641 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Cases_20));
#line 641 "untupling.m"
        }
#line 642 "untupling.m"
      }
#line 640 "untupling.m"
  }
#line 636 "untupling.m"
}

#line 624 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(
#line 624 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 624 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 624 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 624 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 624 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 624 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 624 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 624 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 624 "untupling.m"
{
#line 628 "untupling.m"
  {
#line 628 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 628 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "untupling.m"
      {
#line 628 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 628 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 628 "untupling.m"
      }
#line 628 "untupling.m"
    else
#line 630 "untupling.m"
      {
#line 630 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 630 "untupling.m"
        MR_Word transform_hlds__untupling__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 630 "untupling.m"
        MR_Word transform_hlds__untupling__Goal_19;
#line 630 "untupling.m"
        MR_Word transform_hlds__untupling__Goals_20;
#line 630 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29;
#line 630 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30;

#line 631 "untupling.m"
        {
#line 631 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__Goal_19, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 633 "untupling.m"
        {
#line 633 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_18, &transform_hlds__untupling__Goals_20, transform_hlds__untupling__STATE_VARIABLE_VarSet_29_29, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_30_30, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 629 "untupling.m"
        {
#line 629 "untupling.m"
          MR_Word base;
#line 629 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "untupling.m"
          *transform_hlds__untupling__HeadVar__2_2 = base;
#line 629 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Goal_19));
#line 629 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Goals_20));
#line 629 "untupling.m"
        }
#line 630 "untupling.m"
      }
#line 628 "untupling.m"
  }
#line 624 "untupling.m"
}

#line 607 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_conj_8_p_0(
#line 607 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 607 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__2_2,
#line 607 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3,
#line 607 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_4,
#line 607 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5,
#line 607 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_6,
#line 607 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_7,
#line 607 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_8)
#line 607 "untupling.m"
{
#line 611 "untupling.m"
  {
#line 611 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 611 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "untupling.m"
      {
#line 611 "untupling.m"
        *transform_hlds__untupling__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 611 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_6 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5;
#line 611 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_4 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3;
#line 611 "untupling.m"
      }
#line 611 "untupling.m"
    else
#line 613 "untupling.m"
      {
#line 613 "untupling.m"
        MR_Word transform_hlds__untupling__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 613 "untupling.m"
        MR_Word transform_hlds__untupling__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 613 "untupling.m"
        MR_Word transform_hlds__untupling__Goal1_24;
#line 613 "untupling.m"
        MR_Word transform_hlds__untupling__Goals1_25;
#line 613 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32;
#line 613 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33;
#line 618 "untupling.m"
        MR_Word transform_hlds__untupling__ConjGoals_26;
#line 618 "untupling.m"
        MR_Word transform_hlds__untupling__V_36_36;
#line 618 "untupling.m"
        MR_Word transform_hlds__untupling__V_37_37;
#line 618 "untupling.m"
        MR_Word transform_hlds__untupling__V_27_27;

#line 614 "untupling.m"
        {
#line 614 "untupling.m"
          transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__Goal1_24, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_3, &transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 616 "untupling.m"
        {
#line 616 "untupling.m"
          transform_hlds__untupling__fix_calls_in_conj_8_p_0(transform_hlds__untupling__Goals0_18, &transform_hlds__untupling__Goals1_25, transform_hlds__untupling__STATE_VARIABLE_VarSet_32_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_4, transform_hlds__untupling__STATE_VARIABLE_VarTypes_33_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_6, transform_hlds__untupling__TransformMap_7, transform_hlds__untupling__ModuleInfo_8);
        }
#line 618 "untupling.m"
        transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal1_24, (MR_Integer) 0)));
#line 618 "untupling.m"
        transform_hlds__untupling__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal1_24, (MR_Integer) 1)));
#line 618 "untupling.m"
        transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 618 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 618 "untupling.m"
          {
#line 618 "untupling.m"
            transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 1)));
#line 618 "untupling.m"
            transform_hlds__untupling__ConjGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_36_36, (MR_Integer) 2)));
#line 618 "untupling.m"
            transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_37_37 == (MR_Integer) 0);
#line 618 "untupling.m"
          }
#line 618 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 619 "untupling.m"
          {
#line 619 "untupling.m"
            {
#line 619 "untupling.m"
              *transform_hlds__untupling__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__ConjGoals_26, transform_hlds__untupling__Goals1_25);
            }
#line 619 "untupling.m"
          }
#line 618 "untupling.m"
        else
#line 621 "untupling.m"
          {
#line 621 "untupling.m"
            MR_Word base;
#line 621 "untupling.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "untupling.m"
            *transform_hlds__untupling__HeadVar__2_2 = base;
#line 621 "untupling.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Goal1_24));
#line 621 "untupling.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__Goals1_25));
#line 621 "untupling.m"
          }
#line 613 "untupling.m"
      }
#line 611 "untupling.m"
  }
#line 607 "untupling.m"
}

#line 505 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_goal_8_p_0(
#line 505 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_9,
#line 505 "untupling.m"
  MR_Word * transform_hlds__untupling__Goal_10,
#line 505 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74,
#line 505 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_75,
#line 505 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76,
#line 505 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_77,
#line 505 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_13,
#line 505 "untupling.m"
  MR_Word transform_hlds__untupling__ModuleInfo_14)
#line 505 "untupling.m"
{
#line 509 "untupling.m"
  {
#line 509 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 509 "untupling.m"
    MR_Word transform_hlds__untupling__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_9, (MR_Integer) 0)));
#line 509 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_9, (MR_Integer) 1)));

#line 517 "untupling.m"
#line 517 "untupling.m"
    switch (MR_tag((MR_Word) transform_hlds__untupling__GoalExpr0_15)) {
#line 517 "untupling.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 517 "untupling.m"
      case (MR_Integer) 0:
#line 540 "untupling.m"
        {
#line 540 "untupling.m"
          MR_Word transform_hlds__untupling__SubGoal0_53 = (MR_Word) MR_body(((MR_Word) transform_hlds__untupling__GoalExpr0_15), (MR_Integer) 0);
#line 540 "untupling.m"
          MR_Word transform_hlds__untupling__SubGoal_54;
#line 540 "untupling.m"
          MR_Word transform_hlds__untupling__GoalExpr_55;

#line 541 "untupling.m"
          {
#line 541 "untupling.m"
            transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__SubGoal0_53, &transform_hlds__untupling__SubGoal_54, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
          }
#line 543 "untupling.m"
          transform_hlds__untupling__GoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__untupling__SubGoal_54);
#line 544 "untupling.m"
          {
#line 544 "untupling.m"
            MR_Word base;
#line 544 "untupling.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 544 "untupling.m"
            *transform_hlds__untupling__Goal_10 = base;
#line 544 "untupling.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_55));
#line 544 "untupling.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 544 "untupling.m"
          }
#line 540 "untupling.m"
        }
#line 517 "untupling.m"
        break;
#line 517 "untupling.m"
      case (MR_Integer) 1:
#line 515 "untupling.m"
        {
#line 516 "untupling.m"
          *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 515 "untupling.m"
          *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 515 "untupling.m"
          *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 515 "untupling.m"
        }
#line 517 "untupling.m"
        break;
#line 517 "untupling.m"
      case (MR_Integer) 2:
#line 518 "untupling.m"
        {
#line 518 "untupling.m"
          MR_Word transform_hlds__untupling__CalleePredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)));
#line 518 "untupling.m"
          MR_Integer transform_hlds__untupling__CalleeProcId_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 518 "untupling.m"
          MR_Word transform_hlds__untupling__OrigArgs_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 518 "untupling.m"
          MR_Word transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 518 "untupling.m"
          MR_Word transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 4)));
#line 518 "untupling.m"
          MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 5)));
#line 519 "untupling.m"
          MR_Word transform_hlds__untupling__CallAux0_41;
#line 519 "untupling.m"
          MR_Word transform_hlds__untupling__CallAuxInfo_42;
#line 520 "untupling.m"
          MR_Word transform_hlds__untupling__V_99_99;
#line 520 "untupling.m"
          MR_Word transform_hlds__untupling__V_100_100;
#line 520 "untupling.m"
          MR_Word transform_hlds__untupling__V_101_101;
#line 520 "untupling.m"
          MR_Box transform_hlds__untupling__conv0_V_100_100;
#line 521 "untupling.m"
          MR_Word transform_hlds__untupling__V_40_40;

#line 520 "untupling.m"
          {
#line 520 "untupling.m"
            transform_hlds__untupling__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 520 "untupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_99_99, 0) = ((MR_Box) (transform_hlds__untupling__CalleePredId_34));
#line 520 "untupling.m"
            MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_99_99, 1) = ((MR_Box) (transform_hlds__untupling__CalleeProcId_35));
#line 520 "untupling.m"
          }
#line 520 "untupling.m"
          {
#line 520 "untupling.m"
            transform_hlds__untupling__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, transform_hlds__untupling__TransformMap_13, ((MR_Box) (transform_hlds__untupling__V_99_99)), &transform_hlds__untupling__conv0_V_100_100);
          }
#line 520 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 520 "untupling.m"
            {
#line 520 "untupling.m"
              transform_hlds__untupling__V_100_100 = ((MR_Word) transform_hlds__untupling__conv0_V_100_100);
#line 520 "untupling.m"
              transform_hlds__untupling__succeeded = MR_TRUE;
#line 520 "untupling.m"
            }
#line 520 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 520 "untupling.m"
            {
#line 521 "untupling.m"
              transform_hlds__untupling__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_100_100, (MR_Integer) 0)));
#line 521 "untupling.m"
              transform_hlds__untupling__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_100_100, (MR_Integer) 1)));
#line 521 "untupling.m"
              transform_hlds__untupling__CallAux0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_101_101, (MR_Integer) 0)));
#line 521 "untupling.m"
              transform_hlds__untupling__CallAuxInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_101_101, (MR_Integer) 1)));
#line 521 "untupling.m"
              transform_hlds__untupling__succeeded = MR_TRUE;
#line 520 "untupling.m"
            }
#line 519 "untupling.m"
          if (transform_hlds__untupling__succeeded)
#line 523 "untupling.m"
            {
#line 523 "untupling.m"
              MR_Word transform_hlds__untupling__TypeTable_43;
#line 523 "untupling.m"
              MR_Word transform_hlds__untupling__CalleeProcInfo_45;
#line 523 "untupling.m"
              MR_Word transform_hlds__untupling__OrigArgModes_46;
#line 523 "untupling.m"
              MR_Word transform_hlds__untupling__Args_47;
#line 523 "untupling.m"
              MR_Word transform_hlds__untupling__EnterUnifs_48;
#line 523 "untupling.m"
              MR_Word transform_hlds__untupling__ExitUnifs_49;
#line 524 "untupling.m"
              MR_Word transform_hlds__untupling___CalleePredInfo_44;
#line 529 "untupling.m"
              MR_Word transform_hlds__untupling__CallAux_50;
#line 529 "untupling.m"
              MR_Word transform_hlds__untupling__V_123_123;
#line 529 "untupling.m"
              MR_Integer transform_hlds__untupling__V_124_124;
#line 529 "untupling.m"
              MR_Word transform_hlds__untupling__V_126_126;
#line 529 "untupling.m"
              MR_Word transform_hlds__untupling__V_127_127;
#line 529 "untupling.m"
              MR_Word transform_hlds__untupling__V_128_128;
#line 529 "untupling.m"
              MR_Word transform_hlds__untupling__V_125_125;

#line 523 "untupling.m"
              {
#line 523 "untupling.m"
                hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__ModuleInfo_14, &transform_hlds__untupling__TypeTable_43);
              }
#line 524 "untupling.m"
              {
#line 524 "untupling.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__ModuleInfo_14, transform_hlds__untupling__CalleePredId_34, transform_hlds__untupling__CalleeProcId_35, &transform_hlds__untupling___CalleePredInfo_44, &transform_hlds__untupling__CalleeProcInfo_45);
              }
#line 526 "untupling.m"
              {
#line 526 "untupling.m"
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__untupling__CalleeProcInfo_45, &transform_hlds__untupling__OrigArgModes_46);
              }
#line 527 "untupling.m"
              {
#line 527 "untupling.m"
                transform_hlds__untupling__expand_call_args_10_p_0(transform_hlds__untupling__OrigArgs_36, transform_hlds__untupling__OrigArgModes_46, &transform_hlds__untupling__Args_47, &transform_hlds__untupling__EnterUnifs_48, &transform_hlds__untupling__ExitUnifs_49, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TypeTable_43);
              }
#line 529 "untupling.m"
              transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__CallAux0_41)) == (MR_mktag((MR_Integer) 2)));
#line 529 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 529 "untupling.m"
                {
#line 529 "untupling.m"
                  transform_hlds__untupling__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 0)));
#line 529 "untupling.m"
                  transform_hlds__untupling__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 1)));
#line 529 "untupling.m"
                  transform_hlds__untupling__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 2)));
#line 529 "untupling.m"
                  transform_hlds__untupling__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 3)));
#line 529 "untupling.m"
                  transform_hlds__untupling__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 4)));
#line 529 "untupling.m"
                  transform_hlds__untupling__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux0_41, (MR_Integer) 5)));
#line 529 "untupling.m"
                  {
#line 529 "untupling.m"
                    transform_hlds__untupling__CallAux_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 529 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 0) = ((MR_Box) (transform_hlds__untupling__V_123_123));
#line 529 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 1) = ((MR_Box) (transform_hlds__untupling__V_124_124));
#line 529 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 2) = ((MR_Box) (transform_hlds__untupling__Args_47));
#line 529 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 3) = ((MR_Box) (transform_hlds__untupling__V_126_126));
#line 529 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 4) = ((MR_Box) (transform_hlds__untupling__V_127_127));
#line 529 "untupling.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__untupling__CallAux_50, 5) = ((MR_Box) (transform_hlds__untupling__V_128_128));
#line 529 "untupling.m"
                  }
#line 529 "untupling.m"
                  transform_hlds__untupling__succeeded = MR_TRUE;
#line 529 "untupling.m"
                }
#line 529 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 530 "untupling.m"
                {
#line 530 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtorInfo_131_131;
#line 530 "untupling.m"
                  MR_Word transform_hlds__untupling__Call_51;
#line 530 "untupling.m"
                  MR_Word transform_hlds__untupling__ConjList_52;
#line 530 "untupling.m"
                  MR_Word transform_hlds__untupling__V_104_104;
#line 530 "untupling.m"
                  MR_Word transform_hlds__untupling__V_105_105;

#line 530 "untupling.m"
                  {
#line 530 "untupling.m"
                    transform_hlds__untupling__Call_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 530 "untupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__untupling__Call_51, 0) = ((MR_Box) (transform_hlds__untupling__CallAux_50));
#line 530 "untupling.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__untupling__Call_51, 1) = ((MR_Box) (transform_hlds__untupling__CallAuxInfo_42));
#line 530 "untupling.m"
                  }
#line 3363 "transform_hlds.untupling.c"
                  transform_hlds__untupling__TypeCtorInfo_131_131 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 531 "untupling.m"
                  {
#line 531 "untupling.m"
                    transform_hlds__untupling__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_105_105, 0) = ((MR_Box) (transform_hlds__untupling__Call_51));
#line 531 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "untupling.m"
                  }
#line 531 "untupling.m"
                  {
#line 531 "untupling.m"
                    transform_hlds__untupling__V_104_104 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_131_131, transform_hlds__untupling__V_105_105, transform_hlds__untupling__ExitUnifs_49);
                  }
#line 531 "untupling.m"
                  {
#line 531 "untupling.m"
                    transform_hlds__untupling__ConjList_52 = mercury__list__f_43_43_2_f_0(transform_hlds__untupling__TypeCtorInfo_131_131, transform_hlds__untupling__EnterUnifs_48, transform_hlds__untupling__V_104_104);
                  }
#line 532 "untupling.m"
                  {
#line 532 "untupling.m"
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__untupling__ConjList_52, transform_hlds__untupling__GoalInfo0_16, transform_hlds__untupling__Goal_10);
                  }
#line 530 "untupling.m"
                }
#line 529 "untupling.m"
              else
#line 534 "untupling.m"
                {
#line 534 "untupling.m"
                  {
#line 534 "untupling.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "not a call template");
#line 534 "untupling.m"
                    return;
                  }
#line 534 "untupling.m"
                }
#line 523 "untupling.m"
            }
#line 519 "untupling.m"
          else
#line 537 "untupling.m"
            {
#line 537 "untupling.m"
              *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 537 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 537 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 537 "untupling.m"
            }
#line 518 "untupling.m"
        }
#line 517 "untupling.m"
        break;
#line 517 "untupling.m"
      case (MR_Integer) 3:
#line 517 "untupling.m"
#line 517 "untupling.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 0)))) {
#line 517 "untupling.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 517 "untupling.m"
          case (MR_Integer) 0:
#line 517 "untupling.m"
          case (MR_Integer) 1:
#line 515 "untupling.m"
            {
#line 516 "untupling.m"
              *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 515 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 515 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 515 "untupling.m"
            }
#line 517 "untupling.m"
            break;
#line 517 "untupling.m"
          case (MR_Integer) 2:
#line 562 "untupling.m"
            {
#line 562 "untupling.m"
              MR_Word transform_hlds__untupling__ConjType_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 562 "untupling.m"
              MR_Word transform_hlds__untupling__Goals0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 562 "untupling.m"
              MR_Word transform_hlds__untupling__Goals_61;
#line 562 "untupling.m"
              MR_Word transform_hlds__untupling__GoalExpr_117;

#line 567 "untupling.m"
#line 567 "untupling.m"
              switch (transform_hlds__untupling__ConjType_59) {
#line 567 "untupling.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 567 "untupling.m"
                case (MR_Integer) 1:
#line 572 "untupling.m"
                  {
#line 572 "untupling.m"
                    transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_60, &transform_hlds__untupling__Goals_61, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                  }
#line 567 "untupling.m"
                  break;
#line 567 "untupling.m"
                case (MR_Integer) 0:
#line 565 "untupling.m"
                  {
#line 565 "untupling.m"
                    transform_hlds__untupling__fix_calls_in_conj_8_p_0(transform_hlds__untupling__Goals0_60, &transform_hlds__untupling__Goals_61, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                  }
#line 567 "untupling.m"
                  break;
#line 567 "untupling.m"
              }
#line 575 "untupling.m"
              {
#line 575 "untupling.m"
                transform_hlds__untupling__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 575 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 575 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 1) = ((MR_Box) (transform_hlds__untupling__ConjType_59));
#line 575 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_117, 2) = ((MR_Box) (transform_hlds__untupling__Goals_61));
#line 575 "untupling.m"
              }
#line 576 "untupling.m"
              {
#line 576 "untupling.m"
                MR_Word base;
#line 576 "untupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "untupling.m"
                *transform_hlds__untupling__Goal_10 = base;
#line 576 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_117));
#line 576 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 576 "untupling.m"
              }
#line 562 "untupling.m"
            }
#line 517 "untupling.m"
            break;
#line 517 "untupling.m"
          case (MR_Integer) 3:
#line 578 "untupling.m"
            {
#line 578 "untupling.m"
              MR_Word transform_hlds__untupling__GoalExpr_118;
#line 578 "untupling.m"
              MR_Word transform_hlds__untupling__Goals0_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 578 "untupling.m"
              MR_Word transform_hlds__untupling__Goals_120;

#line 579 "untupling.m"
              {
#line 579 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_list_8_p_0(transform_hlds__untupling__Goals0_119, &transform_hlds__untupling__Goals_120, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 581 "untupling.m"
              {
#line 581 "untupling.m"
                transform_hlds__untupling__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 581 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_118, 1) = ((MR_Box) (transform_hlds__untupling__Goals_120));
#line 581 "untupling.m"
              }
#line 582 "untupling.m"
              {
#line 582 "untupling.m"
                MR_Word base;
#line 582 "untupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "untupling.m"
                *transform_hlds__untupling__Goal_10 = base;
#line 582 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_118));
#line 582 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 582 "untupling.m"
              }
#line 578 "untupling.m"
            }
#line 517 "untupling.m"
            break;
#line 517 "untupling.m"
          case (MR_Integer) 4:
#line 584 "untupling.m"
            {
#line 584 "untupling.m"
              MR_Word transform_hlds__untupling__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 584 "untupling.m"
              MR_Word transform_hlds__untupling__CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 584 "untupling.m"
              MR_Word transform_hlds__untupling__Cases0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 584 "untupling.m"
              MR_Word transform_hlds__untupling__Cases_65;
#line 584 "untupling.m"
              MR_Word transform_hlds__untupling__GoalExpr_121;

#line 585 "untupling.m"
              {
#line 585 "untupling.m"
                transform_hlds__untupling__fix_calls_in_cases_8_p_0(transform_hlds__untupling__Cases0_64, &transform_hlds__untupling__Cases_65, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 587 "untupling.m"
              {
#line 587 "untupling.m"
                transform_hlds__untupling__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 587 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 587 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 1) = ((MR_Box) (transform_hlds__untupling__Var_62));
#line 587 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 2) = ((MR_Box) (transform_hlds__untupling__CanFail_63));
#line 587 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_121, 3) = ((MR_Box) (transform_hlds__untupling__Cases_65));
#line 587 "untupling.m"
              }
#line 588 "untupling.m"
              {
#line 588 "untupling.m"
                MR_Word base;
#line 588 "untupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "untupling.m"
                *transform_hlds__untupling__Goal_10 = base;
#line 588 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_121));
#line 588 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 588 "untupling.m"
              }
#line 584 "untupling.m"
            }
#line 517 "untupling.m"
            break;
#line 517 "untupling.m"
          case (MR_Integer) 5:
#line 546 "untupling.m"
            {
#line 546 "untupling.m"
              MR_Word transform_hlds__untupling__Reason_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 546 "untupling.m"
              MR_Word transform_hlds__untupling__SubGoal0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 548 "untupling.m"
              MR_Word transform_hlds__untupling__FGT_58;
#line 548 "untupling.m"
              MR_Word transform_hlds__untupling__V_57_57;

#line 548 "untupling.m"
              transform_hlds__untupling__succeeded = ((((MR_tag((MR_Word) transform_hlds__untupling__Reason_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 548 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 548 "untupling.m"
                {
#line 548 "untupling.m"
                  transform_hlds__untupling__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 1)));
#line 548 "untupling.m"
                  transform_hlds__untupling__FGT_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__Reason_56, (MR_Integer) 2)));
#line 550 "untupling.m"
#line 550 "untupling.m"
                  switch (transform_hlds__untupling__FGT_58) {
#line 550 "untupling.m"
                    default:
#line 550 "untupling.m"
                      transform_hlds__untupling__succeeded = MR_FALSE;
#line 550 "untupling.m"
                      break;
#line 550 "untupling.m"
                    case (MR_Integer) 1:
#line 549 "untupling.m"
                      transform_hlds__untupling__succeeded = MR_TRUE;
#line 550 "untupling.m"
                      break;
#line 550 "untupling.m"
                    case (MR_Integer) 2:
#line 550 "untupling.m"
                      transform_hlds__untupling__succeeded = MR_TRUE;
#line 550 "untupling.m"
                      break;
#line 550 "untupling.m"
                  }
#line 548 "untupling.m"
                }
#line 547 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 554 "untupling.m"
                {
#line 554 "untupling.m"
                  *transform_hlds__untupling__Goal_10 = transform_hlds__untupling__Goal0_9;
#line 554 "untupling.m"
                  *transform_hlds__untupling__STATE_VARIABLE_VarTypes_77 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76;
#line 554 "untupling.m"
                  *transform_hlds__untupling__STATE_VARIABLE_VarSet_75 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74;
#line 554 "untupling.m"
                }
#line 547 "untupling.m"
              else
#line 557 "untupling.m"
                {
#line 557 "untupling.m"
                  MR_Word transform_hlds__untupling__SubGoal_110;
#line 557 "untupling.m"
                  MR_Word transform_hlds__untupling__GoalExpr_111;

#line 556 "untupling.m"
                  {
#line 556 "untupling.m"
                    transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__SubGoal0_114, &transform_hlds__untupling__SubGoal_110, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
                  }
#line 558 "untupling.m"
                  {
#line 558 "untupling.m"
                    transform_hlds__untupling__GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 558 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 558 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 1) = ((MR_Box) (transform_hlds__untupling__Reason_56));
#line 558 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_111, 2) = ((MR_Box) (transform_hlds__untupling__SubGoal_110));
#line 558 "untupling.m"
                  }
#line 559 "untupling.m"
                  {
#line 559 "untupling.m"
                    MR_Word base;
#line 559 "untupling.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 559 "untupling.m"
                    *transform_hlds__untupling__Goal_10 = base;
#line 559 "untupling.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_111));
#line 559 "untupling.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 559 "untupling.m"
                  }
#line 557 "untupling.m"
                }
#line 546 "untupling.m"
            }
#line 517 "untupling.m"
            break;
#line 517 "untupling.m"
          case (MR_Integer) 6:
#line 590 "untupling.m"
            {
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__Vars_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 1)));
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__Cond0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 2)));
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__Then0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 3)));
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__Else0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr0_15, (MR_Integer) 4)));
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__Cond_70;
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__Then_71;
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__Else_72;
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81;
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82;
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83;
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84;
#line 590 "untupling.m"
              MR_Word transform_hlds__untupling__GoalExpr_122;

#line 591 "untupling.m"
              {
#line 591 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Cond0_67, &transform_hlds__untupling__Cond_70, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_74, &transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_76, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 593 "untupling.m"
              {
#line 593 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Then0_68, &transform_hlds__untupling__Then_71, transform_hlds__untupling__STATE_VARIABLE_VarSet_81_81, &transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83, transform_hlds__untupling__STATE_VARIABLE_VarTypes_82_82, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 595 "untupling.m"
              {
#line 595 "untupling.m"
                transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Else0_69, &transform_hlds__untupling__Else_72, transform_hlds__untupling__STATE_VARIABLE_VarSet_83_83, transform_hlds__untupling__STATE_VARIABLE_VarSet_75, transform_hlds__untupling__STATE_VARIABLE_VarTypes_84_84, transform_hlds__untupling__STATE_VARIABLE_VarTypes_77, transform_hlds__untupling__TransformMap_13, transform_hlds__untupling__ModuleInfo_14);
              }
#line 597 "untupling.m"
              {
#line 597 "untupling.m"
                transform_hlds__untupling__GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 597 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 597 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 1) = ((MR_Box) (transform_hlds__untupling__Vars_66));
#line 597 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 2) = ((MR_Box) (transform_hlds__untupling__Cond_70));
#line 597 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 3) = ((MR_Box) (transform_hlds__untupling__Then_71));
#line 597 "untupling.m"
                MR_hl_field(MR_mktag(3), transform_hlds__untupling__GoalExpr_122, 4) = ((MR_Box) (transform_hlds__untupling__Else_72));
#line 597 "untupling.m"
              }
#line 598 "untupling.m"
              {
#line 598 "untupling.m"
                MR_Word base;
#line 598 "untupling.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 598 "untupling.m"
                *transform_hlds__untupling__Goal_10 = base;
#line 598 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_122));
#line 598 "untupling.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo0_16));
#line 598 "untupling.m"
              }
#line 590 "untupling.m"
            }
#line 517 "untupling.m"
            break;
#line 517 "untupling.m"
          case (MR_Integer) 7:
#line 600 "untupling.m"
            {
#line 602 "untupling.m"
              {
#line 602 "untupling.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.fix_calls_in_goal\'/8", (MR_String) "shorthand");
#line 602 "untupling.m"
                return;
              }
#line 600 "untupling.m"
            }
#line 517 "untupling.m"
            break;
#line 517 "untupling.m"
        }
#line 517 "untupling.m"
        break;
#line 517 "untupling.m"
    }
#line 509 "untupling.m"
  }
#line 505 "untupling.m"
}

#line 477 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_proc_5_p_0(
#line 477 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_6,
#line 477 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_7,
#line 477 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_8,
#line 477 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18,
#line 477 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19)
#line 477 "untupling.m"
{
#line 483 "untupling.m"
  {
#line 483 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 483 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_11;
#line 483 "untupling.m"
    MR_Word transform_hlds__untupling__Goal0_12;
#line 483 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes0_13;
#line 483 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet0_14;
#line 483 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_15;
#line 483 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_16;
#line 483 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_17;
#line 483 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20;

#line 482 "untupling.m"
    {
#line 482 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__untupling__PredId_7, transform_hlds__untupling__ProcId_8, &transform_hlds__untupling__PredInfo_11, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20);
    }
#line 484 "untupling.m"
    {
#line 484 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__Goal0_12);
    }
#line 485 "untupling.m"
    {
#line 485 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__VarTypes0_13);
    }
#line 486 "untupling.m"
    {
#line 486 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__VarSet0_14);
    }
#line 487 "untupling.m"
    {
#line 487 "untupling.m"
      transform_hlds__untupling__fix_calls_in_goal_8_p_0(transform_hlds__untupling__Goal0_12, &transform_hlds__untupling__Goal_15, transform_hlds__untupling__VarSet0_14, &transform_hlds__untupling__VarSet_16, transform_hlds__untupling__VarTypes0_13, &transform_hlds__untupling__VarTypes_17, transform_hlds__untupling__TransformMap_6, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18);
    }
#line 489 "untupling.m"
    {
#line 489 "untupling.m"
      transform_hlds__untupling__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__untupling__Goal0_12, transform_hlds__untupling__Goal_15);
    }
#line 489 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 490 "untupling.m"
      *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19 = transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18;
#line 489 "untupling.m"
    else
#line 492 "untupling.m"
      {
#line 492 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21;
#line 492 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22;
#line 492 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23;
#line 492 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25;
#line 492 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28;
#line 492 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_30;

#line 492 "untupling.m"
        {
#line 492 "untupling.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__untupling__Goal_15, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_20_20, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21);
        }
#line 493 "untupling.m"
        {
#line 493 "untupling.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__untupling__VarSet_16, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_21_21, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22);
        }
#line 494 "untupling.m"
        {
#line 494 "untupling.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__untupling__VarTypes_17, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_22_22, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23);
        }
#line 495 "untupling.m"
        {
#line 495 "untupling.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_23_23, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25);
        }
#line 496 "untupling.m"
        {
#line 496 "untupling.m"
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_25_25, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_30, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 498 "untupling.m"
        {
#line 498 "untupling.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__untupling__PredId_7, transform_hlds__untupling__ProcId_8, transform_hlds__untupling__PredInfo_11, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_27_30, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_28_28, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_19);
        }
#line 492 "untupling.m"
      }
#line 483 "untupling.m"
  }
#line 477 "untupling.m"
}

#line 475 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0_1(
#line 475 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 475 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 475 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 475 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3)
#line 475 "untupling.m"
{
#line 475 "untupling.m"
  {
#line 475 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 475 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19;

#line 475 "untupling.m"
    {
#line 475 "untupling.m"
      transform_hlds__untupling__fix_calls_in_proc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19);
    }
#line 475 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_ModuleInfo_19));
#line 475 "untupling.m"
  }
#line 475 "untupling.m"
}

#line 469 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__fix_calls_in_pred_4_p_0(
#line 469 "untupling.m"
  MR_Word transform_hlds__untupling__TransformMap_5,
#line 469 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_6,
#line 469 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10,
#line 469 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11)
#line 469 "untupling.m"
{
#line 472 "untupling.m"
  {
#line 472 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 472 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_8;
#line 472 "untupling.m"
    MR_Word transform_hlds__untupling__ProcIds_9;
#line 472 "untupling.m"
    MR_Word transform_hlds__untupling__V_12_12;
#line 475 "untupling.m"
    MR_Box transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11;

#line 473 "untupling.m"
    {
#line 473 "untupling.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__untupling__PredId_6, &transform_hlds__untupling__PredInfo_8);
    }
#line 474 "untupling.m"
    {
#line 474 "untupling.m"
      transform_hlds__untupling__ProcIds_9 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__untupling__PredInfo_8);
    }
#line 475 "untupling.m"
    {
#line 475 "untupling.m"
      transform_hlds__untupling__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 475 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_8[0]));
#line 475 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 1) = ((MR_Box) (transform_hlds__untupling__fix_calls_in_pred_4_p_0_1));
#line 475 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 475 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 3) = ((MR_Box) (transform_hlds__untupling__TransformMap_5));
#line 475 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_12_12, 4) = ((MR_Box) (transform_hlds__untupling__PredId_6));
#line 475 "untupling.m"
    }
#line 475 "untupling.m"
    {
#line 475 "untupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__untupling__V_12_12, transform_hlds__untupling__ProcIds_9, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_10)), &transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11);
    }
#line 475 "untupling.m"
    *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) transform_hlds__untupling__conv1_STATE_VARIABLE_ModuleInfo_11);
#line 472 "untupling.m"
  }
#line 469 "untupling.m"
}

#line 409 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_aux_pred_12_p_0(
#line 409 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_13,
#line 409 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_14,
#line 409 "untupling.m"
  MR_Word transform_hlds__untupling__PredInfo_15,
#line 409 "untupling.m"
  MR_Word transform_hlds__untupling__ProcInfo_16,
#line 409 "untupling.m"
  MR_Integer transform_hlds__untupling__Counter_17,
#line 409 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredId_18,
#line 409 "untupling.m"
  MR_Integer * transform_hlds__untupling__AuxProcId_19,
#line 409 "untupling.m"
  MR_Word * transform_hlds__untupling__CallAux_20,
#line 409 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxPredInfo_21,
#line 409 "untupling.m"
  MR_Word * transform_hlds__untupling__AuxProcInfo_22,
#line 409 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51,
#line 409 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52)
#line 409 "untupling.m"
{
#line 416 "untupling.m"
  {
#line 416 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__AuxHeadVars_24;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_25;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo_27;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__InitialAuxInstMap_28;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__TVarSet_29;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_30;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__ClassContext_31;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__RttiVarMaps_32;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_33;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__InstVarSet_34;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__Markers_35;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__OrigOrigin_36;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__HasParallelConj_37;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__VarNameRemap_38;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__PredModule_39;
#line 416 "untupling.m"
    MR_String transform_hlds__untupling__PredName_40;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__PredOrFunc_41;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__Context_42;
#line 416 "untupling.m"
    MR_Integer transform_hlds__untupling__Line_43;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredSymName0_44;
#line 416 "untupling.m"
    MR_Integer transform_hlds__untupling__ProcNo_45;
#line 416 "untupling.m"
    MR_String transform_hlds__untupling__Suffix_46;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredSymName_47;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__Origin_48;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredProcId_50;
#line 416 "untupling.m"
    MR_Word transform_hlds__untupling__V_59_59;
#line 416 "untupling.m"
    MR_String transform_hlds__untupling__V_62_62;
#line 418 "untupling.m"
    MR_Word transform_hlds__untupling___GoalExpr_26;
#line 443 "untupling.m"
    MR_Word transform_hlds__untupling___ExtraArgs_49;

#line 417 "untupling.m"
    {
#line 417 "untupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__AuxHeadVars_24);
    }
#line 418 "untupling.m"
    {
#line 418 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__Goal_25);
    }
#line 418 "untupling.m"
    transform_hlds__untupling___GoalExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal_25, (MR_Integer) 0)));
#line 418 "untupling.m"
    transform_hlds__untupling__GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal_25, (MR_Integer) 1)));
#line 419 "untupling.m"
    {
#line 419 "untupling.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__untupling__ProcInfo_16, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51, &transform_hlds__untupling__InitialAuxInstMap_28);
    }
#line 420 "untupling.m"
    {
#line 420 "untupling.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__TVarSet_29);
    }
#line 421 "untupling.m"
    {
#line 421 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__VarTypes_30);
    }
#line 422 "untupling.m"
    {
#line 422 "untupling.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__ClassContext_31);
    }
#line 423 "untupling.m"
    {
#line 423 "untupling.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__RttiVarMaps_32);
    }
#line 424 "untupling.m"
    {
#line 424 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__VarSet_33);
    }
#line 425 "untupling.m"
    {
#line 425 "untupling.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__InstVarSet_34);
    }
#line 426 "untupling.m"
    {
#line 426 "untupling.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__Markers_35);
    }
#line 427 "untupling.m"
    {
#line 427 "untupling.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__OrigOrigin_36);
    }
#line 428 "untupling.m"
    {
#line 428 "untupling.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__untupling__ProcInfo_16, &transform_hlds__untupling__HasParallelConj_37);
    }
#line 429 "untupling.m"
    {
#line 429 "untupling.m"
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(transform_hlds__untupling__PredInfo_15, &transform_hlds__untupling__VarNameRemap_38);
    }
#line 431 "untupling.m"
    {
#line 431 "untupling.m"
      transform_hlds__untupling__PredModule_39 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 432 "untupling.m"
    {
#line 432 "untupling.m"
      transform_hlds__untupling__PredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 433 "untupling.m"
    {
#line 433 "untupling.m"
      transform_hlds__untupling__PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__untupling__PredInfo_15);
    }
#line 434 "untupling.m"
    {
#line 434 "untupling.m"
      transform_hlds__untupling__Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__untupling__GoalInfo_27);
    }
#line 435 "untupling.m"
    {
#line 435 "untupling.m"
      mercury__term__context_line_2_p_0(transform_hlds__untupling__Context_42, &transform_hlds__untupling__Line_43);
    }
#line 436 "untupling.m"
    {
#line 436 "untupling.m"
      parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__untupling__PredModule_39, (MR_String) "untupling", transform_hlds__untupling__PredOrFunc_41, transform_hlds__untupling__PredName_40, transform_hlds__untupling__Line_43, transform_hlds__untupling__Counter_17, &transform_hlds__untupling__AuxPredSymName0_44);
    }
#line 438 "untupling.m"
    {
#line 438 "untupling.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__untupling__ProcId_14, &transform_hlds__untupling__ProcNo_45);
    }
#line 439 "untupling.m"
    {
#line 439 "untupling.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__untupling_scalar_common_7[0], transform_hlds__untupling__ProcNo_45, &transform_hlds__untupling__V_62_62);
    }
#line 439 "untupling.m"
    {
#line 439 "untupling.m"
      transform_hlds__untupling__Suffix_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__untupling__V_62_62);
    }
#line 440 "untupling.m"
    {
#line 440 "untupling.m"
      mdbcomp__sym_name__add_sym_name_suffix_3_p_0(transform_hlds__untupling__AuxPredSymName0_44, transform_hlds__untupling__Suffix_46, &transform_hlds__untupling__AuxPredSymName_47);
    }
#line 442 "untupling.m"
    {
#line 442 "untupling.m"
      transform_hlds__untupling__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "untupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 442 "untupling.m"
      MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_59_59, 1) = ((MR_Box) (transform_hlds__untupling__ProcNo_45));
#line 442 "untupling.m"
    }
#line 442 "untupling.m"
    {
#line 442 "untupling.m"
      transform_hlds__untupling__Origin_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 442 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 0) = ((MR_Box) (transform_hlds__untupling__V_59_59));
#line 442 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 1) = ((MR_Box) (transform_hlds__untupling__OrigOrigin_36));
#line 442 "untupling.m"
      MR_hl_field(MR_mktag(2), transform_hlds__untupling__Origin_48, 2) = ((MR_Box) (transform_hlds__untupling__PredId_13));
#line 442 "untupling.m"
    }
#line 443 "untupling.m"
    {
#line 443 "untupling.m"
      hlds__hlds_pred__define_new_pred_20_p_0(transform_hlds__untupling__Origin_48, transform_hlds__untupling__Goal_25, transform_hlds__untupling__CallAux_20, transform_hlds__untupling__AuxHeadVars_24, &transform_hlds__untupling___ExtraArgs_49, transform_hlds__untupling__InitialAuxInstMap_28, transform_hlds__untupling__AuxPredSymName_47, transform_hlds__untupling__TVarSet_29, transform_hlds__untupling__VarTypes_30, transform_hlds__untupling__ClassContext_31, transform_hlds__untupling__RttiVarMaps_32, transform_hlds__untupling__VarSet_33, transform_hlds__untupling__InstVarSet_34, transform_hlds__untupling__Markers_35, (MR_Integer) 1, transform_hlds__untupling__HasParallelConj_37, transform_hlds__untupling__VarNameRemap_38, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_51, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52, &transform_hlds__untupling__AuxPredProcId_50);
    }
#line 447 "untupling.m"
    *transform_hlds__untupling__AuxPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__AuxPredProcId_50, (MR_Integer) 0)));
#line 447 "untupling.m"
    *transform_hlds__untupling__AuxProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__AuxPredProcId_50, (MR_Integer) 1)));
#line 449 "untupling.m"
    {
#line 449 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(*transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_52, *transform_hlds__untupling__AuxPredId_18, *transform_hlds__untupling__AuxProcId_19, transform_hlds__untupling__AuxPredInfo_21, transform_hlds__untupling__AuxProcInfo_22);
    }
#line 416 "untupling.m"
  }
#line 409 "untupling.m"
}

#line 381 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__build_untuple_map_4_p_0(
#line 381 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 381 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 381 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 381 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4)
#line 381 "untupling.m"
{
#line 384 "untupling.m"
  while (MR_TRUE)
#line 384 "untupling.m"
    {
#line 384 "untupling.m"
      /* tailcall optimized into a loop */
#line 384 "untupling.m"
      {
#line 384 "untupling.m"
        MR_bool transform_hlds__untupling__succeeded;

#line 384 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "untupling.m"
          if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "untupling.m"
            *transform_hlds__untupling__HeadVar__4_4 = transform_hlds__untupling__HeadVar__3_3;
#line 384 "untupling.m"
          else
#line 392 "untupling.m"
            {
#line 393 "untupling.m"
              {
#line 393 "untupling.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
#line 393 "untupling.m"
                return;
              }
#line 392 "untupling.m"
            }
#line 384 "untupling.m"
        else
#line 384 "untupling.m"
          {
#line 384 "untupling.m"
            MR_Word transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "untupling.m"
            MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 384 "untupling.m"
            if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "untupling.m"
              {
#line 395 "untupling.m"
                {
#line 395 "untupling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.build_untuple_map\'/4", (MR_String) "length mismatch");
#line 395 "untupling.m"
                  return;
                }
#line 394 "untupling.m"
              }
#line 384 "untupling.m"
            else
#line 385 "untupling.m"
              {
#line 385 "untupling.m"
                MR_Word transform_hlds__untupling__NewVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "untupling.m"
                MR_Word transform_hlds__untupling__NewVarss_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 386 "untupling.m"
                MR_Word transform_hlds__untupling__TypeInfo_40_40;
#line 386 "untupling.m"
                MR_Word transform_hlds__untupling__V_15_15;
#line 386 "untupling.m"
                MR_Word transform_hlds__untupling__V_37_37;

#line 386 "untupling.m"
                transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__NewVars_10)) == (MR_mktag((MR_Integer) 1)));
#line 386 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 386 "untupling.m"
                  {
#line 386 "untupling.m"
                    transform_hlds__untupling__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__NewVars_10, (MR_Integer) 0)));
#line 386 "untupling.m"
                    transform_hlds__untupling__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__NewVars_10, (MR_Integer) 1)));
#line 4382 "transform_hlds.untupling.c"
                    transform_hlds__untupling__TypeInfo_40_40 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
#line 386 "untupling.m"
                    {
#line 386 "untupling.m"
                      transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_40_40, ((MR_Box) (transform_hlds__untupling__V_39_39)), ((MR_Box) (transform_hlds__untupling__V_37_37)));
                    }
#line 386 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 386 "untupling.m"
                      transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "untupling.m"
                  }
#line 386 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 387 "untupling.m"
                  {
#line 387 "untupling.m"
                    /* direct tailcall eliminated */
#line 387 "untupling.m"
                    {
#line 387 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__V_38_38;
#line 387 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__2__tmp_copy_2 = transform_hlds__untupling__NewVarss_11;

#line 387 "untupling.m"
                      transform_hlds__untupling__HeadVar__2_2 = transform_hlds__untupling__HeadVar__2__tmp_copy_2;
#line 387 "untupling.m"
                      transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 387 "untupling.m"
                    }
#line 387 "untupling.m"
                    continue;
#line 387 "untupling.m"
                  }
#line 386 "untupling.m"
                else
#line 389 "untupling.m"
                  {
#line 389 "untupling.m"
                    MR_Word transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17;

#line 389 "untupling.m"
                    {
#line 389 "untupling.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], (MR_Word) &transform_hlds__untupling_scalar_common_2[1], ((MR_Box) (transform_hlds__untupling__V_39_39)), ((MR_Box) (transform_hlds__untupling__NewVars_10)), transform_hlds__untupling__HeadVar__3_3, &transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17);
                    }
#line 390 "untupling.m"
                    /* direct tailcall eliminated */
#line 390 "untupling.m"
                    {
#line 390 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__V_38_38;
#line 390 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__2__tmp_copy_2 = transform_hlds__untupling__NewVarss_11;
#line 390 "untupling.m"
                      MR_Word transform_hlds__untupling__HeadVar__3__tmp_copy_3 = transform_hlds__untupling__STATE_VARIABLE_UntupleMap_17_17;

#line 390 "untupling.m"
                      transform_hlds__untupling__HeadVar__3_3 = transform_hlds__untupling__HeadVar__3__tmp_copy_3;
#line 390 "untupling.m"
                      transform_hlds__untupling__HeadVar__2_2 = transform_hlds__untupling__HeadVar__2__tmp_copy_2;
#line 390 "untupling.m"
                      transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 390 "untupling.m"
                    }
#line 390 "untupling.m"
                    continue;
#line 389 "untupling.m"
                  }
#line 385 "untupling.m"
              }
#line 384 "untupling.m"
          }
#line 384 "untupling.m"
      }
#line 384 "untupling.m"
      break;
#line 384 "untupling.m"
    }
#line 381 "untupling.m"
}

#line 357 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__create_untuple_vars_8_p_0(
#line 357 "untupling.m"
  MR_String transform_hlds__untupling__ParentName_1,
#line 357 "untupling.m"
  MR_Integer transform_hlds__untupling__Num_2,
#line 357 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__3_3,
#line 357 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 357 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5,
#line 357 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_6,
#line 357 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7,
#line 357 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_8)
#line 357 "untupling.m"
{
#line 361 "untupling.m"
  {
#line 361 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 361 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "untupling.m"
      {
#line 361 "untupling.m"
        *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 361 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_8 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7;
#line 361 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_6 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5;
#line 361 "untupling.m"
      }
#line 361 "untupling.m"
    else
#line 363 "untupling.m"
      {
#line 363 "untupling.m"
        MR_Word transform_hlds__untupling__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 0)));
#line 363 "untupling.m"
        MR_Word transform_hlds__untupling__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__3_3, (MR_Integer) 1)));
#line 363 "untupling.m"
        MR_Word transform_hlds__untupling__NewVar_21;
#line 363 "untupling.m"
        MR_Word transform_hlds__untupling__NewVars_22;
#line 363 "untupling.m"
        MR_String transform_hlds__untupling__Name_25;
#line 363 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36;
#line 363 "untupling.m"
        MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37;
#line 363 "untupling.m"
        MR_Integer transform_hlds__untupling__V_38_38;
#line 363 "untupling.m"
        MR_String transform_hlds__untupling__V_43_43;
#line 363 "untupling.m"
        MR_Word transform_hlds__untupling__V_49_49 = (MR_Word) &transform_hlds__untupling_scalar_common_7[0];
#line 363 "untupling.m"
        MR_String transform_hlds__untupling__V_51_51;
#line 363 "untupling.m"
        MR_String transform_hlds__untupling__V_52_52;
#line 363 "untupling.m"
        MR_String transform_hlds__untupling__V_59_59;

#line 364 "untupling.m"
        {
#line 364 "untupling.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(transform_hlds__untupling__V_49_49, transform_hlds__untupling__Num_2, &transform_hlds__untupling__V_43_43);
        }
#line 364 "untupling.m"
        {
#line 364 "untupling.m"
          transform_hlds__untupling__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__untupling__V_43_43);
        }
#line 364 "untupling.m"
        {
#line 364 "untupling.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(transform_hlds__untupling__V_49_49, transform_hlds__untupling__ParentName_1, &transform_hlds__untupling__V_52_52);
        }
#line 364 "untupling.m"
        {
#line 364 "untupling.m"
          transform_hlds__untupling__V_59_59 = mercury__string__f_43_43_2_f_0(transform_hlds__untupling__V_52_52, transform_hlds__untupling__V_51_51);
        }
#line 364 "untupling.m"
        {
#line 364 "untupling.m"
          transform_hlds__untupling__Name_25 = mercury__string__f_43_43_2_f_0((MR_String) "Untupled_", transform_hlds__untupling__V_59_59);
        }
#line 365 "untupling.m"
        {
#line 365 "untupling.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__Name_25, &transform_hlds__untupling__NewVar_21, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_5, &transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36);
        }
#line 366 "untupling.m"
        {
#line 366 "untupling.m"
          hlds__vartypes__add_var_type_4_p_0(transform_hlds__untupling__NewVar_21, transform_hlds__untupling__Type_19, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_7, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37);
        }
#line 367 "untupling.m"
        transform_hlds__untupling__V_38_38 = (transform_hlds__untupling__Num_2 + (MR_Integer) 1);
#line 367 "untupling.m"
        {
#line 367 "untupling.m"
          transform_hlds__untupling__create_untuple_vars_8_p_0(transform_hlds__untupling__ParentName_1, transform_hlds__untupling__V_38_38, transform_hlds__untupling__Types_20, &transform_hlds__untupling__NewVars_22, transform_hlds__untupling__STATE_VARIABLE_VarSet_36_36, transform_hlds__untupling__STATE_VARIABLE_VarSet_6, transform_hlds__untupling__STATE_VARIABLE_VarTypes_37_37, transform_hlds__untupling__STATE_VARIABLE_VarTypes_8);
        }
#line 362 "untupling.m"
        {
#line 362 "untupling.m"
          MR_Word base;
#line 362 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = base;
#line 362 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__NewVar_21));
#line 362 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__NewVars_22));
#line 362 "untupling.m"
        }
#line 363 "untupling.m"
      }
#line 361 "untupling.m"
  }
#line 357 "untupling.m"
}

#line 323 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 323 "untupling.m"
  MR_Word * transform_hlds__untupling__MaybeHeadVarsAndArgModes_15,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_30,
#line 323 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_31,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32,
#line 323 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_33,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34,
#line 323 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_35,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_19,
#line 323 "untupling.m"
  MR_Word * transform_hlds__untupling__ContainerTypes_20,
#line 323 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21)
#line 323 "untupling.m"
{
#line 331 "untupling.m"
  {
#line 331 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 331 "untupling.m"
    MR_Word transform_hlds__untupling__Type_22;
#line 331 "untupling.m"
    MR_Word transform_hlds__untupling__Expansion_23;

#line 332 "untupling.m"
    {
#line 332 "untupling.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34, transform_hlds__untupling__HeadVar0_13, &transform_hlds__untupling__Type_22);
    }
#line 333 "untupling.m"
    {
#line 333 "untupling.m"
      transform_hlds__untupling__expand_argument_5_p_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__Type_22, transform_hlds__untupling__ContainerTypes0_19, transform_hlds__untupling__TypeTable_21, &transform_hlds__untupling__Expansion_23);
    }
#line 351 "untupling.m"
    if ((transform_hlds__untupling__Expansion_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "untupling.m"
      {
#line 353 "untupling.m"
        *transform_hlds__untupling__MaybeHeadVarsAndArgModes_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "untupling.m"
        *transform_hlds__untupling__ContainerTypes_20 = transform_hlds__untupling__ContainerTypes0_19;
#line 352 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = transform_hlds__untupling__STATE_VARIABLE_Goal_0_30;
#line 352 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_33 = transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32;
#line 352 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_35 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34;
#line 352 "untupling.m"
      }
#line 351 "untupling.m"
    else
#line 335 "untupling.m"
      {
#line 335 "untupling.m"
        MR_Word transform_hlds__untupling__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_23, (MR_Integer) 0)));
#line 335 "untupling.m"
        MR_Word transform_hlds__untupling__NewTypes_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__Expansion_23, (MR_Integer) 1)));
#line 335 "untupling.m"
        MR_String transform_hlds__untupling__ParentName_26;
#line 335 "untupling.m"
        MR_Word transform_hlds__untupling__NewHeadVars_27;
#line 335 "untupling.m"
        MR_Word transform_hlds__untupling__NewArgModes_28;
#line 335 "untupling.m"
        MR_Integer transform_hlds__untupling__V_39_39;
#line 335 "untupling.m"
        MR_Word transform_hlds__untupling__V_40_40;
#line 341 "untupling.m"
        MR_Word transform_hlds__untupling__V_51_51;

#line 336 "untupling.m"
        {
#line 336 "untupling.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32, transform_hlds__untupling__HeadVar0_13, &transform_hlds__untupling__ParentName_26);
        }
#line 337 "untupling.m"
        {
#line 337 "untupling.m"
          transform_hlds__untupling__create_untuple_vars_8_p_0(transform_hlds__untupling__ParentName_26, (MR_Integer) 0, transform_hlds__untupling__NewTypes_25, &transform_hlds__untupling__NewHeadVars_27, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_33, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_34, transform_hlds__untupling__STATE_VARIABLE_VarTypes_35);
        }
#line 339 "untupling.m"
        {
#line 339 "untupling.m"
          transform_hlds__untupling__V_39_39 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__NewHeadVars_27);
        }
#line 339 "untupling.m"
        {
#line 339 "untupling.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__V_39_39, ((MR_Box) (transform_hlds__untupling__ArgMode0_14)), &transform_hlds__untupling__NewArgModes_28);
        }
#line 340 "untupling.m"
        {
#line 340 "untupling.m"
          transform_hlds__untupling__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_40_40, 0) = ((MR_Box) (transform_hlds__untupling__NewHeadVars_27));
#line 340 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_40_40, 1) = ((MR_Box) (transform_hlds__untupling__NewArgModes_28));
#line 340 "untupling.m"
        }
#line 340 "untupling.m"
        {
#line 340 "untupling.m"
          MR_Word base;
#line 340 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 340 "untupling.m"
          *transform_hlds__untupling__MaybeHeadVarsAndArgModes_15 = base;
#line 340 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__V_40_40));
#line 340 "untupling.m"
        }
#line 341 "untupling.m"
        {
#line 341 "untupling.m"
          transform_hlds__untupling__V_51_51 = parse_tree__prog_mode__in_mode_0_f_0();
        }
#line 341 "untupling.m"
        {
#line 341 "untupling.m"
          transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__V_51_51);
        }
#line 341 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 342 "untupling.m"
          {
#line 342 "untupling.m"
            MR_Word transform_hlds__untupling__UnifGoal_29;
#line 342 "untupling.m"
            MR_Word transform_hlds__untupling__GoalListA_58;
#line 342 "untupling.m"
            MR_Word transform_hlds__untupling__GoalListB_59;
#line 342 "untupling.m"
            MR_Word transform_hlds__untupling__GoalList_60;
#line 342 "untupling.m"
            MR_Word transform_hlds__untupling__Determinism_61;
#line 342 "untupling.m"
            MR_Word transform_hlds__untupling__GoalInfo0_62;
#line 342 "untupling.m"
            MR_Word transform_hlds__untupling__GoalInfo_63;
#line 342 "untupling.m"
            MR_Word transform_hlds__untupling__V_64_64;

#line 342 "untupling.m"
            {
#line 342 "untupling.m"
              hlds__make_goal__construct_functor_4_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ConsId_24, transform_hlds__untupling__NewHeadVars_27, &transform_hlds__untupling__UnifGoal_29);
            }
#line 373 "untupling.m"
            {
#line 373 "untupling.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__UnifGoal_29, &transform_hlds__untupling__GoalListA_58);
            }
#line 374 "untupling.m"
            {
#line 374 "untupling.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__STATE_VARIABLE_Goal_0_30, &transform_hlds__untupling__GoalListB_59);
            }
#line 375 "untupling.m"
            {
#line 375 "untupling.m"
              mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__GoalListA_58, transform_hlds__untupling__GoalListB_59, &transform_hlds__untupling__GoalList_60);
            }
#line 376 "untupling.m"
            {
#line 376 "untupling.m"
              hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__untupling__GoalList_60, &transform_hlds__untupling__Determinism_61);
            }
#line 377 "untupling.m"
            {
#line 377 "untupling.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__untupling__GoalInfo0_62);
            }
#line 378 "untupling.m"
            {
#line 378 "untupling.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__untupling__Determinism_61, transform_hlds__untupling__GoalInfo0_62, &transform_hlds__untupling__GoalInfo_63);
            }
#line 379 "untupling.m"
            {
#line 379 "untupling.m"
              transform_hlds__untupling__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 379 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 379 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 1) = ((MR_Box) ((MR_Integer) 0));
#line 379 "untupling.m"
              MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_64_64, 2) = ((MR_Box) (transform_hlds__untupling__GoalList_60));
#line 379 "untupling.m"
            }
#line 379 "untupling.m"
            {
#line 379 "untupling.m"
              MR_Word base;
#line 379 "untupling.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "untupling.m"
              *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = base;
#line 379 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__V_64_64));
#line 379 "untupling.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_63));
#line 379 "untupling.m"
            }
#line 342 "untupling.m"
          }
#line 341 "untupling.m"
        else
#line 344 "untupling.m"
          {
#line 344 "untupling.m"
            MR_Word transform_hlds__untupling__V_52_52;

#line 344 "untupling.m"
            {
#line 344 "untupling.m"
              transform_hlds__untupling__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
            }
#line 344 "untupling.m"
            {
#line 344 "untupling.m"
              transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(transform_hlds__untupling__ArgMode0_14, transform_hlds__untupling__V_52_52);
            }
#line 344 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 345 "untupling.m"
              {
#line 345 "untupling.m"
                MR_Word transform_hlds__untupling__UnifGoal_46;
#line 345 "untupling.m"
                MR_Word transform_hlds__untupling__GoalListA_70;
#line 345 "untupling.m"
                MR_Word transform_hlds__untupling__GoalListB_71;
#line 345 "untupling.m"
                MR_Word transform_hlds__untupling__GoalList_72;
#line 345 "untupling.m"
                MR_Word transform_hlds__untupling__Determinism_73;
#line 345 "untupling.m"
                MR_Word transform_hlds__untupling__GoalInfo0_74;
#line 345 "untupling.m"
                MR_Word transform_hlds__untupling__GoalInfo_75;
#line 345 "untupling.m"
                MR_Word transform_hlds__untupling__V_76_76;

#line 345 "untupling.m"
                {
#line 345 "untupling.m"
                  hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ConsId_24, transform_hlds__untupling__NewHeadVars_27, &transform_hlds__untupling__UnifGoal_46);
                }
#line 373 "untupling.m"
                {
#line 373 "untupling.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__STATE_VARIABLE_Goal_0_30, &transform_hlds__untupling__GoalListA_70);
                }
#line 374 "untupling.m"
                {
#line 374 "untupling.m"
                  hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__untupling__UnifGoal_46, &transform_hlds__untupling__GoalListB_71);
                }
#line 375 "untupling.m"
                {
#line 375 "untupling.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__untupling__GoalListA_70, transform_hlds__untupling__GoalListB_71, &transform_hlds__untupling__GoalList_72);
                }
#line 376 "untupling.m"
                {
#line 376 "untupling.m"
                  hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__untupling__GoalList_72, &transform_hlds__untupling__Determinism_73);
                }
#line 377 "untupling.m"
                {
#line 377 "untupling.m"
                  hlds__hlds_goal__goal_info_init_1_p_0(&transform_hlds__untupling__GoalInfo0_74);
                }
#line 378 "untupling.m"
                {
#line 378 "untupling.m"
                  hlds__hlds_goal__goal_info_set_determinism_3_p_0(transform_hlds__untupling__Determinism_73, transform_hlds__untupling__GoalInfo0_74, &transform_hlds__untupling__GoalInfo_75);
                }
#line 379 "untupling.m"
                {
#line 379 "untupling.m"
                  transform_hlds__untupling__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 379 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 379 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 1) = ((MR_Box) ((MR_Integer) 0));
#line 379 "untupling.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_76_76, 2) = ((MR_Box) (transform_hlds__untupling__GoalList_72));
#line 379 "untupling.m"
                }
#line 379 "untupling.m"
                {
#line 379 "untupling.m"
                  MR_Word base;
#line 379 "untupling.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "untupling.m"
                  *transform_hlds__untupling__STATE_VARIABLE_Goal_31 = base;
#line 379 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__V_76_76));
#line 379 "untupling.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_75));
#line 379 "untupling.m"
                }
#line 345 "untupling.m"
              }
#line 344 "untupling.m"
            else
#line 348 "untupling.m"
              {
#line 348 "untupling.m"
                {
#line 348 "untupling.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_one_arg_in_proc_2\'/12", (MR_String) "unsupported mode");
#line 348 "untupling.m"
                  return;
                }
#line 348 "untupling.m"
              }
#line 344 "untupling.m"
          }
#line 350 "untupling.m"
        {
#line 350 "untupling.m"
          MR_Word base;
#line 350 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "untupling.m"
          *transform_hlds__untupling__ContainerTypes_20 = base;
#line 350 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__Type_22));
#line 350 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ContainerTypes0_19));
#line 350 "untupling.m"
        }
#line 335 "untupling.m"
      }
#line 331 "untupling.m"
  }
#line 323 "untupling.m"
}

#line 301 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar0_13,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__ArgMode0_14,
#line 301 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 301 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_0_28,
#line 301 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Goal_29,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30,
#line 301 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_31,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32,
#line 301 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_33,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes0_20,
#line 301 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_21)
#line 301 "untupling.m"
{
#line 307 "untupling.m"
  {
#line 307 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 307 "untupling.m"
    MR_Word transform_hlds__untupling__MaybeHeadVarsAndArgModes_22;
#line 307 "untupling.m"
    MR_Word transform_hlds__untupling__ContainerTypes_23;
#line 307 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_34_34;
#line 307 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35;
#line 307 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36;

#line 308 "untupling.m"
    {
#line 308 "untupling.m"
      transform_hlds__untupling__expand_one_arg_in_proc_2_12_p_0(transform_hlds__untupling__HeadVar0_13, transform_hlds__untupling__ArgMode0_14, &transform_hlds__untupling__MaybeHeadVarsAndArgModes_22, transform_hlds__untupling__STATE_VARIABLE_Goal_0_28, &transform_hlds__untupling__STATE_VARIABLE_Goal_34_34, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_30, &transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_32, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36, transform_hlds__untupling__ContainerTypes0_20, &transform_hlds__untupling__ContainerTypes_23, transform_hlds__untupling__TypeTable_21);
    }
#line 317 "untupling.m"
    if ((transform_hlds__untupling__MaybeHeadVarsAndArgModes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "untupling.m"
      {
#line 319 "untupling.m"
        {
#line 319 "untupling.m"
          MR_Word base;
#line 319 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "untupling.m"
          *transform_hlds__untupling__HeadVars_15 = base;
#line 319 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__HeadVar0_13));
#line 319 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "untupling.m"
        }
#line 320 "untupling.m"
        {
#line 320 "untupling.m"
          MR_Word base;
#line 320 "untupling.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "untupling.m"
          *transform_hlds__untupling__ArgModes_16 = base;
#line 320 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ArgMode0_14));
#line 320 "untupling.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "untupling.m"
        }
#line 318 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Goal_29 = transform_hlds__untupling__STATE_VARIABLE_Goal_34_34;
#line 318 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarSet_31 = transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35;
#line 318 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_VarTypes_33 = transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36;
#line 318 "untupling.m"
      }
#line 317 "untupling.m"
    else
#line 311 "untupling.m"
      {
#line 311 "untupling.m"
        MR_Word transform_hlds__untupling__HeadVars1_24;
#line 311 "untupling.m"
        MR_Word transform_hlds__untupling__ArgModes1_25;
#line 311 "untupling.m"
        MR_Word transform_hlds__untupling__ListOfHeadVars_26;
#line 311 "untupling.m"
        MR_Word transform_hlds__untupling__ListOfArgModes_27;
#line 311 "untupling.m"
        MR_Word transform_hlds__untupling__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__MaybeHeadVarsAndArgModes_22, (MR_Integer) 0)));

#line 311 "untupling.m"
        transform_hlds__untupling__HeadVars1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_39_39, (MR_Integer) 0)));
#line 311 "untupling.m"
        transform_hlds__untupling__ArgModes1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_39_39, (MR_Integer) 1)));
#line 312 "untupling.m"
        {
#line 312 "untupling.m"
          transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__HeadVars1_24, transform_hlds__untupling__ArgModes1_25, &transform_hlds__untupling__ListOfHeadVars_26, &transform_hlds__untupling__ListOfArgModes_27, transform_hlds__untupling__STATE_VARIABLE_Goal_34_34, transform_hlds__untupling__STATE_VARIABLE_Goal_29, transform_hlds__untupling__STATE_VARIABLE_VarSet_35_35, transform_hlds__untupling__STATE_VARIABLE_VarSet_31, transform_hlds__untupling__STATE_VARIABLE_VarTypes_36_36, transform_hlds__untupling__STATE_VARIABLE_VarTypes_33, transform_hlds__untupling__ContainerTypes_23, transform_hlds__untupling__TypeTable_21);
        }
#line 315 "untupling.m"
        {
#line 315 "untupling.m"
          *transform_hlds__untupling__HeadVars_15 = mercury__list__condense_1_f_0((MR_Word) &transform_hlds__untupling_scalar_common_2[0], transform_hlds__untupling__ListOfHeadVars_26);
        }
#line 316 "untupling.m"
        {
#line 316 "untupling.m"
          *transform_hlds__untupling__ArgModes_16 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__ListOfArgModes_27);
        }
#line 311 "untupling.m"
      }
#line 307 "untupling.m"
  }
#line 301 "untupling.m"
}

#line 283 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_3_12_p_0(
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__2_2,
#line 283 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__3_3,
#line 283 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__4_4,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__5_5,
#line 283 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__7_7,
#line 283 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__8_8,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__9_9,
#line 283 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__10_10,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__ContainerTypes_11,
#line 283 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_12)
#line 283 "untupling.m"
{
#line 288 "untupling.m"
  {
#line 288 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;

#line 288 "untupling.m"
    if ((transform_hlds__untupling__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "untupling.m"
      if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "untupling.m"
        {
#line 288 "untupling.m"
          *transform_hlds__untupling__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 288 "untupling.m"
          *transform_hlds__untupling__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 288 "untupling.m"
          *transform_hlds__untupling__HeadVar__10_10 = transform_hlds__untupling__HeadVar__9_9;
#line 288 "untupling.m"
          *transform_hlds__untupling__HeadVar__8_8 = transform_hlds__untupling__HeadVar__7_7;
#line 288 "untupling.m"
          *transform_hlds__untupling__HeadVar__6_6 = transform_hlds__untupling__HeadVar__5_5;
#line 288 "untupling.m"
        }
#line 288 "untupling.m"
      else
#line 296 "untupling.m"
        {
#line 297 "untupling.m"
          {
#line 297 "untupling.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
#line 297 "untupling.m"
            return;
          }
#line 296 "untupling.m"
        }
#line 288 "untupling.m"
    else
#line 288 "untupling.m"
      {
#line 288 "untupling.m"
        MR_Word transform_hlds__untupling__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 288 "untupling.m"
        MR_Word transform_hlds__untupling__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));

#line 288 "untupling.m"
        if ((transform_hlds__untupling__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "untupling.m"
          {
#line 299 "untupling.m"
            {
#line 299 "untupling.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.untupling", (MR_String) "predicate \140transform_hlds.untupling.expand_args_in_proc_3\'/12", (MR_String) "length mismatch");
#line 299 "untupling.m"
              return;
            }
#line 298 "untupling.m"
          }
#line 288 "untupling.m"
        else
#line 291 "untupling.m"
          {
#line 291 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 0)));
#line 291 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__2_2, (MR_Integer) 1)));
#line 291 "untupling.m"
            MR_Word transform_hlds__untupling__HeadVar_28;
#line 291 "untupling.m"
            MR_Word transform_hlds__untupling__HeadVars_29;
#line 291 "untupling.m"
            MR_Word transform_hlds__untupling__ArgMode_30;
#line 291 "untupling.m"
            MR_Word transform_hlds__untupling__ArgModes_31;
#line 291 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_Goal_43_43;
#line 291 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44;
#line 291 "untupling.m"
            MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45;

#line 292 "untupling.m"
            {
#line 292 "untupling.m"
              transform_hlds__untupling__expand_one_arg_in_proc_12_p_0(transform_hlds__untupling__V_86_86, transform_hlds__untupling__ArgMode0_26, &transform_hlds__untupling__HeadVar_28, &transform_hlds__untupling__ArgMode_30, transform_hlds__untupling__HeadVar__5_5, &transform_hlds__untupling__STATE_VARIABLE_Goal_43_43, transform_hlds__untupling__HeadVar__7_7, &transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44, transform_hlds__untupling__HeadVar__9_9, &transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45, transform_hlds__untupling__ContainerTypes_11, transform_hlds__untupling__TypeTable_12);
            }
#line 294 "untupling.m"
            {
#line 294 "untupling.m"
              transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__V_85_85, transform_hlds__untupling__ArgModes0_27, &transform_hlds__untupling__HeadVars_29, &transform_hlds__untupling__ArgModes_31, transform_hlds__untupling__STATE_VARIABLE_Goal_43_43, transform_hlds__untupling__HeadVar__6_6, transform_hlds__untupling__STATE_VARIABLE_VarSet_44_44, transform_hlds__untupling__HeadVar__8_8, transform_hlds__untupling__STATE_VARIABLE_VarTypes_45_45, transform_hlds__untupling__HeadVar__10_10, transform_hlds__untupling__ContainerTypes_11, transform_hlds__untupling__TypeTable_12);
            }
#line 290 "untupling.m"
            {
#line 290 "untupling.m"
              MR_Word base;
#line 290 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "untupling.m"
              *transform_hlds__untupling__HeadVar__3_3 = base;
#line 290 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__HeadVar_28));
#line 290 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__HeadVars_29));
#line 290 "untupling.m"
            }
#line 290 "untupling.m"
            {
#line 290 "untupling.m"
              MR_Word base;
#line 290 "untupling.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "untupling.m"
              *transform_hlds__untupling__HeadVar__4_4 = base;
#line 290 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__untupling__ArgMode_30));
#line 290 "untupling.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__untupling__ArgModes_31));
#line 290 "untupling.m"
            }
#line 291 "untupling.m"
          }
#line 288 "untupling.m"
      }
#line 288 "untupling.m"
  }
#line 283 "untupling.m"
}

#line 266 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_2_12_p_0(
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVars0_13,
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__ArgModes0_14,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVars_15,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__ArgModes_16,
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__Goal0_17,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__HeadVar__6_6,
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarSet_29,
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_VarTypes_31,
#line 266 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_22,
#line 266 "untupling.m"
  MR_Word * transform_hlds__untupling__UntupleMap_23)
#line 266 "untupling.m"
{
#line 273 "untupling.m"
  {
#line 273 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 273 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_39_39;
#line 273 "untupling.m"
    MR_Word transform_hlds__untupling__GoalExpr_18;
#line 273 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo_19;
#line 273 "untupling.m"
    MR_Word transform_hlds__untupling__ListOfHeadVars_24;
#line 273 "untupling.m"
    MR_Word transform_hlds__untupling__ListOfArgModes_25;
#line 273 "untupling.m"
    MR_Word transform_hlds__untupling__GoalInfo1_26;
#line 273 "untupling.m"
    MR_Word transform_hlds__untupling__Context_27;
#line 273 "untupling.m"
    MR_Word transform_hlds__untupling__V_32_32;
#line 273 "untupling.m"
    MR_Word transform_hlds__untupling__V_36_36;
#line 273 "untupling.m"
    MR_Word transform_hlds__untupling__V_37_37;
#line 277 "untupling.m"
    MR_Word transform_hlds__untupling__V_38_38;

#line 274 "untupling.m"
    {
#line 274 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_3_12_p_0(transform_hlds__untupling__HeadVars0_13, transform_hlds__untupling__ArgModes0_14, &transform_hlds__untupling__ListOfHeadVars_24, &transform_hlds__untupling__ListOfArgModes_25, transform_hlds__untupling__Goal0_17, &transform_hlds__untupling__V_32_32, transform_hlds__untupling__STATE_VARIABLE_VarSet_0_28, transform_hlds__untupling__STATE_VARIABLE_VarSet_29, transform_hlds__untupling__STATE_VARIABLE_VarTypes_0_30, transform_hlds__untupling__STATE_VARIABLE_VarTypes_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__untupling__TypeTable_22);
    }
#line 275 "untupling.m"
    transform_hlds__untupling__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_32_32, (MR_Integer) 0)));
#line 275 "untupling.m"
    transform_hlds__untupling__GoalInfo1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_32_32, (MR_Integer) 1)));
#line 277 "untupling.m"
    transform_hlds__untupling__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_17, (MR_Integer) 0)));
#line 277 "untupling.m"
    transform_hlds__untupling__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__Goal0_17, (MR_Integer) 1)));
#line 277 "untupling.m"
    {
#line 277 "untupling.m"
      transform_hlds__untupling__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__untupling__V_36_36);
    }
#line 278 "untupling.m"
    {
#line 278 "untupling.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(transform_hlds__untupling__Context_27, transform_hlds__untupling__GoalInfo1_26, &transform_hlds__untupling__GoalInfo_19);
    }
#line 272 "untupling.m"
    {
#line 272 "untupling.m"
      MR_Word base;
#line 272 "untupling.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 272 "untupling.m"
      *transform_hlds__untupling__HeadVar__6_6 = base;
#line 272 "untupling.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__untupling__GoalExpr_18));
#line 272 "untupling.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__untupling__GoalInfo_19));
#line 272 "untupling.m"
    }
#line 5336 "transform_hlds.untupling.c"
    transform_hlds__untupling__TypeInfo_39_39 = (MR_Word) &transform_hlds__untupling_scalar_common_2[0];
#line 279 "untupling.m"
    {
#line 279 "untupling.m"
      mercury__list__condense_2_p_0(transform_hlds__untupling__TypeInfo_39_39, transform_hlds__untupling__ListOfHeadVars_24, transform_hlds__untupling__HeadVars_15);
    }
#line 280 "untupling.m"
    {
#line 280 "untupling.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__untupling__ListOfArgModes_25, transform_hlds__untupling__ArgModes_16);
    }
#line 281 "untupling.m"
    {
#line 281 "untupling.m"
      transform_hlds__untupling__V_37_37 = mercury__map__init_0_f_0(transform_hlds__untupling__TypeInfo_39_39, (MR_Word) &transform_hlds__untupling_scalar_common_2[1]);
    }
#line 281 "untupling.m"
    {
#line 281 "untupling.m"
      transform_hlds__untupling__build_untuple_map_4_p_0(transform_hlds__untupling__HeadVars0_13, transform_hlds__untupling__ListOfHeadVars_24, transform_hlds__untupling__V_37_37, transform_hlds__untupling__UntupleMap_23);
    }
#line 273 "untupling.m"
  }
#line 266 "untupling.m"
}

#line 223 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_proc_8_p_0(
#line 223 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_9,
#line 223 "untupling.m"
  MR_Integer transform_hlds__untupling__ProcId_10,
#line 223 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35,
#line 223 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36,
#line 223 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37,
#line 223 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_38,
#line 223 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_39,
#line 223 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_40)
#line 223 "untupling.m"
{
#line 229 "untupling.m"
  {
#line 229 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__TypeTable_15;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo0_16;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__HeadVars0_17;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__ArgModes0_18;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__Goal0_19;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes0_20;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet0_21;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__HeadVars_22;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__ArgModes_23;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__Goal_24;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__VarSet_25;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__VarTypes_26;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__UntupleMap_27;
#line 229 "untupling.m"
    MR_Integer transform_hlds__untupling__Num_28;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredId_29;
#line 229 "untupling.m"
    MR_Integer transform_hlds__untupling__AuxProcId_30;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__CallAux_31;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__AuxPredInfo_32;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__AuxProcInfo0_33;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__AuxProcInfo_34;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__V_54_54;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__V_55_55;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__V_57_57;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__V_58_58;
#line 229 "untupling.m"
    MR_Word transform_hlds__untupling__V_60_60;

#line 229 "untupling.m"
    {
#line 229 "untupling.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__untupling__TypeTable_15);
    }
#line 230 "untupling.m"
    {
#line 230 "untupling.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, transform_hlds__untupling__PredId_9, transform_hlds__untupling__ProcId_10, &transform_hlds__untupling__PredInfo0_16, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41);
    }
#line 233 "untupling.m"
    {
#line 233 "untupling.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__HeadVars0_17);
    }
#line 234 "untupling.m"
    {
#line 234 "untupling.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__ArgModes0_18);
    }
#line 235 "untupling.m"
    {
#line 235 "untupling.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__Goal0_19);
    }
#line 236 "untupling.m"
    {
#line 236 "untupling.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__VarTypes0_20);
    }
#line 237 "untupling.m"
    {
#line 237 "untupling.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__VarSet0_21);
    }
#line 239 "untupling.m"
    {
#line 239 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_2_12_p_0(transform_hlds__untupling__HeadVars0_17, transform_hlds__untupling__ArgModes0_18, &transform_hlds__untupling__HeadVars_22, &transform_hlds__untupling__ArgModes_23, transform_hlds__untupling__Goal0_19, &transform_hlds__untupling__Goal_24, transform_hlds__untupling__VarSet0_21, &transform_hlds__untupling__VarSet_25, transform_hlds__untupling__VarTypes0_20, &transform_hlds__untupling__VarTypes_26, transform_hlds__untupling__TypeTable_15, &transform_hlds__untupling__UntupleMap_27);
    }
#line 243 "untupling.m"
    {
#line 243 "untupling.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__untupling__HeadVars_22, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_41_41, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42);
    }
#line 244 "untupling.m"
    {
#line 244 "untupling.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__untupling__ArgModes_23, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_42_42, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43);
    }
#line 245 "untupling.m"
    {
#line 245 "untupling.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__untupling__Goal_24, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44);
    }
#line 246 "untupling.m"
    {
#line 246 "untupling.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__untupling__VarSet_25, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_44_44, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45);
    }
#line 247 "untupling.m"
    {
#line 247 "untupling.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__untupling__VarTypes_26, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_45_45, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46);
    }
#line 248 "untupling.m"
    {
#line 248 "untupling.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_46_46, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48);
    }
#line 249 "untupling.m"
    {
#line 249 "untupling.m"
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_48_48, &transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_35, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51);
    }
#line 252 "untupling.m"
    {
#line 252 "untupling.m"
      mercury__counter__allocate_3_p_0(&transform_hlds__untupling__Num_28, transform_hlds__untupling__STATE_VARIABLE_Counter_0_39, transform_hlds__untupling__STATE_VARIABLE_Counter_40);
    }
#line 253 "untupling.m"
    {
#line 253 "untupling.m"
      transform_hlds__untupling__create_aux_pred_12_p_0(transform_hlds__untupling__PredId_9, transform_hlds__untupling__ProcId_10, transform_hlds__untupling__PredInfo0_16, transform_hlds__untupling__STATE_VARIABLE_ProcInfo_50_50, transform_hlds__untupling__Num_28, &transform_hlds__untupling__AuxPredId_29, &transform_hlds__untupling__AuxProcId_30, &transform_hlds__untupling__CallAux_31, &transform_hlds__untupling__AuxPredInfo_32, &transform_hlds__untupling__AuxProcInfo0_33, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_51_51, &transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53);
    }
#line 257 "untupling.m"
    transform_hlds__untupling__V_55_55 = (MR_Word) transform_hlds__untupling__UntupleMap_27;
#line 257 "untupling.m"
    {
#line 257 "untupling.m"
      transform_hlds__untupling__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 257 "untupling.m"
      MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_54_54, 0) = ((MR_Box) (transform_hlds__untupling__V_55_55));
#line 257 "untupling.m"
    }
#line 256 "untupling.m"
    {
#line 256 "untupling.m"
      hlds__hlds_pred__proc_info_set_maybe_untuple_info_3_p_0(transform_hlds__untupling__V_54_54, transform_hlds__untupling__AuxProcInfo0_33, &transform_hlds__untupling__AuxProcInfo_34);
    }
#line 259 "untupling.m"
    {
#line 259 "untupling.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__untupling__AuxPredId_29, transform_hlds__untupling__AuxProcId_30, transform_hlds__untupling__AuxPredInfo_32, transform_hlds__untupling__AuxProcInfo_34, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_36);
    }
#line 261 "untupling.m"
    {
#line 261 "untupling.m"
      transform_hlds__untupling__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_57_57, 0) = ((MR_Box) (transform_hlds__untupling__PredId_9));
#line 261 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_57_57, 1) = ((MR_Box) (transform_hlds__untupling__ProcId_10));
#line 261 "untupling.m"
    }
#line 262 "untupling.m"
    {
#line 262 "untupling.m"
      transform_hlds__untupling__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 262 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, 0) = ((MR_Box) (transform_hlds__untupling__AuxPredId_29));
#line 262 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_60_60, 1) = ((MR_Box) (transform_hlds__untupling__AuxProcId_30));
#line 262 "untupling.m"
    }
#line 262 "untupling.m"
    {
#line 262 "untupling.m"
      transform_hlds__untupling__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 262 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_58_58, 0) = ((MR_Box) (transform_hlds__untupling__V_60_60));
#line 262 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_58_58, 1) = ((MR_Box) (transform_hlds__untupling__CallAux_31));
#line 262 "untupling.m"
    }
#line 261 "untupling.m"
    {
#line 261 "untupling.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0, ((MR_Box) (transform_hlds__untupling__V_57_57)), ((MR_Box) (transform_hlds__untupling__V_58_58)), transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_37, transform_hlds__untupling__STATE_VARIABLE_TransformMap_38);
    }
#line 229 "untupling.m"
  }
#line 223 "untupling.m"
}

#line 772 "untupling.m"
static MR_Box MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0_1(
#line 772 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 772 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1)
#line 772 "untupling.m"
{
#line 772 "untupling.m"
  {
#line 772 "untupling.m"
    MR_Box transform_hlds__untupling__wrapper_arg_2;
#line 772 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 772 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_LambdaHeadVar__2_29;

#line 772 "untupling.m"
    {
#line 772 "untupling.m"
      transform_hlds__untupling__conv0_LambdaHeadVar__2_29 = transform_hlds__untupling__IntroducedFrom__func__expand_type__772__1_1_f_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1));
    }
#line 772 "untupling.m"
    transform_hlds__untupling__wrapper_arg_2 = ((MR_Box) (transform_hlds__untupling__conv0_LambdaHeadVar__2_29));
#line 772 "untupling.m"
    return transform_hlds__untupling__wrapper_arg_2;
#line 772 "untupling.m"
  }
#line 772 "untupling.m"
}

#line 205 "untupling.m"
static MR_bool MR_CALL 
transform_hlds__untupling__at_least_one_expandable_type_2_p_0(
#line 205 "untupling.m"
  MR_Word transform_hlds__untupling__HeadVar__1_1,
#line 205 "untupling.m"
  MR_Word transform_hlds__untupling__TypeTable_5)
#line 205 "untupling.m"
{
#line 208 "untupling.m"
  while (MR_TRUE)
#line 208 "untupling.m"
    {
#line 208 "untupling.m"
      /* tailcall optimized into a loop */
#line 208 "untupling.m"
      {
#line 208 "untupling.m"
        MR_bool transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 208 "untupling.m"
        MR_Word transform_hlds__untupling__Type_3;
#line 208 "untupling.m"
        MR_Word transform_hlds__untupling__Types_4;

#line 208 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 208 "untupling.m"
          {
#line 208 "untupling.m"
            transform_hlds__untupling__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "untupling.m"
            transform_hlds__untupling__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__HeadVar__1_1, (MR_Integer) 1)));
#line 209 "untupling.m"
            {
#line 209 "untupling.m"
              MR_Word transform_hlds__untupling__V_10_10;
#line 747 "untupling.m"
              MR_Word transform_hlds__untupling__TypeArgs_16;
#line 749 "untupling.m"
              MR_Word transform_hlds__untupling__TypeCtor_15;
#line 209 "untupling.m"
              MR_Word transform_hlds__untupling__V_78_78;
#line 209 "untupling.m"
              MR_Word transform_hlds__untupling__V_79_79;

#line 749 "untupling.m"
              {
#line 749 "untupling.m"
                transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__Type_3, &transform_hlds__untupling__TypeCtor_15, &transform_hlds__untupling__TypeArgs_16);
              }
#line 749 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 750 "untupling.m"
                {
#line 750 "untupling.m"
                  transform_hlds__untupling__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(transform_hlds__untupling__TypeCtor_15);
                }
#line 747 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 752 "untupling.m"
                {
#line 752 "untupling.m"
                  MR_Integer transform_hlds__untupling__Arity_17;
#line 752 "untupling.m"
                  MR_Word transform_hlds__untupling__ConsId_18;

#line 752 "untupling.m"
                  {
#line 752 "untupling.m"
                    transform_hlds__untupling__Arity_17 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__untupling__TypeArgs_16);
                  }
#line 753 "untupling.m"
                  {
#line 753 "untupling.m"
                    transform_hlds__untupling__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 753 "untupling.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_18, 1) = ((MR_Box) (transform_hlds__untupling__Arity_17));
#line 753 "untupling.m"
                  }
#line 754 "untupling.m"
                  {
#line 754 "untupling.m"
                    transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_18));
#line 754 "untupling.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 1) = ((MR_Box) (transform_hlds__untupling__TypeArgs_16));
#line 754 "untupling.m"
                  }
#line 752 "untupling.m"
                }
#line 747 "untupling.m"
              else
#line 755 "untupling.m"
                {
#line 755 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtorName_22;
#line 755 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtorArgs_23;
#line 755 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtor_39;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeInfo_68_74;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeInfo_69_75;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeDefn_19;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeBody_20;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__SingleCtor_21;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__V_29_29;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__V_30_30;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__V_31_31;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__V_32_32;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__V_72_72;
#line 758 "untupling.m"
                  MR_Word transform_hlds__untupling__V_73_73;
#line 762 "untupling.m"
                  MR_Word transform_hlds__untupling__V_42_42;
#line 762 "untupling.m"
                  MR_Word transform_hlds__untupling__V_43_43;
#line 762 "untupling.m"
                  MR_Word transform_hlds__untupling__V_44_44;
#line 762 "untupling.m"
                  MR_Word transform_hlds__untupling__V_45_45;
#line 762 "untupling.m"
                  MR_Word transform_hlds__untupling__V_46_46;
#line 762 "untupling.m"
                  MR_Word transform_hlds__untupling__V_47_47;
#line 762 "untupling.m"
                  MR_Word transform_hlds__untupling__V_48_48;
#line 762 "untupling.m"
                  MR_Word transform_hlds__untupling__V_49_49;
#line 763 "untupling.m"
                  MR_Word transform_hlds__untupling__V_50_50;
#line 763 "untupling.m"
                  MR_Integer transform_hlds__untupling__V_53_53;
#line 763 "untupling.m"
                  MR_Word transform_hlds__untupling__V_54_54;
#line 766 "untupling.m"
                  MR_Word transform_hlds__untupling__V_24_24;
#line 766 "untupling.m"
                  MR_Word transform_hlds__untupling__V_25_25;
#line 768 "untupling.m"
                  MR_Word transform_hlds__untupling__TypeCtorInfo_63_69;

#line 758 "untupling.m"
                  {
#line 758 "untupling.m"
                    transform_hlds__untupling__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__untupling__Type_3, &transform_hlds__untupling__TypeCtor_39, &transform_hlds__untupling__V_72_72);
                  }
#line 758 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
                    {
#line 5799 "transform_hlds.untupling.c"
                      transform_hlds__untupling__TypeInfo_68_74 = (MR_Word) &transform_hlds__untupling_scalar_common_2[2];
#line 758 "untupling.m"
                      {
#line 758 "untupling.m"
                        transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_68_74, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__untupling__V_72_72)));
                      }
#line 758 "untupling.m"
                      if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
                        {
#line 759 "untupling.m"
                          {
#line 759 "untupling.m"
                            transform_hlds__untupling__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__untupling__TypeTable_5, transform_hlds__untupling__TypeCtor_39, &transform_hlds__untupling__TypeDefn_19);
                          }
#line 758 "untupling.m"
                          if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
                            {
#line 760 "untupling.m"
                              transform_hlds__untupling__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 760 "untupling.m"
                              {
#line 760 "untupling.m"
                                hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__untupling__TypeDefn_19, &transform_hlds__untupling__V_73_73);
                              }
#line 5826 "transform_hlds.untupling.c"
                              transform_hlds__untupling__TypeInfo_69_75 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 760 "untupling.m"
                              {
#line 760 "untupling.m"
                                transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_69_75, ((MR_Box) (transform_hlds__untupling__V_29_29)), ((MR_Box) (transform_hlds__untupling__V_73_73)));
                              }
#line 758 "untupling.m"
                              if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
                                {
#line 761 "untupling.m"
                                  {
#line 761 "untupling.m"
                                    hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__untupling__TypeDefn_19, &transform_hlds__untupling__TypeBody_20);
                                  }
#line 762 "untupling.m"
                                  transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__TypeBody_20)) == (MR_mktag((MR_Integer) 1)));
#line 762 "untupling.m"
                                  if (transform_hlds__untupling__succeeded)
#line 762 "untupling.m"
                                    {
#line 762 "untupling.m"
                                      transform_hlds__untupling__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 0)));
#line 762 "untupling.m"
                                      transform_hlds__untupling__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 1)));
#line 762 "untupling.m"
                                      transform_hlds__untupling__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 2)));
#line 762 "untupling.m"
                                      transform_hlds__untupling__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 3)));
#line 762 "untupling.m"
                                      transform_hlds__untupling__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 4)));
#line 762 "untupling.m"
                                      transform_hlds__untupling__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 5)));
#line 762 "untupling.m"
                                      transform_hlds__untupling__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 762 "untupling.m"
                                      transform_hlds__untupling__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 762 "untupling.m"
                                      transform_hlds__untupling__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__TypeBody_20, (MR_Integer) 7)));
#line 762 "untupling.m"
                                      transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 762 "untupling.m"
                                      if (transform_hlds__untupling__succeeded)
#line 762 "untupling.m"
                                        {
#line 762 "untupling.m"
                                          transform_hlds__untupling__SingleCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_30_30, (MR_Integer) 0)));
#line 762 "untupling.m"
                                          transform_hlds__untupling__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_30_30, (MR_Integer) 1)));
#line 762 "untupling.m"
                                          transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "untupling.m"
                                          if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
                                            {
#line 763 "untupling.m"
                                              transform_hlds__untupling__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 0)));
#line 763 "untupling.m"
                                              transform_hlds__untupling__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 1)));
#line 763 "untupling.m"
                                              transform_hlds__untupling__SingleCtorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 2)));
#line 763 "untupling.m"
                                              transform_hlds__untupling__SingleCtorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 3)));
#line 763 "untupling.m"
                                              transform_hlds__untupling__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 4)));
#line 763 "untupling.m"
                                              transform_hlds__untupling__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__SingleCtor_21, (MR_Integer) 5)));
#line 763 "untupling.m"
                                              transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "untupling.m"
                                              if (transform_hlds__untupling__succeeded)
#line 758 "untupling.m"
                                                {
#line 766 "untupling.m"
                                                  transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__SingleCtorArgs_23)) == (MR_mktag((MR_Integer) 1)));
#line 766 "untupling.m"
                                                  if (transform_hlds__untupling__succeeded)
#line 766 "untupling.m"
                                                    {
#line 766 "untupling.m"
                                                      transform_hlds__untupling__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_23, (MR_Integer) 0)));
#line 766 "untupling.m"
                                                      transform_hlds__untupling__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__SingleCtorArgs_23, (MR_Integer) 1)));
#line 5910 "transform_hlds.untupling.c"
                                                      transform_hlds__untupling__TypeCtorInfo_63_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 768 "untupling.m"
                                                      {
#line 768 "untupling.m"
                                                        transform_hlds__untupling__succeeded = mercury__list__member_2_p_0(transform_hlds__untupling__TypeCtorInfo_63_69, ((MR_Box) (transform_hlds__untupling__Type_3)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                      }
#line 768 "untupling.m"
                                                      transform_hlds__untupling__succeeded = !(transform_hlds__untupling__succeeded);
#line 766 "untupling.m"
                                                    }
#line 758 "untupling.m"
                                                }
#line 758 "untupling.m"
                                            }
#line 762 "untupling.m"
                                        }
#line 762 "untupling.m"
                                    }
#line 758 "untupling.m"
                                }
#line 758 "untupling.m"
                            }
#line 758 "untupling.m"
                        }
#line 758 "untupling.m"
                    }
#line 755 "untupling.m"
                  if (transform_hlds__untupling__succeeded)
#line 770 "untupling.m"
                    {
#line 770 "untupling.m"
                      MR_Word transform_hlds__untupling__TypeCtorInfo_64_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 770 "untupling.m"
                      MR_Word transform_hlds__untupling__ExpandedTypes_26;
#line 770 "untupling.m"
                      MR_Integer transform_hlds__untupling__Arity_37;
#line 770 "untupling.m"
                      MR_Word transform_hlds__untupling__ConsId_38;

#line 770 "untupling.m"
                      {
#line 770 "untupling.m"
                        transform_hlds__untupling__Arity_37 = mercury__list__length_1_f_0(transform_hlds__untupling__TypeCtorInfo_64_70, transform_hlds__untupling__SingleCtorArgs_23);
                      }
#line 771 "untupling.m"
                      {
#line 771 "untupling.m"
                        transform_hlds__untupling__ConsId_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 771 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 771 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 1) = ((MR_Box) (transform_hlds__untupling__SingleCtorName_22));
#line 771 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 2) = ((MR_Box) (transform_hlds__untupling__Arity_37));
#line 771 "untupling.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__untupling__ConsId_38, 3) = ((MR_Box) (transform_hlds__untupling__TypeCtor_39));
#line 771 "untupling.m"
                      }
#line 772 "untupling.m"
                      {
#line 772 "untupling.m"
                        transform_hlds__untupling__ExpandedTypes_26 = mercury__list__map_2_f_0(transform_hlds__untupling__TypeCtorInfo_64_70, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[3], transform_hlds__untupling__SingleCtorArgs_23);
                      }
#line 773 "untupling.m"
                      {
#line 773 "untupling.m"
                        transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "untupling.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 0) = ((MR_Box) (transform_hlds__untupling__ConsId_38));
#line 773 "untupling.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, 1) = ((MR_Box) (transform_hlds__untupling__ExpandedTypes_26));
#line 773 "untupling.m"
                      }
#line 770 "untupling.m"
                    }
#line 755 "untupling.m"
                  else
#line 775 "untupling.m"
                    transform_hlds__untupling__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "untupling.m"
                }
#line 209 "untupling.m"
              transform_hlds__untupling__succeeded = ((MR_tag((MR_Word) transform_hlds__untupling__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 209 "untupling.m"
              if (transform_hlds__untupling__succeeded)
#line 209 "untupling.m"
                {
#line 209 "untupling.m"
                  transform_hlds__untupling__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, (MR_Integer) 0)));
#line 209 "untupling.m"
                  transform_hlds__untupling__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__untupling__V_10_10, (MR_Integer) 1)));
#line 209 "untupling.m"
                }
#line 209 "untupling.m"
            }
#line 210 "untupling.m"
            if (!(transform_hlds__untupling__succeeded))
#line 210 "untupling.m"
              {
#line 210 "untupling.m"
                /* direct tailcall eliminated */
#line 210 "untupling.m"
                {
#line 210 "untupling.m"
                  MR_Word transform_hlds__untupling__HeadVar__1__tmp_copy_1 = transform_hlds__untupling__Types_4;

#line 210 "untupling.m"
                  transform_hlds__untupling__HeadVar__1_1 = transform_hlds__untupling__HeadVar__1__tmp_copy_1;
#line 210 "untupling.m"
                }
#line 210 "untupling.m"
                continue;
#line 210 "untupling.m"
              }
#line 208 "untupling.m"
          }
#line 208 "untupling.m"
        return transform_hlds__untupling__succeeded;
#line 208 "untupling.m"
      }
#line 208 "untupling.m"
      break;
#line 208 "untupling.m"
    }
#line 205 "untupling.m"
}

#line 199 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0_1(
#line 199 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 199 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 199 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 199 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 199 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 199 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 199 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 199 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7)
#line 199 "untupling.m"
{
#line 199 "untupling.m"
  {
#line 199 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 199 "untupling.m"
    MR_Word transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36;
#line 199 "untupling.m"
    MR_Word transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38;
#line 199 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40;

#line 199 "untupling.m"
    {
#line 199 "untupling.m"
      transform_hlds__untupling__expand_args_in_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36, ((MR_Word) transform_hlds__untupling__wrapper_arg_4), &transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38, ((MR_Word) transform_hlds__untupling__wrapper_arg_6), &transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40);
    }
#line 199 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_36));
#line 199 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_38));
#line 199 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_40));
#line 199 "untupling.m"
  }
#line 199 "untupling.m"
}

#line 175 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__expand_args_in_pred_7_p_0(
#line 175 "untupling.m"
  MR_Word transform_hlds__untupling__PredId_8,
#line 175 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20,
#line 175 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21,
#line 175 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22,
#line 175 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_TransformMap_23,
#line 175 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_Counter_0_24,
#line 175 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_Counter_25)
#line 175 "untupling.m"
{
#line 178 "untupling.m"
  {
#line 178 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__TypeTable_12;
#line 178 "untupling.m"
    MR_Word transform_hlds__untupling__PredInfo_13;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__TypeCtorInfo_38_38;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_56_56;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__TypeInfo_57_57;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__PredStatus_14;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__TypeVarSet_16;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__ExistQVars_17;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__ArgTypes_18;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_26_26;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_27_27;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_28_28;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_29_29;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_30_30;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_31_31;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_32_32;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_33_33;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_50_50;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_51_51;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_52_52;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_53_53;
#line 184 "untupling.m"
    MR_Word transform_hlds__untupling__V_54_54;
#line 192 "untupling.m"
    MR_Word transform_hlds__untupling__V_15_15;

#line 179 "untupling.m"
    {
#line 179 "untupling.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__untupling__TypeTable_12);
    }
#line 180 "untupling.m"
    {
#line 180 "untupling.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__untupling__PredId_8, &transform_hlds__untupling__PredInfo_13);
    }
#line 184 "untupling.m"
    {
#line 184 "untupling.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__PredStatus_14);
    }
#line 185 "untupling.m"
    {
#line 185 "untupling.m"
      transform_hlds__untupling__V_26_26 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__untupling__PredStatus_14);
    }
#line 185 "untupling.m"
    transform_hlds__untupling__succeeded = (transform_hlds__untupling__V_26_26 == (MR_Integer) 1);
#line 184 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 184 "untupling.m"
      {
#line 186 "untupling.m"
        transform_hlds__untupling__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 186 "untupling.m"
        {
#line 186 "untupling.m"
          hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_50_50);
        }
#line 186 "untupling.m"
        {
#line 186 "untupling.m"
          transform_hlds__untupling__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(transform_hlds__untupling__V_27_27, transform_hlds__untupling__V_50_50);
        }
#line 184 "untupling.m"
        if (transform_hlds__untupling__succeeded)
#line 184 "untupling.m"
          {
#line 189 "untupling.m"
            transform_hlds__untupling__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "untupling.m"
            {
#line 189 "untupling.m"
              hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_51_51);
            }
#line 6205 "transform_hlds.untupling.c"
            transform_hlds__untupling__TypeInfo_56_56 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 189 "untupling.m"
            {
#line 189 "untupling.m"
              transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_56_56, ((MR_Box) (transform_hlds__untupling__V_28_28)), ((MR_Box) (transform_hlds__untupling__V_51_51)));
            }
#line 184 "untupling.m"
            if (transform_hlds__untupling__succeeded)
#line 184 "untupling.m"
              {
#line 190 "untupling.m"
                transform_hlds__untupling__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "untupling.m"
                {
#line 190 "untupling.m"
                  hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_52_52);
                }
#line 6223 "transform_hlds.untupling.c"
                transform_hlds__untupling__TypeInfo_57_57 = (MR_Word) &transform_hlds__untupling_scalar_common_2[4];
#line 190 "untupling.m"
                {
#line 190 "untupling.m"
                  transform_hlds__untupling__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__untupling__TypeInfo_57_57, ((MR_Box) (transform_hlds__untupling__V_29_29)), ((MR_Box) (transform_hlds__untupling__V_52_52)));
                }
#line 184 "untupling.m"
                if (transform_hlds__untupling__succeeded)
#line 184 "untupling.m"
                  {
#line 191 "untupling.m"
                    transform_hlds__untupling__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "untupling.m"
                    transform_hlds__untupling__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "untupling.m"
                    transform_hlds__untupling__V_30_30 = (MR_Word) &transform_hlds__untupling_scalar_common_2[5];
#line 191 "untupling.m"
                    {
#line 191 "untupling.m"
                      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_53_53);
                    }
#line 191 "untupling.m"
                    {
#line 191 "untupling.m"
                      transform_hlds__untupling__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(transform_hlds__untupling__V_30_30, transform_hlds__untupling__V_53_53);
                    }
#line 184 "untupling.m"
                    if (transform_hlds__untupling__succeeded)
#line 184 "untupling.m"
                      {
#line 192 "untupling.m"
                        {
#line 192 "untupling.m"
                          transform_hlds__untupling__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "untupling.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 192 "untupling.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__untupling__V_33_33, 1) = NULL;
#line 192 "untupling.m"
                        }
#line 192 "untupling.m"
                        {
#line 192 "untupling.m"
                          hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__V_54_54);
                        }
#line 192 "untupling.m"
                        {
#line 192 "untupling.m"
                          transform_hlds__untupling__succeeded = transform_hlds__untupling____Unify____hlds__hlds_pred__pred_origin_0_1(transform_hlds__untupling__V_33_33, transform_hlds__untupling__V_54_54);
                        }
#line 184 "untupling.m"
                        if (transform_hlds__untupling__succeeded)
#line 184 "untupling.m"
                          {
#line 193 "untupling.m"
                            {
#line 193 "untupling.m"
                              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__untupling__PredInfo_13, &transform_hlds__untupling__TypeVarSet_16, &transform_hlds__untupling__ExistQVars_17, &transform_hlds__untupling__ArgTypes_18);
                            }
#line 6283 "transform_hlds.untupling.c"
                            transform_hlds__untupling__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 194 "untupling.m"
                            {
#line 194 "untupling.m"
                              transform_hlds__untupling__succeeded = mercury__varset__is_empty_1_p_0(transform_hlds__untupling__TypeCtorInfo_38_38, transform_hlds__untupling__TypeVarSet_16);
                            }
#line 184 "untupling.m"
                            if (transform_hlds__untupling__succeeded)
#line 184 "untupling.m"
                              {
#line 195 "untupling.m"
                                transform_hlds__untupling__succeeded = (transform_hlds__untupling__ExistQVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "untupling.m"
                                if (transform_hlds__untupling__succeeded)
#line 196 "untupling.m"
                                  {
#line 196 "untupling.m"
                                    transform_hlds__untupling__succeeded = transform_hlds__untupling__at_least_one_expandable_type_2_p_0(transform_hlds__untupling__ArgTypes_18, transform_hlds__untupling__TypeTable_12);
                                  }
#line 184 "untupling.m"
                              }
#line 184 "untupling.m"
                          }
#line 184 "untupling.m"
                      }
#line 184 "untupling.m"
                  }
#line 184 "untupling.m"
              }
#line 184 "untupling.m"
          }
#line 184 "untupling.m"
      }
#line 181 "untupling.m"
    if (transform_hlds__untupling__succeeded)
#line 198 "untupling.m"
      {
#line 198 "untupling.m"
        MR_Word transform_hlds__untupling__ProcIds_19;
#line 198 "untupling.m"
        MR_Word transform_hlds__untupling__V_34_34;
#line 199 "untupling.m"
        MR_Box transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21;
#line 199 "untupling.m"
        MR_Box transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23;
#line 199 "untupling.m"
        MR_Box transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25;

#line 198 "untupling.m"
        {
#line 198 "untupling.m"
          transform_hlds__untupling__ProcIds_19 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(transform_hlds__untupling__PredInfo_13);
        }
#line 199 "untupling.m"
        {
#line 199 "untupling.m"
          transform_hlds__untupling__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 199 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_5[0]));
#line 199 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 1) = ((MR_Box) (transform_hlds__untupling__expand_args_in_pred_7_p_0_1));
#line 199 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 199 "untupling.m"
          MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_34_34, 3) = ((MR_Box) (transform_hlds__untupling__PredId_8));
#line 199 "untupling.m"
        }
#line 199 "untupling.m"
        {
#line 199 "untupling.m"
          mercury__list__foldl3_8_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, transform_hlds__untupling__V_34_34, transform_hlds__untupling__ProcIds_19, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22)), &transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_Counter_0_24)), &transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25);
        }
#line 199 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_21);
#line 199 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_TransformMap_23 = ((MR_Word) transform_hlds__untupling__conv4_STATE_VARIABLE_TransformMap_23);
#line 199 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Counter_25 = ((MR_Word) transform_hlds__untupling__conv3_STATE_VARIABLE_Counter_25);
#line 198 "untupling.m"
      }
#line 181 "untupling.m"
    else
#line 202 "untupling.m"
      {
#line 202 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_Counter_25 = transform_hlds__untupling__STATE_VARIABLE_Counter_0_24;
#line 202 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_TransformMap_23 = transform_hlds__untupling__STATE_VARIABLE_TransformMap_0_22;
#line 202 "untupling.m"
        *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_20;
#line 202 "untupling.m"
      }
#line 178 "untupling.m"
  }
#line 175 "untupling.m"
}

#line 467 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_2(
#line 467 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 467 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 467 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 467 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3)
#line 467 "untupling.m"
{
#line 467 "untupling.m"
  {
#line 467 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 467 "untupling.m"
    MR_Word transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11;

#line 467 "untupling.m"
    {
#line 467 "untupling.m"
      transform_hlds__untupling__fix_calls_in_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__untupling__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11);
    }
#line 467 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv6_STATE_VARIABLE_ModuleInfo_11));
#line 467 "untupling.m"
  }
#line 467 "untupling.m"
}

#line 172 "untupling.m"
static void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0_1(
#line 172 "untupling.m"
  MR_Box transform_hlds__untupling__closure_arg,
#line 172 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_1,
#line 172 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_2,
#line 172 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_3,
#line 172 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_4,
#line 172 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_5,
#line 172 "untupling.m"
  MR_Box transform_hlds__untupling__wrapper_arg_6,
#line 172 "untupling.m"
  MR_Box * transform_hlds__untupling__wrapper_arg_7)
#line 172 "untupling.m"
{
#line 172 "untupling.m"
  {
#line 172 "untupling.m"
    MR_Box transform_hlds__untupling__closure = transform_hlds__untupling__closure_arg;
#line 172 "untupling.m"
    MR_Word transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21;
#line 172 "untupling.m"
    MR_Word transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23;
#line 172 "untupling.m"
    MR_Word transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25;

#line 172 "untupling.m"
    {
#line 172 "untupling.m"
      transform_hlds__untupling__expand_args_in_pred_7_p_0(((MR_Word) transform_hlds__untupling__wrapper_arg_1), ((MR_Word) transform_hlds__untupling__wrapper_arg_2), &transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21, ((MR_Word) transform_hlds__untupling__wrapper_arg_4), &transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23, ((MR_Word) transform_hlds__untupling__wrapper_arg_6), &transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25);
    }
#line 172 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_3 = ((MR_Box) (transform_hlds__untupling__conv2_STATE_VARIABLE_ModuleInfo_21));
#line 172 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_5 = ((MR_Box) (transform_hlds__untupling__conv1_STATE_VARIABLE_TransformMap_23));
#line 172 "untupling.m"
    *transform_hlds__untupling__wrapper_arg_7 = ((MR_Box) (transform_hlds__untupling__conv0_STATE_VARIABLE_Counter_25));
#line 172 "untupling.m"
  }
#line 172 "untupling.m"
}

#line 98 "untupling.m"
void MR_CALL 
transform_hlds__untupling__untuple_arguments_4_p_0(
#line 98 "untupling.m"
  MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8,
#line 98 "untupling.m"
  MR_Word * transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9)
#line 98 "untupling.m"
{
#line 153 "untupling.m"
  {
#line 153 "untupling.m"
    MR_bool transform_hlds__untupling__succeeded;
#line 153 "untupling.m"
    MR_Word transform_hlds__untupling__TransformMap_7;
#line 153 "untupling.m"
    MR_Word transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12;
#line 153 "untupling.m"
    MR_Word transform_hlds__untupling__PredIds_18;
#line 153 "untupling.m"
    MR_Word transform_hlds__untupling__V_22_22;
#line 153 "untupling.m"
    MR_Word transform_hlds__untupling__V_23_23;
#line 153 "untupling.m"
    MR_Word transform_hlds__untupling__PredIds_42;
#line 153 "untupling.m"
    MR_Word transform_hlds__untupling__V_43_43;
#line 172 "untupling.m"
    MR_Word transform_hlds__untupling__V_19_19;
#line 172 "untupling.m"
    MR_Box transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12;
#line 172 "untupling.m"
    MR_Box transform_hlds__untupling__conv4_TransformMap_7;
#line 172 "untupling.m"
    MR_Box transform_hlds__untupling__conv3_V_19_19;
#line 467 "untupling.m"
    MR_Box transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9;

#line 171 "untupling.m"
    {
#line 171 "untupling.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__untupling__PredIds_18);
    }
#line 173 "untupling.m"
    {
#line 173 "untupling.m"
      transform_hlds__untupling__V_22_22 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__untupling__transform_hlds__untupling__type_ctor_info_transformed_proc_0);
    }
#line 173 "untupling.m"
    {
#line 173 "untupling.m"
      transform_hlds__untupling__V_23_23 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 172 "untupling.m"
    {
#line 172 "untupling.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[0], (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &transform_hlds__untupling_scalar_common_1[2], transform_hlds__untupling__PredIds_18, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12, ((MR_Box) (transform_hlds__untupling__V_22_22)), &transform_hlds__untupling__conv4_TransformMap_7, ((MR_Box) (transform_hlds__untupling__V_23_23)), &transform_hlds__untupling__conv3_V_19_19);
    }
#line 172 "untupling.m"
    transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) transform_hlds__untupling__conv5_STATE_VARIABLE_ModuleInfo_12_12);
#line 172 "untupling.m"
    transform_hlds__untupling__TransformMap_7 = ((MR_Word) transform_hlds__untupling__conv4_TransformMap_7);
#line 172 "untupling.m"
    transform_hlds__untupling__V_19_19 = ((MR_Word) transform_hlds__untupling__conv3_V_19_19);
#line 466 "untupling.m"
    {
#line 466 "untupling.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12, &transform_hlds__untupling__PredIds_42);
    }
#line 467 "untupling.m"
    {
#line 467 "untupling.m"
      transform_hlds__untupling__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 467 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 0) = ((MR_Box) (&transform_hlds__untupling_scalar_common_4[0]));
#line 467 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 1) = ((MR_Box) (transform_hlds__untupling__untuple_arguments_4_p_0_2));
#line 467 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 467 "untupling.m"
      MR_hl_field(MR_mktag(0), transform_hlds__untupling__V_43_43, 3) = ((MR_Box) (transform_hlds__untupling__TransformMap_7));
#line 467 "untupling.m"
    }
#line 467 "untupling.m"
    {
#line 467 "untupling.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__untupling__V_43_43, transform_hlds__untupling__PredIds_42, ((MR_Box) (transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_12_12)), &transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9);
    }
#line 467 "untupling.m"
    *transform_hlds__untupling__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__untupling__conv7_STATE_VARIABLE_ModuleInfo_9);
#line 153 "untupling.m"
  }
#line 98 "untupling.m"
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
