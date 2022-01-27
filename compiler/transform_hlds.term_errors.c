/*
** Automatically generated from `term_errors.m'
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


/* :- module transform_hlds.term_errors. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_errors__init
ENDINIT
*/

#include "transform_hlds.term_errors.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0[2];

#line 144 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0;

#line 147 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0[1];

#line 150 "transform_hlds.term_errors.c"
static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0[1];

#line 153 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0[1];

#line 156 "transform_hlds.term_errors.c"
static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0[1];

#line 159 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0;

#line 162 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1;

#line 165 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2[2];

#line 168 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2;

#line 171 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3[2];

#line 174 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3;

#line 177 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4;

#line 180 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5;

#line 183 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6[2];

#line 186 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6;

#line 189 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 192 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7[2];

#line 195 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7;

#line 198 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 201 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8[3];

#line 207 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8;

#line 210 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9[2];

#line 213 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9;

#line 216 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 219 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 222 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10[2];

#line 225 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10;

#line 228 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11;

#line 231 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12;

#line 234 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13;

#line 237 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14[1];

#line 240 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14;

#line 243 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15[1];

#line 246 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15;

#line 249 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16;

#line 252 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17[1];

#line 255 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17;

#line 258 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_0[8];

#line 261 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1[1];

#line 264 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2[1];

#line 267 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_3[8];

#line 270 "transform_hlds.term_errors.c"
static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_kind_0[4];

#line 273 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_kind_0[18];

#line 276 "transform_hlds.term_errors.c"
static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_kind_0[18];

#line 279 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0_10001(
#line 282 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 284 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2);

#line 287 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0_10001(
#line 290 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 292 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 294 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3);

#line 297 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0_10001(
#line 300 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 302 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2);

#line 305 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0_10001(
#line 308 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 310 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 312 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3);

#line 453 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__453__1_2_p_0(
#line 453 "term_errors.m"
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_160,
#line 453 "term_errors.m"
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_161);

#line 449 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__449__1_2_p_0(
#line 449 "term_errors.m"
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_154,
#line 449 "term_errors.m"
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_155);

#line 391 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__391__1_2_p_0(
#line 391 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_321,
#line 391 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_323);

#line 330 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__330__1_2_p_0(
#line 330 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_11,
#line 330 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_13);

#line 373 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__373__1_2_p_0(
#line 373 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_312,
#line 373 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_314);

#line 410 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__410__1_2_p_0(
#line 410 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_330,
#line 410 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_332);

#line 502 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__502__1_2_p_0(
#line 502 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCCPredId_43,
#line 502 "term_errors.m"
  MR_Word transform_hlds__term_errors__PredId_350);

#line 349 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__349__1_2_p_0(
#line 349 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_304,
#line 349 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_306);

#line 532 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(
#line 532 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 532 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_2,
#line 532 "term_errors.m"
  MR_Word transform_hlds__term_errors__First_3,
#line 532 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__4_4);

#line 525 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
#line 525 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVars_4,
#line 525 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_5,
#line 525 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_6);

#line 453 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_8(
#line 453 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 453 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 453 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2);

#line 449 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_7(
#line 449 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 449 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 449 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2);

#line 391 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_6(
#line 391 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 330 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_5(
#line 330 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 373 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_4(
#line 373 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 410 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_3(
#line 410 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 502 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_2(
#line 502 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 349 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_1(
#line 349 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 307 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0(
#line 307 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
#line 307 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_7,
#line 307 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorKind_8,
#line 307 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_9,
#line 307 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Reason_10);

#line 269 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__describe_term_error_8_p_0(
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_9,
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_10,
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__TermErrorContext_11,
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorNum_12,
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_0_28,
#line 269 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_29,
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30,
#line 269 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_31);

#line 257 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__describe_term_errors_8_p_0(
#line 257 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_1,
#line 257 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_2,
#line 257 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__3_3,
#line 257 "term_errors.m"
  MR_Integer transform_hlds__term_errors__ErrNum0_4,
#line 257 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5,
#line 257 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Msgs_6,
#line 257 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7,
#line 257 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_8);

#line 219 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__report_arg_size_errors_5_p_0(
#line 219 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
#line 219 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCC_7,
#line 219 "term_errors.m"
  MR_Word transform_hlds__term_errors__Errors_8,
#line 219 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25,
#line 219 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_26);


static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_1[115][2];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_4[3][5];




static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_1[115][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mutually recursive procedures"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Termination of the "))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the mutually recursive procedures"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Termination constants"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to decrease in size."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the arguments are not guaranteed"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not guaranteed to decrease in size."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the arguments are"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may make one or more calls back to Mercury."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It contains foreign code that"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "does_not_terminate"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There is a"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "it."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "termination constant of infinity."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Each of these higher-order calls has a"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "makes one or more higher-order calls."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It contains a higher order call."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "imported from another module."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "predicates and/or functions"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It contains one or more"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The termination pragmas are inconsistent."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the size of the input arguments."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with an unbounded increase"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It is a builtin predicate."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It contains a typeclass method call."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "between the arguments of this group of procedures."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The analysis was unable to form any constraints"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign language code included via a"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It depends on the properties of"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "by the analysis to be infeasible."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The solver found the constraints produced"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for the analysis to process."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There are too many execution paths"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Termination of"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not proven, for unknown reason(s)."))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not proven for the following reason:"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not proven for the following reasons:"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Termination constant of"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "set to infinity for the following"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "reason:"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[91])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "reasons:"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[94])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "calls"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which could not be proven to terminate."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "At the recursive call to"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the recursive cycle through the calls to"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with one or more higher order arguments."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which has a termination constant of infinity."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[12])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The set of output supplier variables of"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The set of its output supplier variables"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a subset of the head variables"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "{}")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box transform_hlds__term_errors_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1179 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_kind_0
};

#line 1185 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0 = {
  (MR_String) "term_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0,
  NULL,
  NULL,
  NULL
};

#line 1200 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0
};

#line 1205 "transform_hlds.term_errors.c"
static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0
  }
};

#line 1214 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0
};

#line 1219 "transform_hlds.term_errors.c"
static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0[1] = {
  (MR_Integer) 0
};

#line 1224 "transform_hlds.term_errors.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_errors____Unify____term_error_0_0_10001)),
  ((MR_Box) (transform_hlds__term_errors____Compare____term_error_0_0_10001)),
  (MR_String) "transform_hlds.term_errors",
  (MR_String) "term_error",
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0 },
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0
};

#line 1241 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0 = {
  (MR_String) "pragma_foreign_code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1256 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1 = {
  (MR_String) "imported_pred",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1271 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1277 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2 = {
  (MR_String) "can_loop_proc_called",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2,
  NULL,
  NULL,
  NULL
};

#line 1292 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1298 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3 = {
  (MR_String) "horder_args",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3,
  NULL,
  NULL,
  NULL
};

#line 1313 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4 = {
  (MR_String) "horder_call",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1328 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5 = {
  (MR_String) "method_call",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1343 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1349 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6 = {
  (MR_String) "inf_termination_const",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6,
  NULL,
  NULL,
  NULL
};

#line 1364 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1372 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1378 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7 = {
  (MR_String) "ho_inf_termination_const",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7,
  NULL,
  NULL,
  NULL
};

#line 1393 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1401 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1409 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1416 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8 = {
  (MR_String) "not_subset",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8,
  NULL,
  NULL,
  NULL
};

#line 1431 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1437 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9 = {
  (MR_String) "inf_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 9,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9,
  NULL,
  NULL,
  NULL
};

#line 1452 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1461 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
  }
};

#line 1469 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
};

#line 1475 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10 = {
  (MR_String) "cycle",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 10,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10,
  NULL,
  NULL,
  NULL
};

#line 1490 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11 = {
  (MR_String) "no_eqns",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1505 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12 = {
  (MR_String) "too_many_paths",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1520 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13 = {
  (MR_String) "solver_failed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1535 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1540 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14 = {
  (MR_String) "is_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 14,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14,
  NULL,
  NULL,
  NULL
};

#line 1555 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1560 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15 = {
  (MR_String) "does_not_term_pragma",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 15,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15,
  NULL,
  NULL,
  NULL
};

#line 1575 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16 = {
  (MR_String) "inconsistent_annotations",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 16,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1590 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1595 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17 = {
  (MR_String) "does_not_term_foreign",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 17,
  transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17,
  NULL,
  NULL,
  NULL
};

#line 1610 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_0[8] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16
};

#line 1622 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2
};

#line 1627 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3
};

#line 1632 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_3[8] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17
};

#line 1644 "transform_hlds.term_errors.c"
static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_kind_0[4] = {
  {
    (MR_Integer) 8,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2
  },
  {
    (MR_Integer) 8,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_3
  }
};

#line 1668 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_kind_0[18] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13,
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12
};

#line 1690 "transform_hlds.term_errors.c"
static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_kind_0[18] = {
  (MR_Integer) 15,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 12,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 14,
  (MR_Integer) 9,
  (MR_Integer) 1,
  (MR_Integer) 13,
  (MR_Integer) 17,
  (MR_Integer) 16,
  (MR_Integer) 11,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 2
};

#line 1712 "transform_hlds.term_errors.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_errors____Unify____term_error_kind_0_0_10001)),
  ((MR_Box) (transform_hlds__term_errors____Compare____term_error_kind_0_0_10001)),
  (MR_String) "transform_hlds.term_errors",
  (MR_String) "term_error_kind",
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_kind_0 },
  {     transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_kind_0 },
  (MR_Integer) 18,
  (MR_Integer) 4,
  transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_kind_0
};

#line 1729 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0_10001(
#line 1732 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 1734 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2)
#line 1736 "transform_hlds.term_errors.c"
{
#line 1738 "transform_hlds.term_errors.c"
  {
#line 1740 "transform_hlds.term_errors.c"
    MR_bool transform_hlds__term_errors__succeeded;

#line 1743 "transform_hlds.term_errors.c"
    {
#line 1745 "transform_hlds.term_errors.c"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____term_error_0_0(((MR_Word) transform_hlds__term_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_errors__wrapper_arg_2));
    }
#line 1748 "transform_hlds.term_errors.c"
    return transform_hlds__term_errors__succeeded;
#line 1750 "transform_hlds.term_errors.c"
  }
#line 1752 "transform_hlds.term_errors.c"
}

#line 1755 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0_10001(
#line 1758 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 1760 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 1762 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3)
#line 1764 "transform_hlds.term_errors.c"
{
#line 1766 "transform_hlds.term_errors.c"
  {
#line 1768 "transform_hlds.term_errors.c"
    MR_Word transform_hlds__term_errors__conv0_HeadVar__1_1;

#line 1771 "transform_hlds.term_errors.c"
    {
#line 1773 "transform_hlds.term_errors.c"
      transform_hlds__term_errors____Compare____term_error_0_0(&transform_hlds__term_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_errors__wrapper_arg_3));
    }
#line 1776 "transform_hlds.term_errors.c"
    *transform_hlds__term_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_errors__conv0_HeadVar__1_1));
#line 1778 "transform_hlds.term_errors.c"
  }
#line 1780 "transform_hlds.term_errors.c"
}

#line 1783 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0_10001(
#line 1786 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 1788 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2)
#line 1790 "transform_hlds.term_errors.c"
{
#line 1792 "transform_hlds.term_errors.c"
  {
#line 1794 "transform_hlds.term_errors.c"
    MR_bool transform_hlds__term_errors__succeeded;

#line 1797 "transform_hlds.term_errors.c"
    {
#line 1799 "transform_hlds.term_errors.c"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____term_error_kind_0_0(((MR_Word) transform_hlds__term_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_errors__wrapper_arg_2));
    }
#line 1802 "transform_hlds.term_errors.c"
    return transform_hlds__term_errors__succeeded;
#line 1804 "transform_hlds.term_errors.c"
  }
#line 1806 "transform_hlds.term_errors.c"
}

#line 1809 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0_10001(
#line 1812 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 1814 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 1816 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3)
#line 1818 "transform_hlds.term_errors.c"
{
#line 1820 "transform_hlds.term_errors.c"
  {
#line 1822 "transform_hlds.term_errors.c"
    MR_Word transform_hlds__term_errors__conv0_HeadVar__1_1;

#line 1825 "transform_hlds.term_errors.c"
    {
#line 1827 "transform_hlds.term_errors.c"
      transform_hlds__term_errors____Compare____term_error_kind_0_0(&transform_hlds__term_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_errors__wrapper_arg_3));
    }
#line 1830 "transform_hlds.term_errors.c"
    *transform_hlds__term_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_errors__conv0_HeadVar__1_1));
#line 1832 "transform_hlds.term_errors.c"
  }
#line 1834 "transform_hlds.term_errors.c"
}

#line 453 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__453__1_2_p_0(
#line 453 "term_errors.m"
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_160,
#line 453 "term_errors.m"
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_161)
#line 453 "term_errors.m"
{
#line 453 "term_errors.m"
  {
#line 453 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 453 "term_errors.m"
    {
#line 453 "term_errors.m"
      MR_Word base;
#line 453 "term_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 453 "term_errors.m"
      *transform_hlds__term_errors__LambdaHeadVar__2_161 = base;
#line 453 "term_errors.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__term_errors__LambdaHeadVar__1_160));
#line 453 "term_errors.m"
    }
#line 453 "term_errors.m"
  }
#line 453 "term_errors.m"
}

#line 449 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__449__1_2_p_0(
#line 449 "term_errors.m"
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_154,
#line 449 "term_errors.m"
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_155)
#line 449 "term_errors.m"
{
#line 449 "term_errors.m"
  {
#line 449 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 449 "term_errors.m"
    {
#line 449 "term_errors.m"
      MR_Word base;
#line 449 "term_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 449 "term_errors.m"
      *transform_hlds__term_errors__LambdaHeadVar__2_155 = base;
#line 449 "term_errors.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__term_errors__LambdaHeadVar__1_154));
#line 449 "term_errors.m"
    }
#line 449 "term_errors.m"
  }
#line 449 "term_errors.m"
}

#line 391 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__391__1_2_p_0(
#line 391 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_321,
#line 391 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_323)
#line 391 "term_errors.m"
{
#line 391 "term_errors.m"
  {
#line 391 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 391 "term_errors.m"
    {
#line 391 "term_errors.m"
      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_321, transform_hlds__term_errors__CallerPPId_323);
    }
#line 391 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 391 "term_errors.m"
  }
#line 391 "term_errors.m"
}

#line 330 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__330__1_2_p_0(
#line 330 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_11,
#line 330 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_13)
#line 330 "term_errors.m"
{
#line 330 "term_errors.m"
  {
#line 330 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 330 "term_errors.m"
    {
#line 330 "term_errors.m"
      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_13, transform_hlds__term_errors__CallerPPId_11);
    }
#line 330 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 330 "term_errors.m"
  }
#line 330 "term_errors.m"
}

#line 373 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__373__1_2_p_0(
#line 373 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_312,
#line 373 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_314)
#line 373 "term_errors.m"
{
#line 373 "term_errors.m"
  {
#line 373 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 373 "term_errors.m"
    {
#line 373 "term_errors.m"
      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_312, transform_hlds__term_errors__CallerPPId_314);
    }
#line 373 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 373 "term_errors.m"
  }
#line 373 "term_errors.m"
}

#line 410 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__410__1_2_p_0(
#line 410 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_330,
#line 410 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_332)
#line 410 "term_errors.m"
{
#line 410 "term_errors.m"
  {
#line 410 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 410 "term_errors.m"
    {
#line 410 "term_errors.m"
      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_330, transform_hlds__term_errors__CallerPPId_332);
    }
#line 410 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 410 "term_errors.m"
  }
#line 410 "term_errors.m"
}

#line 502 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__502__1_2_p_0(
#line 502 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCCPredId_43,
#line 502 "term_errors.m"
  MR_Word transform_hlds__term_errors__PredId_350)
#line 502 "term_errors.m"
{
#line 502 "term_errors.m"
  {
#line 502 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 502 "term_errors.m"
    {
#line 502 "term_errors.m"
      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__PredId_350, transform_hlds__term_errors__SCCPredId_43);
    }
#line 502 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 502 "term_errors.m"
  }
#line 502 "term_errors.m"
}

#line 349 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__349__1_2_p_0(
#line 349 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_304,
#line 349 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_306)
#line 349 "term_errors.m"
{
#line 349 "term_errors.m"
  {
#line 349 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 349 "term_errors.m"
    {
#line 349 "term_errors.m"
      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_304, transform_hlds__term_errors__CallerPPId_306);
    }
#line 349 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 349 "term_errors.m"
  }
#line 349 "term_errors.m"
}

#line 34 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0(
#line 34 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__1_1,
#line 34 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2,
#line 34 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__3_3)
#line 34 "term_errors.m"
{
#line 34 "term_errors.m"
  {
#line 34 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 34 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastX_51 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;
#line 34 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastY_52 = (MR_Integer) transform_hlds__term_errors__HeadVar__3_3;

#line 34 "term_errors.m"
    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_51 == transform_hlds__term_errors__CastY_52);
#line 34 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 2079 "transform_hlds.term_errors.c"
      *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 0;
#line 34 "term_errors.m"
    else
#line 34 "term_errors.m"
      {
#line 34 "term_errors.m"
        MR_Integer transform_hlds__term_errors__V_4_4;
#line 34 "term_errors.m"
        MR_Integer transform_hlds__term_errors__V_5_5;

#line 34 "term_errors.m"
        {
#line 34 "term_errors.m"
          transform_hlds__term_errors____Index____term_error_kind_0_0(transform_hlds__term_errors__HeadVar__2_2, &transform_hlds__term_errors__V_4_4);
        }
#line 34 "term_errors.m"
        {
#line 34 "term_errors.m"
          transform_hlds__term_errors____Index____term_error_kind_0_0(transform_hlds__term_errors__HeadVar__3_3, &transform_hlds__term_errors__V_5_5);
        }
#line 34 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_4_4 < transform_hlds__term_errors__V_5_5);
#line 34 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 2104 "transform_hlds.term_errors.c"
          *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "term_errors.m"
        else
#line 34 "term_errors.m"
          {
#line 34 "term_errors.m"
            transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_4_4 > transform_hlds__term_errors__V_5_5);
#line 34 "term_errors.m"
            if (transform_hlds__term_errors__succeeded)
#line 2114 "transform_hlds.term_errors.c"
              *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "term_errors.m"
            else
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_6_6;

#line 34 "term_errors.m"
#line 34 "term_errors.m"
                switch (MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) {
#line 34 "term_errors.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 34 "term_errors.m"
                  case (MR_Integer) 0:
#line 34 "term_errors.m"
#line 34 "term_errors.m"
                    switch (MR_unmkbody(transform_hlds__term_errors__HeadVar__2_2)) {
#line 34 "term_errors.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "term_errors.m"
                      case (MR_Integer) 0:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 1:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 2:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 3:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 4:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 5:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 6:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 7:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                    }
#line 34 "term_errors.m"
                    break;
#line 34 "term_errors.m"
                  case (MR_Integer) 1:
#line 34 "term_errors.m"
                    {
#line 34 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_9_9;
#line 34 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_10_10;
#line 34 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_11_11;

#line 34 "term_errors.m"
                      transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 34 "term_errors.m"
                      if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "term_errors.m"
                          {
#line 34 "term_errors.m"
                            hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_11_11, transform_hlds__term_errors__V_7_7, transform_hlds__term_errors__V_9_9);
                          }
#line 2265 "transform_hlds.term_errors.c"
                          transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_11_11 == (MR_Integer) 0);
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 34 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                            transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_11_11;
#line 34 "term_errors.m"
                          else
#line 34 "term_errors.m"
                            {
#line 34 "term_errors.m"
                              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_8_8, transform_hlds__term_errors__V_10_10);
                            }
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                    }
#line 34 "term_errors.m"
                    break;
#line 34 "term_errors.m"
                  case (MR_Integer) 2:
#line 34 "term_errors.m"
                    {
#line 34 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_14_14;
#line 34 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_15_15;
#line 34 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_16_16;

#line 34 "term_errors.m"
                      transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 34 "term_errors.m"
                      if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "term_errors.m"
                          transform_hlds__term_errors__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "term_errors.m"
                          {
#line 34 "term_errors.m"
                            hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_16_16, transform_hlds__term_errors__V_12_12, transform_hlds__term_errors__V_14_14);
                          }
#line 2318 "transform_hlds.term_errors.c"
                          transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_16_16 == (MR_Integer) 0);
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 34 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                            transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_16_16;
#line 34 "term_errors.m"
                          else
#line 34 "term_errors.m"
                            {
#line 34 "term_errors.m"
                              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_13_13, transform_hlds__term_errors__V_15_15);
                            }
#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                    }
#line 34 "term_errors.m"
                    break;
#line 34 "term_errors.m"
                  case (MR_Integer) 3:
#line 34 "term_errors.m"
#line 34 "term_errors.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) {
#line 34 "term_errors.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "term_errors.m"
                      case (MR_Integer) 0:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_19_19;
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_20_20;
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_21_21;

#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 34 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                            {
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 34 "term_errors.m"
                              {
#line 34 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_21_21, transform_hlds__term_errors__V_17_17, transform_hlds__term_errors__V_19_19);
                              }
#line 2378 "transform_hlds.term_errors.c"
                              transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_21_21 == (MR_Integer) 0);
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 34 "term_errors.m"
                              if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                                transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_21_21;
#line 34 "term_errors.m"
                              else
#line 34 "term_errors.m"
                                {
#line 34 "term_errors.m"
                                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_18_18, transform_hlds__term_errors__V_20_20);
                                }
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                            }
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 1:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_24_24;
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_25_25;
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_26_26;

#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 34 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                            {
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 34 "term_errors.m"
                              {
#line 34 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_26_26, transform_hlds__term_errors__V_22_22, transform_hlds__term_errors__V_24_24);
                              }
#line 2431 "transform_hlds.term_errors.c"
                              transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_26_26 == (MR_Integer) 0);
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 34 "term_errors.m"
                              if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                                transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_26_26;
#line 34 "term_errors.m"
                              else
#line 34 "term_errors.m"
                                {
#line 34 "term_errors.m"
                                  {
#line 34 "term_errors.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[1], &transform_hlds__term_errors__V_6_6, ((MR_Box) (transform_hlds__term_errors__V_23_23)), ((MR_Box) (transform_hlds__term_errors__V_25_25)));
                                  }
#line 34 "term_errors.m"
                                }
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                            }
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 2:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_30_30;
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_31_31;
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_32_32;
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_33_33;

#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 34 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                            {
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 3)));
#line 34 "term_errors.m"
                              {
#line 34 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_33_33, transform_hlds__term_errors__V_27_27, transform_hlds__term_errors__V_30_30);
                              }
#line 2494 "transform_hlds.term_errors.c"
                              transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_33_33 == (MR_Integer) 0);
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 34 "term_errors.m"
                              if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                                transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_33_33;
#line 34 "term_errors.m"
                              else
#line 34 "term_errors.m"
                                {
#line 34 "term_errors.m"
                                  MR_Word transform_hlds__term_errors__V_34_34;

#line 34 "term_errors.m"
                                  {
#line 34 "term_errors.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[2], &transform_hlds__term_errors__V_34_34, ((MR_Box) (transform_hlds__term_errors__V_28_28)), ((MR_Box) (transform_hlds__term_errors__V_31_31)));
                                  }
#line 2514 "transform_hlds.term_errors.c"
                                  transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_34_34 == (MR_Integer) 0);
#line 34 "term_errors.m"
                                  transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 34 "term_errors.m"
                                  if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                                    transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_34_34;
#line 34 "term_errors.m"
                                  else
#line 34 "term_errors.m"
                                    {
#line 34 "term_errors.m"
                                      {
#line 34 "term_errors.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[2], &transform_hlds__term_errors__V_6_6, ((MR_Box) (transform_hlds__term_errors__V_29_29)), ((MR_Box) (transform_hlds__term_errors__V_32_32)));
                                      }
#line 34 "term_errors.m"
                                    }
#line 34 "term_errors.m"
                                }
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                            }
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 3:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_37_37;
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_38_38;
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_39_39;

#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 34 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                            {
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 34 "term_errors.m"
                              {
#line 34 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_39_39, transform_hlds__term_errors__V_35_35, transform_hlds__term_errors__V_37_37);
                              }
#line 2573 "transform_hlds.term_errors.c"
                              transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_39_39 == (MR_Integer) 0);
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 34 "term_errors.m"
                              if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                                transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_39_39;
#line 34 "term_errors.m"
                              else
#line 34 "term_errors.m"
                                {
#line 34 "term_errors.m"
                                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_36_36, transform_hlds__term_errors__V_38_38);
                                }
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                            }
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 4:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_42_42;
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_43_43;
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_44_44;

#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 34 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                            {
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 34 "term_errors.m"
                              {
#line 34 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_44_44, transform_hlds__term_errors__V_40_40, transform_hlds__term_errors__V_42_42);
                              }
#line 2626 "transform_hlds.term_errors.c"
                              transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_44_44 == (MR_Integer) 0);
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 34 "term_errors.m"
                              if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                                transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_44_44;
#line 34 "term_errors.m"
                              else
#line 34 "term_errors.m"
                                {
#line 34 "term_errors.m"
                                  {
#line 34 "term_errors.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[3], &transform_hlds__term_errors__V_6_6, ((MR_Box) (transform_hlds__term_errors__V_41_41)), ((MR_Box) (transform_hlds__term_errors__V_43_43)));
                                  }
#line 34 "term_errors.m"
                                }
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                            }
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 5:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_46_46;

#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 34 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                            {
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "term_errors.m"
                              {
#line 34 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_45_45, transform_hlds__term_errors__V_46_46);
                              }
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                            }
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 6:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_48_48;

#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 34 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                            {
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "term_errors.m"
                              {
#line 34 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_47_47, transform_hlds__term_errors__V_48_48);
                              }
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                            }
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                      case (MR_Integer) 7:
#line 34 "term_errors.m"
                        {
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_50_50;

#line 34 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 34 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                            {
#line 34 "term_errors.m"
                              transform_hlds__term_errors__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "term_errors.m"
                              {
#line 34 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_49_49, transform_hlds__term_errors__V_50_50);
                              }
#line 34 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
                            }
#line 34 "term_errors.m"
                        }
#line 34 "term_errors.m"
                        break;
#line 34 "term_errors.m"
                    }
#line 34 "term_errors.m"
                    break;
#line 34 "term_errors.m"
                }
#line 34 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                  *transform_hlds__term_errors__HeadVar__1_1 = transform_hlds__term_errors__V_6_6;
#line 34 "term_errors.m"
                else
#line 34 "term_errors.m"
                  {
#line 34 "term_errors.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 34 "term_errors.m"
                    return;
                  }
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
          }
#line 34 "term_errors.m"
      }
#line 34 "term_errors.m"
  }
#line 34 "term_errors.m"
}

#line 34 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors____Index____term_error_kind_0_0(
#line 34 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 34 "term_errors.m"
  MR_Integer * transform_hlds__term_errors__HeadVar__2_2)
#line 34 "term_errors.m"
{
#line 34 "term_errors.m"
  {
#line 34 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 34 "term_errors.m"
#line 34 "term_errors.m"
    switch (MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) {
#line 34 "term_errors.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "term_errors.m"
      case (MR_Integer) 0:
#line 34 "term_errors.m"
#line 34 "term_errors.m"
        switch (MR_unmkbody(transform_hlds__term_errors__HeadVar__1_1)) {
#line 34 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 34 "term_errors.m"
          case (MR_Integer) 0:
#line 2801 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 1:
#line 2807 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 2:
#line 2813 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 4;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 3:
#line 2819 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 5;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 4:
#line 2825 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 11;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 5:
#line 2831 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 12;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 6:
#line 2837 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 13;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 7:
#line 2843 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 16;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
        }
#line 34 "term_errors.m"
        break;
#line 34 "term_errors.m"
      case (MR_Integer) 1:
#line 2853 "transform_hlds.term_errors.c"
        *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 2;
#line 34 "term_errors.m"
        break;
#line 34 "term_errors.m"
      case (MR_Integer) 2:
#line 2859 "transform_hlds.term_errors.c"
        *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 3;
#line 34 "term_errors.m"
        break;
#line 34 "term_errors.m"
      case (MR_Integer) 3:
#line 34 "term_errors.m"
#line 34 "term_errors.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) {
#line 34 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 34 "term_errors.m"
          case (MR_Integer) 0:
#line 2872 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 6;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 1:
#line 2878 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 7;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 2:
#line 2884 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 8;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 3:
#line 2890 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 9;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 4:
#line 2896 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 10;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 5:
#line 2902 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 14;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 6:
#line 2908 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 15;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
          case (MR_Integer) 7:
#line 2914 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 17;
#line 34 "term_errors.m"
            break;
#line 34 "term_errors.m"
        }
#line 34 "term_errors.m"
        break;
#line 34 "term_errors.m"
    }
#line 34 "term_errors.m"
  }
#line 34 "term_errors.m"
}

#line 34 "term_errors.m"
MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0(
#line 34 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 34 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2)
#line 34 "term_errors.m"
{
#line 34 "term_errors.m"
  {
#line 34 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 34 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastX_55 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 34 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastY_56 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 34 "term_errors.m"
    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_55 == transform_hlds__term_errors__CastY_56);
#line 34 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
      transform_hlds__term_errors__succeeded = MR_TRUE;
#line 34 "term_errors.m"
    else
#line 34 "term_errors.m"
#line 34 "term_errors.m"
      switch (MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) {
#line 34 "term_errors.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 34 "term_errors.m"
        case (MR_Integer) 0:
#line 34 "term_errors.m"
#line 34 "term_errors.m"
          switch (MR_unmkbody(transform_hlds__term_errors__HeadVar__1_1)) {
#line 34 "term_errors.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 34 "term_errors.m"
            case (MR_Integer) 0:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_3 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_4 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_4 == transform_hlds__term_errors__CastX_3);
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 1:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_5 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_6 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_6 == transform_hlds__term_errors__CastX_5);
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 2:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_15 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_16 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_16 == transform_hlds__term_errors__CastX_15);
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 3:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_17 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_18 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_18 == transform_hlds__term_errors__CastX_17);
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 4:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_41 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_42 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_42 == transform_hlds__term_errors__CastX_41);
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 5:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_43 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_44 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_44 == transform_hlds__term_errors__CastX_43);
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 6:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_45 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_46 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_46 == transform_hlds__term_errors__CastX_45);
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 7:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_51 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 34 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_52 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_52 == transform_hlds__term_errors__CastX_51);
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
          }
#line 34 "term_errors.m"
          break;
#line 34 "term_errors.m"
        case (MR_Integer) 1:
#line 34 "term_errors.m"
          {
#line 34 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_9_9;
#line 34 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_10_10;

#line 34 "term_errors.m"
            transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 34 "term_errors.m"
            if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                transform_hlds__term_errors__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "term_errors.m"
                transform_hlds__term_errors__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3114 "transform_hlds.term_errors.c"
                {
#line 3116 "transform_hlds.term_errors.c"
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_7_7, transform_hlds__term_errors__V_9_9);
                }
#line 34 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 3121 "transform_hlds.term_errors.c"
                  {
#line 3123 "transform_hlds.term_errors.c"
                    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_8_8, transform_hlds__term_errors__V_10_10);
                  }
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
          }
#line 34 "term_errors.m"
          break;
#line 34 "term_errors.m"
        case (MR_Integer) 2:
#line 34 "term_errors.m"
          {
#line 34 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_13_13;
#line 34 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_14_14;

#line 34 "term_errors.m"
            transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 34 "term_errors.m"
            if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                transform_hlds__term_errors__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "term_errors.m"
                transform_hlds__term_errors__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3155 "transform_hlds.term_errors.c"
                {
#line 3157 "transform_hlds.term_errors.c"
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_11_11, transform_hlds__term_errors__V_13_13);
                }
#line 34 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 3162 "transform_hlds.term_errors.c"
                  {
#line 3164 "transform_hlds.term_errors.c"
                    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_12_12, transform_hlds__term_errors__V_14_14);
                  }
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
          }
#line 34 "term_errors.m"
          break;
#line 34 "term_errors.m"
        case (MR_Integer) 3:
#line 34 "term_errors.m"
#line 34 "term_errors.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) {
#line 34 "term_errors.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 34 "term_errors.m"
            case (MR_Integer) 0:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_21_21;
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_22_22;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 34 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                  {
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3203 "transform_hlds.term_errors.c"
                    {
#line 3205 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_19_19, transform_hlds__term_errors__V_21_21);
                    }
#line 34 "term_errors.m"
                    if (transform_hlds__term_errors__succeeded)
#line 3210 "transform_hlds.term_errors.c"
                      {
#line 3212 "transform_hlds.term_errors.c"
                        transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_20_20, transform_hlds__term_errors__V_22_22);
                      }
#line 34 "term_errors.m"
                  }
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 1:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__TypeInfo_64_64;
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_25_25;
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_26_26;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 34 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                  {
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3246 "transform_hlds.term_errors.c"
                    {
#line 3248 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_23_23, transform_hlds__term_errors__V_25_25);
                    }
#line 34 "term_errors.m"
                    if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                      {
#line 3255 "transform_hlds.term_errors.c"
                        transform_hlds__term_errors__TypeInfo_64_64 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[1];
#line 3257 "transform_hlds.term_errors.c"
                        {
#line 3259 "transform_hlds.term_errors.c"
                          transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_64_64, ((MR_Box) (transform_hlds__term_errors__V_24_24)), ((MR_Box) (transform_hlds__term_errors__V_26_26)));
                        }
#line 34 "term_errors.m"
                      }
#line 34 "term_errors.m"
                  }
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 2:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__TypeInfo_73_73;
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__TypeInfo_74_74;
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 3)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_30_30;
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_31_31;
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_32_32;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 34 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                  {
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 3303 "transform_hlds.term_errors.c"
                    {
#line 3305 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_27_27, transform_hlds__term_errors__V_30_30);
                    }
#line 34 "term_errors.m"
                    if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                      {
#line 3312 "transform_hlds.term_errors.c"
                        transform_hlds__term_errors__TypeInfo_73_73 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[2];
#line 3314 "transform_hlds.term_errors.c"
                        {
#line 3316 "transform_hlds.term_errors.c"
                          transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_73_73, ((MR_Box) (transform_hlds__term_errors__V_28_28)), ((MR_Box) (transform_hlds__term_errors__V_31_31)));
                        }
#line 34 "term_errors.m"
                        if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                          {
#line 3323 "transform_hlds.term_errors.c"
                            transform_hlds__term_errors__TypeInfo_74_74 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[2];
#line 3325 "transform_hlds.term_errors.c"
                            {
#line 3327 "transform_hlds.term_errors.c"
                              transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_74_74, ((MR_Box) (transform_hlds__term_errors__V_29_29)), ((MR_Box) (transform_hlds__term_errors__V_32_32)));
                            }
#line 34 "term_errors.m"
                          }
#line 34 "term_errors.m"
                      }
#line 34 "term_errors.m"
                  }
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 3:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_35_35;
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_36_36;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 34 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                  {
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3363 "transform_hlds.term_errors.c"
                    {
#line 3365 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_33_33, transform_hlds__term_errors__V_35_35);
                    }
#line 34 "term_errors.m"
                    if (transform_hlds__term_errors__succeeded)
#line 3370 "transform_hlds.term_errors.c"
                      {
#line 3372 "transform_hlds.term_errors.c"
                        transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_34_34, transform_hlds__term_errors__V_36_36);
                      }
#line 34 "term_errors.m"
                  }
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 4:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__TypeInfo_60_60;
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_39_39;
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_40_40;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 34 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                  {
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3406 "transform_hlds.term_errors.c"
                    {
#line 3408 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_37_37, transform_hlds__term_errors__V_39_39);
                    }
#line 34 "term_errors.m"
                    if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                      {
#line 3415 "transform_hlds.term_errors.c"
                        transform_hlds__term_errors__TypeInfo_60_60 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[3];
#line 3417 "transform_hlds.term_errors.c"
                        {
#line 3419 "transform_hlds.term_errors.c"
                          transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_60_60, ((MR_Box) (transform_hlds__term_errors__V_38_38)), ((MR_Box) (transform_hlds__term_errors__V_40_40)));
                        }
#line 34 "term_errors.m"
                      }
#line 34 "term_errors.m"
                  }
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 5:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_48_48;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 34 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                  {
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3447 "transform_hlds.term_errors.c"
                    {
#line 3449 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__V_47_47, transform_hlds__term_errors__V_48_48);
                    }
#line 34 "term_errors.m"
                  }
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 6:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_50_50;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 34 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                  {
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3475 "transform_hlds.term_errors.c"
                    {
#line 3477 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__V_49_49, transform_hlds__term_errors__V_50_50);
                    }
#line 34 "term_errors.m"
                  }
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
            case (MR_Integer) 7:
#line 34 "term_errors.m"
              {
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_54_54;

#line 34 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 34 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 34 "term_errors.m"
                  {
#line 34 "term_errors.m"
                    transform_hlds__term_errors__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3503 "transform_hlds.term_errors.c"
                    {
#line 3505 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_53_53, transform_hlds__term_errors__V_54_54);
                    }
#line 34 "term_errors.m"
                  }
#line 34 "term_errors.m"
              }
#line 34 "term_errors.m"
              break;
#line 34 "term_errors.m"
          }
#line 34 "term_errors.m"
          break;
#line 34 "term_errors.m"
      }
#line 34 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 34 "term_errors.m"
  }
#line 34 "term_errors.m"
}

#line 143 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0(
#line 143 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__1_1,
#line 143 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2,
#line 143 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__3_3)
#line 143 "term_errors.m"
{
#line 143 "term_errors.m"
  {
#line 143 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 143 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastX_9 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;
#line 143 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastY_10 = (MR_Integer) transform_hlds__term_errors__HeadVar__3_3;

#line 143 "term_errors.m"
    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_9 == transform_hlds__term_errors__CastY_10);
#line 143 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 3551 "transform_hlds.term_errors.c"
      *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 0;
#line 143 "term_errors.m"
    else
#line 143 "term_errors.m"
      {
#line 143 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 143 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 143 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 143 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 143 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_8_8;

#line 143 "term_errors.m"
        {
#line 143 "term_errors.m"
          mercury__term____Compare____context_0_0(&transform_hlds__term_errors__V_8_8, transform_hlds__term_errors__V_4_4, transform_hlds__term_errors__V_6_6);
        }
#line 3573 "transform_hlds.term_errors.c"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_8_8 == (MR_Integer) 0);
#line 143 "term_errors.m"
        transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 143 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 143 "term_errors.m"
          *transform_hlds__term_errors__HeadVar__1_1 = transform_hlds__term_errors__V_8_8;
#line 143 "term_errors.m"
        else
#line 143 "term_errors.m"
          {
#line 143 "term_errors.m"
            transform_hlds__term_errors____Compare____term_error_kind_0_0(transform_hlds__term_errors__HeadVar__1_1, transform_hlds__term_errors__V_5_5, transform_hlds__term_errors__V_7_7);
          }
#line 143 "term_errors.m"
      }
#line 143 "term_errors.m"
  }
#line 143 "term_errors.m"
}

#line 143 "term_errors.m"
MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0(
#line 143 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 143 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2)
#line 143 "term_errors.m"
{
#line 143 "term_errors.m"
  {
#line 143 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 143 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastX_7 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 143 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastY_8 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 143 "term_errors.m"
    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_7 == transform_hlds__term_errors__CastY_8);
#line 143 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 143 "term_errors.m"
      transform_hlds__term_errors__succeeded = MR_TRUE;
#line 143 "term_errors.m"
    else
#line 143 "term_errors.m"
      {
#line 143 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 143 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 143 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 143 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));

#line 3632 "transform_hlds.term_errors.c"
        {
#line 3634 "transform_hlds.term_errors.c"
          transform_hlds__term_errors__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_errors__V_3_3, transform_hlds__term_errors__V_5_5);
        }
#line 143 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 3639 "transform_hlds.term_errors.c"
          {
#line 3641 "transform_hlds.term_errors.c"
            transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____term_error_kind_0_0(transform_hlds__term_errors__V_4_4, transform_hlds__term_errors__V_6_6);
          }
#line 143 "term_errors.m"
      }
#line 143 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 143 "term_errors.m"
  }
#line 143 "term_errors.m"
}

#line 532 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(
#line 532 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 532 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_2,
#line 532 "term_errors.m"
  MR_Word transform_hlds__term_errors__First_3,
#line 532 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__4_4)
#line 532 "term_errors.m"
{
#line 535 "term_errors.m"
  {
#line 535 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 535 "term_errors.m"
    if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "term_errors.m"
      {
#line 535 "term_errors.m"
        *transform_hlds__term_errors__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[114]);
#line 535 "term_errors.m"
      }
#line 535 "term_errors.m"
    else
#line 537 "term_errors.m"
      {
#line 537 "term_errors.m"
        MR_Word transform_hlds__term_errors__Var_9;
#line 537 "term_errors.m"
        MR_Integer transform_hlds__term_errors__Count_10;
#line 537 "term_errors.m"
        MR_Word transform_hlds__term_errors__VarCounts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 537 "term_errors.m"
        MR_String transform_hlds__term_errors__Piece_14;
#line 537 "term_errors.m"
        MR_Word transform_hlds__term_errors__Pieces_15;
#line 537 "term_errors.m"
        MR_String transform_hlds__term_errors__VarName_16;
#line 537 "term_errors.m"
        MR_String transform_hlds__term_errors__VarCountPiece_19;
#line 537 "term_errors.m"
        MR_String transform_hlds__term_errors__Piece0_20;
#line 537 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));

#line 536 "term_errors.m"
        transform_hlds__term_errors__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_23_23, (MR_Integer) 0)));
#line 536 "term_errors.m"
        transform_hlds__term_errors__Count_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_23_23, (MR_Integer) 1)));
#line 538 "term_errors.m"
        {
#line 538 "term_errors.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__term_errors__Varset_2, transform_hlds__term_errors__Var_9, &transform_hlds__term_errors__VarName_16);
        }
#line 539 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Count_10 > (MR_Integer) 1);
#line 539 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 540 "term_errors.m"
          {
#line 540 "term_errors.m"
            MR_String transform_hlds__term_errors__VarCountPiece0_17;
#line 540 "term_errors.m"
            MR_String transform_hlds__term_errors__CountStr_18;

#line 540 "term_errors.m"
            {
#line 540 "term_errors.m"
              mercury__string__append_3_p_2(transform_hlds__term_errors__VarName_16, (MR_String) "*", &transform_hlds__term_errors__VarCountPiece0_17);
            }
#line 541 "term_errors.m"
            {
#line 541 "term_errors.m"
              mercury__string__int_to_string_2_p_0(transform_hlds__term_errors__Count_10, &transform_hlds__term_errors__CountStr_18);
            }
#line 542 "term_errors.m"
            {
#line 542 "term_errors.m"
              mercury__string__append_3_p_2(transform_hlds__term_errors__VarCountPiece0_17, transform_hlds__term_errors__CountStr_18, &transform_hlds__term_errors__VarCountPiece_19);
            }
#line 540 "term_errors.m"
          }
#line 539 "term_errors.m"
        else
#line 544 "term_errors.m"
          transform_hlds__term_errors__VarCountPiece_19 = transform_hlds__term_errors__VarName_16;
#line 549 "term_errors.m"
#line 549 "term_errors.m"
        switch (transform_hlds__term_errors__First_3) {
#line 549 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 549 "term_errors.m"
          case (MR_Integer) 0:
#line 551 "term_errors.m"
            transform_hlds__term_errors__Piece0_20 = transform_hlds__term_errors__VarCountPiece_19;
#line 549 "term_errors.m"
            break;
#line 549 "term_errors.m"
          case (MR_Integer) 1:
#line 547 "term_errors.m"
            {
#line 548 "term_errors.m"
              {
#line 548 "term_errors.m"
                mercury__string__append_3_p_2((MR_String) "{", transform_hlds__term_errors__VarCountPiece_19, &transform_hlds__term_errors__Piece0_20);
              }
#line 547 "term_errors.m"
            }
#line 549 "term_errors.m"
            break;
#line 549 "term_errors.m"
        }
#line 557 "term_errors.m"
        if ((transform_hlds__term_errors__VarCounts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "term_errors.m"
          {
#line 555 "term_errors.m"
            {
#line 555 "term_errors.m"
              mercury__string__append_3_p_2(transform_hlds__term_errors__Piece0_20, (MR_String) "}.", &transform_hlds__term_errors__Piece_14);
            }
#line 556 "term_errors.m"
            transform_hlds__term_errors__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 554 "term_errors.m"
          }
#line 557 "term_errors.m"
        else
#line 558 "term_errors.m"
          {
#line 559 "term_errors.m"
            transform_hlds__term_errors__Piece_14 = transform_hlds__term_errors__Piece0_20;
#line 560 "term_errors.m"
            {
#line 560 "term_errors.m"
              transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(transform_hlds__term_errors__VarCounts_11, transform_hlds__term_errors__Varset_2, transform_hlds__term_errors__First_3, &transform_hlds__term_errors__Pieces_15);
            }
#line 558 "term_errors.m"
          }
#line 537 "term_errors.m"
        {
#line 537 "term_errors.m"
          MR_Word base;
#line 537 "term_errors.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "term_errors.m"
          *transform_hlds__term_errors__HeadVar__4_4 = base;
#line 537 "term_errors.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__Piece_14));
#line 537 "term_errors.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_errors__Pieces_15));
#line 537 "term_errors.m"
        }
#line 537 "term_errors.m"
      }
#line 535 "term_errors.m"
  }
#line 532 "term_errors.m"
}

#line 525 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
#line 525 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVars_4,
#line 525 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_5,
#line 525 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_6)
#line 525 "term_errors.m"
{
#line 528 "term_errors.m"
  {
#line 528 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 528 "term_errors.m"
    MR_Word transform_hlds__term_errors__HeadVarCountList_7;

#line 529 "term_errors.m"
    {
#line 529 "term_errors.m"
      mercury__bag__to_assoc_list_2_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[0], transform_hlds__term_errors__HeadVars_4, &transform_hlds__term_errors__HeadVarCountList_7);
    }
#line 530 "term_errors.m"
    {
#line 530 "term_errors.m"
      transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(transform_hlds__term_errors__HeadVarCountList_7, transform_hlds__term_errors__Varset_5, (MR_Integer) 1, transform_hlds__term_errors__Pieces_6);
    }
#line 528 "term_errors.m"
  }
#line 525 "term_errors.m"
}

#line 453 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_8(
#line 453 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 453 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 453 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2)
#line 453 "term_errors.m"
{
#line 453 "term_errors.m"
  {
#line 453 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;
#line 453 "term_errors.m"
    MR_Word transform_hlds__term_errors__conv1_LambdaHeadVar__2_161;

#line 453 "term_errors.m"
    {
#line 453 "term_errors.m"
      transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__453__1_2_p_0(((MR_String) transform_hlds__term_errors__wrapper_arg_1), &transform_hlds__term_errors__conv1_LambdaHeadVar__2_161);
    }
#line 453 "term_errors.m"
    *transform_hlds__term_errors__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_errors__conv1_LambdaHeadVar__2_161));
#line 453 "term_errors.m"
  }
#line 453 "term_errors.m"
}

#line 449 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_7(
#line 449 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 449 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 449 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2)
#line 449 "term_errors.m"
{
#line 449 "term_errors.m"
  {
#line 449 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;
#line 449 "term_errors.m"
    MR_Word transform_hlds__term_errors__conv0_LambdaHeadVar__2_155;

#line 449 "term_errors.m"
    {
#line 449 "term_errors.m"
      transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__449__1_2_p_0(((MR_String) transform_hlds__term_errors__wrapper_arg_1), &transform_hlds__term_errors__conv0_LambdaHeadVar__2_155);
    }
#line 449 "term_errors.m"
    *transform_hlds__term_errors__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_errors__conv0_LambdaHeadVar__2_155));
#line 449 "term_errors.m"
  }
#line 449 "term_errors.m"
}

#line 391 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_6(
#line 391 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 391 "term_errors.m"
{
#line 391 "term_errors.m"
  {
#line 391 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 391 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 391 "term_errors.m"
    {
#line 391 "term_errors.m"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__391__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 391 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 391 "term_errors.m"
  }
#line 391 "term_errors.m"
}

#line 330 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_5(
#line 330 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 330 "term_errors.m"
{
#line 330 "term_errors.m"
  {
#line 330 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 330 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 330 "term_errors.m"
    {
#line 330 "term_errors.m"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__330__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 330 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 330 "term_errors.m"
  }
#line 330 "term_errors.m"
}

#line 373 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_4(
#line 373 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 373 "term_errors.m"
{
#line 373 "term_errors.m"
  {
#line 373 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 373 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 373 "term_errors.m"
    {
#line 373 "term_errors.m"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__373__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 373 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 373 "term_errors.m"
  }
#line 373 "term_errors.m"
}

#line 410 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_3(
#line 410 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 410 "term_errors.m"
{
#line 410 "term_errors.m"
  {
#line 410 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 410 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 410 "term_errors.m"
    {
#line 410 "term_errors.m"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__410__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 410 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 410 "term_errors.m"
  }
#line 410 "term_errors.m"
}

#line 502 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_2(
#line 502 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 502 "term_errors.m"
{
#line 502 "term_errors.m"
  {
#line 502 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 502 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 502 "term_errors.m"
    {
#line 502 "term_errors.m"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__502__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 502 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 502 "term_errors.m"
  }
#line 502 "term_errors.m"
}

#line 349 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_1(
#line 349 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 349 "term_errors.m"
{
#line 349 "term_errors.m"
  {
#line 349 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 349 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 349 "term_errors.m"
    {
#line 349 "term_errors.m"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__349__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 349 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 349 "term_errors.m"
  }
#line 349 "term_errors.m"
}

#line 307 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0(
#line 307 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
#line 307 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_7,
#line 307 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorKind_8,
#line 307 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_9,
#line 307 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Reason_10)
#line 307 "term_errors.m"
{
#line 313 "term_errors.m"
  {
#line 313 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 313 "term_errors.m"
#line 313 "term_errors.m"
    switch (MR_tag((MR_Word) transform_hlds__term_errors__ErrorKind_8)) {
#line 313 "term_errors.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 313 "term_errors.m"
      case (MR_Integer) 0:
#line 313 "term_errors.m"
#line 313 "term_errors.m"
        switch (MR_unmkbody(transform_hlds__term_errors__ErrorKind_8)) {
#line 313 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 313 "term_errors.m"
          case (MR_Integer) 0:
#line 321 "term_errors.m"
            {
#line 322 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[70]);
#line 325 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 321 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 1:
#line 364 "term_errors.m"
            {
#line 365 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[48]);
#line 368 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 364 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 2:
#line 313 "term_errors.m"
            {
#line 314 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[42]);
#line 315 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 3:
#line 317 "term_errors.m"
            {
#line 318 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[58]);
#line 319 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 317 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 4:
#line 480 "term_errors.m"
            {
#line 481 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[62]);
#line 483 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 480 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 5:
#line 475 "term_errors.m"
            {
#line 476 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[78]);
#line 478 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 475 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 6:
#line 485 "term_errors.m"
            {
#line 486 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[74]);
#line 488 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 485 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 7:
#line 513 "term_errors.m"
            {
#line 514 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[50]);
#line 515 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 513 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
        }
#line 313 "term_errors.m"
        break;
#line 313 "term_errors.m"
      case (MR_Integer) 1:
#line 346 "term_errors.m"
        {
#line 346 "term_errors.m"
          MR_Word transform_hlds__term_errors__TypeCtorInfo_354_354;
#line 346 "term_errors.m"
          MR_Word transform_hlds__term_errors__V_250_250;
#line 346 "term_errors.m"
          MR_Word transform_hlds__term_errors__V_253_253;
#line 346 "term_errors.m"
          MR_Word transform_hlds__term_errors__CallerPPId_306 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 0)));
#line 346 "term_errors.m"
          MR_Word transform_hlds__term_errors__CalleePPId_307 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 346 "term_errors.m"
          MR_Word transform_hlds__term_errors__Pieces1_309;
#line 346 "term_errors.m"
          MR_Word transform_hlds__term_errors__CalleePieces_311;

#line 352 "term_errors.m"
          if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 353 "term_errors.m"
            {
#line 354 "term_errors.m"
              {
#line 354 "term_errors.m"
                transform_hlds__term_errors__Pieces1_309 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_306);
              }
#line 353 "term_errors.m"
            }
#line 352 "term_errors.m"
          else
#line 348 "term_errors.m"
            {
#line 348 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_240_240;
#line 348 "term_errors.m"
              MR_Word transform_hlds__term_errors__PPId_304 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

#line 349 "term_errors.m"
              {
#line 349 "term_errors.m"
                transform_hlds__term_errors__V_240_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 349 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_240_240, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 349 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_240_240, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_1));
#line 349 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_240_240, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 349 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_240_240, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_304));
#line 349 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_240_240, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_306));
#line 349 "term_errors.m"
              }
#line 349 "term_errors.m"
              {
#line 349 "term_errors.m"
                mercury__require__expect_4_p_0(transform_hlds__term_errors__V_240_240, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "can_loop_proc_called: caller outside this SCC");
              }
#line 351 "term_errors.m"
              transform_hlds__term_errors__Pieces1_309 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97]);
#line 348 "term_errors.m"
            }
#line 358 "term_errors.m"
          {
#line 358 "term_errors.m"
            transform_hlds__term_errors__CalleePieces_311 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_307);
          }
#line 4266 "transform_hlds.term_errors.c"
          transform_hlds__term_errors__TypeCtorInfo_354_354 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 361 "term_errors.m"
          {
#line 361 "term_errors.m"
            transform_hlds__term_errors__V_253_253 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_354_354, transform_hlds__term_errors__CalleePieces_311, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[101]));
          }
#line 361 "term_errors.m"
          {
#line 361 "term_errors.m"
            transform_hlds__term_errors__V_250_250 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_354_354, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[100]), transform_hlds__term_errors__V_253_253);
          }
#line 361 "term_errors.m"
          {
#line 361 "term_errors.m"
            *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_354_354, transform_hlds__term_errors__Pieces1_309, transform_hlds__term_errors__V_250_250);
          }
#line 362 "term_errors.m"
          *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 346 "term_errors.m"
        }
#line 313 "term_errors.m"
        break;
#line 313 "term_errors.m"
      case (MR_Integer) 2:
#line 370 "term_errors.m"
        {
#line 370 "term_errors.m"
          MR_Word transform_hlds__term_errors__TypeCtorInfo_356_356;
#line 370 "term_errors.m"
          MR_Word transform_hlds__term_errors__V_220_220;
#line 370 "term_errors.m"
          MR_Word transform_hlds__term_errors__V_223_223;
#line 370 "term_errors.m"
          MR_Word transform_hlds__term_errors__CallerPPId_314 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 0)));
#line 370 "term_errors.m"
          MR_Word transform_hlds__term_errors__CalleePPId_315 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 370 "term_errors.m"
          MR_Word transform_hlds__term_errors__Pieces1_317;
#line 370 "term_errors.m"
          MR_Word transform_hlds__term_errors__CalleePieces_319;

#line 376 "term_errors.m"
          if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "term_errors.m"
            {
#line 378 "term_errors.m"
              {
#line 378 "term_errors.m"
                transform_hlds__term_errors__Pieces1_317 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_314);
              }
#line 377 "term_errors.m"
            }
#line 376 "term_errors.m"
          else
#line 372 "term_errors.m"
            {
#line 372 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_210_210;
#line 372 "term_errors.m"
              MR_Word transform_hlds__term_errors__PPId_312 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

#line 373 "term_errors.m"
              {
#line 373 "term_errors.m"
                transform_hlds__term_errors__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 373 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_210_210, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 373 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_210_210, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_4));
#line 373 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_210_210, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 373 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_210_210, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_312));
#line 373 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_210_210, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_314));
#line 373 "term_errors.m"
              }
#line 373 "term_errors.m"
              {
#line 373 "term_errors.m"
                mercury__require__expect_4_p_0(transform_hlds__term_errors__V_210_210, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "horder_args: caller outside this SCC");
              }
#line 375 "term_errors.m"
              transform_hlds__term_errors__Pieces1_317 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97]);
#line 372 "term_errors.m"
            }
#line 382 "term_errors.m"
          {
#line 382 "term_errors.m"
            transform_hlds__term_errors__CalleePieces_319 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_315);
          }
#line 4358 "transform_hlds.term_errors.c"
          transform_hlds__term_errors__TypeCtorInfo_356_356 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 385 "term_errors.m"
          {
#line 385 "term_errors.m"
            transform_hlds__term_errors__V_223_223 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_356_356, transform_hlds__term_errors__CalleePieces_319, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[106]));
          }
#line 385 "term_errors.m"
          {
#line 385 "term_errors.m"
            transform_hlds__term_errors__V_220_220 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_356_356, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[100]), transform_hlds__term_errors__V_223_223);
          }
#line 385 "term_errors.m"
          {
#line 385 "term_errors.m"
            *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_356_356, transform_hlds__term_errors__Pieces1_317, transform_hlds__term_errors__V_220_220);
          }
#line 386 "term_errors.m"
          *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 370 "term_errors.m"
        }
#line 313 "term_errors.m"
        break;
#line 313 "term_errors.m"
      case (MR_Integer) 3:
#line 313 "term_errors.m"
#line 313 "term_errors.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 0)))) {
#line 313 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 313 "term_errors.m"
          case (MR_Integer) 0:
#line 388 "term_errors.m"
            {
#line 388 "term_errors.m"
              MR_Word transform_hlds__term_errors__TypeCtorInfo_358_358;
#line 388 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_201_201;
#line 388 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_204_204;
#line 388 "term_errors.m"
              MR_Word transform_hlds__term_errors__CallerPPId_323 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 388 "term_errors.m"
              MR_Word transform_hlds__term_errors__CalleePPId_324 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
#line 388 "term_errors.m"
              MR_Word transform_hlds__term_errors__Pieces1_326;
#line 388 "term_errors.m"
              MR_Word transform_hlds__term_errors__CalleePieces_328;

#line 394 "term_errors.m"
              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "term_errors.m"
                {
#line 396 "term_errors.m"
                  {
#line 396 "term_errors.m"
                    transform_hlds__term_errors__Pieces1_326 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_323);
                  }
#line 395 "term_errors.m"
                }
#line 394 "term_errors.m"
              else
#line 390 "term_errors.m"
                {
#line 390 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_191_191;
#line 390 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPId_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

#line 391 "term_errors.m"
                  {
#line 391 "term_errors.m"
                    transform_hlds__term_errors__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 391 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_191_191, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 391 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_191_191, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_6));
#line 391 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_191_191, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 391 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_191_191, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_321));
#line 391 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_191_191, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_323));
#line 391 "term_errors.m"
                  }
#line 391 "term_errors.m"
                  {
#line 391 "term_errors.m"
                    mercury__require__expect_4_p_0(transform_hlds__term_errors__V_191_191, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "inf_termination_const: caller outside this SCC");
                  }
#line 393 "term_errors.m"
                  transform_hlds__term_errors__Pieces1_326 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97]);
#line 390 "term_errors.m"
                }
#line 400 "term_errors.m"
              {
#line 400 "term_errors.m"
                transform_hlds__term_errors__CalleePieces_328 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_324);
              }
#line 4457 "transform_hlds.term_errors.c"
              transform_hlds__term_errors__TypeCtorInfo_358_358 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 403 "term_errors.m"
              {
#line 403 "term_errors.m"
                transform_hlds__term_errors__V_204_204 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_358_358, transform_hlds__term_errors__CalleePieces_328, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[108]));
              }
#line 403 "term_errors.m"
              {
#line 403 "term_errors.m"
                transform_hlds__term_errors__V_201_201 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_358_358, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[100]), transform_hlds__term_errors__V_204_204);
              }
#line 403 "term_errors.m"
              {
#line 403 "term_errors.m"
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_358_358, transform_hlds__term_errors__Pieces1_326, transform_hlds__term_errors__V_201_201);
              }
#line 404 "term_errors.m"
              {
#line 404 "term_errors.m"
                MR_Word base;
#line 404 "term_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "term_errors.m"
                *transform_hlds__term_errors__Reason_10 = base;
#line 404 "term_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__CalleePPId_324));
#line 404 "term_errors.m"
              }
#line 388 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 1:
#line 406 "term_errors.m"
            {
#line 406 "term_errors.m"
              MR_Word transform_hlds__term_errors__CallerPPId_332 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 406 "term_errors.m"
              MR_Word transform_hlds__term_errors__Pieces1_334;
#line 406 "term_errors.m"
              MR_Word transform_hlds__term_errors___ClosurePPIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));

#line 413 "term_errors.m"
              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 414 "term_errors.m"
                {
#line 415 "term_errors.m"
                  {
#line 415 "term_errors.m"
                    transform_hlds__term_errors__Pieces1_334 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_332);
                  }
#line 414 "term_errors.m"
                }
#line 413 "term_errors.m"
              else
#line 409 "term_errors.m"
                {
#line 409 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_172_172;
#line 409 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPId_330 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

#line 410 "term_errors.m"
                  {
#line 410 "term_errors.m"
                    transform_hlds__term_errors__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 410 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 410 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_3));
#line 410 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 410 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_330));
#line 410 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_332));
#line 410 "term_errors.m"
                  }
#line 410 "term_errors.m"
                  {
#line 410 "term_errors.m"
                    mercury__require__expect_4_p_0(transform_hlds__term_errors__V_172_172, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "ho_info_termination_const: caller outside this SCC");
                  }
#line 412 "term_errors.m"
                  transform_hlds__term_errors__Pieces1_334 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97]);
#line 409 "term_errors.m"
                }
#line 421 "term_errors.m"
              {
#line 421 "term_errors.m"
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_334, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[40]));
              }
#line 422 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 2:
#line 424 "term_errors.m"
            {
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__TypeCtorInfo_361_361;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__TypeCtorInfo_362_362;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__ProcPPId_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__OutputSuppliers_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__HeadVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 3)));
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__PredId_25;
#line 424 "term_errors.m"
              MR_Integer transform_hlds__term_errors__ProcId_26;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__ProcInfo_28;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__Varset_29;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__OutputSuppliersNames_30;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__OutputSuppliersPieces_33;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__HeadVarsNames_34;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__HeadVarsPieces_37;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_162_162;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_163_163;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_164_164;
#line 424 "term_errors.m"
              MR_Word transform_hlds__term_errors__Pieces1_343;
#line 445 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_27_27;

#line 437 "term_errors.m"
              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "term_errors.m"
                {
#line 438 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPIdPieces_336;

#line 439 "term_errors.m"
                  {
#line 439 "term_errors.m"
                    transform_hlds__term_errors__PPIdPieces_336 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__ProcPPId_21);
                  }
#line 441 "term_errors.m"
                  {
#line 441 "term_errors.m"
                    transform_hlds__term_errors__Pieces1_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "term_errors.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[109])));
#line 441 "term_errors.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 1) = ((MR_Box) (transform_hlds__term_errors__PPIdPieces_336));
#line 441 "term_errors.m"
                  }
#line 438 "term_errors.m"
                }
#line 437 "term_errors.m"
              else
#line 426 "term_errors.m"
                {
#line 426 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPId_335 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

#line 427 "term_errors.m"
                  {
#line 427 "term_errors.m"
                    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_335, transform_hlds__term_errors__ProcPPId_21);
                  }
#line 427 "term_errors.m"
                  if (transform_hlds__term_errors__succeeded)
#line 428 "term_errors.m"
                    {
#line 428 "term_errors.m"
                      transform_hlds__term_errors__Pieces1_343 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[111]);
#line 428 "term_errors.m"
                    }
#line 427 "term_errors.m"
                  else
#line 433 "term_errors.m"
                    {
#line 433 "term_errors.m"
                      MR_Word transform_hlds__term_errors__PPIdPieces_24;

#line 432 "term_errors.m"
                      {
#line 432 "term_errors.m"
                        transform_hlds__term_errors__PPIdPieces_24 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__ProcPPId_21);
                      }
#line 435 "term_errors.m"
                      {
#line 435 "term_errors.m"
                        transform_hlds__term_errors__Pieces1_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "term_errors.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[109])));
#line 435 "term_errors.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 1) = ((MR_Box) (transform_hlds__term_errors__PPIdPieces_24));
#line 435 "term_errors.m"
                      }
#line 433 "term_errors.m"
                    }
#line 426 "term_errors.m"
                }
#line 444 "term_errors.m"
              transform_hlds__term_errors__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__ProcPPId_21, (MR_Integer) 0)));
#line 444 "term_errors.m"
              transform_hlds__term_errors__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__ProcPPId_21, (MR_Integer) 1)));
#line 445 "term_errors.m"
              {
#line 445 "term_errors.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__PredId_25, transform_hlds__term_errors__ProcId_26, &transform_hlds__term_errors__V_27_27, &transform_hlds__term_errors__ProcInfo_28);
              }
#line 446 "term_errors.m"
              {
#line 446 "term_errors.m"
                hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__term_errors__ProcInfo_28, &transform_hlds__term_errors__Varset_29);
              }
#line 447 "term_errors.m"
              {
#line 447 "term_errors.m"
                transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(transform_hlds__term_errors__OutputSuppliers_22, transform_hlds__term_errors__Varset_29, &transform_hlds__term_errors__OutputSuppliersNames_30);
              }
#line 4687 "transform_hlds.term_errors.c"
              transform_hlds__term_errors__TypeCtorInfo_361_361 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4689 "transform_hlds.term_errors.c"
              transform_hlds__term_errors__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 449 "term_errors.m"
              {
#line 449 "term_errors.m"
                mercury__list__map_3_p_0(transform_hlds__term_errors__TypeCtorInfo_361_361, transform_hlds__term_errors__TypeCtorInfo_362_362, (MR_Word) &transform_hlds__term_errors_scalar_common_2[1], transform_hlds__term_errors__OutputSuppliersNames_30, &transform_hlds__term_errors__OutputSuppliersPieces_33);
              }
#line 452 "term_errors.m"
              {
#line 452 "term_errors.m"
                transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(transform_hlds__term_errors__HeadVars_23, transform_hlds__term_errors__Varset_29, &transform_hlds__term_errors__HeadVarsNames_34);
              }
#line 453 "term_errors.m"
              {
#line 453 "term_errors.m"
                mercury__list__map_3_p_0(transform_hlds__term_errors__TypeCtorInfo_361_361, transform_hlds__term_errors__TypeCtorInfo_362_362, (MR_Word) &transform_hlds__term_errors_scalar_common_2[2], transform_hlds__term_errors__HeadVarsNames_34, &transform_hlds__term_errors__HeadVarsPieces_37);
              }
#line 456 "term_errors.m"
              {
#line 456 "term_errors.m"
                transform_hlds__term_errors__V_164_164 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, transform_hlds__term_errors__HeadVarsPieces_37, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[32]));
              }
#line 455 "term_errors.m"
              {
#line 455 "term_errors.m"
                transform_hlds__term_errors__V_163_163 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[113]), transform_hlds__term_errors__V_164_164);
              }
#line 455 "term_errors.m"
              {
#line 455 "term_errors.m"
                transform_hlds__term_errors__V_162_162 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, transform_hlds__term_errors__OutputSuppliersPieces_33, transform_hlds__term_errors__V_163_163);
              }
#line 455 "term_errors.m"
              {
#line 455 "term_errors.m"
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, transform_hlds__term_errors__Pieces1_343, transform_hlds__term_errors__V_162_162);
              }
#line 457 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 424 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 3:
#line 327 "term_errors.m"
            {
#line 327 "term_errors.m"
              MR_Word transform_hlds__term_errors__TypeCtorInfo_352_352;
#line 327 "term_errors.m"
              MR_Word transform_hlds__term_errors__CallerPPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 327 "term_errors.m"
              MR_Word transform_hlds__term_errors__CalleePPId_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
#line 327 "term_errors.m"
              MR_Word transform_hlds__term_errors__Pieces1_14;
#line 327 "term_errors.m"
              MR_Word transform_hlds__term_errors__CalleePieces_16;
#line 327 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_276_276;
#line 327 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_279_279;

#line 333 "term_errors.m"
              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "term_errors.m"
                {
#line 335 "term_errors.m"
                  {
#line 335 "term_errors.m"
                    transform_hlds__term_errors__Pieces1_14 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_11);
                  }
#line 334 "term_errors.m"
                }
#line 333 "term_errors.m"
              else
#line 329 "term_errors.m"
                {
#line 329 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));
#line 329 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_259_259;

#line 330 "term_errors.m"
                  {
#line 330 "term_errors.m"
                    transform_hlds__term_errors__V_259_259 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 330 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_259_259, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 330 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_259_259, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_5));
#line 330 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_259_259, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 330 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_259_259, 3) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_11));
#line 330 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_259_259, 4) = ((MR_Box) (transform_hlds__term_errors__PPId_13));
#line 330 "term_errors.m"
                  }
#line 330 "term_errors.m"
                  {
#line 330 "term_errors.m"
                    mercury__require__expect_4_p_0(transform_hlds__term_errors__V_259_259, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "inf_call: caller outside this SCC");
                  }
#line 332 "term_errors.m"
                  transform_hlds__term_errors__Pieces1_14 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97]);
#line 329 "term_errors.m"
                }
#line 339 "term_errors.m"
              {
#line 339 "term_errors.m"
                transform_hlds__term_errors__CalleePieces_16 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_12);
              }
#line 4801 "transform_hlds.term_errors.c"
              transform_hlds__term_errors__TypeCtorInfo_352_352 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 343 "term_errors.m"
              {
#line 343 "term_errors.m"
                transform_hlds__term_errors__V_279_279 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_352_352, transform_hlds__term_errors__CalleePieces_16, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[54]));
              }
#line 343 "term_errors.m"
              {
#line 343 "term_errors.m"
                transform_hlds__term_errors__V_276_276 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_352_352, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[100]), transform_hlds__term_errors__V_279_279);
              }
#line 343 "term_errors.m"
              {
#line 343 "term_errors.m"
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_352_352, transform_hlds__term_errors__Pieces1_14, transform_hlds__term_errors__V_276_276);
              }
#line 344 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 327 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 4:
#line 459 "term_errors.m"
            {
#line 459 "term_errors.m"
              MR_Word transform_hlds__term_errors__CallSites_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
#line 459 "term_errors.m"
              MR_Word transform_hlds__term_errors___StartPPId_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 460 "term_errors.m"
              MR_Word transform_hlds__term_errors__DirectCall_40;
#line 460 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_114_114;

#line 460 "term_errors.m"
              transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__CallSites_39)) == (MR_mktag((MR_Integer) 1)));
#line 460 "term_errors.m"
              if (transform_hlds__term_errors__succeeded)
#line 460 "term_errors.m"
                {
#line 460 "term_errors.m"
                  transform_hlds__term_errors__DirectCall_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__CallSites_39, (MR_Integer) 0)));
#line 460 "term_errors.m"
                  transform_hlds__term_errors__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__CallSites_39, (MR_Integer) 1)));
#line 460 "term_errors.m"
                  transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 460 "term_errors.m"
                }
#line 460 "term_errors.m"
              if (transform_hlds__term_errors__succeeded)
#line 462 "term_errors.m"
                {
#line 462 "term_errors.m"
                  MR_Word transform_hlds__term_errors__SitePieces_41;
#line 462 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_116_116;

#line 461 "term_errors.m"
                  {
#line 461 "term_errors.m"
                    transform_hlds__term_errors__SitePieces_41 = hlds__hlds_error_util__describe_one_call_site_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__DirectCall_40);
                  }
#line 463 "term_errors.m"
                  {
#line 463 "term_errors.m"
                    transform_hlds__term_errors__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "term_errors.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_116_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[102])));
#line 463 "term_errors.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_116_116, 1) = ((MR_Box) (transform_hlds__term_errors__SitePieces_41));
#line 463 "term_errors.m"
                  }
#line 463 "term_errors.m"
                  {
#line 463 "term_errors.m"
                    *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__V_116_116, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[16]));
                  }
#line 462 "term_errors.m"
                }
#line 460 "term_errors.m"
              else
#line 467 "term_errors.m"
                {
#line 467 "term_errors.m"
                  MR_Word transform_hlds__term_errors__TypeCtorInfo_364_364 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 467 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_132_132;
#line 467 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_133_133;

#line 468 "term_errors.m"
                  {
#line 468 "term_errors.m"
                    transform_hlds__term_errors__V_133_133 = hlds__hlds_error_util__describe_several_call_sites_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallSites_39);
                  }
#line 469 "term_errors.m"
                  {
#line 469 "term_errors.m"
                    transform_hlds__term_errors__V_132_132 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_364_364, transform_hlds__term_errors__V_133_133, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[20]));
                  }
#line 467 "term_errors.m"
                  {
#line 467 "term_errors.m"
                    *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_364_364, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[104]), transform_hlds__term_errors__V_132_132);
                  }
#line 467 "term_errors.m"
                }
#line 473 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 459 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 5:
#line 490 "term_errors.m"
            {
#line 493 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[56]);
#line 494 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 490 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 6:
#line 496 "term_errors.m"
            {
#line 496 "term_errors.m"
              MR_Word transform_hlds__term_errors__Pieces2_349;
#line 496 "term_errors.m"
              MR_Word transform_hlds__term_errors__PredId_350 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));

#line 505 "term_errors.m"
              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 506 "term_errors.m"
                {
#line 506 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_68_68;

#line 507 "term_errors.m"
                  {
#line 507 "term_errors.m"
                    transform_hlds__term_errors__V_68_68 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__PredId_350);
                  }
#line 508 "term_errors.m"
                  {
#line 508 "term_errors.m"
                    transform_hlds__term_errors__Pieces2_349 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__V_68_68, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[32]));
                  }
#line 506 "term_errors.m"
                }
#line 505 "term_errors.m"
              else
#line 500 "term_errors.m"
                {
#line 500 "term_errors.m"
                  MR_Word transform_hlds__term_errors__SCCPredId_43;
#line 500 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_76_76;
#line 500 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPId_345 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));
#line 501 "term_errors.m"
                  MR_Integer transform_hlds__term_errors__V_44_44;

#line 501 "term_errors.m"
                  transform_hlds__term_errors__SCCPredId_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__PPId_345, (MR_Integer) 0)));
#line 501 "term_errors.m"
                  transform_hlds__term_errors__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__PPId_345, (MR_Integer) 1)));
#line 502 "term_errors.m"
                  {
#line 502 "term_errors.m"
                    transform_hlds__term_errors__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 502 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[1]));
#line 502 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_2));
#line 502 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 502 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 3) = ((MR_Box) (transform_hlds__term_errors__SCCPredId_43));
#line 502 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 4) = ((MR_Box) (transform_hlds__term_errors__PredId_350));
#line 502 "term_errors.m"
                  }
#line 502 "term_errors.m"
                  {
#line 502 "term_errors.m"
                    mercury__require__expect_4_p_0(transform_hlds__term_errors__V_76_76, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "does not terminate pragma outside this SCC");
                  }
#line 504 "term_errors.m"
                  transform_hlds__term_errors__Pieces2_349 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[34]);
#line 500 "term_errors.m"
                }
#line 510 "term_errors.m"
              {
#line 510 "term_errors.m"
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[30]), transform_hlds__term_errors__Pieces2_349);
              }
#line 511 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
          case (MR_Integer) 7:
#line 517 "term_errors.m"
            {
#line 518 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[24]);
#line 520 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "term_errors.m"
            }
#line 313 "term_errors.m"
            break;
#line 313 "term_errors.m"
        }
#line 313 "term_errors.m"
        break;
#line 313 "term_errors.m"
    }
#line 313 "term_errors.m"
  }
#line 307 "term_errors.m"
}

#line 269 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__describe_term_error_8_p_0(
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_9,
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_10,
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__TermErrorContext_11,
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorNum_12,
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_0_28,
#line 269 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_29,
#line 269 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30,
#line 269 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_31)
#line 269 "term_errors.m"
{
#line 274 "term_errors.m"
  {
#line 274 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 274 "term_errors.m"
    MR_Word transform_hlds__term_errors__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__TermErrorContext_11, (MR_Integer) 0)));
#line 274 "term_errors.m"
    MR_Word transform_hlds__term_errors__ErrorKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__TermErrorContext_11, (MR_Integer) 1)));
#line 274 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces0_17;
#line 274 "term_errors.m"
    MR_Word transform_hlds__term_errors__Reason_18;
#line 274 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces_22;
#line 274 "term_errors.m"
    MR_Word transform_hlds__term_errors__ReasonMsg_23;
#line 274 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_36_36;
#line 274 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_39_39;
#line 274 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_40_40;

#line 276 "term_errors.m"
    {
#line 276 "term_errors.m"
      transform_hlds__term_errors__term_error_kind_description_5_p_0(transform_hlds__term_errors__ModuleInfo_9, transform_hlds__term_errors__Single_10, transform_hlds__term_errors__ErrorKind_16, &transform_hlds__term_errors__Pieces0_17, &transform_hlds__term_errors__Reason_18);
    }
#line 283 "term_errors.m"
    if ((transform_hlds__term_errors__ErrorNum_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "term_errors.m"
      transform_hlds__term_errors__Pieces_22 = transform_hlds__term_errors__Pieces0_17;
#line 283 "term_errors.m"
    else
#line 279 "term_errors.m"
      {
#line 279 "term_errors.m"
        MR_Integer transform_hlds__term_errors__N_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ErrorNum_12, (MR_Integer) 0)));
#line 279 "term_errors.m"
        MR_String transform_hlds__term_errors__Nstr_20;
#line 279 "term_errors.m"
        MR_String transform_hlds__term_errors__Preamble_21;
#line 279 "term_errors.m"
        MR_String transform_hlds__term_errors__V_33_33;
#line 279 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_35_35;

#line 280 "term_errors.m"
        {
#line 280 "term_errors.m"
          mercury__string__int_to_string_2_p_0(transform_hlds__term_errors__N_19, &transform_hlds__term_errors__Nstr_20);
        }
#line 281 "term_errors.m"
        {
#line 281 "term_errors.m"
          transform_hlds__term_errors__V_33_33 = mercury__string__f_43_43_2_f_0(transform_hlds__term_errors__Nstr_20, (MR_String) ":");
        }
#line 281 "term_errors.m"
        {
#line 281 "term_errors.m"
          transform_hlds__term_errors__Preamble_21 = mercury__string__f_43_43_2_f_0((MR_String) "Reason ", transform_hlds__term_errors__V_33_33);
        }
#line 282 "term_errors.m"
        {
#line 282 "term_errors.m"
          transform_hlds__term_errors__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 282 "term_errors.m"
          MR_hl_field(MR_mktag(2), transform_hlds__term_errors__V_35_35, 0) = ((MR_Box) (transform_hlds__term_errors__Preamble_21));
#line 282 "term_errors.m"
        }
#line 282 "term_errors.m"
        {
#line 282 "term_errors.m"
          transform_hlds__term_errors__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces_22, 0) = ((MR_Box) (transform_hlds__term_errors__V_35_35));
#line 282 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces_22, 1) = ((MR_Box) (transform_hlds__term_errors__Pieces0_17));
#line 282 "term_errors.m"
        }
#line 279 "term_errors.m"
      }
#line 287 "term_errors.m"
    {
#line 287 "term_errors.m"
      transform_hlds__term_errors__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_36_36, 0) = ((MR_Box) (transform_hlds__term_errors__Context_15));
#line 287 "term_errors.m"
    }
#line 287 "term_errors.m"
    {
#line 287 "term_errors.m"
      transform_hlds__term_errors__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 287 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_40_40, 0) = ((MR_Box) (transform_hlds__term_errors__Pieces_22));
#line 287 "term_errors.m"
    }
#line 287 "term_errors.m"
    {
#line 287 "term_errors.m"
      transform_hlds__term_errors__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_39_39, 0) = ((MR_Box) (transform_hlds__term_errors__V_40_40));
#line 287 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "term_errors.m"
    }
#line 287 "term_errors.m"
    {
#line 287 "term_errors.m"
      transform_hlds__term_errors__ReasonMsg_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 287 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 0) = ((MR_Box) (transform_hlds__term_errors__V_36_36));
#line 287 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 1) = ((MR_Box) ((MR_Integer) 0));
#line 287 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 2) = ((MR_Box) ((MR_Integer) 0));
#line 287 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 3) = ((MR_Box) (transform_hlds__term_errors__V_39_39));
#line 287 "term_errors.m"
    }
#line 288 "term_errors.m"
    {
#line 288 "term_errors.m"
      *transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_29 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_0_28, ((MR_Box) (transform_hlds__term_errors__ReasonMsg_23)));
    }
#line 303 "term_errors.m"
    if ((transform_hlds__term_errors__Reason_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "term_errors.m"
      *transform_hlds__term_errors__STATE_VARIABLE_Specs_31 = transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30;
#line 303 "term_errors.m"
    else
#line 290 "term_errors.m"
      {
#line 290 "term_errors.m"
        MR_Word transform_hlds__term_errors__InfArgSizePPId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Reason_18, (MR_Integer) 0)));
#line 290 "term_errors.m"
        MR_Word transform_hlds__term_errors__ArgSize_25;
#line 292 "term_errors.m"
        MR_Word transform_hlds__term_errors__ArgSizeErrors_26;
#line 292 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_43_43;

#line 291 "term_errors.m"
        {
#line 291 "term_errors.m"
          transform_hlds__term_util__lookup_proc_arg_size_info_3_p_0(transform_hlds__term_errors__ModuleInfo_9, transform_hlds__term_errors__InfArgSizePPId_24, &transform_hlds__term_errors__ArgSize_25);
        }
#line 292 "term_errors.m"
        transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__ArgSize_25)) == (MR_mktag((MR_Integer) 1)));
#line 292 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 292 "term_errors.m"
          {
#line 292 "term_errors.m"
            transform_hlds__term_errors__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ArgSize_25, (MR_Integer) 0)));
#line 292 "term_errors.m"
            transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 292 "term_errors.m"
            if (transform_hlds__term_errors__succeeded)
#line 292 "term_errors.m"
              transform_hlds__term_errors__ArgSizeErrors_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_43_43, (MR_Integer) 0)));
#line 292 "term_errors.m"
          }
#line 292 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 296 "term_errors.m"
          {
#line 296 "term_errors.m"
            MR_Word transform_hlds__term_errors__ArgSizePPIdSCC_27;

#line 296 "term_errors.m"
            {
#line 296 "term_errors.m"
              transform_hlds__term_errors__ArgSizePPIdSCC_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "term_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ArgSizePPIdSCC_27, 0) = ((MR_Box) (transform_hlds__term_errors__InfArgSizePPId_24));
#line 296 "term_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ArgSizePPIdSCC_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "term_errors.m"
            }
#line 297 "term_errors.m"
            {
#line 297 "term_errors.m"
              transform_hlds__term_errors__report_arg_size_errors_5_p_0(transform_hlds__term_errors__ModuleInfo_9, transform_hlds__term_errors__ArgSizePPIdSCC_27, transform_hlds__term_errors__ArgSizeErrors_26, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30, transform_hlds__term_errors__STATE_VARIABLE_Specs_31);
            }
#line 296 "term_errors.m"
          }
#line 292 "term_errors.m"
        else
#line 300 "term_errors.m"
          {
#line 300 "term_errors.m"
            {
#line 300 "term_errors.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.describe_term_error\'/8", (MR_String) "inf arg size procedure does not have inf arg size");
#line 300 "term_errors.m"
              return;
            }
#line 300 "term_errors.m"
          }
#line 290 "term_errors.m"
      }
#line 274 "term_errors.m"
  }
#line 269 "term_errors.m"
}

#line 257 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__describe_term_errors_8_p_0(
#line 257 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_1,
#line 257 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_2,
#line 257 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__3_3,
#line 257 "term_errors.m"
  MR_Integer transform_hlds__term_errors__ErrNum0_4,
#line 257 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5,
#line 257 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Msgs_6,
#line 257 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7,
#line 257 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_8)
#line 257 "term_errors.m"
{
#line 261 "term_errors.m"
  while (MR_TRUE)
#line 261 "term_errors.m"
    {
#line 261 "term_errors.m"
      /* tailcall optimized into a loop */
#line 261 "term_errors.m"
      {
#line 261 "term_errors.m"
        MR_bool transform_hlds__term_errors__succeeded;

#line 261 "term_errors.m"
        if ((transform_hlds__term_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "term_errors.m"
          {
#line 261 "term_errors.m"
            *transform_hlds__term_errors__STATE_VARIABLE_Specs_8 = transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7;
#line 261 "term_errors.m"
            *transform_hlds__term_errors__STATE_VARIABLE_Msgs_6 = transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5;
#line 261 "term_errors.m"
          }
#line 261 "term_errors.m"
        else
#line 263 "term_errors.m"
          {
#line 263 "term_errors.m"
            MR_Word transform_hlds__term_errors__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 263 "term_errors.m"
            MR_Word transform_hlds__term_errors__Errors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 263 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_29_29;
#line 263 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_30;
#line 263 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_31_31;
#line 263 "term_errors.m"
            MR_Integer transform_hlds__term_errors__V_32_32;

#line 264 "term_errors.m"
            {
#line 264 "term_errors.m"
              transform_hlds__term_errors__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "term_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_29_29, 0) = ((MR_Box) (transform_hlds__term_errors__ErrNum0_4));
#line 264 "term_errors.m"
            }
#line 264 "term_errors.m"
            {
#line 264 "term_errors.m"
              transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_1, transform_hlds__term_errors__Single_2, transform_hlds__term_errors__Error_20, transform_hlds__term_errors__V_29_29, transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5, &transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_30, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7, &transform_hlds__term_errors__STATE_VARIABLE_Specs_31_31);
            }
#line 266 "term_errors.m"
            transform_hlds__term_errors__V_32_32 = (transform_hlds__term_errors__ErrNum0_4 + (MR_Integer) 1);
#line 266 "term_errors.m"
            /* direct tailcall eliminated */
#line 266 "term_errors.m"
            {
#line 266 "term_errors.m"
              MR_Word transform_hlds__term_errors__HeadVar__3__tmp_copy_3 = transform_hlds__term_errors__Errors_21;
#line 266 "term_errors.m"
              MR_Integer transform_hlds__term_errors__ErrNum0__tmp_copy_4 = transform_hlds__term_errors__V_32_32;
#line 266 "term_errors.m"
              MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_0__tmp_copy_5 = transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_30;
#line 266 "term_errors.m"
              MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0__tmp_copy_7 = transform_hlds__term_errors__STATE_VARIABLE_Specs_31_31;

#line 266 "term_errors.m"
              transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7 = transform_hlds__term_errors__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 266 "term_errors.m"
              transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5 = transform_hlds__term_errors__STATE_VARIABLE_Msgs_0__tmp_copy_5;
#line 266 "term_errors.m"
              transform_hlds__term_errors__ErrNum0_4 = transform_hlds__term_errors__ErrNum0__tmp_copy_4;
#line 266 "term_errors.m"
              transform_hlds__term_errors__HeadVar__3_3 = transform_hlds__term_errors__HeadVar__3__tmp_copy_3;
#line 266 "term_errors.m"
            }
#line 266 "term_errors.m"
            continue;
#line 263 "term_errors.m"
          }
#line 261 "term_errors.m"
      }
#line 261 "term_errors.m"
      break;
#line 261 "term_errors.m"
    }
#line 257 "term_errors.m"
}

#line 219 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__report_arg_size_errors_5_p_0(
#line 219 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
#line 219 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCC_7,
#line 219 "term_errors.m"
  MR_Word transform_hlds__term_errors__Errors_8,
#line 219 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25,
#line 219 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_26)
#line 219 "term_errors.m"
{
#line 222 "term_errors.m"
  {
#line 222 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__Context_10;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces1_12;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__Single_13;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces_17;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__ReasonMsgsCord_18;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__ReasonMsgs_22;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__Msgs_23;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__Spec_24;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_63_63;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_64_64;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_65_65;
#line 224 "term_errors.m"
    MR_Word transform_hlds__term_errors__PPId_11;
#line 224 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_27_27;

#line 223 "term_errors.m"
    {
#line 223 "term_errors.m"
      transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__SCC_7, &transform_hlds__term_errors__Context_10);
    }
#line 224 "term_errors.m"
    transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__SCC_7)) == (MR_mktag((MR_Integer) 1)));
#line 224 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 224 "term_errors.m"
      {
#line 224 "term_errors.m"
        transform_hlds__term_errors__PPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_7, (MR_Integer) 0)));
#line 224 "term_errors.m"
        transform_hlds__term_errors__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_7, (MR_Integer) 1)));
#line 224 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "term_errors.m"
      }
#line 224 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 226 "term_errors.m"
      {
#line 226 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_32_32;

#line 226 "term_errors.m"
        {
#line 226 "term_errors.m"
          transform_hlds__term_errors__V_32_32 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__PPId_11);
        }
#line 225 "term_errors.m"
        {
#line 225 "term_errors.m"
          transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[88]), transform_hlds__term_errors__V_32_32);
        }
#line 227 "term_errors.m"
        {
#line 227 "term_errors.m"
          transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 227 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_13, 0) = ((MR_Box) (transform_hlds__term_errors__PPId_11));
#line 227 "term_errors.m"
        }
#line 226 "term_errors.m"
      }
#line 224 "term_errors.m"
    else
#line 232 "term_errors.m"
      {
#line 232 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_41_41;

#line 231 "term_errors.m"
        {
#line 231 "term_errors.m"
          transform_hlds__term_errors__V_41_41 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__SCC_7);
        }
#line 230 "term_errors.m"
        {
#line 230 "term_errors.m"
          transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[11]), transform_hlds__term_errors__V_41_41);
        }
#line 233 "term_errors.m"
        transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 232 "term_errors.m"
      }
#line 239 "term_errors.m"
    if ((transform_hlds__term_errors__Errors_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "term_errors.m"
      {
#line 238 "term_errors.m"
        {
#line 238 "term_errors.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.report_arg_size_errors\'/5", (MR_String) "empty list of errors");
#line 238 "term_errors.m"
          return;
        }
#line 237 "term_errors.m"
      }
#line 239 "term_errors.m"
    else
#line 239 "term_errors.m"
      {
#line 239 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
#line 239 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));

#line 239 "term_errors.m"
        if ((transform_hlds__term_errors__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 240 "term_errors.m"
          {
#line 240 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_58_58;

#line 242 "term_errors.m"
            {
#line 242 "term_errors.m"
              transform_hlds__term_errors__Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[92]));
            }
#line 244 "term_errors.m"
            {
#line 244 "term_errors.m"
              transform_hlds__term_errors__V_58_58 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
            }
#line 243 "term_errors.m"
            {
#line 243 "term_errors.m"
              transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__V_79_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_errors__V_58_58, &transform_hlds__term_errors__ReasonMsgsCord_18, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25, &transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59);
            }
#line 240 "term_errors.m"
          }
#line 239 "term_errors.m"
        else
#line 246 "term_errors.m"
          {
#line 246 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_50_50;
#line 246 "term_errors.m"
            MR_Word transform_hlds__term_errors__Error_91;
#line 246 "term_errors.m"
            MR_Word transform_hlds__term_errors__Errors_92;
#line 246 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_101;
#line 246 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_31_102;

#line 248 "term_errors.m"
            {
#line 248 "term_errors.m"
              transform_hlds__term_errors__Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[95]));
            }
#line 250 "term_errors.m"
            {
#line 250 "term_errors.m"
              transform_hlds__term_errors__V_50_50 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
            }
#line 262 "term_errors.m"
            transform_hlds__term_errors__Error_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));
#line 262 "term_errors.m"
            transform_hlds__term_errors__Errors_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
#line 264 "term_errors.m"
            {
#line 264 "term_errors.m"
              transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Error_91, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_3[0]), transform_hlds__term_errors__V_50_50, &transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_101, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25, &transform_hlds__term_errors__STATE_VARIABLE_Specs_31_102);
            }
#line 266 "term_errors.m"
            {
#line 266 "term_errors.m"
              transform_hlds__term_errors__describe_term_errors_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Errors_92, ((MR_Integer) 1 + (MR_Integer) 1), transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_101, &transform_hlds__term_errors__ReasonMsgsCord_18, transform_hlds__term_errors__STATE_VARIABLE_Specs_31_102, &transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59);
            }
#line 246 "term_errors.m"
          }
#line 239 "term_errors.m"
      }
#line 252 "term_errors.m"
    {
#line 252 "term_errors.m"
      transform_hlds__term_errors__ReasonMsgs_22 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_errors__ReasonMsgsCord_18);
    }
#line 253 "term_errors.m"
    {
#line 253 "term_errors.m"
      transform_hlds__term_errors__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 253 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_65_65, 0) = ((MR_Box) (transform_hlds__term_errors__Pieces_17));
#line 253 "term_errors.m"
    }
#line 253 "term_errors.m"
    {
#line 253 "term_errors.m"
      transform_hlds__term_errors__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_64_64, 0) = ((MR_Box) (transform_hlds__term_errors__V_65_65));
#line 253 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "term_errors.m"
    }
#line 253 "term_errors.m"
    {
#line 253 "term_errors.m"
      transform_hlds__term_errors__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_63_63, 0) = ((MR_Box) (transform_hlds__term_errors__Context_10));
#line 253 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_63_63, 1) = ((MR_Box) (transform_hlds__term_errors__V_64_64));
#line 253 "term_errors.m"
    }
#line 253 "term_errors.m"
    {
#line 253 "term_errors.m"
      transform_hlds__term_errors__Msgs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_23, 0) = ((MR_Box) (transform_hlds__term_errors__V_63_63));
#line 253 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_23, 1) = ((MR_Box) (transform_hlds__term_errors__ReasonMsgs_22));
#line 253 "term_errors.m"
    }
#line 254 "term_errors.m"
    {
#line 254 "term_errors.m"
      transform_hlds__term_errors__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 254 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 254 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 254 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_24, 2) = ((MR_Box) (transform_hlds__term_errors__Msgs_23));
#line 254 "term_errors.m"
    }
#line 255 "term_errors.m"
    {
#line 255 "term_errors.m"
      MR_Word base;
#line 255 "term_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "term_errors.m"
      *transform_hlds__term_errors__STATE_VARIABLE_Specs_26 = base;
#line 255 "term_errors.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__Spec_24));
#line 255 "term_errors.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59));
#line 255 "term_errors.m"
    }
#line 222 "term_errors.m"
  }
#line 219 "term_errors.m"
}

#line 160 "term_errors.m"
MR_Word MR_CALL 
transform_hlds__term_errors__term_error_kind_is_fatal_error_1_f_0(
#line 160 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorKind_3)
#line 160 "term_errors.m"
{
#line 601 "term_errors.m"
  {
#line 601 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 601 "term_errors.m"
    MR_Word transform_hlds__term_errors__IsFatal_4;

#line 601 "term_errors.m"
#line 601 "term_errors.m"
    switch (MR_tag((MR_Word) transform_hlds__term_errors__ErrorKind_3)) {
#line 601 "term_errors.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 601 "term_errors.m"
      case (MR_Integer) 0:
#line 601 "term_errors.m"
#line 601 "term_errors.m"
        switch (MR_unmkbody(transform_hlds__term_errors__ErrorKind_3)) {
#line 601 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 601 "term_errors.m"
          case (MR_Integer) 0:
#line 601 "term_errors.m"
          case (MR_Integer) 4:
#line 601 "term_errors.m"
          case (MR_Integer) 5:
#line 601 "term_errors.m"
          case (MR_Integer) 6:
#line 601 "term_errors.m"
          case (MR_Integer) 7:
#line 619 "term_errors.m"
            transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 0;
#line 601 "term_errors.m"
            break;
#line 601 "term_errors.m"
          case (MR_Integer) 1:
#line 601 "term_errors.m"
          case (MR_Integer) 2:
#line 601 "term_errors.m"
          case (MR_Integer) 3:
#line 602 "term_errors.m"
            transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 1;
#line 601 "term_errors.m"
            break;
#line 601 "term_errors.m"
        }
#line 601 "term_errors.m"
        break;
#line 601 "term_errors.m"
      case (MR_Integer) 1:
#line 619 "term_errors.m"
        transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 0;
#line 601 "term_errors.m"
        break;
#line 601 "term_errors.m"
      case (MR_Integer) 2:
#line 602 "term_errors.m"
        transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 1;
#line 601 "term_errors.m"
        break;
#line 601 "term_errors.m"
      case (MR_Integer) 3:
#line 619 "term_errors.m"
        transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 0;
#line 601 "term_errors.m"
        break;
#line 601 "term_errors.m"
    }
#line 601 "term_errors.m"
    return transform_hlds__term_errors__IsFatal_4;
#line 601 "term_errors.m"
  }
#line 160 "term_errors.m"
}

#line 156 "term_errors.m"
MR_Word MR_CALL 
transform_hlds__term_errors__term_error_kind_is_direct_error_1_f_0(
#line 156 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorKind_3)
#line 156 "term_errors.m"
{
#line 577 "term_errors.m"
  {
#line 577 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 577 "term_errors.m"
    MR_Word transform_hlds__term_errors__IsDirect_4;

#line 577 "term_errors.m"
#line 577 "term_errors.m"
    switch (MR_tag((MR_Word) transform_hlds__term_errors__ErrorKind_3)) {
#line 577 "term_errors.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 577 "term_errors.m"
      case (MR_Integer) 0:
#line 577 "term_errors.m"
#line 577 "term_errors.m"
        switch (MR_unmkbody(transform_hlds__term_errors__ErrorKind_3)) {
#line 577 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 577 "term_errors.m"
          case (MR_Integer) 0:
#line 577 "term_errors.m"
          case (MR_Integer) 1:
#line 577 "term_errors.m"
          case (MR_Integer) 2:
#line 577 "term_errors.m"
          case (MR_Integer) 3:
#line 578 "term_errors.m"
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 0;
#line 577 "term_errors.m"
            break;
#line 577 "term_errors.m"
          case (MR_Integer) 4:
#line 577 "term_errors.m"
          case (MR_Integer) 5:
#line 577 "term_errors.m"
          case (MR_Integer) 6:
#line 577 "term_errors.m"
          case (MR_Integer) 7:
#line 592 "term_errors.m"
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 1;
#line 577 "term_errors.m"
            break;
#line 577 "term_errors.m"
        }
#line 577 "term_errors.m"
        break;
#line 577 "term_errors.m"
      case (MR_Integer) 1:
#line 577 "term_errors.m"
      case (MR_Integer) 2:
#line 578 "term_errors.m"
        transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 0;
#line 577 "term_errors.m"
        break;
#line 577 "term_errors.m"
      case (MR_Integer) 3:
#line 577 "term_errors.m"
#line 577 "term_errors.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_3, (MR_Integer) 0)))) {
#line 577 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 577 "term_errors.m"
          case (MR_Integer) 0:
#line 577 "term_errors.m"
          case (MR_Integer) 1:
#line 577 "term_errors.m"
          case (MR_Integer) 2:
#line 577 "term_errors.m"
          case (MR_Integer) 3:
#line 577 "term_errors.m"
          case (MR_Integer) 4:
#line 577 "term_errors.m"
          case (MR_Integer) 5:
#line 577 "term_errors.m"
          case (MR_Integer) 7:
#line 592 "term_errors.m"
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 1;
#line 577 "term_errors.m"
            break;
#line 577 "term_errors.m"
          case (MR_Integer) 6:
#line 578 "term_errors.m"
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 0;
#line 577 "term_errors.m"
            break;
#line 577 "term_errors.m"
        }
#line 577 "term_errors.m"
        break;
#line 577 "term_errors.m"
    }
#line 577 "term_errors.m"
    return transform_hlds__term_errors__IsDirect_4;
#line 577 "term_errors.m"
  }
#line 156 "term_errors.m"
}

#line 146 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors__report_term_errors_5_p_0(
#line 146 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
#line 146 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCC_7,
#line 146 "term_errors.m"
  MR_Word transform_hlds__term_errors__Errors_8,
#line 146 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24,
#line 146 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_25)
#line 146 "term_errors.m"
{
#line 181 "term_errors.m"
  {
#line 181 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__Context_10;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces1_12;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__Single_13;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces_15;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__ReasonMsgsCord_16;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__ReasonMsgs_21;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__Msgs_22;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__Spec_23;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_59_59;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_60_60;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_61_61;
#line 183 "term_errors.m"
    MR_Word transform_hlds__term_errors__PPId_11;
#line 183 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_26_26;

#line 182 "term_errors.m"
    {
#line 182 "term_errors.m"
      transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__SCC_7, &transform_hlds__term_errors__Context_10);
    }
#line 183 "term_errors.m"
    transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__SCC_7)) == (MR_mktag((MR_Integer) 1)));
#line 183 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 183 "term_errors.m"
      {
#line 183 "term_errors.m"
        transform_hlds__term_errors__PPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_7, (MR_Integer) 0)));
#line 183 "term_errors.m"
        transform_hlds__term_errors__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_7, (MR_Integer) 1)));
#line 183 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "term_errors.m"
      }
#line 183 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 185 "term_errors.m"
      {
#line 185 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_31_31;

#line 185 "term_errors.m"
        {
#line 185 "term_errors.m"
          transform_hlds__term_errors__V_31_31 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__PPId_11);
        }
#line 184 "term_errors.m"
        {
#line 184 "term_errors.m"
          transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[80]), transform_hlds__term_errors__V_31_31);
        }
#line 186 "term_errors.m"
        {
#line 186 "term_errors.m"
          transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 186 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_13, 0) = ((MR_Box) (transform_hlds__term_errors__PPId_11));
#line 186 "term_errors.m"
        }
#line 185 "term_errors.m"
      }
#line 183 "term_errors.m"
    else
#line 191 "term_errors.m"
      {
#line 191 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_40_40;

#line 190 "term_errors.m"
        {
#line 190 "term_errors.m"
          transform_hlds__term_errors__V_40_40 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__SCC_7);
        }
#line 189 "term_errors.m"
        {
#line 189 "term_errors.m"
          transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[7]), transform_hlds__term_errors__V_40_40);
        }
#line 192 "term_errors.m"
        transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "term_errors.m"
      }
#line 201 "term_errors.m"
    if ((transform_hlds__term_errors__Errors_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "term_errors.m"
      {
#line 199 "term_errors.m"
        {
#line 199 "term_errors.m"
          transform_hlds__term_errors__Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[82]));
        }
#line 200 "term_errors.m"
        {
#line 200 "term_errors.m"
          transform_hlds__term_errors__ReasonMsgsCord_16 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
        }
#line 195 "term_errors.m"
        transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55 = transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24;
#line 195 "term_errors.m"
      }
#line 201 "term_errors.m"
    else
#line 201 "term_errors.m"
      {
#line 201 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
#line 201 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));

#line 201 "term_errors.m"
        if ((transform_hlds__term_errors__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "term_errors.m"
          {
#line 202 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_54_54;

#line 204 "term_errors.m"
            {
#line 204 "term_errors.m"
              transform_hlds__term_errors__Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[84]));
            }
#line 206 "term_errors.m"
            {
#line 206 "term_errors.m"
              transform_hlds__term_errors__V_54_54 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
            }
#line 205 "term_errors.m"
            {
#line 205 "term_errors.m"
              transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__V_78_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_errors__V_54_54, &transform_hlds__term_errors__ReasonMsgsCord_16, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24, &transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55);
            }
#line 202 "term_errors.m"
          }
#line 201 "term_errors.m"
        else
#line 208 "term_errors.m"
          {
#line 208 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_47_47;
#line 208 "term_errors.m"
            MR_Word transform_hlds__term_errors__Error_90;
#line 208 "term_errors.m"
            MR_Word transform_hlds__term_errors__Errors_91;
#line 208 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_100;
#line 208 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_31_101;

#line 210 "term_errors.m"
            {
#line 210 "term_errors.m"
              transform_hlds__term_errors__Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[86]));
            }
#line 212 "term_errors.m"
            {
#line 212 "term_errors.m"
              transform_hlds__term_errors__V_47_47 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
            }
#line 262 "term_errors.m"
            transform_hlds__term_errors__Error_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));
#line 262 "term_errors.m"
            transform_hlds__term_errors__Errors_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
#line 264 "term_errors.m"
            {
#line 264 "term_errors.m"
              transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Error_90, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_3[0]), transform_hlds__term_errors__V_47_47, &transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_100, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24, &transform_hlds__term_errors__STATE_VARIABLE_Specs_31_101);
            }
#line 266 "term_errors.m"
            {
#line 266 "term_errors.m"
              transform_hlds__term_errors__describe_term_errors_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Errors_91, ((MR_Integer) 1 + (MR_Integer) 1), transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_100, &transform_hlds__term_errors__ReasonMsgsCord_16, transform_hlds__term_errors__STATE_VARIABLE_Specs_31_101, &transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55);
            }
#line 208 "term_errors.m"
          }
#line 201 "term_errors.m"
      }
#line 214 "term_errors.m"
    {
#line 214 "term_errors.m"
      transform_hlds__term_errors__ReasonMsgs_21 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_errors__ReasonMsgsCord_16);
    }
#line 215 "term_errors.m"
    {
#line 215 "term_errors.m"
      transform_hlds__term_errors__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 215 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_61_61, 0) = ((MR_Box) (transform_hlds__term_errors__Pieces_15));
#line 215 "term_errors.m"
    }
#line 215 "term_errors.m"
    {
#line 215 "term_errors.m"
      transform_hlds__term_errors__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_60_60, 0) = ((MR_Box) (transform_hlds__term_errors__V_61_61));
#line 215 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "term_errors.m"
    }
#line 215 "term_errors.m"
    {
#line 215 "term_errors.m"
      transform_hlds__term_errors__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 215 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_59_59, 0) = ((MR_Box) (transform_hlds__term_errors__Context_10));
#line 215 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_59_59, 1) = ((MR_Box) (transform_hlds__term_errors__V_60_60));
#line 215 "term_errors.m"
    }
#line 215 "term_errors.m"
    {
#line 215 "term_errors.m"
      transform_hlds__term_errors__Msgs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_22, 0) = ((MR_Box) (transform_hlds__term_errors__V_59_59));
#line 215 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_22, 1) = ((MR_Box) (transform_hlds__term_errors__ReasonMsgs_21));
#line 215 "term_errors.m"
    }
#line 216 "term_errors.m"
    {
#line 216 "term_errors.m"
      transform_hlds__term_errors__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 216 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 216 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 216 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_23, 2) = ((MR_Box) (transform_hlds__term_errors__Msgs_22));
#line 216 "term_errors.m"
    }
#line 217 "term_errors.m"
    {
#line 217 "term_errors.m"
      MR_Word base;
#line 217 "term_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "term_errors.m"
      *transform_hlds__term_errors__STATE_VARIABLE_Specs_25 = base;
#line 217 "term_errors.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__Spec_23));
#line 217 "term_errors.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55));
#line 217 "term_errors.m"
    }
#line 181 "term_errors.m"
  }
#line 146 "term_errors.m"
}

void mercury__transform_hlds__term_errors__init(void)
{
}

void mercury__transform_hlds__term_errors__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0);
	MR_register_type_ctor_info(&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_kind_0);
}

void mercury__transform_hlds__term_errors__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_errors. */
