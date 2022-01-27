/*
** Automatically generated from `term_errors.m'
** by the Mercury compiler,
** version 2015-10-27
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




#line 140 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0[2];

#line 143 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0;

#line 146 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0[1];

#line 149 "transform_hlds.term_errors.c"
static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0[1];

#line 152 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0[1];

#line 155 "transform_hlds.term_errors.c"
static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0[1];

#line 158 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_0;

#line 161 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_1;

#line 164 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2[2];

#line 167 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2;

#line 170 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3[2];

#line 173 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3;

#line 176 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_4;

#line 179 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_5;

#line 182 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6[2];

#line 185 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_6;

#line 188 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 191 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7[2];

#line 194 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_7;

#line 197 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 200 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 203 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8[3];

#line 206 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_8;

#line 209 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9[2];

#line 212 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_9;

#line 215 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 218 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0;

#line 221 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10[2];

#line 224 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_10;

#line 227 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_11;

#line 230 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_12;

#line 233 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_13;

#line 236 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14[1];

#line 239 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_14;

#line 242 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15[1];

#line 245 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_15;

#line 248 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_16;

#line 251 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17[1];

#line 254 "transform_hlds.term_errors.c"
static const MR_DuFunctorDesc transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_17;

#line 257 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_0[8];

#line 260 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1[1];

#line 263 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2[1];

#line 266 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_3[8];

#line 269 "transform_hlds.term_errors.c"
static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_kind_0[4];

#line 272 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_kind_0[18];

#line 275 "transform_hlds.term_errors.c"
static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_kind_0[18];

#line 278 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0_10001(
#line 281 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 283 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2);

#line 286 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0_10001(
#line 289 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 291 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 293 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3);

#line 296 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0_10001(
#line 299 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 301 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2);

#line 304 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0_10001(
#line 307 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 309 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 311 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3);

#line 451 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__451__1_2_p_0(
#line 451 "term_errors.m"
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_160,
#line 451 "term_errors.m"
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_161);

#line 447 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__447__1_2_p_0(
#line 447 "term_errors.m"
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_154,
#line 447 "term_errors.m"
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_155);

#line 389 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__389__1_2_p_0(
#line 389 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_321,
#line 389 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_323);

#line 328 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__328__1_2_p_0(
#line 328 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_11,
#line 328 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_13);

#line 371 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__371__1_2_p_0(
#line 371 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_312,
#line 371 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_314);

#line 408 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__408__1_2_p_0(
#line 408 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_330,
#line 408 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_332);

#line 500 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__500__1_2_p_0(
#line 500 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCCPredId_43,
#line 500 "term_errors.m"
  MR_Word transform_hlds__term_errors__PredId_350);

#line 347 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__347__1_2_p_0(
#line 347 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_304,
#line 347 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_306);

#line 530 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(
#line 530 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 530 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_2,
#line 530 "term_errors.m"
  MR_Word transform_hlds__term_errors__First_3,
#line 530 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__4_4);

#line 523 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
#line 523 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVars_4,
#line 523 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_5,
#line 523 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_6);

#line 451 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_8(
#line 451 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 451 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 451 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2);

#line 447 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_7(
#line 447 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 447 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 447 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2);

#line 389 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_6(
#line 389 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 328 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_5(
#line 328 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 371 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_4(
#line 371 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 408 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_3(
#line 408 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 500 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_2(
#line 500 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 347 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_1(
#line 347 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg);

#line 305 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0(
#line 305 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
#line 305 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_7,
#line 305 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorKind_8,
#line 305 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_9,
#line 305 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Reason_10);

#line 267 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__describe_term_error_8_p_0(
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_9,
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_10,
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__TermErrorContext_11,
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorNum_12,
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_0_28,
#line 267 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_29,
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30,
#line 267 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_31);

#line 255 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__describe_term_errors_8_p_0(
#line 255 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_1,
#line 255 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_2,
#line 255 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__3_3,
#line 255 "term_errors.m"
  MR_Integer transform_hlds__term_errors__ErrNum0_4,
#line 255 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5,
#line 255 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Msgs_6,
#line 255 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7,
#line 255 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_8);

#line 217 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__report_arg_size_errors_5_p_0(
#line 217 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
#line 217 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCC_7,
#line 217 "term_errors.m"
  MR_Word transform_hlds__term_errors__Errors_8,
#line 217 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25,
#line 217 "term_errors.m"
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



#line 1178 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_kind_0
};

#line 1184 "transform_hlds.term_errors.c"
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

#line 1199 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0
};

#line 1204 "transform_hlds.term_errors.c"
static const MR_DuPtagLayout transform_hlds__term_errors__transform_hlds__term_errors__du_ptag_ordered_term_error_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_0_0
  }
};

#line 1213 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_name_ordered_term_error_0[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_0_0
};

#line 1218 "transform_hlds.term_errors.c"
static const MR_Integer transform_hlds__term_errors__transform_hlds__term_errors__functor_number_map_term_error_0[1] = {
  (MR_Integer) 0
};

#line 1223 "transform_hlds.term_errors.c"
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

#line 1240 "transform_hlds.term_errors.c"
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

#line 1255 "transform_hlds.term_errors.c"
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

#line 1270 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_2[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1276 "transform_hlds.term_errors.c"
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

#line 1291 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_3[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1297 "transform_hlds.term_errors.c"
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

#line 1312 "transform_hlds.term_errors.c"
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

#line 1327 "transform_hlds.term_errors.c"
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

#line 1342 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_6[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1348 "transform_hlds.term_errors.c"
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

#line 1363 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1371 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_7[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1377 "transform_hlds.term_errors.c"
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

#line 1392 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1400 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1408 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_8[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1415 "transform_hlds.term_errors.c"
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

#line 1430 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_9[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1436 "transform_hlds.term_errors.c"
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

#line 1451 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1460 "transform_hlds.term_errors.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
  }
};

#line 1468 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_10[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_errors__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0term__type_ctor_info_context_0
};

#line 1474 "transform_hlds.term_errors.c"
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

#line 1489 "transform_hlds.term_errors.c"
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

#line 1504 "transform_hlds.term_errors.c"
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

#line 1519 "transform_hlds.term_errors.c"
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

#line 1534 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_14[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1539 "transform_hlds.term_errors.c"
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

#line 1554 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_15[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1559 "transform_hlds.term_errors.c"
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

#line 1574 "transform_hlds.term_errors.c"
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

#line 1589 "transform_hlds.term_errors.c"
static const MR_PseudoTypeInfo transform_hlds__term_errors__transform_hlds__term_errors__field_types_term_error_kind_0_17[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1594 "transform_hlds.term_errors.c"
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

#line 1609 "transform_hlds.term_errors.c"
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

#line 1621 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_1[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_2
};

#line 1626 "transform_hlds.term_errors.c"
static const MR_DuFunctorDescPtr transform_hlds__term_errors__transform_hlds__term_errors__du_stag_ordered_term_error_kind_0_2[1] = {
  &transform_hlds__term_errors__transform_hlds__term_errors__du_functor_desc_term_error_kind_0_3
};

#line 1631 "transform_hlds.term_errors.c"
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

#line 1643 "transform_hlds.term_errors.c"
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

#line 1667 "transform_hlds.term_errors.c"
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

#line 1689 "transform_hlds.term_errors.c"
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

#line 1711 "transform_hlds.term_errors.c"
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

#line 1728 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0_10001(
#line 1731 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 1733 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2)
#line 1735 "transform_hlds.term_errors.c"
{
#line 1737 "transform_hlds.term_errors.c"
  {
#line 1739 "transform_hlds.term_errors.c"
    MR_bool transform_hlds__term_errors__succeeded;

#line 1742 "transform_hlds.term_errors.c"
    {
#line 1744 "transform_hlds.term_errors.c"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____term_error_0_0(((MR_Word) transform_hlds__term_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_errors__wrapper_arg_2));
    }
#line 1747 "transform_hlds.term_errors.c"
    return transform_hlds__term_errors__succeeded;
#line 1749 "transform_hlds.term_errors.c"
  }
#line 1751 "transform_hlds.term_errors.c"
}

#line 1754 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0_10001(
#line 1757 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 1759 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 1761 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3)
#line 1763 "transform_hlds.term_errors.c"
{
#line 1765 "transform_hlds.term_errors.c"
  {
#line 1767 "transform_hlds.term_errors.c"
    MR_Word transform_hlds__term_errors__conv0_HeadVar__1_1;

#line 1770 "transform_hlds.term_errors.c"
    {
#line 1772 "transform_hlds.term_errors.c"
      transform_hlds__term_errors____Compare____term_error_0_0(&transform_hlds__term_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_errors__wrapper_arg_3));
    }
#line 1775 "transform_hlds.term_errors.c"
    *transform_hlds__term_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_errors__conv0_HeadVar__1_1));
#line 1777 "transform_hlds.term_errors.c"
  }
#line 1779 "transform_hlds.term_errors.c"
}

#line 1782 "transform_hlds.term_errors.c"
static MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0_10001(
#line 1785 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 1787 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2)
#line 1789 "transform_hlds.term_errors.c"
{
#line 1791 "transform_hlds.term_errors.c"
  {
#line 1793 "transform_hlds.term_errors.c"
    MR_bool transform_hlds__term_errors__succeeded;

#line 1796 "transform_hlds.term_errors.c"
    {
#line 1798 "transform_hlds.term_errors.c"
      transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____term_error_kind_0_0(((MR_Word) transform_hlds__term_errors__wrapper_arg_1), ((MR_Word) transform_hlds__term_errors__wrapper_arg_2));
    }
#line 1801 "transform_hlds.term_errors.c"
    return transform_hlds__term_errors__succeeded;
#line 1803 "transform_hlds.term_errors.c"
  }
#line 1805 "transform_hlds.term_errors.c"
}

#line 1808 "transform_hlds.term_errors.c"
static void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0_10001(
#line 1811 "transform_hlds.term_errors.c"
  MR_Box * transform_hlds__term_errors__wrapper_arg_1,
#line 1813 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_2,
#line 1815 "transform_hlds.term_errors.c"
  MR_Box transform_hlds__term_errors__wrapper_arg_3)
#line 1817 "transform_hlds.term_errors.c"
{
#line 1819 "transform_hlds.term_errors.c"
  {
#line 1821 "transform_hlds.term_errors.c"
    MR_Word transform_hlds__term_errors__conv0_HeadVar__1_1;

#line 1824 "transform_hlds.term_errors.c"
    {
#line 1826 "transform_hlds.term_errors.c"
      transform_hlds__term_errors____Compare____term_error_kind_0_0(&transform_hlds__term_errors__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_errors__wrapper_arg_2), ((MR_Word) transform_hlds__term_errors__wrapper_arg_3));
    }
#line 1829 "transform_hlds.term_errors.c"
    *transform_hlds__term_errors__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_errors__conv0_HeadVar__1_1));
#line 1831 "transform_hlds.term_errors.c"
  }
#line 1833 "transform_hlds.term_errors.c"
}

#line 451 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__451__1_2_p_0(
#line 451 "term_errors.m"
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_160,
#line 451 "term_errors.m"
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_161)
#line 451 "term_errors.m"
{
#line 451 "term_errors.m"
  {
#line 451 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 451 "term_errors.m"
    {
#line 451 "term_errors.m"
      MR_Word base;
#line 451 "term_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 451 "term_errors.m"
      *transform_hlds__term_errors__LambdaHeadVar__2_161 = base;
#line 451 "term_errors.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__term_errors__LambdaHeadVar__1_160));
#line 451 "term_errors.m"
    }
#line 451 "term_errors.m"
  }
#line 451 "term_errors.m"
}

#line 447 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__447__1_2_p_0(
#line 447 "term_errors.m"
  MR_String transform_hlds__term_errors__LambdaHeadVar__1_154,
#line 447 "term_errors.m"
  MR_Word * transform_hlds__term_errors__LambdaHeadVar__2_155)
#line 447 "term_errors.m"
{
#line 447 "term_errors.m"
  {
#line 447 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 447 "term_errors.m"
    {
#line 447 "term_errors.m"
      MR_Word base;
#line 447 "term_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 447 "term_errors.m"
      *transform_hlds__term_errors__LambdaHeadVar__2_155 = base;
#line 447 "term_errors.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__term_errors__LambdaHeadVar__1_154));
#line 447 "term_errors.m"
    }
#line 447 "term_errors.m"
  }
#line 447 "term_errors.m"
}

#line 389 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__389__1_2_p_0(
#line 389 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_321,
#line 389 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_323)
#line 389 "term_errors.m"
{
#line 389 "term_errors.m"
  {
#line 389 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 389 "term_errors.m"
    {
#line 389 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_321, transform_hlds__term_errors__CallerPPId_323);
    }
#line 389 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 389 "term_errors.m"
  }
#line 389 "term_errors.m"
}

#line 328 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__328__1_2_p_0(
#line 328 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_11,
#line 328 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_13)
#line 328 "term_errors.m"
{
#line 328 "term_errors.m"
  {
#line 328 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 328 "term_errors.m"
    {
#line 328 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_13, transform_hlds__term_errors__CallerPPId_11);
    }
#line 328 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 328 "term_errors.m"
  }
#line 328 "term_errors.m"
}

#line 371 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__371__1_2_p_0(
#line 371 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_312,
#line 371 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_314)
#line 371 "term_errors.m"
{
#line 371 "term_errors.m"
  {
#line 371 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 371 "term_errors.m"
    {
#line 371 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_312, transform_hlds__term_errors__CallerPPId_314);
    }
#line 371 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 371 "term_errors.m"
  }
#line 371 "term_errors.m"
}

#line 408 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__408__1_2_p_0(
#line 408 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_330,
#line 408 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_332)
#line 408 "term_errors.m"
{
#line 408 "term_errors.m"
  {
#line 408 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 408 "term_errors.m"
    {
#line 408 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_330, transform_hlds__term_errors__CallerPPId_332);
    }
#line 408 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 408 "term_errors.m"
  }
#line 408 "term_errors.m"
}

#line 500 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__500__1_2_p_0(
#line 500 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCCPredId_43,
#line 500 "term_errors.m"
  MR_Word transform_hlds__term_errors__PredId_350)
#line 500 "term_errors.m"
{
#line 500 "term_errors.m"
  {
#line 500 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 500 "term_errors.m"
    {
#line 500 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__PredId_350, transform_hlds__term_errors__SCCPredId_43);
    }
#line 500 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 500 "term_errors.m"
  }
#line 500 "term_errors.m"
}

#line 347 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__347__1_2_p_0(
#line 347 "term_errors.m"
  MR_Word transform_hlds__term_errors__PPId_304,
#line 347 "term_errors.m"
  MR_Word transform_hlds__term_errors__CallerPPId_306)
#line 347 "term_errors.m"
{
#line 347 "term_errors.m"
  {
#line 347 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 347 "term_errors.m"
    {
#line 347 "term_errors.m"
      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_304, transform_hlds__term_errors__CallerPPId_306);
    }
#line 347 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 347 "term_errors.m"
  }
#line 347 "term_errors.m"
}

#line 32 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors____Compare____term_error_kind_0_0(
#line 32 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__1_1,
#line 32 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2,
#line 32 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__3_3)
#line 32 "term_errors.m"
{
#line 32 "term_errors.m"
  {
#line 32 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 32 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastX_51 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;
#line 32 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastY_52 = (MR_Integer) transform_hlds__term_errors__HeadVar__3_3;

#line 32 "term_errors.m"
    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_51 == transform_hlds__term_errors__CastY_52);
#line 32 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 2078 "transform_hlds.term_errors.c"
      *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "term_errors.m"
    else
#line 32 "term_errors.m"
      {
#line 32 "term_errors.m"
        MR_Integer transform_hlds__term_errors__V_4_4;
#line 32 "term_errors.m"
        MR_Integer transform_hlds__term_errors__V_5_5;

#line 32 "term_errors.m"
        {
#line 32 "term_errors.m"
          transform_hlds__term_errors____Index____term_error_kind_0_0(transform_hlds__term_errors__HeadVar__2_2, &transform_hlds__term_errors__V_4_4);
        }
#line 32 "term_errors.m"
        {
#line 32 "term_errors.m"
          transform_hlds__term_errors____Index____term_error_kind_0_0(transform_hlds__term_errors__HeadVar__3_3, &transform_hlds__term_errors__V_5_5);
        }
#line 32 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_4_4 < transform_hlds__term_errors__V_5_5);
#line 32 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 2103 "transform_hlds.term_errors.c"
          *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "term_errors.m"
        else
#line 32 "term_errors.m"
          {
#line 32 "term_errors.m"
            transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_4_4 > transform_hlds__term_errors__V_5_5);
#line 32 "term_errors.m"
            if (transform_hlds__term_errors__succeeded)
#line 2113 "transform_hlds.term_errors.c"
              *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "term_errors.m"
            else
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_6_6;

#line 32 "term_errors.m"
#line 32 "term_errors.m"
                switch (MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) {
#line 32 "term_errors.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_errors.m"
                  case (MR_Integer) 0:
#line 32 "term_errors.m"
#line 32 "term_errors.m"
                    switch (MR_unmkbody(transform_hlds__term_errors__HeadVar__2_2)) {
#line 32 "term_errors.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_errors.m"
                      case (MR_Integer) 0:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 1:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 2:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 3:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 4:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 5:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 6:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 7:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_6_6 = (MR_Integer) 0;
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                    }
#line 32 "term_errors.m"
                    break;
#line 32 "term_errors.m"
                  case (MR_Integer) 1:
#line 32 "term_errors.m"
                    {
#line 32 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_9_9;
#line 32 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_10_10;
#line 32 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_11_11;

#line 32 "term_errors.m"
                      transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 32 "term_errors.m"
                      if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_errors.m"
                          {
#line 32 "term_errors.m"
                            hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_11_11, transform_hlds__term_errors__V_7_7, transform_hlds__term_errors__V_9_9);
                          }
#line 2264 "transform_hlds.term_errors.c"
                          transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_11_11 == (MR_Integer) 0);
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 32 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                            transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_11_11;
#line 32 "term_errors.m"
                          else
#line 32 "term_errors.m"
                            {
#line 32 "term_errors.m"
                              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_8_8, transform_hlds__term_errors__V_10_10);
                            }
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                    }
#line 32 "term_errors.m"
                    break;
#line 32 "term_errors.m"
                  case (MR_Integer) 2:
#line 32 "term_errors.m"
                    {
#line 32 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_14_14;
#line 32 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_15_15;
#line 32 "term_errors.m"
                      MR_Word transform_hlds__term_errors__V_16_16;

#line 32 "term_errors.m"
                      transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 32 "term_errors.m"
                      if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "term_errors.m"
                          transform_hlds__term_errors__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_errors.m"
                          {
#line 32 "term_errors.m"
                            hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_16_16, transform_hlds__term_errors__V_12_12, transform_hlds__term_errors__V_14_14);
                          }
#line 2317 "transform_hlds.term_errors.c"
                          transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_16_16 == (MR_Integer) 0);
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 32 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                            transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_16_16;
#line 32 "term_errors.m"
                          else
#line 32 "term_errors.m"
                            {
#line 32 "term_errors.m"
                              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_13_13, transform_hlds__term_errors__V_15_15);
                            }
#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                    }
#line 32 "term_errors.m"
                    break;
#line 32 "term_errors.m"
                  case (MR_Integer) 3:
#line 32 "term_errors.m"
#line 32 "term_errors.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) {
#line 32 "term_errors.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_errors.m"
                      case (MR_Integer) 0:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_19_19;
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_20_20;
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_21_21;

#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 32 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                            {
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 32 "term_errors.m"
                              {
#line 32 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_21_21, transform_hlds__term_errors__V_17_17, transform_hlds__term_errors__V_19_19);
                              }
#line 2377 "transform_hlds.term_errors.c"
                              transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_21_21 == (MR_Integer) 0);
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 32 "term_errors.m"
                              if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                                transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_21_21;
#line 32 "term_errors.m"
                              else
#line 32 "term_errors.m"
                                {
#line 32 "term_errors.m"
                                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_18_18, transform_hlds__term_errors__V_20_20);
                                }
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                            }
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 1:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_24_24;
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_25_25;
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_26_26;

#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 32 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                            {
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 32 "term_errors.m"
                              {
#line 32 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_26_26, transform_hlds__term_errors__V_22_22, transform_hlds__term_errors__V_24_24);
                              }
#line 2430 "transform_hlds.term_errors.c"
                              transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_26_26 == (MR_Integer) 0);
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 32 "term_errors.m"
                              if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                                transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_26_26;
#line 32 "term_errors.m"
                              else
#line 32 "term_errors.m"
                                {
#line 32 "term_errors.m"
                                  {
#line 32 "term_errors.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[1], &transform_hlds__term_errors__V_6_6, ((MR_Box) (transform_hlds__term_errors__V_23_23)), ((MR_Box) (transform_hlds__term_errors__V_25_25)));
                                  }
#line 32 "term_errors.m"
                                }
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                            }
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 2:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_30_30;
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_31_31;
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_32_32;
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_33_33;

#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 32 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                            {
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 3)));
#line 32 "term_errors.m"
                              {
#line 32 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_33_33, transform_hlds__term_errors__V_27_27, transform_hlds__term_errors__V_30_30);
                              }
#line 2493 "transform_hlds.term_errors.c"
                              transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_33_33 == (MR_Integer) 0);
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 32 "term_errors.m"
                              if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                                transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_33_33;
#line 32 "term_errors.m"
                              else
#line 32 "term_errors.m"
                                {
#line 32 "term_errors.m"
                                  MR_Word transform_hlds__term_errors__V_34_34;

#line 32 "term_errors.m"
                                  {
#line 32 "term_errors.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[2], &transform_hlds__term_errors__V_34_34, ((MR_Box) (transform_hlds__term_errors__V_28_28)), ((MR_Box) (transform_hlds__term_errors__V_31_31)));
                                  }
#line 2513 "transform_hlds.term_errors.c"
                                  transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_34_34 == (MR_Integer) 0);
#line 32 "term_errors.m"
                                  transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 32 "term_errors.m"
                                  if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                                    transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_34_34;
#line 32 "term_errors.m"
                                  else
#line 32 "term_errors.m"
                                    {
#line 32 "term_errors.m"
                                      {
#line 32 "term_errors.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[2], &transform_hlds__term_errors__V_6_6, ((MR_Box) (transform_hlds__term_errors__V_29_29)), ((MR_Box) (transform_hlds__term_errors__V_32_32)));
                                      }
#line 32 "term_errors.m"
                                    }
#line 32 "term_errors.m"
                                }
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                            }
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 3:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_37_37;
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_38_38;
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_39_39;

#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 32 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                            {
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 32 "term_errors.m"
                              {
#line 32 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_39_39, transform_hlds__term_errors__V_35_35, transform_hlds__term_errors__V_37_37);
                              }
#line 2572 "transform_hlds.term_errors.c"
                              transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_39_39 == (MR_Integer) 0);
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 32 "term_errors.m"
                              if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                                transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_39_39;
#line 32 "term_errors.m"
                              else
#line 32 "term_errors.m"
                                {
#line 32 "term_errors.m"
                                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_36_36, transform_hlds__term_errors__V_38_38);
                                }
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                            }
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 4:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_42_42;
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_43_43;
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_44_44;

#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 32 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                            {
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 2)));
#line 32 "term_errors.m"
                              {
#line 32 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_44_44, transform_hlds__term_errors__V_40_40, transform_hlds__term_errors__V_42_42);
                              }
#line 2625 "transform_hlds.term_errors.c"
                              transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_44_44 == (MR_Integer) 0);
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 32 "term_errors.m"
                              if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                                transform_hlds__term_errors__V_6_6 = transform_hlds__term_errors__V_44_44;
#line 32 "term_errors.m"
                              else
#line 32 "term_errors.m"
                                {
#line 32 "term_errors.m"
                                  {
#line 32 "term_errors.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[3], &transform_hlds__term_errors__V_6_6, ((MR_Box) (transform_hlds__term_errors__V_41_41)), ((MR_Box) (transform_hlds__term_errors__V_43_43)));
                                  }
#line 32 "term_errors.m"
                                }
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                            }
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 5:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_46_46;

#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 32 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                            {
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_errors.m"
                              {
#line 32 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_45_45, transform_hlds__term_errors__V_46_46);
                              }
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                            }
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 6:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_48_48;

#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 32 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                            {
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_errors.m"
                              {
#line 32 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_47_47, transform_hlds__term_errors__V_48_48);
                              }
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                            }
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                      case (MR_Integer) 7:
#line 32 "term_errors.m"
                        {
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                          MR_Word transform_hlds__term_errors__V_50_50;

#line 32 "term_errors.m"
                          transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 32 "term_errors.m"
                          if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                            {
#line 32 "term_errors.m"
                              transform_hlds__term_errors__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term_errors.m"
                              {
#line 32 "term_errors.m"
                                hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_errors__V_6_6, transform_hlds__term_errors__V_49_49, transform_hlds__term_errors__V_50_50);
                              }
#line 32 "term_errors.m"
                              transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
                            }
#line 32 "term_errors.m"
                        }
#line 32 "term_errors.m"
                        break;
#line 32 "term_errors.m"
                    }
#line 32 "term_errors.m"
                    break;
#line 32 "term_errors.m"
                }
#line 32 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                  *transform_hlds__term_errors__HeadVar__1_1 = transform_hlds__term_errors__V_6_6;
#line 32 "term_errors.m"
                else
#line 32 "term_errors.m"
                  {
#line 32 "term_errors.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 32 "term_errors.m"
                    return;
                  }
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
          }
#line 32 "term_errors.m"
      }
#line 32 "term_errors.m"
  }
#line 32 "term_errors.m"
}

#line 32 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors____Index____term_error_kind_0_0(
#line 32 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 32 "term_errors.m"
  MR_Integer * transform_hlds__term_errors__HeadVar__2_2)
#line 32 "term_errors.m"
{
#line 32 "term_errors.m"
  {
#line 32 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 32 "term_errors.m"
#line 32 "term_errors.m"
    switch (MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) {
#line 32 "term_errors.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_errors.m"
      case (MR_Integer) 0:
#line 32 "term_errors.m"
#line 32 "term_errors.m"
        switch (MR_unmkbody(transform_hlds__term_errors__HeadVar__1_1)) {
#line 32 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_errors.m"
          case (MR_Integer) 0:
#line 2800 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 0;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 1:
#line 2806 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 1;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 2:
#line 2812 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 4;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 3:
#line 2818 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 5;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 4:
#line 2824 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 11;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 5:
#line 2830 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 12;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 6:
#line 2836 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 13;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 7:
#line 2842 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 16;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
        }
#line 32 "term_errors.m"
        break;
#line 32 "term_errors.m"
      case (MR_Integer) 1:
#line 2852 "transform_hlds.term_errors.c"
        *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 2;
#line 32 "term_errors.m"
        break;
#line 32 "term_errors.m"
      case (MR_Integer) 2:
#line 2858 "transform_hlds.term_errors.c"
        *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 3;
#line 32 "term_errors.m"
        break;
#line 32 "term_errors.m"
      case (MR_Integer) 3:
#line 32 "term_errors.m"
#line 32 "term_errors.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) {
#line 32 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_errors.m"
          case (MR_Integer) 0:
#line 2871 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 6;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 1:
#line 2877 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 7;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 2:
#line 2883 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 8;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 3:
#line 2889 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 9;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 4:
#line 2895 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 10;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 5:
#line 2901 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 14;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 6:
#line 2907 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 15;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
          case (MR_Integer) 7:
#line 2913 "transform_hlds.term_errors.c"
            *transform_hlds__term_errors__HeadVar__2_2 = (MR_Integer) 17;
#line 32 "term_errors.m"
            break;
#line 32 "term_errors.m"
        }
#line 32 "term_errors.m"
        break;
#line 32 "term_errors.m"
    }
#line 32 "term_errors.m"
  }
#line 32 "term_errors.m"
}

#line 32 "term_errors.m"
MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_kind_0_0(
#line 32 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 32 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2)
#line 32 "term_errors.m"
{
#line 32 "term_errors.m"
  {
#line 32 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 32 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastX_55 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 32 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastY_56 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 32 "term_errors.m"
    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_55 == transform_hlds__term_errors__CastY_56);
#line 32 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
      transform_hlds__term_errors__succeeded = MR_TRUE;
#line 32 "term_errors.m"
    else
#line 32 "term_errors.m"
#line 32 "term_errors.m"
      switch (MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__1_1)) {
#line 32 "term_errors.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_errors.m"
        case (MR_Integer) 0:
#line 32 "term_errors.m"
#line 32 "term_errors.m"
          switch (MR_unmkbody(transform_hlds__term_errors__HeadVar__1_1)) {
#line 32 "term_errors.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_errors.m"
            case (MR_Integer) 0:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_3 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_4 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_4 == transform_hlds__term_errors__CastX_3);
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 1:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_5 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_6 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_6 == transform_hlds__term_errors__CastX_5);
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 2:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_15 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_16 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_16 == transform_hlds__term_errors__CastX_15);
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 3:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_17 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_18 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_18 == transform_hlds__term_errors__CastX_17);
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 4:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_41 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_42 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_42 == transform_hlds__term_errors__CastX_41);
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 5:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_43 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_44 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_44 == transform_hlds__term_errors__CastX_43);
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 6:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_45 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_46 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_46 == transform_hlds__term_errors__CastX_45);
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 7:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastX_51 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 32 "term_errors.m"
                MR_Integer transform_hlds__term_errors__CastY_52 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastY_52 == transform_hlds__term_errors__CastX_51);
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
          }
#line 32 "term_errors.m"
          break;
#line 32 "term_errors.m"
        case (MR_Integer) 1:
#line 32 "term_errors.m"
          {
#line 32 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_9_9;
#line 32 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_10_10;

#line 32 "term_errors.m"
            transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 32 "term_errors.m"
            if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                transform_hlds__term_errors__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "term_errors.m"
                transform_hlds__term_errors__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3113 "transform_hlds.term_errors.c"
                {
#line 3115 "transform_hlds.term_errors.c"
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_7_7, transform_hlds__term_errors__V_9_9);
                }
#line 32 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 3120 "transform_hlds.term_errors.c"
                  {
#line 3122 "transform_hlds.term_errors.c"
                    return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_8_8, transform_hlds__term_errors__V_10_10);
                  }
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
          }
#line 32 "term_errors.m"
          break;
#line 32 "term_errors.m"
        case (MR_Integer) 2:
#line 32 "term_errors.m"
          {
#line 32 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_13_13;
#line 32 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_14_14;

#line 32 "term_errors.m"
            transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 32 "term_errors.m"
            if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                transform_hlds__term_errors__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "term_errors.m"
                transform_hlds__term_errors__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3154 "transform_hlds.term_errors.c"
                {
#line 3156 "transform_hlds.term_errors.c"
                  transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_11_11, transform_hlds__term_errors__V_13_13);
                }
#line 32 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 3161 "transform_hlds.term_errors.c"
                  {
#line 3163 "transform_hlds.term_errors.c"
                    return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_12_12, transform_hlds__term_errors__V_14_14);
                  }
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
          }
#line 32 "term_errors.m"
          break;
#line 32 "term_errors.m"
        case (MR_Integer) 3:
#line 32 "term_errors.m"
#line 32 "term_errors.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)))) {
#line 32 "term_errors.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 32 "term_errors.m"
            case (MR_Integer) 0:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_21_21;
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_22_22;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 32 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                  {
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3202 "transform_hlds.term_errors.c"
                    {
#line 3204 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_19_19, transform_hlds__term_errors__V_21_21);
                    }
#line 32 "term_errors.m"
                    if (transform_hlds__term_errors__succeeded)
#line 3209 "transform_hlds.term_errors.c"
                      {
#line 3211 "transform_hlds.term_errors.c"
                        return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_20_20, transform_hlds__term_errors__V_22_22);
                      }
#line 32 "term_errors.m"
                  }
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 1:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__TypeInfo_64_64;
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_25_25;
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_26_26;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 32 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                  {
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3245 "transform_hlds.term_errors.c"
                    {
#line 3247 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_23_23, transform_hlds__term_errors__V_25_25);
                    }
#line 32 "term_errors.m"
                    if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                      {
#line 3254 "transform_hlds.term_errors.c"
                        transform_hlds__term_errors__TypeInfo_64_64 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[1];
#line 3256 "transform_hlds.term_errors.c"
                        {
#line 3258 "transform_hlds.term_errors.c"
                          return transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_64_64, ((MR_Box) (transform_hlds__term_errors__V_24_24)), ((MR_Box) (transform_hlds__term_errors__V_26_26)));
                        }
#line 32 "term_errors.m"
                      }
#line 32 "term_errors.m"
                  }
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 2:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__TypeInfo_73_73;
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__TypeInfo_74_74;
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 3)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_30_30;
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_31_31;
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_32_32;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 32 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                  {
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 3)));
#line 3302 "transform_hlds.term_errors.c"
                    {
#line 3304 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_27_27, transform_hlds__term_errors__V_30_30);
                    }
#line 32 "term_errors.m"
                    if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                      {
#line 3311 "transform_hlds.term_errors.c"
                        transform_hlds__term_errors__TypeInfo_73_73 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[2];
#line 3313 "transform_hlds.term_errors.c"
                        {
#line 3315 "transform_hlds.term_errors.c"
                          transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_73_73, ((MR_Box) (transform_hlds__term_errors__V_28_28)), ((MR_Box) (transform_hlds__term_errors__V_31_31)));
                        }
#line 32 "term_errors.m"
                        if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                          {
#line 3322 "transform_hlds.term_errors.c"
                            transform_hlds__term_errors__TypeInfo_74_74 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[2];
#line 3324 "transform_hlds.term_errors.c"
                            {
#line 3326 "transform_hlds.term_errors.c"
                              return transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_74_74, ((MR_Box) (transform_hlds__term_errors__V_29_29)), ((MR_Box) (transform_hlds__term_errors__V_32_32)));
                            }
#line 32 "term_errors.m"
                          }
#line 32 "term_errors.m"
                      }
#line 32 "term_errors.m"
                  }
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 3:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_35_35;
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_36_36;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 32 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                  {
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3362 "transform_hlds.term_errors.c"
                    {
#line 3364 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_33_33, transform_hlds__term_errors__V_35_35);
                    }
#line 32 "term_errors.m"
                    if (transform_hlds__term_errors__succeeded)
#line 3369 "transform_hlds.term_errors.c"
                      {
#line 3371 "transform_hlds.term_errors.c"
                        return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_34_34, transform_hlds__term_errors__V_36_36);
                      }
#line 32 "term_errors.m"
                  }
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 4:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__TypeInfo_60_60;
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 2)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_39_39;
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_40_40;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 32 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                  {
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 2)));
#line 3405 "transform_hlds.term_errors.c"
                    {
#line 3407 "transform_hlds.term_errors.c"
                      transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_37_37, transform_hlds__term_errors__V_39_39);
                    }
#line 32 "term_errors.m"
                    if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                      {
#line 3414 "transform_hlds.term_errors.c"
                        transform_hlds__term_errors__TypeInfo_60_60 = (MR_Word) &transform_hlds__term_errors_scalar_common_1[3];
#line 3416 "transform_hlds.term_errors.c"
                        {
#line 3418 "transform_hlds.term_errors.c"
                          return transform_hlds__term_errors__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_errors__TypeInfo_60_60, ((MR_Box) (transform_hlds__term_errors__V_38_38)), ((MR_Box) (transform_hlds__term_errors__V_40_40)));
                        }
#line 32 "term_errors.m"
                      }
#line 32 "term_errors.m"
                  }
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 5:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_48_48;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 32 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                  {
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3446 "transform_hlds.term_errors.c"
                    {
#line 3448 "transform_hlds.term_errors.c"
                      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__V_47_47, transform_hlds__term_errors__V_48_48);
                    }
#line 32 "term_errors.m"
                  }
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 6:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_50_50;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 32 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                  {
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3474 "transform_hlds.term_errors.c"
                    {
#line 3476 "transform_hlds.term_errors.c"
                      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__term_errors__V_49_49, transform_hlds__term_errors__V_50_50);
                    }
#line 32 "term_errors.m"
                  }
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
            case (MR_Integer) 7:
#line 32 "term_errors.m"
              {
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term_errors.m"
                MR_Word transform_hlds__term_errors__V_54_54;

#line 32 "term_errors.m"
                transform_hlds__term_errors__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 32 "term_errors.m"
                if (transform_hlds__term_errors__succeeded)
#line 32 "term_errors.m"
                  {
#line 32 "term_errors.m"
                    transform_hlds__term_errors__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 3502 "transform_hlds.term_errors.c"
                    {
#line 3504 "transform_hlds.term_errors.c"
                      return transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__V_53_53, transform_hlds__term_errors__V_54_54);
                    }
#line 32 "term_errors.m"
                  }
#line 32 "term_errors.m"
              }
#line 32 "term_errors.m"
              break;
#line 32 "term_errors.m"
          }
#line 32 "term_errors.m"
          break;
#line 32 "term_errors.m"
      }
#line 32 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 32 "term_errors.m"
  }
#line 32 "term_errors.m"
}

#line 141 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors____Compare____term_error_0_0(
#line 141 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__1_1,
#line 141 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2,
#line 141 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__3_3)
#line 141 "term_errors.m"
{
#line 141 "term_errors.m"
  {
#line 141 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 141 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastX_9 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;
#line 141 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastY_10 = (MR_Integer) transform_hlds__term_errors__HeadVar__3_3;

#line 141 "term_errors.m"
    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_9 == transform_hlds__term_errors__CastY_10);
#line 141 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 3550 "transform_hlds.term_errors.c"
      *transform_hlds__term_errors__HeadVar__1_1 = (MR_Integer) 0;
#line 141 "term_errors.m"
    else
#line 141 "term_errors.m"
      {
#line 141 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 141 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));
#line 141 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 141 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 141 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_8_8;

#line 141 "term_errors.m"
        {
#line 141 "term_errors.m"
          mercury__term____Compare____context_0_0(&transform_hlds__term_errors__V_8_8, transform_hlds__term_errors__V_4_4, transform_hlds__term_errors__V_6_6);
        }
#line 3572 "transform_hlds.term_errors.c"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_8_8 == (MR_Integer) 0);
#line 141 "term_errors.m"
        transform_hlds__term_errors__succeeded = !(transform_hlds__term_errors__succeeded);
#line 141 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 141 "term_errors.m"
          *transform_hlds__term_errors__HeadVar__1_1 = transform_hlds__term_errors__V_8_8;
#line 141 "term_errors.m"
        else
#line 141 "term_errors.m"
          {
#line 141 "term_errors.m"
            transform_hlds__term_errors____Compare____term_error_kind_0_0(transform_hlds__term_errors__HeadVar__1_1, transform_hlds__term_errors__V_5_5, transform_hlds__term_errors__V_7_7);
#line 141 "term_errors.m"
            return;
          }
#line 141 "term_errors.m"
      }
#line 141 "term_errors.m"
  }
#line 141 "term_errors.m"
}

#line 141 "term_errors.m"
MR_bool MR_CALL 
transform_hlds__term_errors____Unify____term_error_0_0(
#line 141 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 141 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__2_2)
#line 141 "term_errors.m"
{
#line 141 "term_errors.m"
  {
#line 141 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 141 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastX_7 = (MR_Integer) transform_hlds__term_errors__HeadVar__1_1;
#line 141 "term_errors.m"
    MR_Integer transform_hlds__term_errors__CastY_8 = (MR_Integer) transform_hlds__term_errors__HeadVar__2_2;

#line 141 "term_errors.m"
    transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__CastX_7 == transform_hlds__term_errors__CastY_8);
#line 141 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 141 "term_errors.m"
      transform_hlds__term_errors__succeeded = MR_TRUE;
#line 141 "term_errors.m"
    else
#line 141 "term_errors.m"
      {
#line 141 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));
#line 141 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 141 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 0)));
#line 141 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__HeadVar__2_2, (MR_Integer) 1)));

#line 3633 "transform_hlds.term_errors.c"
        {
#line 3635 "transform_hlds.term_errors.c"
          transform_hlds__term_errors__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_errors__V_3_3, transform_hlds__term_errors__V_5_5);
        }
#line 141 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 3640 "transform_hlds.term_errors.c"
          {
#line 3642 "transform_hlds.term_errors.c"
            return transform_hlds__term_errors__succeeded = transform_hlds__term_errors____Unify____term_error_kind_0_0(transform_hlds__term_errors__V_4_4, transform_hlds__term_errors__V_6_6);
          }
#line 141 "term_errors.m"
      }
#line 141 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 141 "term_errors.m"
  }
#line 141 "term_errors.m"
}

#line 530 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(
#line 530 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__1_1,
#line 530 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_2,
#line 530 "term_errors.m"
  MR_Word transform_hlds__term_errors__First_3,
#line 530 "term_errors.m"
  MR_Word * transform_hlds__term_errors__HeadVar__4_4)
#line 530 "term_errors.m"
{
#line 533 "term_errors.m"
  {
#line 533 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 533 "term_errors.m"
    if ((transform_hlds__term_errors__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "term_errors.m"
      {
#line 533 "term_errors.m"
        *transform_hlds__term_errors__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[114]);
#line 533 "term_errors.m"
      }
#line 533 "term_errors.m"
    else
#line 535 "term_errors.m"
      {
#line 535 "term_errors.m"
        MR_Word transform_hlds__term_errors__Var_9;
#line 535 "term_errors.m"
        MR_Integer transform_hlds__term_errors__Count_10;
#line 535 "term_errors.m"
        MR_Word transform_hlds__term_errors__VarCounts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 1)));
#line 535 "term_errors.m"
        MR_String transform_hlds__term_errors__Piece_14;
#line 535 "term_errors.m"
        MR_Word transform_hlds__term_errors__Pieces_15;
#line 535 "term_errors.m"
        MR_String transform_hlds__term_errors__VarName_16;
#line 535 "term_errors.m"
        MR_String transform_hlds__term_errors__VarCountPiece_19;
#line 535 "term_errors.m"
        MR_String transform_hlds__term_errors__Piece0_20;
#line 535 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__1_1, (MR_Integer) 0)));

#line 534 "term_errors.m"
        transform_hlds__term_errors__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_23_23, (MR_Integer) 0)));
#line 534 "term_errors.m"
        transform_hlds__term_errors__Count_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_23_23, (MR_Integer) 1)));
#line 536 "term_errors.m"
        {
#line 536 "term_errors.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__term_errors__Varset_2, transform_hlds__term_errors__Var_9, &transform_hlds__term_errors__VarName_16);
        }
#line 537 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__Count_10 > (MR_Integer) 1);
#line 541 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 538 "term_errors.m"
          {
#line 538 "term_errors.m"
            MR_String transform_hlds__term_errors__VarCountPiece0_17;
#line 538 "term_errors.m"
            MR_String transform_hlds__term_errors__CountStr_18;

#line 538 "term_errors.m"
            {
#line 538 "term_errors.m"
              mercury__string__append_3_p_2(transform_hlds__term_errors__VarName_16, (MR_String) "*", &transform_hlds__term_errors__VarCountPiece0_17);
            }
#line 539 "term_errors.m"
            {
#line 539 "term_errors.m"
              mercury__string__int_to_string_2_p_0(transform_hlds__term_errors__Count_10, &transform_hlds__term_errors__CountStr_18);
            }
#line 540 "term_errors.m"
            {
#line 540 "term_errors.m"
              mercury__string__append_3_p_2(transform_hlds__term_errors__VarCountPiece0_17, transform_hlds__term_errors__CountStr_18, &transform_hlds__term_errors__VarCountPiece_19);
            }
#line 538 "term_errors.m"
          }
#line 541 "term_errors.m"
        else
#line 542 "term_errors.m"
          transform_hlds__term_errors__VarCountPiece_19 = transform_hlds__term_errors__VarName_16;
#line 547 "term_errors.m"
#line 547 "term_errors.m"
        switch (transform_hlds__term_errors__First_3) {
#line 547 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 547 "term_errors.m"
          case (MR_Integer) 0:
#line 549 "term_errors.m"
            transform_hlds__term_errors__Piece0_20 = transform_hlds__term_errors__VarCountPiece_19;
#line 547 "term_errors.m"
            break;
#line 547 "term_errors.m"
          case (MR_Integer) 1:
#line 545 "term_errors.m"
            {
#line 546 "term_errors.m"
              {
#line 546 "term_errors.m"
                mercury__string__append_3_p_2((MR_String) "{", transform_hlds__term_errors__VarCountPiece_19, &transform_hlds__term_errors__Piece0_20);
              }
#line 545 "term_errors.m"
            }
#line 547 "term_errors.m"
            break;
#line 547 "term_errors.m"
        }
#line 555 "term_errors.m"
        if ((transform_hlds__term_errors__VarCounts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "term_errors.m"
          {
#line 553 "term_errors.m"
            {
#line 553 "term_errors.m"
              mercury__string__append_3_p_2(transform_hlds__term_errors__Piece0_20, (MR_String) "}.", &transform_hlds__term_errors__Piece_14);
            }
#line 554 "term_errors.m"
            transform_hlds__term_errors__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "term_errors.m"
          }
#line 555 "term_errors.m"
        else
#line 556 "term_errors.m"
          {
#line 557 "term_errors.m"
            transform_hlds__term_errors__Piece_14 = transform_hlds__term_errors__Piece0_20;
#line 558 "term_errors.m"
            {
#line 558 "term_errors.m"
              transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(transform_hlds__term_errors__VarCounts_11, transform_hlds__term_errors__Varset_2, transform_hlds__term_errors__First_3, &transform_hlds__term_errors__Pieces_15);
            }
#line 556 "term_errors.m"
          }
#line 535 "term_errors.m"
        {
#line 535 "term_errors.m"
          MR_Word base;
#line 535 "term_errors.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "term_errors.m"
          *transform_hlds__term_errors__HeadVar__4_4 = base;
#line 535 "term_errors.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__Piece_14));
#line 535 "term_errors.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_errors__Pieces_15));
#line 535 "term_errors.m"
        }
#line 535 "term_errors.m"
      }
#line 533 "term_errors.m"
  }
#line 530 "term_errors.m"
}

#line 523 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(
#line 523 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVars_4,
#line 523 "term_errors.m"
  MR_Word transform_hlds__term_errors__Varset_5,
#line 523 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_6)
#line 523 "term_errors.m"
{
#line 526 "term_errors.m"
  {
#line 526 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 526 "term_errors.m"
    MR_Word transform_hlds__term_errors__HeadVarCountList_7;

#line 527 "term_errors.m"
    {
#line 527 "term_errors.m"
      mercury__bag__to_assoc_list_2_p_0((MR_Word) &transform_hlds__term_errors_scalar_common_1[0], transform_hlds__term_errors__HeadVars_4, &transform_hlds__term_errors__HeadVarCountList_7);
    }
#line 528 "term_errors.m"
    {
#line 528 "term_errors.m"
      transform_hlds__term_errors__term_errors_var_bag_description_2_4_p_0(transform_hlds__term_errors__HeadVarCountList_7, transform_hlds__term_errors__Varset_5, (MR_Integer) 1, transform_hlds__term_errors__Pieces_6);
#line 528 "term_errors.m"
      return;
    }
#line 526 "term_errors.m"
  }
#line 523 "term_errors.m"
}

#line 451 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_8(
#line 451 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 451 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 451 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2)
#line 451 "term_errors.m"
{
#line 451 "term_errors.m"
  {
#line 451 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;
#line 451 "term_errors.m"
    MR_Word transform_hlds__term_errors__conv1_LambdaHeadVar__2_161;

#line 451 "term_errors.m"
    {
#line 451 "term_errors.m"
      transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__451__1_2_p_0(((MR_String) transform_hlds__term_errors__wrapper_arg_1), &transform_hlds__term_errors__conv1_LambdaHeadVar__2_161);
    }
#line 451 "term_errors.m"
    *transform_hlds__term_errors__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_errors__conv1_LambdaHeadVar__2_161));
#line 451 "term_errors.m"
  }
#line 451 "term_errors.m"
}

#line 447 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_7(
#line 447 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg,
#line 447 "term_errors.m"
  MR_Box transform_hlds__term_errors__wrapper_arg_1,
#line 447 "term_errors.m"
  MR_Box * transform_hlds__term_errors__wrapper_arg_2)
#line 447 "term_errors.m"
{
#line 447 "term_errors.m"
  {
#line 447 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;
#line 447 "term_errors.m"
    MR_Word transform_hlds__term_errors__conv0_LambdaHeadVar__2_155;

#line 447 "term_errors.m"
    {
#line 447 "term_errors.m"
      transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__447__1_2_p_0(((MR_String) transform_hlds__term_errors__wrapper_arg_1), &transform_hlds__term_errors__conv0_LambdaHeadVar__2_155);
    }
#line 447 "term_errors.m"
    *transform_hlds__term_errors__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_errors__conv0_LambdaHeadVar__2_155));
#line 447 "term_errors.m"
  }
#line 447 "term_errors.m"
}

#line 389 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_6(
#line 389 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 389 "term_errors.m"
{
#line 389 "term_errors.m"
  {
#line 389 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 389 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 389 "term_errors.m"
    {
#line 389 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__389__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 389 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 389 "term_errors.m"
  }
#line 389 "term_errors.m"
}

#line 328 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_5(
#line 328 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 328 "term_errors.m"
{
#line 328 "term_errors.m"
  {
#line 328 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 328 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 328 "term_errors.m"
    {
#line 328 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__328__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 328 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 328 "term_errors.m"
  }
#line 328 "term_errors.m"
}

#line 371 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_4(
#line 371 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 371 "term_errors.m"
{
#line 371 "term_errors.m"
  {
#line 371 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 371 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 371 "term_errors.m"
    {
#line 371 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__371__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 371 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 371 "term_errors.m"
  }
#line 371 "term_errors.m"
}

#line 408 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_3(
#line 408 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 408 "term_errors.m"
{
#line 408 "term_errors.m"
  {
#line 408 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 408 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 408 "term_errors.m"
    {
#line 408 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__408__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 408 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 408 "term_errors.m"
  }
#line 408 "term_errors.m"
}

#line 500 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_2(
#line 500 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 500 "term_errors.m"
{
#line 500 "term_errors.m"
  {
#line 500 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 500 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 500 "term_errors.m"
    {
#line 500 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__500__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 500 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 500 "term_errors.m"
  }
#line 500 "term_errors.m"
}

#line 347 "term_errors.m"
static MR_bool MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0_1(
#line 347 "term_errors.m"
  MR_Box transform_hlds__term_errors__closure_arg)
#line 347 "term_errors.m"
{
#line 347 "term_errors.m"
  {
#line 347 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 347 "term_errors.m"
    MR_Box transform_hlds__term_errors__closure = transform_hlds__term_errors__closure_arg;

#line 347 "term_errors.m"
    {
#line 347 "term_errors.m"
      return transform_hlds__term_errors__succeeded = transform_hlds__term_errors__IntroducedFrom__pred__term_error_kind_description__347__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__closure, (MR_Integer) 4))));
    }
#line 347 "term_errors.m"
    return transform_hlds__term_errors__succeeded;
#line 347 "term_errors.m"
  }
#line 347 "term_errors.m"
}

#line 305 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__term_error_kind_description_5_p_0(
#line 305 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
#line 305 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_7,
#line 305 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorKind_8,
#line 305 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Pieces_9,
#line 305 "term_errors.m"
  MR_Word * transform_hlds__term_errors__Reason_10)
#line 305 "term_errors.m"
{
#line 311 "term_errors.m"
  {
#line 311 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;

#line 311 "term_errors.m"
#line 311 "term_errors.m"
    switch (MR_tag((MR_Word) transform_hlds__term_errors__ErrorKind_8)) {
#line 311 "term_errors.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 311 "term_errors.m"
      case (MR_Integer) 0:
#line 311 "term_errors.m"
#line 311 "term_errors.m"
        switch (MR_unmkbody(transform_hlds__term_errors__ErrorKind_8)) {
#line 311 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 311 "term_errors.m"
          case (MR_Integer) 0:
#line 319 "term_errors.m"
            {
#line 320 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[70]);
#line 323 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 319 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 1:
#line 362 "term_errors.m"
            {
#line 363 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[48]);
#line 366 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 2:
#line 311 "term_errors.m"
            {
#line 312 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[42]);
#line 313 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 311 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 3:
#line 315 "term_errors.m"
            {
#line 316 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[58]);
#line 317 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 4:
#line 478 "term_errors.m"
            {
#line 479 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[62]);
#line 481 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 5:
#line 473 "term_errors.m"
            {
#line 474 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[78]);
#line 476 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 473 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 6:
#line 483 "term_errors.m"
            {
#line 484 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[74]);
#line 486 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 483 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 7:
#line 511 "term_errors.m"
            {
#line 512 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[50]);
#line 513 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 511 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
        }
#line 311 "term_errors.m"
        break;
#line 311 "term_errors.m"
      case (MR_Integer) 1:
#line 344 "term_errors.m"
        {
#line 344 "term_errors.m"
          MR_Word transform_hlds__term_errors__TypeCtorInfo_354_354;
#line 344 "term_errors.m"
          MR_Word transform_hlds__term_errors__V_250_250;
#line 344 "term_errors.m"
          MR_Word transform_hlds__term_errors__V_253_253;
#line 344 "term_errors.m"
          MR_Word transform_hlds__term_errors__CallerPPId_306 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 0)));
#line 344 "term_errors.m"
          MR_Word transform_hlds__term_errors__CalleePPId_307 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 344 "term_errors.m"
          MR_Word transform_hlds__term_errors__Pieces1_309;
#line 344 "term_errors.m"
          MR_Word transform_hlds__term_errors__CalleePieces_311;

#line 350 "term_errors.m"
          if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "term_errors.m"
            {
#line 352 "term_errors.m"
              {
#line 352 "term_errors.m"
                transform_hlds__term_errors__Pieces1_309 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_306);
              }
#line 351 "term_errors.m"
            }
#line 350 "term_errors.m"
          else
#line 346 "term_errors.m"
            {
#line 346 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_240_240;
#line 346 "term_errors.m"
              MR_Word transform_hlds__term_errors__PPId_304 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

#line 347 "term_errors.m"
              {
#line 347 "term_errors.m"
                transform_hlds__term_errors__V_240_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 347 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_240_240, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 347 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_240_240, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_1));
#line 347 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_240_240, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 347 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_240_240, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_304));
#line 347 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_240_240, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_306));
#line 347 "term_errors.m"
              }
#line 347 "term_errors.m"
              {
#line 347 "term_errors.m"
                mercury__require__expect_4_p_0(transform_hlds__term_errors__V_240_240, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "can_loop_proc_called: caller outside this SCC");
              }
#line 349 "term_errors.m"
              transform_hlds__term_errors__Pieces1_309 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97]);
#line 346 "term_errors.m"
            }
#line 356 "term_errors.m"
          {
#line 356 "term_errors.m"
            transform_hlds__term_errors__CalleePieces_311 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_307);
          }
#line 4269 "transform_hlds.term_errors.c"
          transform_hlds__term_errors__TypeCtorInfo_354_354 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 359 "term_errors.m"
          {
#line 359 "term_errors.m"
            transform_hlds__term_errors__V_253_253 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_354_354, transform_hlds__term_errors__CalleePieces_311, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[101]));
          }
#line 359 "term_errors.m"
          {
#line 359 "term_errors.m"
            transform_hlds__term_errors__V_250_250 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_354_354, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[100]), transform_hlds__term_errors__V_253_253);
          }
#line 359 "term_errors.m"
          {
#line 359 "term_errors.m"
            *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_354_354, transform_hlds__term_errors__Pieces1_309, transform_hlds__term_errors__V_250_250);
          }
#line 360 "term_errors.m"
          *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "term_errors.m"
        }
#line 311 "term_errors.m"
        break;
#line 311 "term_errors.m"
      case (MR_Integer) 2:
#line 368 "term_errors.m"
        {
#line 368 "term_errors.m"
          MR_Word transform_hlds__term_errors__TypeCtorInfo_356_356;
#line 368 "term_errors.m"
          MR_Word transform_hlds__term_errors__V_220_220;
#line 368 "term_errors.m"
          MR_Word transform_hlds__term_errors__V_223_223;
#line 368 "term_errors.m"
          MR_Word transform_hlds__term_errors__CallerPPId_314 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 0)));
#line 368 "term_errors.m"
          MR_Word transform_hlds__term_errors__CalleePPId_315 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 368 "term_errors.m"
          MR_Word transform_hlds__term_errors__Pieces1_317;
#line 368 "term_errors.m"
          MR_Word transform_hlds__term_errors__CalleePieces_319;

#line 374 "term_errors.m"
          if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "term_errors.m"
            {
#line 376 "term_errors.m"
              {
#line 376 "term_errors.m"
                transform_hlds__term_errors__Pieces1_317 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_314);
              }
#line 375 "term_errors.m"
            }
#line 374 "term_errors.m"
          else
#line 370 "term_errors.m"
            {
#line 370 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_210_210;
#line 370 "term_errors.m"
              MR_Word transform_hlds__term_errors__PPId_312 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

#line 371 "term_errors.m"
              {
#line 371 "term_errors.m"
                transform_hlds__term_errors__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 371 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_210_210, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 371 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_210_210, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_4));
#line 371 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_210_210, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 371 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_210_210, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_312));
#line 371 "term_errors.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_210_210, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_314));
#line 371 "term_errors.m"
              }
#line 371 "term_errors.m"
              {
#line 371 "term_errors.m"
                mercury__require__expect_4_p_0(transform_hlds__term_errors__V_210_210, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "horder_args: caller outside this SCC");
              }
#line 373 "term_errors.m"
              transform_hlds__term_errors__Pieces1_317 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97]);
#line 370 "term_errors.m"
            }
#line 380 "term_errors.m"
          {
#line 380 "term_errors.m"
            transform_hlds__term_errors__CalleePieces_319 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_315);
          }
#line 4361 "transform_hlds.term_errors.c"
          transform_hlds__term_errors__TypeCtorInfo_356_356 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 383 "term_errors.m"
          {
#line 383 "term_errors.m"
            transform_hlds__term_errors__V_223_223 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_356_356, transform_hlds__term_errors__CalleePieces_319, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[106]));
          }
#line 383 "term_errors.m"
          {
#line 383 "term_errors.m"
            transform_hlds__term_errors__V_220_220 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_356_356, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[100]), transform_hlds__term_errors__V_223_223);
          }
#line 383 "term_errors.m"
          {
#line 383 "term_errors.m"
            *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_356_356, transform_hlds__term_errors__Pieces1_317, transform_hlds__term_errors__V_220_220);
          }
#line 384 "term_errors.m"
          *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 368 "term_errors.m"
        }
#line 311 "term_errors.m"
        break;
#line 311 "term_errors.m"
      case (MR_Integer) 3:
#line 311 "term_errors.m"
#line 311 "term_errors.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 0)))) {
#line 311 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 311 "term_errors.m"
          case (MR_Integer) 0:
#line 386 "term_errors.m"
            {
#line 386 "term_errors.m"
              MR_Word transform_hlds__term_errors__TypeCtorInfo_358_358;
#line 386 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_201_201;
#line 386 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_204_204;
#line 386 "term_errors.m"
              MR_Word transform_hlds__term_errors__CallerPPId_323 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 386 "term_errors.m"
              MR_Word transform_hlds__term_errors__CalleePPId_324 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
#line 386 "term_errors.m"
              MR_Word transform_hlds__term_errors__Pieces1_326;
#line 386 "term_errors.m"
              MR_Word transform_hlds__term_errors__CalleePieces_328;

#line 392 "term_errors.m"
              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "term_errors.m"
                {
#line 394 "term_errors.m"
                  {
#line 394 "term_errors.m"
                    transform_hlds__term_errors__Pieces1_326 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_323);
                  }
#line 393 "term_errors.m"
                }
#line 392 "term_errors.m"
              else
#line 388 "term_errors.m"
                {
#line 388 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_191_191;
#line 388 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPId_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

#line 389 "term_errors.m"
                  {
#line 389 "term_errors.m"
                    transform_hlds__term_errors__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 389 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_191_191, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 389 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_191_191, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_6));
#line 389 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_191_191, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 389 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_191_191, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_321));
#line 389 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_191_191, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_323));
#line 389 "term_errors.m"
                  }
#line 389 "term_errors.m"
                  {
#line 389 "term_errors.m"
                    mercury__require__expect_4_p_0(transform_hlds__term_errors__V_191_191, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "inf_termination_const: caller outside this SCC");
                  }
#line 391 "term_errors.m"
                  transform_hlds__term_errors__Pieces1_326 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97]);
#line 388 "term_errors.m"
                }
#line 398 "term_errors.m"
              {
#line 398 "term_errors.m"
                transform_hlds__term_errors__CalleePieces_328 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_324);
              }
#line 4460 "transform_hlds.term_errors.c"
              transform_hlds__term_errors__TypeCtorInfo_358_358 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 401 "term_errors.m"
              {
#line 401 "term_errors.m"
                transform_hlds__term_errors__V_204_204 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_358_358, transform_hlds__term_errors__CalleePieces_328, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[108]));
              }
#line 401 "term_errors.m"
              {
#line 401 "term_errors.m"
                transform_hlds__term_errors__V_201_201 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_358_358, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[100]), transform_hlds__term_errors__V_204_204);
              }
#line 401 "term_errors.m"
              {
#line 401 "term_errors.m"
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_358_358, transform_hlds__term_errors__Pieces1_326, transform_hlds__term_errors__V_201_201);
              }
#line 402 "term_errors.m"
              {
#line 402 "term_errors.m"
                MR_Word base;
#line 402 "term_errors.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "term_errors.m"
                *transform_hlds__term_errors__Reason_10 = base;
#line 402 "term_errors.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__CalleePPId_324));
#line 402 "term_errors.m"
              }
#line 386 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 1:
#line 404 "term_errors.m"
            {
#line 404 "term_errors.m"
              MR_Word transform_hlds__term_errors__CallerPPId_332 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 404 "term_errors.m"
              MR_Word transform_hlds__term_errors__Pieces1_334;
#line 404 "term_errors.m"
              MR_Word transform_hlds__term_errors___ClosurePPIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));

#line 411 "term_errors.m"
              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "term_errors.m"
                {
#line 413 "term_errors.m"
                  {
#line 413 "term_errors.m"
                    transform_hlds__term_errors__Pieces1_334 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_332);
                  }
#line 412 "term_errors.m"
                }
#line 411 "term_errors.m"
              else
#line 407 "term_errors.m"
                {
#line 407 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_172_172;
#line 407 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPId_330 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

#line 408 "term_errors.m"
                  {
#line 408 "term_errors.m"
                    transform_hlds__term_errors__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 408 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 408 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_3));
#line 408 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 408 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 3) = ((MR_Box) (transform_hlds__term_errors__PPId_330));
#line 408 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_172_172, 4) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_332));
#line 408 "term_errors.m"
                  }
#line 408 "term_errors.m"
                  {
#line 408 "term_errors.m"
                    mercury__require__expect_4_p_0(transform_hlds__term_errors__V_172_172, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "ho_info_termination_const: caller outside this SCC");
                  }
#line 410 "term_errors.m"
                  transform_hlds__term_errors__Pieces1_334 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97]);
#line 407 "term_errors.m"
                }
#line 419 "term_errors.m"
              {
#line 419 "term_errors.m"
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_334, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[40]));
              }
#line 420 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 404 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 2:
#line 422 "term_errors.m"
            {
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__TypeCtorInfo_361_361;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__TypeCtorInfo_362_362;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__ProcPPId_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__OutputSuppliers_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__HeadVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 3)));
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__PredId_25;
#line 422 "term_errors.m"
              MR_Integer transform_hlds__term_errors__ProcId_26;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__ProcInfo_28;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__Varset_29;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__OutputSuppliersNames_30;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__OutputSuppliersPieces_33;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__HeadVarsNames_34;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__HeadVarsPieces_37;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_162_162;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_163_163;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_164_164;
#line 422 "term_errors.m"
              MR_Word transform_hlds__term_errors__Pieces1_343;
#line 443 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_27_27;

#line 435 "term_errors.m"
              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "term_errors.m"
                {
#line 436 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPIdPieces_336;

#line 437 "term_errors.m"
                  {
#line 437 "term_errors.m"
                    transform_hlds__term_errors__PPIdPieces_336 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__ProcPPId_21);
                  }
#line 439 "term_errors.m"
                  {
#line 439 "term_errors.m"
                    transform_hlds__term_errors__Pieces1_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "term_errors.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[109])));
#line 439 "term_errors.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 1) = ((MR_Box) (transform_hlds__term_errors__PPIdPieces_336));
#line 439 "term_errors.m"
                  }
#line 436 "term_errors.m"
                }
#line 435 "term_errors.m"
              else
#line 424 "term_errors.m"
                {
#line 424 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPId_335 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));

#line 425 "term_errors.m"
                  {
#line 425 "term_errors.m"
                    transform_hlds__term_errors__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_errors__PPId_335, transform_hlds__term_errors__ProcPPId_21);
                  }
#line 427 "term_errors.m"
                  if (transform_hlds__term_errors__succeeded)
#line 426 "term_errors.m"
                    {
#line 426 "term_errors.m"
                      transform_hlds__term_errors__Pieces1_343 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[111]);
#line 426 "term_errors.m"
                    }
#line 427 "term_errors.m"
                  else
#line 431 "term_errors.m"
                    {
#line 431 "term_errors.m"
                      MR_Word transform_hlds__term_errors__PPIdPieces_24;

#line 430 "term_errors.m"
                      {
#line 430 "term_errors.m"
                        transform_hlds__term_errors__PPIdPieces_24 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__ProcPPId_21);
                      }
#line 433 "term_errors.m"
                      {
#line 433 "term_errors.m"
                        transform_hlds__term_errors__Pieces1_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "term_errors.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[109])));
#line 433 "term_errors.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces1_343, 1) = ((MR_Box) (transform_hlds__term_errors__PPIdPieces_24));
#line 433 "term_errors.m"
                      }
#line 431 "term_errors.m"
                    }
#line 424 "term_errors.m"
                }
#line 442 "term_errors.m"
              transform_hlds__term_errors__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__ProcPPId_21, (MR_Integer) 0)));
#line 442 "term_errors.m"
              transform_hlds__term_errors__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__ProcPPId_21, (MR_Integer) 1)));
#line 443 "term_errors.m"
              {
#line 443 "term_errors.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__PredId_25, transform_hlds__term_errors__ProcId_26, &transform_hlds__term_errors__V_27_27, &transform_hlds__term_errors__ProcInfo_28);
              }
#line 444 "term_errors.m"
              {
#line 444 "term_errors.m"
                hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__term_errors__ProcInfo_28, &transform_hlds__term_errors__Varset_29);
              }
#line 445 "term_errors.m"
              {
#line 445 "term_errors.m"
                transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(transform_hlds__term_errors__OutputSuppliers_22, transform_hlds__term_errors__Varset_29, &transform_hlds__term_errors__OutputSuppliersNames_30);
              }
#line 4690 "transform_hlds.term_errors.c"
              transform_hlds__term_errors__TypeCtorInfo_361_361 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4692 "transform_hlds.term_errors.c"
              transform_hlds__term_errors__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 447 "term_errors.m"
              {
#line 447 "term_errors.m"
                mercury__list__map_3_p_0(transform_hlds__term_errors__TypeCtorInfo_361_361, transform_hlds__term_errors__TypeCtorInfo_362_362, (MR_Word) &transform_hlds__term_errors_scalar_common_2[1], transform_hlds__term_errors__OutputSuppliersNames_30, &transform_hlds__term_errors__OutputSuppliersPieces_33);
              }
#line 450 "term_errors.m"
              {
#line 450 "term_errors.m"
                transform_hlds__term_errors__term_errors_var_bag_description_3_p_0(transform_hlds__term_errors__HeadVars_23, transform_hlds__term_errors__Varset_29, &transform_hlds__term_errors__HeadVarsNames_34);
              }
#line 451 "term_errors.m"
              {
#line 451 "term_errors.m"
                mercury__list__map_3_p_0(transform_hlds__term_errors__TypeCtorInfo_361_361, transform_hlds__term_errors__TypeCtorInfo_362_362, (MR_Word) &transform_hlds__term_errors_scalar_common_2[2], transform_hlds__term_errors__HeadVarsNames_34, &transform_hlds__term_errors__HeadVarsPieces_37);
              }
#line 454 "term_errors.m"
              {
#line 454 "term_errors.m"
                transform_hlds__term_errors__V_164_164 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, transform_hlds__term_errors__HeadVarsPieces_37, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[32]));
              }
#line 453 "term_errors.m"
              {
#line 453 "term_errors.m"
                transform_hlds__term_errors__V_163_163 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[113]), transform_hlds__term_errors__V_164_164);
              }
#line 453 "term_errors.m"
              {
#line 453 "term_errors.m"
                transform_hlds__term_errors__V_162_162 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, transform_hlds__term_errors__OutputSuppliersPieces_33, transform_hlds__term_errors__V_163_163);
              }
#line 453 "term_errors.m"
              {
#line 453 "term_errors.m"
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_362_362, transform_hlds__term_errors__Pieces1_343, transform_hlds__term_errors__V_162_162);
              }
#line 455 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 3:
#line 325 "term_errors.m"
            {
#line 325 "term_errors.m"
              MR_Word transform_hlds__term_errors__TypeCtorInfo_352_352;
#line 325 "term_errors.m"
              MR_Word transform_hlds__term_errors__CallerPPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 325 "term_errors.m"
              MR_Word transform_hlds__term_errors__CalleePPId_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
#line 325 "term_errors.m"
              MR_Word transform_hlds__term_errors__Pieces1_14;
#line 325 "term_errors.m"
              MR_Word transform_hlds__term_errors__CalleePieces_16;
#line 325 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_276_276;
#line 325 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_279_279;

#line 331 "term_errors.m"
              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "term_errors.m"
                {
#line 333 "term_errors.m"
                  {
#line 333 "term_errors.m"
                    transform_hlds__term_errors__Pieces1_14 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallerPPId_11);
                  }
#line 332 "term_errors.m"
                }
#line 331 "term_errors.m"
              else
#line 327 "term_errors.m"
                {
#line 327 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));
#line 327 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_259_259;

#line 328 "term_errors.m"
                  {
#line 328 "term_errors.m"
                    transform_hlds__term_errors__V_259_259 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 328 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_259_259, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[0]));
#line 328 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_259_259, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_5));
#line 328 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_259_259, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 328 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_259_259, 3) = ((MR_Box) (transform_hlds__term_errors__CallerPPId_11));
#line 328 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_259_259, 4) = ((MR_Box) (transform_hlds__term_errors__PPId_13));
#line 328 "term_errors.m"
                  }
#line 328 "term_errors.m"
                  {
#line 328 "term_errors.m"
                    mercury__require__expect_4_p_0(transform_hlds__term_errors__V_259_259, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "inf_call: caller outside this SCC");
                  }
#line 330 "term_errors.m"
                  transform_hlds__term_errors__Pieces1_14 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[97]);
#line 327 "term_errors.m"
                }
#line 337 "term_errors.m"
              {
#line 337 "term_errors.m"
                transform_hlds__term_errors__CalleePieces_16 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CalleePPId_12);
              }
#line 4804 "transform_hlds.term_errors.c"
              transform_hlds__term_errors__TypeCtorInfo_352_352 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 341 "term_errors.m"
              {
#line 341 "term_errors.m"
                transform_hlds__term_errors__V_279_279 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_352_352, transform_hlds__term_errors__CalleePieces_16, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[54]));
              }
#line 341 "term_errors.m"
              {
#line 341 "term_errors.m"
                transform_hlds__term_errors__V_276_276 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_352_352, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[100]), transform_hlds__term_errors__V_279_279);
              }
#line 341 "term_errors.m"
              {
#line 341 "term_errors.m"
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_352_352, transform_hlds__term_errors__Pieces1_14, transform_hlds__term_errors__V_276_276);
              }
#line 342 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 4:
#line 457 "term_errors.m"
            {
#line 457 "term_errors.m"
              MR_Word transform_hlds__term_errors__CallSites_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 2)));
#line 457 "term_errors.m"
              MR_Word transform_hlds__term_errors___StartPPId_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));
#line 464 "term_errors.m"
              MR_Word transform_hlds__term_errors__DirectCall_40;
#line 458 "term_errors.m"
              MR_Word transform_hlds__term_errors__V_114_114;

#line 458 "term_errors.m"
              transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__CallSites_39)) == (MR_mktag((MR_Integer) 1)));
#line 458 "term_errors.m"
              if (transform_hlds__term_errors__succeeded)
#line 458 "term_errors.m"
                {
#line 458 "term_errors.m"
                  transform_hlds__term_errors__DirectCall_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__CallSites_39, (MR_Integer) 0)));
#line 458 "term_errors.m"
                  transform_hlds__term_errors__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__CallSites_39, (MR_Integer) 1)));
#line 458 "term_errors.m"
                  transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_114_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 458 "term_errors.m"
                }
#line 464 "term_errors.m"
              if (transform_hlds__term_errors__succeeded)
#line 460 "term_errors.m"
                {
#line 460 "term_errors.m"
                  MR_Word transform_hlds__term_errors__SitePieces_41;
#line 460 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_116_116;

#line 459 "term_errors.m"
                  {
#line 459 "term_errors.m"
                    transform_hlds__term_errors__SitePieces_41 = hlds__hlds_error_util__describe_one_call_site_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__DirectCall_40);
                  }
#line 461 "term_errors.m"
                  {
#line 461 "term_errors.m"
                    transform_hlds__term_errors__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "term_errors.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_116_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__term_errors_scalar_common_1[102])));
#line 461 "term_errors.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_116_116, 1) = ((MR_Box) (transform_hlds__term_errors__SitePieces_41));
#line 461 "term_errors.m"
                  }
#line 461 "term_errors.m"
                  {
#line 461 "term_errors.m"
                    *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__V_116_116, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[16]));
                  }
#line 460 "term_errors.m"
                }
#line 464 "term_errors.m"
              else
#line 465 "term_errors.m"
                {
#line 465 "term_errors.m"
                  MR_Word transform_hlds__term_errors__TypeCtorInfo_364_364 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 465 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_132_132;
#line 465 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_133_133;

#line 466 "term_errors.m"
                  {
#line 466 "term_errors.m"
                    transform_hlds__term_errors__V_133_133 = hlds__hlds_error_util__describe_several_call_sites_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__CallSites_39);
                  }
#line 467 "term_errors.m"
                  {
#line 467 "term_errors.m"
                    transform_hlds__term_errors__V_132_132 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_364_364, transform_hlds__term_errors__V_133_133, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[20]));
                  }
#line 465 "term_errors.m"
                  {
#line 465 "term_errors.m"
                    *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0(transform_hlds__term_errors__TypeCtorInfo_364_364, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[104]), transform_hlds__term_errors__V_132_132);
                  }
#line 465 "term_errors.m"
                }
#line 471 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 457 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 5:
#line 488 "term_errors.m"
            {
#line 491 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[56]);
#line 492 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 488 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 6:
#line 494 "term_errors.m"
            {
#line 494 "term_errors.m"
              MR_Word transform_hlds__term_errors__Pieces2_349;
#line 494 "term_errors.m"
              MR_Word transform_hlds__term_errors__PredId_350 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_8, (MR_Integer) 1)));

#line 503 "term_errors.m"
              if ((transform_hlds__term_errors__Single_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 504 "term_errors.m"
                {
#line 504 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_68_68;

#line 505 "term_errors.m"
                  {
#line 505 "term_errors.m"
                    transform_hlds__term_errors__V_68_68 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__PredId_350);
                  }
#line 506 "term_errors.m"
                  {
#line 506 "term_errors.m"
                    transform_hlds__term_errors__Pieces2_349 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__V_68_68, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[32]));
                  }
#line 504 "term_errors.m"
                }
#line 503 "term_errors.m"
              else
#line 498 "term_errors.m"
                {
#line 498 "term_errors.m"
                  MR_Word transform_hlds__term_errors__SCCPredId_43;
#line 498 "term_errors.m"
                  MR_Word transform_hlds__term_errors__V_76_76;
#line 498 "term_errors.m"
                  MR_Word transform_hlds__term_errors__PPId_345 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_7, (MR_Integer) 0)));
#line 499 "term_errors.m"
                  MR_Integer transform_hlds__term_errors__V_44_44;

#line 499 "term_errors.m"
                  transform_hlds__term_errors__SCCPredId_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__PPId_345, (MR_Integer) 0)));
#line 499 "term_errors.m"
                  transform_hlds__term_errors__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__PPId_345, (MR_Integer) 1)));
#line 500 "term_errors.m"
                  {
#line 500 "term_errors.m"
                    transform_hlds__term_errors__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 500 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 0) = ((MR_Box) (&transform_hlds__term_errors_scalar_common_4[1]));
#line 500 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 1) = ((MR_Box) (transform_hlds__term_errors__term_error_kind_description_5_p_0_2));
#line 500 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 500 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 3) = ((MR_Box) (transform_hlds__term_errors__SCCPredId_43));
#line 500 "term_errors.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_76_76, 4) = ((MR_Box) (transform_hlds__term_errors__PredId_350));
#line 500 "term_errors.m"
                  }
#line 500 "term_errors.m"
                  {
#line 500 "term_errors.m"
                    mercury__require__expect_4_p_0(transform_hlds__term_errors__V_76_76, (MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.term_error_kind_description\'/5", (MR_String) "does not terminate pragma outside this SCC");
                  }
#line 502 "term_errors.m"
                  transform_hlds__term_errors__Pieces2_349 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[34]);
#line 498 "term_errors.m"
                }
#line 508 "term_errors.m"
              {
#line 508 "term_errors.m"
                *transform_hlds__term_errors__Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[30]), transform_hlds__term_errors__Pieces2_349);
              }
#line 509 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
          case (MR_Integer) 7:
#line 515 "term_errors.m"
            {
#line 516 "term_errors.m"
              *transform_hlds__term_errors__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[24]);
#line 518 "term_errors.m"
              *transform_hlds__term_errors__Reason_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "term_errors.m"
            }
#line 311 "term_errors.m"
            break;
#line 311 "term_errors.m"
        }
#line 311 "term_errors.m"
        break;
#line 311 "term_errors.m"
    }
#line 311 "term_errors.m"
  }
#line 305 "term_errors.m"
}

#line 267 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__describe_term_error_8_p_0(
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_9,
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_10,
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__TermErrorContext_11,
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorNum_12,
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_0_28,
#line 267 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_29,
#line 267 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30,
#line 267 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_31)
#line 267 "term_errors.m"
{
#line 272 "term_errors.m"
  {
#line 272 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 272 "term_errors.m"
    MR_Word transform_hlds__term_errors__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__TermErrorContext_11, (MR_Integer) 0)));
#line 272 "term_errors.m"
    MR_Word transform_hlds__term_errors__ErrorKind_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_errors__TermErrorContext_11, (MR_Integer) 1)));
#line 272 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces0_17;
#line 272 "term_errors.m"
    MR_Word transform_hlds__term_errors__Reason_18;
#line 272 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces_22;
#line 272 "term_errors.m"
    MR_Word transform_hlds__term_errors__ReasonMsg_23;
#line 272 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_36_36;
#line 272 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_39_39;
#line 272 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_40_40;

#line 274 "term_errors.m"
    {
#line 274 "term_errors.m"
      transform_hlds__term_errors__term_error_kind_description_5_p_0(transform_hlds__term_errors__ModuleInfo_9, transform_hlds__term_errors__Single_10, transform_hlds__term_errors__ErrorKind_16, &transform_hlds__term_errors__Pieces0_17, &transform_hlds__term_errors__Reason_18);
    }
#line 281 "term_errors.m"
    if ((transform_hlds__term_errors__ErrorNum_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "term_errors.m"
      transform_hlds__term_errors__Pieces_22 = transform_hlds__term_errors__Pieces0_17;
#line 281 "term_errors.m"
    else
#line 277 "term_errors.m"
      {
#line 277 "term_errors.m"
        MR_Integer transform_hlds__term_errors__N_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ErrorNum_12, (MR_Integer) 0)));
#line 277 "term_errors.m"
        MR_String transform_hlds__term_errors__Nstr_20;
#line 277 "term_errors.m"
        MR_String transform_hlds__term_errors__Preamble_21;
#line 277 "term_errors.m"
        MR_String transform_hlds__term_errors__V_33_33;
#line 277 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_35_35;

#line 278 "term_errors.m"
        {
#line 278 "term_errors.m"
          mercury__string__int_to_string_2_p_0(transform_hlds__term_errors__N_19, &transform_hlds__term_errors__Nstr_20);
        }
#line 279 "term_errors.m"
        {
#line 279 "term_errors.m"
          transform_hlds__term_errors__V_33_33 = mercury__string__f_43_43_2_f_0(transform_hlds__term_errors__Nstr_20, (MR_String) ":");
        }
#line 279 "term_errors.m"
        {
#line 279 "term_errors.m"
          transform_hlds__term_errors__Preamble_21 = mercury__string__f_43_43_2_f_0((MR_String) "Reason ", transform_hlds__term_errors__V_33_33);
        }
#line 280 "term_errors.m"
        {
#line 280 "term_errors.m"
          transform_hlds__term_errors__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 280 "term_errors.m"
          MR_hl_field(MR_mktag(2), transform_hlds__term_errors__V_35_35, 0) = ((MR_Box) (transform_hlds__term_errors__Preamble_21));
#line 280 "term_errors.m"
        }
#line 280 "term_errors.m"
        {
#line 280 "term_errors.m"
          transform_hlds__term_errors__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces_22, 0) = ((MR_Box) (transform_hlds__term_errors__V_35_35));
#line 280 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Pieces_22, 1) = ((MR_Box) (transform_hlds__term_errors__Pieces0_17));
#line 280 "term_errors.m"
        }
#line 277 "term_errors.m"
      }
#line 285 "term_errors.m"
    {
#line 285 "term_errors.m"
      transform_hlds__term_errors__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 285 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_36_36, 0) = ((MR_Box) (transform_hlds__term_errors__Context_15));
#line 285 "term_errors.m"
    }
#line 285 "term_errors.m"
    {
#line 285 "term_errors.m"
      transform_hlds__term_errors__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 285 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_40_40, 0) = ((MR_Box) (transform_hlds__term_errors__Pieces_22));
#line 285 "term_errors.m"
    }
#line 285 "term_errors.m"
    {
#line 285 "term_errors.m"
      transform_hlds__term_errors__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_39_39, 0) = ((MR_Box) (transform_hlds__term_errors__V_40_40));
#line 285 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "term_errors.m"
    }
#line 285 "term_errors.m"
    {
#line 285 "term_errors.m"
      transform_hlds__term_errors__ReasonMsg_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 285 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 0) = ((MR_Box) (transform_hlds__term_errors__V_36_36));
#line 285 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 1) = ((MR_Box) ((MR_Integer) 0));
#line 285 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 2) = ((MR_Box) ((MR_Integer) 0));
#line 285 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ReasonMsg_23, 3) = ((MR_Box) (transform_hlds__term_errors__V_39_39));
#line 285 "term_errors.m"
    }
#line 286 "term_errors.m"
    {
#line 286 "term_errors.m"
      *transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_29 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_errors__STATE_VARIABLE_ReasonMsgs_0_28, ((MR_Box) (transform_hlds__term_errors__ReasonMsg_23)));
    }
#line 301 "term_errors.m"
    if ((transform_hlds__term_errors__Reason_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "term_errors.m"
      *transform_hlds__term_errors__STATE_VARIABLE_Specs_31 = transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30;
#line 301 "term_errors.m"
    else
#line 288 "term_errors.m"
      {
#line 288 "term_errors.m"
        MR_Word transform_hlds__term_errors__InfArgSizePPId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Reason_18, (MR_Integer) 0)));
#line 288 "term_errors.m"
        MR_Word transform_hlds__term_errors__ArgSize_25;
#line 297 "term_errors.m"
        MR_Word transform_hlds__term_errors__ArgSizeErrors_26;
#line 290 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_43_43;

#line 289 "term_errors.m"
        {
#line 289 "term_errors.m"
          transform_hlds__term_util__lookup_proc_arg_size_info_3_p_0(transform_hlds__term_errors__ModuleInfo_9, transform_hlds__term_errors__InfArgSizePPId_24, &transform_hlds__term_errors__ArgSize_25);
        }
#line 290 "term_errors.m"
        transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__ArgSize_25)) == (MR_mktag((MR_Integer) 1)));
#line 290 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 290 "term_errors.m"
          {
#line 290 "term_errors.m"
            transform_hlds__term_errors__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ArgSize_25, (MR_Integer) 0)));
#line 290 "term_errors.m"
            transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 290 "term_errors.m"
            if (transform_hlds__term_errors__succeeded)
#line 290 "term_errors.m"
              transform_hlds__term_errors__ArgSizeErrors_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_43_43, (MR_Integer) 0)));
#line 290 "term_errors.m"
          }
#line 297 "term_errors.m"
        if (transform_hlds__term_errors__succeeded)
#line 294 "term_errors.m"
          {
#line 294 "term_errors.m"
            MR_Word transform_hlds__term_errors__ArgSizePPIdSCC_27;

#line 294 "term_errors.m"
            {
#line 294 "term_errors.m"
              transform_hlds__term_errors__ArgSizePPIdSCC_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "term_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ArgSizePPIdSCC_27, 0) = ((MR_Box) (transform_hlds__term_errors__InfArgSizePPId_24));
#line 294 "term_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_errors__ArgSizePPIdSCC_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "term_errors.m"
            }
#line 295 "term_errors.m"
            {
#line 295 "term_errors.m"
              transform_hlds__term_errors__report_arg_size_errors_5_p_0(transform_hlds__term_errors__ModuleInfo_9, transform_hlds__term_errors__ArgSizePPIdSCC_27, transform_hlds__term_errors__ArgSizeErrors_26, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_30, transform_hlds__term_errors__STATE_VARIABLE_Specs_31);
#line 295 "term_errors.m"
              return;
            }
#line 294 "term_errors.m"
          }
#line 297 "term_errors.m"
        else
#line 298 "term_errors.m"
          {
#line 298 "term_errors.m"
            {
#line 298 "term_errors.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.describe_term_error\'/8", (MR_String) "inf arg size procedure does not have inf arg size");
#line 298 "term_errors.m"
              return;
            }
#line 298 "term_errors.m"
          }
#line 288 "term_errors.m"
      }
#line 272 "term_errors.m"
  }
#line 267 "term_errors.m"
}

#line 255 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__describe_term_errors_8_p_0(
#line 255 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_1,
#line 255 "term_errors.m"
  MR_Word transform_hlds__term_errors__Single_2,
#line 255 "term_errors.m"
  MR_Word transform_hlds__term_errors__HeadVar__3_3,
#line 255 "term_errors.m"
  MR_Integer transform_hlds__term_errors__ErrNum0_4,
#line 255 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5,
#line 255 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Msgs_6,
#line 255 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7,
#line 255 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_8)
#line 255 "term_errors.m"
{
#line 259 "term_errors.m"
  while (MR_TRUE)
#line 259 "term_errors.m"
    {
#line 259 "term_errors.m"
      /* tailcall optimized into a loop */
#line 259 "term_errors.m"
      {
#line 259 "term_errors.m"
        MR_bool transform_hlds__term_errors__succeeded;

#line 259 "term_errors.m"
        if ((transform_hlds__term_errors__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "term_errors.m"
          {
#line 259 "term_errors.m"
            *transform_hlds__term_errors__STATE_VARIABLE_Specs_8 = transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7;
#line 259 "term_errors.m"
            *transform_hlds__term_errors__STATE_VARIABLE_Msgs_6 = transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5;
#line 259 "term_errors.m"
          }
#line 259 "term_errors.m"
        else
#line 261 "term_errors.m"
          {
#line 261 "term_errors.m"
            MR_Word transform_hlds__term_errors__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "term_errors.m"
            MR_Word transform_hlds__term_errors__Errors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_29_29;
#line 261 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_30;
#line 261 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_31_31;
#line 261 "term_errors.m"
            MR_Integer transform_hlds__term_errors__V_32_32;

#line 262 "term_errors.m"
            {
#line 262 "term_errors.m"
              transform_hlds__term_errors__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 262 "term_errors.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_29_29, 0) = ((MR_Box) (transform_hlds__term_errors__ErrNum0_4));
#line 262 "term_errors.m"
            }
#line 262 "term_errors.m"
            {
#line 262 "term_errors.m"
              transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_1, transform_hlds__term_errors__Single_2, transform_hlds__term_errors__Error_20, transform_hlds__term_errors__V_29_29, transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5, &transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_30, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7, &transform_hlds__term_errors__STATE_VARIABLE_Specs_31_31);
            }
#line 264 "term_errors.m"
            transform_hlds__term_errors__V_32_32 = (transform_hlds__term_errors__ErrNum0_4 + (MR_Integer) 1);
#line 264 "term_errors.m"
            /* direct tailcall eliminated */
#line 264 "term_errors.m"
            {
#line 264 "term_errors.m"
              MR_Word transform_hlds__term_errors__HeadVar__3__tmp_copy_3 = transform_hlds__term_errors__Errors_21;
#line 264 "term_errors.m"
              MR_Integer transform_hlds__term_errors__ErrNum0__tmp_copy_4 = transform_hlds__term_errors__V_32_32;
#line 264 "term_errors.m"
              MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_0__tmp_copy_5 = transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_30;
#line 264 "term_errors.m"
              MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0__tmp_copy_7 = transform_hlds__term_errors__STATE_VARIABLE_Specs_31_31;

#line 264 "term_errors.m"
              transform_hlds__term_errors__STATE_VARIABLE_Specs_0_7 = transform_hlds__term_errors__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 264 "term_errors.m"
              transform_hlds__term_errors__STATE_VARIABLE_Msgs_0_5 = transform_hlds__term_errors__STATE_VARIABLE_Msgs_0__tmp_copy_5;
#line 264 "term_errors.m"
              transform_hlds__term_errors__ErrNum0_4 = transform_hlds__term_errors__ErrNum0__tmp_copy_4;
#line 264 "term_errors.m"
              transform_hlds__term_errors__HeadVar__3_3 = transform_hlds__term_errors__HeadVar__3__tmp_copy_3;
#line 264 "term_errors.m"
            }
#line 264 "term_errors.m"
            continue;
#line 261 "term_errors.m"
          }
#line 259 "term_errors.m"
      }
#line 259 "term_errors.m"
      break;
#line 259 "term_errors.m"
    }
#line 255 "term_errors.m"
}

#line 217 "term_errors.m"
static void MR_CALL 
transform_hlds__term_errors__report_arg_size_errors_5_p_0(
#line 217 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
#line 217 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCC_7,
#line 217 "term_errors.m"
  MR_Word transform_hlds__term_errors__Errors_8,
#line 217 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25,
#line 217 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_26)
#line 217 "term_errors.m"
{
#line 220 "term_errors.m"
  {
#line 220 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__Context_10;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces1_12;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__Single_13;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces_17;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__ReasonMsgsCord_18;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__ReasonMsgs_22;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__Msgs_23;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__Spec_24;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_63_63;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_64_64;
#line 220 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_65_65;
#line 226 "term_errors.m"
    MR_Word transform_hlds__term_errors__PPId_11;
#line 222 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_27_27;

#line 221 "term_errors.m"
    {
#line 221 "term_errors.m"
      transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__SCC_7, &transform_hlds__term_errors__Context_10);
    }
#line 222 "term_errors.m"
    transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__SCC_7)) == (MR_mktag((MR_Integer) 1)));
#line 222 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 222 "term_errors.m"
      {
#line 222 "term_errors.m"
        transform_hlds__term_errors__PPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_7, (MR_Integer) 0)));
#line 222 "term_errors.m"
        transform_hlds__term_errors__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_7, (MR_Integer) 1)));
#line 222 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "term_errors.m"
      }
#line 226 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 224 "term_errors.m"
      {
#line 224 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_32_32;

#line 224 "term_errors.m"
        {
#line 224 "term_errors.m"
          transform_hlds__term_errors__V_32_32 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__PPId_11);
        }
#line 223 "term_errors.m"
        {
#line 223 "term_errors.m"
          transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[88]), transform_hlds__term_errors__V_32_32);
        }
#line 225 "term_errors.m"
        {
#line 225 "term_errors.m"
          transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 225 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_13, 0) = ((MR_Box) (transform_hlds__term_errors__PPId_11));
#line 225 "term_errors.m"
        }
#line 224 "term_errors.m"
      }
#line 226 "term_errors.m"
    else
#line 230 "term_errors.m"
      {
#line 230 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_41_41;

#line 229 "term_errors.m"
        {
#line 229 "term_errors.m"
          transform_hlds__term_errors__V_41_41 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__SCC_7);
        }
#line 228 "term_errors.m"
        {
#line 228 "term_errors.m"
          transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[11]), transform_hlds__term_errors__V_41_41);
        }
#line 231 "term_errors.m"
        transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 230 "term_errors.m"
      }
#line 237 "term_errors.m"
    if ((transform_hlds__term_errors__Errors_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 235 "term_errors.m"
      {
#line 236 "term_errors.m"
        {
#line 236 "term_errors.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_errors", (MR_String) "predicate \140transform_hlds.term_errors.report_arg_size_errors\'/5", (MR_String) "empty list of errors");
#line 236 "term_errors.m"
          return;
        }
#line 235 "term_errors.m"
      }
#line 237 "term_errors.m"
    else
#line 237 "term_errors.m"
      {
#line 237 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
#line 237 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));

#line 237 "term_errors.m"
        if ((transform_hlds__term_errors__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "term_errors.m"
          {
#line 238 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_58_58;

#line 240 "term_errors.m"
            {
#line 240 "term_errors.m"
              transform_hlds__term_errors__Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[92]));
            }
#line 242 "term_errors.m"
            {
#line 242 "term_errors.m"
              transform_hlds__term_errors__V_58_58 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
            }
#line 241 "term_errors.m"
            {
#line 241 "term_errors.m"
              transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__V_79_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_errors__V_58_58, &transform_hlds__term_errors__ReasonMsgsCord_18, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25, &transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59);
            }
#line 238 "term_errors.m"
          }
#line 237 "term_errors.m"
        else
#line 244 "term_errors.m"
          {
#line 244 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_50_50;
#line 244 "term_errors.m"
            MR_Word transform_hlds__term_errors__Error_91;
#line 244 "term_errors.m"
            MR_Word transform_hlds__term_errors__Errors_92;
#line 244 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_101;
#line 244 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_31_102;

#line 246 "term_errors.m"
            {
#line 246 "term_errors.m"
              transform_hlds__term_errors__Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[95]));
            }
#line 248 "term_errors.m"
            {
#line 248 "term_errors.m"
              transform_hlds__term_errors__V_50_50 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
            }
#line 260 "term_errors.m"
            transform_hlds__term_errors__Error_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));
#line 260 "term_errors.m"
            transform_hlds__term_errors__Errors_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
#line 262 "term_errors.m"
            {
#line 262 "term_errors.m"
              transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Error_91, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_3[0]), transform_hlds__term_errors__V_50_50, &transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_101, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_25, &transform_hlds__term_errors__STATE_VARIABLE_Specs_31_102);
            }
#line 264 "term_errors.m"
            {
#line 264 "term_errors.m"
              transform_hlds__term_errors__describe_term_errors_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Errors_92, ((MR_Integer) 1 + (MR_Integer) 1), transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_101, &transform_hlds__term_errors__ReasonMsgsCord_18, transform_hlds__term_errors__STATE_VARIABLE_Specs_31_102, &transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59);
            }
#line 244 "term_errors.m"
          }
#line 237 "term_errors.m"
      }
#line 250 "term_errors.m"
    {
#line 250 "term_errors.m"
      transform_hlds__term_errors__ReasonMsgs_22 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_errors__ReasonMsgsCord_18);
    }
#line 251 "term_errors.m"
    {
#line 251 "term_errors.m"
      transform_hlds__term_errors__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 251 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_65_65, 0) = ((MR_Box) (transform_hlds__term_errors__Pieces_17));
#line 251 "term_errors.m"
    }
#line 251 "term_errors.m"
    {
#line 251 "term_errors.m"
      transform_hlds__term_errors__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_64_64, 0) = ((MR_Box) (transform_hlds__term_errors__V_65_65));
#line 251 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "term_errors.m"
    }
#line 251 "term_errors.m"
    {
#line 251 "term_errors.m"
      transform_hlds__term_errors__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 251 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_63_63, 0) = ((MR_Box) (transform_hlds__term_errors__Context_10));
#line 251 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_63_63, 1) = ((MR_Box) (transform_hlds__term_errors__V_64_64));
#line 251 "term_errors.m"
    }
#line 251 "term_errors.m"
    {
#line 251 "term_errors.m"
      transform_hlds__term_errors__Msgs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_23, 0) = ((MR_Box) (transform_hlds__term_errors__V_63_63));
#line 251 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_23, 1) = ((MR_Box) (transform_hlds__term_errors__ReasonMsgs_22));
#line 251 "term_errors.m"
    }
#line 252 "term_errors.m"
    {
#line 252 "term_errors.m"
      transform_hlds__term_errors__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 252 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 252 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 252 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_24, 2) = ((MR_Box) (transform_hlds__term_errors__Msgs_23));
#line 252 "term_errors.m"
    }
#line 253 "term_errors.m"
    {
#line 253 "term_errors.m"
      MR_Word base;
#line 253 "term_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "term_errors.m"
      *transform_hlds__term_errors__STATE_VARIABLE_Specs_26 = base;
#line 253 "term_errors.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__Spec_24));
#line 253 "term_errors.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_errors__STATE_VARIABLE_Specs_59_59));
#line 253 "term_errors.m"
    }
#line 220 "term_errors.m"
  }
#line 217 "term_errors.m"
}

#line 158 "term_errors.m"
MR_Word MR_CALL 
transform_hlds__term_errors__term_error_kind_is_fatal_error_1_f_0(
#line 158 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorKind_3)
#line 158 "term_errors.m"
{
#line 599 "term_errors.m"
  {
#line 599 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 599 "term_errors.m"
    MR_Word transform_hlds__term_errors__IsFatal_4;

#line 599 "term_errors.m"
#line 599 "term_errors.m"
    switch (MR_tag((MR_Word) transform_hlds__term_errors__ErrorKind_3)) {
#line 599 "term_errors.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 599 "term_errors.m"
      case (MR_Integer) 0:
#line 599 "term_errors.m"
#line 599 "term_errors.m"
        switch (MR_unmkbody(transform_hlds__term_errors__ErrorKind_3)) {
#line 599 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 599 "term_errors.m"
          case (MR_Integer) 0:
#line 599 "term_errors.m"
          case (MR_Integer) 4:
#line 599 "term_errors.m"
          case (MR_Integer) 5:
#line 599 "term_errors.m"
          case (MR_Integer) 6:
#line 599 "term_errors.m"
          case (MR_Integer) 7:
#line 617 "term_errors.m"
            transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 0;
#line 599 "term_errors.m"
            break;
#line 599 "term_errors.m"
          case (MR_Integer) 1:
#line 599 "term_errors.m"
          case (MR_Integer) 2:
#line 599 "term_errors.m"
          case (MR_Integer) 3:
#line 600 "term_errors.m"
            transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 1;
#line 599 "term_errors.m"
            break;
#line 599 "term_errors.m"
        }
#line 599 "term_errors.m"
        break;
#line 599 "term_errors.m"
      case (MR_Integer) 1:
#line 617 "term_errors.m"
        transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 0;
#line 599 "term_errors.m"
        break;
#line 599 "term_errors.m"
      case (MR_Integer) 2:
#line 600 "term_errors.m"
        transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 1;
#line 599 "term_errors.m"
        break;
#line 599 "term_errors.m"
      case (MR_Integer) 3:
#line 617 "term_errors.m"
        transform_hlds__term_errors__IsFatal_4 = (MR_Integer) 0;
#line 599 "term_errors.m"
        break;
#line 599 "term_errors.m"
    }
#line 599 "term_errors.m"
    return transform_hlds__term_errors__IsFatal_4;
#line 599 "term_errors.m"
  }
#line 158 "term_errors.m"
}

#line 154 "term_errors.m"
MR_Word MR_CALL 
transform_hlds__term_errors__term_error_kind_is_direct_error_1_f_0(
#line 154 "term_errors.m"
  MR_Word transform_hlds__term_errors__ErrorKind_3)
#line 154 "term_errors.m"
{
#line 575 "term_errors.m"
  {
#line 575 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 575 "term_errors.m"
    MR_Word transform_hlds__term_errors__IsDirect_4;

#line 575 "term_errors.m"
#line 575 "term_errors.m"
    switch (MR_tag((MR_Word) transform_hlds__term_errors__ErrorKind_3)) {
#line 575 "term_errors.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 575 "term_errors.m"
      case (MR_Integer) 0:
#line 575 "term_errors.m"
#line 575 "term_errors.m"
        switch (MR_unmkbody(transform_hlds__term_errors__ErrorKind_3)) {
#line 575 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 575 "term_errors.m"
          case (MR_Integer) 0:
#line 575 "term_errors.m"
          case (MR_Integer) 1:
#line 575 "term_errors.m"
          case (MR_Integer) 2:
#line 575 "term_errors.m"
          case (MR_Integer) 3:
#line 576 "term_errors.m"
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 0;
#line 575 "term_errors.m"
            break;
#line 575 "term_errors.m"
          case (MR_Integer) 4:
#line 575 "term_errors.m"
          case (MR_Integer) 5:
#line 575 "term_errors.m"
          case (MR_Integer) 6:
#line 575 "term_errors.m"
          case (MR_Integer) 7:
#line 590 "term_errors.m"
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 1;
#line 575 "term_errors.m"
            break;
#line 575 "term_errors.m"
        }
#line 575 "term_errors.m"
        break;
#line 575 "term_errors.m"
      case (MR_Integer) 1:
#line 575 "term_errors.m"
      case (MR_Integer) 2:
#line 576 "term_errors.m"
        transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 0;
#line 575 "term_errors.m"
        break;
#line 575 "term_errors.m"
      case (MR_Integer) 3:
#line 575 "term_errors.m"
#line 575 "term_errors.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_errors__ErrorKind_3, (MR_Integer) 0)))) {
#line 575 "term_errors.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 575 "term_errors.m"
          case (MR_Integer) 0:
#line 575 "term_errors.m"
          case (MR_Integer) 1:
#line 575 "term_errors.m"
          case (MR_Integer) 2:
#line 575 "term_errors.m"
          case (MR_Integer) 3:
#line 575 "term_errors.m"
          case (MR_Integer) 4:
#line 575 "term_errors.m"
          case (MR_Integer) 5:
#line 575 "term_errors.m"
          case (MR_Integer) 7:
#line 590 "term_errors.m"
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 1;
#line 575 "term_errors.m"
            break;
#line 575 "term_errors.m"
          case (MR_Integer) 6:
#line 576 "term_errors.m"
            transform_hlds__term_errors__IsDirect_4 = (MR_Integer) 0;
#line 575 "term_errors.m"
            break;
#line 575 "term_errors.m"
        }
#line 575 "term_errors.m"
        break;
#line 575 "term_errors.m"
    }
#line 575 "term_errors.m"
    return transform_hlds__term_errors__IsDirect_4;
#line 575 "term_errors.m"
  }
#line 154 "term_errors.m"
}

#line 144 "term_errors.m"
void MR_CALL 
transform_hlds__term_errors__report_term_errors_5_p_0(
#line 144 "term_errors.m"
  MR_Word transform_hlds__term_errors__ModuleInfo_6,
#line 144 "term_errors.m"
  MR_Word transform_hlds__term_errors__SCC_7,
#line 144 "term_errors.m"
  MR_Word transform_hlds__term_errors__Errors_8,
#line 144 "term_errors.m"
  MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24,
#line 144 "term_errors.m"
  MR_Word * transform_hlds__term_errors__STATE_VARIABLE_Specs_25)
#line 144 "term_errors.m"
{
#line 179 "term_errors.m"
  {
#line 179 "term_errors.m"
    MR_bool transform_hlds__term_errors__succeeded;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__Context_10;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces1_12;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__Single_13;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__Pieces_15;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__ReasonMsgsCord_16;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__ReasonMsgs_21;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__Msgs_22;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__Spec_23;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_59_59;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_60_60;
#line 179 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_61_61;
#line 185 "term_errors.m"
    MR_Word transform_hlds__term_errors__PPId_11;
#line 181 "term_errors.m"
    MR_Word transform_hlds__term_errors__V_26_26;

#line 180 "term_errors.m"
    {
#line 180 "term_errors.m"
      transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__SCC_7, &transform_hlds__term_errors__Context_10);
    }
#line 181 "term_errors.m"
    transform_hlds__term_errors__succeeded = ((MR_tag((MR_Word) transform_hlds__term_errors__SCC_7)) == (MR_mktag((MR_Integer) 1)));
#line 181 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 181 "term_errors.m"
      {
#line 181 "term_errors.m"
        transform_hlds__term_errors__PPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_7, (MR_Integer) 0)));
#line 181 "term_errors.m"
        transform_hlds__term_errors__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__SCC_7, (MR_Integer) 1)));
#line 181 "term_errors.m"
        transform_hlds__term_errors__succeeded = (transform_hlds__term_errors__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "term_errors.m"
      }
#line 185 "term_errors.m"
    if (transform_hlds__term_errors__succeeded)
#line 183 "term_errors.m"
      {
#line 183 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_31_31;

#line 183 "term_errors.m"
        {
#line 183 "term_errors.m"
          transform_hlds__term_errors__V_31_31 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__PPId_11);
        }
#line 182 "term_errors.m"
        {
#line 182 "term_errors.m"
          transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[80]), transform_hlds__term_errors__V_31_31);
        }
#line 184 "term_errors.m"
        {
#line 184 "term_errors.m"
          transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 184 "term_errors.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Single_13, 0) = ((MR_Box) (transform_hlds__term_errors__PPId_11));
#line 184 "term_errors.m"
        }
#line 183 "term_errors.m"
      }
#line 185 "term_errors.m"
    else
#line 189 "term_errors.m"
      {
#line 189 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_40_40;

#line 188 "term_errors.m"
        {
#line 188 "term_errors.m"
          transform_hlds__term_errors__V_40_40 = hlds__hlds_error_util__describe_several_proc_names_3_f_0(transform_hlds__term_errors__ModuleInfo_6, (MR_Integer) 0, transform_hlds__term_errors__SCC_7);
        }
#line 187 "term_errors.m"
        {
#line 187 "term_errors.m"
          transform_hlds__term_errors__Pieces1_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[7]), transform_hlds__term_errors__V_40_40);
        }
#line 190 "term_errors.m"
        transform_hlds__term_errors__Single_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "term_errors.m"
      }
#line 199 "term_errors.m"
    if ((transform_hlds__term_errors__Errors_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "term_errors.m"
      {
#line 197 "term_errors.m"
        {
#line 197 "term_errors.m"
          transform_hlds__term_errors__Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[82]));
        }
#line 198 "term_errors.m"
        {
#line 198 "term_errors.m"
          transform_hlds__term_errors__ReasonMsgsCord_16 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
        }
#line 193 "term_errors.m"
        transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55 = transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24;
#line 193 "term_errors.m"
      }
#line 199 "term_errors.m"
    else
#line 199 "term_errors.m"
      {
#line 199 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
#line 199 "term_errors.m"
        MR_Word transform_hlds__term_errors__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));

#line 199 "term_errors.m"
        if ((transform_hlds__term_errors__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "term_errors.m"
          {
#line 200 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_54_54;

#line 202 "term_errors.m"
            {
#line 202 "term_errors.m"
              transform_hlds__term_errors__Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[84]));
            }
#line 204 "term_errors.m"
            {
#line 204 "term_errors.m"
              transform_hlds__term_errors__V_54_54 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
            }
#line 203 "term_errors.m"
            {
#line 203 "term_errors.m"
              transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__V_78_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_errors__V_54_54, &transform_hlds__term_errors__ReasonMsgsCord_16, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24, &transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55);
            }
#line 200 "term_errors.m"
          }
#line 199 "term_errors.m"
        else
#line 206 "term_errors.m"
          {
#line 206 "term_errors.m"
            MR_Word transform_hlds__term_errors__V_47_47;
#line 206 "term_errors.m"
            MR_Word transform_hlds__term_errors__Error_90;
#line 206 "term_errors.m"
            MR_Word transform_hlds__term_errors__Errors_91;
#line 206 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_100;
#line 206 "term_errors.m"
            MR_Word transform_hlds__term_errors__STATE_VARIABLE_Specs_31_101;

#line 208 "term_errors.m"
            {
#line 208 "term_errors.m"
              transform_hlds__term_errors__Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__term_errors__Pieces1_12, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_1[86]));
            }
#line 210 "term_errors.m"
            {
#line 210 "term_errors.m"
              transform_hlds__term_errors__V_47_47 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
            }
#line 260 "term_errors.m"
            transform_hlds__term_errors__Error_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 0)));
#line 260 "term_errors.m"
            transform_hlds__term_errors__Errors_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Errors_8, (MR_Integer) 1)));
#line 262 "term_errors.m"
            {
#line 262 "term_errors.m"
              transform_hlds__term_errors__describe_term_error_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Error_90, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_errors_scalar_common_3[0]), transform_hlds__term_errors__V_47_47, &transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_100, transform_hlds__term_errors__STATE_VARIABLE_Specs_0_24, &transform_hlds__term_errors__STATE_VARIABLE_Specs_31_101);
            }
#line 264 "term_errors.m"
            {
#line 264 "term_errors.m"
              transform_hlds__term_errors__describe_term_errors_8_p_0(transform_hlds__term_errors__ModuleInfo_6, transform_hlds__term_errors__Single_13, transform_hlds__term_errors__Errors_91, ((MR_Integer) 1 + (MR_Integer) 1), transform_hlds__term_errors__STATE_VARIABLE_Msgs_30_100, &transform_hlds__term_errors__ReasonMsgsCord_16, transform_hlds__term_errors__STATE_VARIABLE_Specs_31_101, &transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55);
            }
#line 206 "term_errors.m"
          }
#line 199 "term_errors.m"
      }
#line 212 "term_errors.m"
    {
#line 212 "term_errors.m"
      transform_hlds__term_errors__ReasonMsgs_21 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, transform_hlds__term_errors__ReasonMsgsCord_16);
    }
#line 213 "term_errors.m"
    {
#line 213 "term_errors.m"
      transform_hlds__term_errors__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 213 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_61_61, 0) = ((MR_Box) (transform_hlds__term_errors__Pieces_15));
#line 213 "term_errors.m"
    }
#line 213 "term_errors.m"
    {
#line 213 "term_errors.m"
      transform_hlds__term_errors__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_60_60, 0) = ((MR_Box) (transform_hlds__term_errors__V_61_61));
#line 213 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "term_errors.m"
    }
#line 213 "term_errors.m"
    {
#line 213 "term_errors.m"
      transform_hlds__term_errors__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 213 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_59_59, 0) = ((MR_Box) (transform_hlds__term_errors__Context_10));
#line 213 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__V_59_59, 1) = ((MR_Box) (transform_hlds__term_errors__V_60_60));
#line 213 "term_errors.m"
    }
#line 213 "term_errors.m"
    {
#line 213 "term_errors.m"
      transform_hlds__term_errors__Msgs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_22, 0) = ((MR_Box) (transform_hlds__term_errors__V_59_59));
#line 213 "term_errors.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_errors__Msgs_22, 1) = ((MR_Box) (transform_hlds__term_errors__ReasonMsgs_21));
#line 213 "term_errors.m"
    }
#line 214 "term_errors.m"
    {
#line 214 "term_errors.m"
      transform_hlds__term_errors__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 214 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 214 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 214 "term_errors.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_errors__Spec_23, 2) = ((MR_Box) (transform_hlds__term_errors__Msgs_22));
#line 214 "term_errors.m"
    }
#line 215 "term_errors.m"
    {
#line 215 "term_errors.m"
      MR_Word base;
#line 215 "term_errors.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "term_errors.m"
      *transform_hlds__term_errors__STATE_VARIABLE_Specs_25 = base;
#line 215 "term_errors.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_errors__Spec_23));
#line 215 "term_errors.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_errors__STATE_VARIABLE_Specs_55_55));
#line 215 "term_errors.m"
    }
#line 179 "term_errors.m"
  }
#line 144 "term_errors.m"
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
